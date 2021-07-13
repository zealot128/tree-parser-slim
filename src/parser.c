#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 2
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_javascript_COLON = 1,
  anon_sym_scss_COLON = 2,
  anon_sym_ruby_COLON = 3,
  anon_sym_sass_COLON = 4,
  aux_sym__raw_block_token1 = 5,
  anon_sym_doctype = 6,
  anon_sym_ = 7,
  sym_doctype_encoding = 8,
  anon_sym_html = 9,
  anon_sym_xml = 10,
  anon_sym_5 = 11,
  anon_sym_1_DOT1 = 12,
  anon_sym_frameset = 13,
  anon_sym_strict = 14,
  anon_sym_mobile = 15,
  anon_sym_basic = 16,
  anon_sym_transitional = 17,
  aux_sym__ruby_with_continuation_token1 = 18,
  anon_sym_COMMA = 19,
  anon_sym_DASH = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_EQ = 22,
  anon_sym_PIPE = 23,
  anon_sym_COLON = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_SLASH_SLASH = 27,
  sym_tag_name = 28,
  sym_class = 29,
  sym_id = 30,
  sym_attribute_name = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_quoted_attribute_value_token1 = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_quoted_attribute_value_token2 = 35,
  sym_content = 36,
  anon_sym_POUND_LBRACE = 37,
  anon_sym_RBRACE_RBRACE = 38,
  sym__ruby = 39,
  sym__comment_content = 40,
  sym__newline = 41,
  sym__indent = 42,
  sym__dedent = 43,
  sym_source_file = 44,
  sym__statement_line = 45,
  sym_javascript_block = 46,
  sym_scss_block = 47,
  sym_ruby_block = 48,
  sym_sass_block = 49,
  sym__raw_block = 50,
  sym_doctype = 51,
  sym_doctype_name = 52,
  sym__ruby_with_continuation = 53,
  sym_ruby_code_without_output = 54,
  sym_ruby_code_with_unescaped_output = 55,
  sym_ruby_code_with_output = 56,
  sym_pipe_content = 57,
  sym_tag = 58,
  sym_attributes = 59,
  sym_attribute = 60,
  sym__attribute_with_mandatory_value = 61,
  sym_children = 62,
  sym_comment = 63,
  sym_quoted_attribute_value = 64,
  aux_sym__content_or_ruby = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym__raw_block_repeat1 = 67,
  aux_sym_pipe_content_repeat1 = 68,
  aux_sym_tag_repeat1 = 69,
  aux_sym_attributes_repeat1 = 70,
  aux_sym_attributes_repeat2 = 71,
  aux_sym_children_repeat1 = 72,
  aux_sym_comment_repeat1 = 73,
  alias_sym_sass = 74,
  alias_sym_scss = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_javascript_COLON] = "javascript:",
  [anon_sym_scss_COLON] = "scss:",
  [anon_sym_ruby_COLON] = "ruby:",
  [anon_sym_sass_COLON] = "sass:",
  [aux_sym__raw_block_token1] = "_raw_block_token1",
  [anon_sym_doctype] = "doctype",
  [anon_sym_] = " ",
  [sym_doctype_encoding] = "doctype_encoding",
  [anon_sym_html] = "html",
  [anon_sym_xml] = "xml",
  [anon_sym_5] = "5",
  [anon_sym_1_DOT1] = "1.1",
  [anon_sym_frameset] = "frameset",
  [anon_sym_strict] = "strict",
  [anon_sym_mobile] = "mobile",
  [anon_sym_basic] = "basic",
  [anon_sym_transitional] = "transitional",
  [aux_sym__ruby_with_continuation_token1] = "_ruby_with_continuation_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_content] = "content",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__ruby] = "ruby",
  [sym__comment_content] = "_comment_content",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__statement_line] = "_statement_line",
  [sym_javascript_block] = "javascript_block",
  [sym_scss_block] = "scss_block",
  [sym_ruby_block] = "ruby_block",
  [sym_sass_block] = "sass_block",
  [sym__raw_block] = "javascript",
  [sym_doctype] = "doctype",
  [sym_doctype_name] = "doctype_name",
  [sym__ruby_with_continuation] = "_ruby_with_continuation",
  [sym_ruby_code_without_output] = "ruby_code_without_output",
  [sym_ruby_code_with_unescaped_output] = "ruby_code_with_unescaped_output",
  [sym_ruby_code_with_output] = "ruby_code_with_output",
  [sym_pipe_content] = "pipe_content",
  [sym_tag] = "tag",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__attribute_with_mandatory_value] = "_attribute_with_mandatory_value",
  [sym_children] = "children",
  [sym_comment] = "comment",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__content_or_ruby] = "_content_or_ruby",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__raw_block_repeat1] = "_raw_block_repeat1",
  [aux_sym_pipe_content_repeat1] = "pipe_content_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attributes_repeat2] = "attributes_repeat2",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_sass] = "sass",
  [alias_sym_scss] = "scss",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_javascript_COLON] = anon_sym_javascript_COLON,
  [anon_sym_scss_COLON] = anon_sym_scss_COLON,
  [anon_sym_ruby_COLON] = anon_sym_ruby_COLON,
  [anon_sym_sass_COLON] = anon_sym_sass_COLON,
  [aux_sym__raw_block_token1] = aux_sym__raw_block_token1,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_] = anon_sym_,
  [sym_doctype_encoding] = sym_doctype_encoding,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_1_DOT1] = anon_sym_1_DOT1,
  [anon_sym_frameset] = anon_sym_frameset,
  [anon_sym_strict] = anon_sym_strict,
  [anon_sym_mobile] = anon_sym_mobile,
  [anon_sym_basic] = anon_sym_basic,
  [anon_sym_transitional] = anon_sym_transitional,
  [aux_sym__ruby_with_continuation_token1] = aux_sym__ruby_with_continuation_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token1,
  [sym_content] = sym_content,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__ruby] = sym__ruby,
  [sym__comment_content] = sym__comment_content,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym__statement_line] = sym__statement_line,
  [sym_javascript_block] = sym_javascript_block,
  [sym_scss_block] = sym_scss_block,
  [sym_ruby_block] = sym_ruby_block,
  [sym_sass_block] = sym_sass_block,
  [sym__raw_block] = sym__raw_block,
  [sym_doctype] = sym_doctype,
  [sym_doctype_name] = sym_doctype_name,
  [sym__ruby_with_continuation] = sym__ruby_with_continuation,
  [sym_ruby_code_without_output] = sym_ruby_code_without_output,
  [sym_ruby_code_with_unescaped_output] = sym_ruby_code_with_unescaped_output,
  [sym_ruby_code_with_output] = sym_ruby_code_with_output,
  [sym_pipe_content] = sym_pipe_content,
  [sym_tag] = sym_tag,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__attribute_with_mandatory_value] = sym__attribute_with_mandatory_value,
  [sym_children] = sym_children,
  [sym_comment] = sym_comment,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__content_or_ruby] = aux_sym__content_or_ruby,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__raw_block_repeat1] = aux_sym__raw_block_repeat1,
  [aux_sym_pipe_content_repeat1] = aux_sym_pipe_content_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attributes_repeat2] = aux_sym_attributes_repeat2,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_sass] = alias_sym_sass,
  [alias_sym_scss] = alias_sym_scss,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_javascript_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scss_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruby_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sass_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__raw_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_doctype_encoding] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frameset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mobile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitional] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__ruby_with_continuation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__ruby] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_content] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_line] = {
    .visible = false,
    .named = true,
  },
  [sym_javascript_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scss_block] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_block] = {
    .visible = true,
    .named = true,
  },
  [sym_sass_block] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_block] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype_name] = {
    .visible = true,
    .named = true,
  },
  [sym__ruby_with_continuation] = {
    .visible = false,
    .named = true,
  },
  [sym_ruby_code_without_output] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_code_with_unescaped_output] = {
    .visible = true,
    .named = true,
  },
  [sym_ruby_code_with_output] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_content] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_with_mandatory_value] = {
    .visible = false,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__content_or_ruby] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipe_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_sass] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_scss] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym__ruby,
  },
  [2] = {
    [2] = alias_sym_scss,
  },
  [3] = {
    [2] = sym__ruby,
  },
  [4] = {
    [2] = alias_sym_sass,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__raw_block, 4,
    sym__raw_block,
    alias_sym_sass,
    alias_sym_scss,
    sym__ruby,
  sym__ruby_with_continuation, 2,
    sym__ruby_with_continuation,
    sym__ruby,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '5') ADVANCE(75);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(160);
      if (lookahead == 'j') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(133);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(180);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '5') ADVANCE(76);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(177);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(178);
      END_STATE();
    case 18:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'j') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_javascript_COLON);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_scss_COLON);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ruby_COLON);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_sass_COLON);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__raw_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__raw_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_doctype_encoding);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_5);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_5);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_1_DOT1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_frameset);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_frameset);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_strict);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_strict);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_mobile);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_mobile);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_basic);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_basic);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_transitional);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_transitional);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__ruby_with_continuation_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__ruby_with_continuation_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'v') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__ruby);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__ruby);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(181);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22, .external_lex_state = 2},
  [3] = {.lex_state = 22, .external_lex_state = 2},
  [4] = {.lex_state = 22, .external_lex_state = 2},
  [5] = {.lex_state = 22, .external_lex_state = 2},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22, .external_lex_state = 2},
  [8] = {.lex_state = 22, .external_lex_state = 2},
  [9] = {.lex_state = 22, .external_lex_state = 2},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22, .external_lex_state = 3},
  [12] = {.lex_state = 22, .external_lex_state = 4},
  [13] = {.lex_state = 22, .external_lex_state = 4},
  [14] = {.lex_state = 22, .external_lex_state = 4},
  [15] = {.lex_state = 22, .external_lex_state = 3},
  [16] = {.lex_state = 22, .external_lex_state = 4},
  [17] = {.lex_state = 22, .external_lex_state = 3},
  [18] = {.lex_state = 22, .external_lex_state = 3},
  [19] = {.lex_state = 22, .external_lex_state = 4},
  [20] = {.lex_state = 22, .external_lex_state = 3},
  [21] = {.lex_state = 22, .external_lex_state = 3},
  [22] = {.lex_state = 22, .external_lex_state = 3},
  [23] = {.lex_state = 22, .external_lex_state = 4},
  [24] = {.lex_state = 22, .external_lex_state = 4},
  [25] = {.lex_state = 22, .external_lex_state = 4},
  [26] = {.lex_state = 22, .external_lex_state = 3},
  [27] = {.lex_state = 22, .external_lex_state = 3},
  [28] = {.lex_state = 22, .external_lex_state = 4},
  [29] = {.lex_state = 22, .external_lex_state = 4},
  [30] = {.lex_state = 22, .external_lex_state = 3},
  [31] = {.lex_state = 22, .external_lex_state = 3},
  [32] = {.lex_state = 22, .external_lex_state = 3},
  [33] = {.lex_state = 22, .external_lex_state = 4},
  [34] = {.lex_state = 22, .external_lex_state = 4},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22, .external_lex_state = 2},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22, .external_lex_state = 2},
  [39] = {.lex_state = 22, .external_lex_state = 2},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22, .external_lex_state = 2},
  [45] = {.lex_state = 22, .external_lex_state = 2},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22, .external_lex_state = 2},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22, .external_lex_state = 2},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22, .external_lex_state = 2},
  [55] = {.lex_state = 22, .external_lex_state = 2},
  [56] = {.lex_state = 22, .external_lex_state = 2},
  [57] = {.lex_state = 22, .external_lex_state = 2},
  [58] = {.lex_state = 22, .external_lex_state = 2},
  [59] = {.lex_state = 22, .external_lex_state = 2},
  [60] = {.lex_state = 22, .external_lex_state = 2},
  [61] = {.lex_state = 22, .external_lex_state = 2},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22, .external_lex_state = 2},
  [64] = {.lex_state = 22, .external_lex_state = 2},
  [65] = {.lex_state = 22, .external_lex_state = 2},
  [66] = {.lex_state = 22, .external_lex_state = 2},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 22, .external_lex_state = 2},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 22},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 22, .external_lex_state = 2},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22, .external_lex_state = 2},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 22, .external_lex_state = 2},
  [81] = {.lex_state = 5, .external_lex_state = 5},
  [82] = {.lex_state = 5, .external_lex_state = 5},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 5, .external_lex_state = 5},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 5, .external_lex_state = 5},
  [87] = {.lex_state = 5, .external_lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 1, .external_lex_state = 5},
  [91] = {.lex_state = 1, .external_lex_state = 5},
  [92] = {.lex_state = 1, .external_lex_state = 5},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 1, .external_lex_state = 5},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 1, .external_lex_state = 5},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 1, .external_lex_state = 5},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 1, .external_lex_state = 5},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 1, .external_lex_state = 5},
  [112] = {.lex_state = 1, .external_lex_state = 5},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 1, .external_lex_state = 5},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 6, .external_lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 7, .external_lex_state = 2},
  [121] = {.lex_state = 7, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 5},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 6, .external_lex_state = 5},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 7, .external_lex_state = 2},
  [132] = {.lex_state = 7, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 6, .external_lex_state = 5},
  [135] = {.lex_state = 6, .external_lex_state = 5},
  [136] = {.lex_state = 7, .external_lex_state = 2},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 2, .external_lex_state = 2},
  [142] = {.lex_state = 6, .external_lex_state = 5},
  [143] = {.lex_state = 7, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 7, .external_lex_state = 2},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 6, .external_lex_state = 5},
  [148] = {.lex_state = 2, .external_lex_state = 2},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 6, .external_lex_state = 5},
  [153] = {.lex_state = 6, .external_lex_state = 5},
  [154] = {.lex_state = 7, .external_lex_state = 2},
  [155] = {.lex_state = 2, .external_lex_state = 2},
  [156] = {.lex_state = 7, .external_lex_state = 2},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 6, .external_lex_state = 5},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5, .external_lex_state = 5},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 2, .external_lex_state = 2},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 7, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 5, .external_lex_state = 5},
  [174] = {.lex_state = 7, .external_lex_state = 5},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 5, .external_lex_state = 5},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 7, .external_lex_state = 5},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 0, .external_lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 5},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 5, .external_lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 5, .external_lex_state = 5},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 5},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0, .external_lex_state = 5},
  [201] = {.lex_state = 0, .external_lex_state = 5},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0, .external_lex_state = 5},
  [204] = {.lex_state = 0, .external_lex_state = 5},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 13},
  [208] = {.lex_state = 0, .external_lex_state = 5},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0, .external_lex_state = 5},
  [212] = {.lex_state = 0, .external_lex_state = 5},
  [213] = {.lex_state = 0, .external_lex_state = 5},
  [214] = {.lex_state = 0, .external_lex_state = 5},
  [215] = {.lex_state = 0, .external_lex_state = 5},
  [216] = {.lex_state = 0, .external_lex_state = 5},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0, .external_lex_state = 5},
  [219] = {.lex_state = 0, .external_lex_state = 5},
  [220] = {.lex_state = 19},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 0, .external_lex_state = 5},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_javascript_COLON] = ACTIONS(1),
    [anon_sym_scss_COLON] = ACTIONS(1),
    [anon_sym_ruby_COLON] = ACTIONS(1),
    [anon_sym_sass_COLON] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_frameset] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_mobile] = ACTIONS(1),
    [anon_sym_basic] = ACTIONS(1),
    [anon_sym_transitional] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(221),
    [sym__statement_line] = STATE(6),
    [sym_javascript_block] = STATE(6),
    [sym_scss_block] = STATE(6),
    [sym_ruby_block] = STATE(6),
    [sym_sass_block] = STATE(6),
    [sym_doctype] = STATE(6),
    [sym_ruby_code_without_output] = STATE(6),
    [sym_ruby_code_with_unescaped_output] = STATE(6),
    [sym_ruby_code_with_output] = STATE(6),
    [sym_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_javascript_COLON] = ACTIONS(5),
    [anon_sym_scss_COLON] = ACTIONS(7),
    [anon_sym_ruby_COLON] = ACTIONS(9),
    [anon_sym_sass_COLON] = ACTIONS(11),
    [anon_sym_doctype] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_EQ_EQ] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(23),
    [sym_class] = ACTIONS(25),
    [sym_id] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(27), 1,
      anon_sym_javascript_COLON,
    ACTIONS(29), 1,
      anon_sym_scss_COLON,
    ACTIONS(31), 1,
      anon_sym_ruby_COLON,
    ACTIONS(33), 1,
      anon_sym_sass_COLON,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(43), 1,
      anon_sym_PIPE,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(51), 1,
      sym__dedent,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(8), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [55] = 14,
    ACTIONS(27), 1,
      anon_sym_javascript_COLON,
    ACTIONS(29), 1,
      anon_sym_scss_COLON,
    ACTIONS(31), 1,
      anon_sym_ruby_COLON,
    ACTIONS(33), 1,
      anon_sym_sass_COLON,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      sym__dedent,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(5), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [110] = 13,
    ACTIONS(27), 1,
      anon_sym_javascript_COLON,
    ACTIONS(29), 1,
      anon_sym_scss_COLON,
    ACTIONS(31), 1,
      anon_sym_ruby_COLON,
    ACTIONS(33), 1,
      anon_sym_sass_COLON,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(51), 1,
      sym__dedent,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(8), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [162] = 13,
    ACTIONS(27), 1,
      anon_sym_javascript_COLON,
    ACTIONS(29), 1,
      anon_sym_scss_COLON,
    ACTIONS(31), 1,
      anon_sym_ruby_COLON,
    ACTIONS(33), 1,
      anon_sym_sass_COLON,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(57), 1,
      sym__dedent,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(7), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [214] = 13,
    ACTIONS(5), 1,
      anon_sym_javascript_COLON,
    ACTIONS(7), 1,
      anon_sym_scss_COLON,
    ACTIONS(9), 1,
      anon_sym_ruby_COLON,
    ACTIONS(11), 1,
      anon_sym_sass_COLON,
    ACTIONS(13), 1,
      anon_sym_doctype,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_EQ_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      sym_class,
      sym_id,
    STATE(10), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [266] = 13,
    ACTIONS(61), 1,
      anon_sym_javascript_COLON,
    ACTIONS(64), 1,
      anon_sym_scss_COLON,
    ACTIONS(67), 1,
      anon_sym_ruby_COLON,
    ACTIONS(70), 1,
      anon_sym_sass_COLON,
    ACTIONS(73), 1,
      anon_sym_doctype,
    ACTIONS(76), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_EQ_EQ,
    ACTIONS(82), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(94), 1,
      sym__dedent,
    ACTIONS(91), 2,
      sym_class,
      sym_id,
    STATE(7), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [318] = 13,
    ACTIONS(27), 1,
      anon_sym_javascript_COLON,
    ACTIONS(29), 1,
      anon_sym_scss_COLON,
    ACTIONS(31), 1,
      anon_sym_ruby_COLON,
    ACTIONS(33), 1,
      anon_sym_sass_COLON,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(96), 1,
      sym__dedent,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(7), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [370] = 13,
    ACTIONS(27), 1,
      anon_sym_javascript_COLON,
    ACTIONS(29), 1,
      anon_sym_scss_COLON,
    ACTIONS(31), 1,
      anon_sym_ruby_COLON,
    ACTIONS(33), 1,
      anon_sym_sass_COLON,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    ACTIONS(55), 1,
      sym__dedent,
    ACTIONS(49), 2,
      sym_class,
      sym_id,
    STATE(5), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_children_repeat1,
  [422] = 13,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_javascript_COLON,
    ACTIONS(103), 1,
      anon_sym_scss_COLON,
    ACTIONS(106), 1,
      anon_sym_ruby_COLON,
    ACTIONS(109), 1,
      anon_sym_sass_COLON,
    ACTIONS(112), 1,
      anon_sym_doctype,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_EQ_EQ,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      sym_tag_name,
    ACTIONS(130), 2,
      sym_class,
      sym_id,
    STATE(10), 12,
      sym__statement_line,
      sym_javascript_block,
      sym_scss_block,
      sym_ruby_block,
      sym_sass_block,
      sym_doctype,
      sym_ruby_code_without_output,
      sym_ruby_code_with_unescaped_output,
      sym_ruby_code_with_output,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [474] = 4,
    ACTIONS(137), 1,
      sym__indent,
    STATE(55), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(135), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(133), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [499] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(67), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(141), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [524] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(74), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(147), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [549] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(70), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(151), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [574] = 4,
    ACTIONS(137), 1,
      sym__indent,
    STATE(44), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(155), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(153), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [599] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(37), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(133), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [624] = 4,
    ACTIONS(137), 1,
      sym__indent,
    STATE(76), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(149), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(151), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [649] = 4,
    ACTIONS(137), 1,
      sym__indent,
    STATE(61), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(145), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(147), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [674] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(35), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(153), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [699] = 4,
    ACTIONS(137), 1,
      sym__indent,
    STATE(66), 2,
      sym_pipe_content,
      sym_children,
    ACTIONS(139), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(141), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [724] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(54), 1,
      sym_children,
    ACTIONS(159), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(157), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [748] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(165), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(163), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [772] = 4,
    ACTIONS(167), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(157), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [796] = 4,
    ACTIONS(167), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(163), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [820] = 4,
    ACTIONS(167), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(171), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [844] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(45), 1,
      sym_children,
    ACTIONS(169), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(171), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [868] = 3,
    ACTIONS(177), 1,
      sym__indent,
    ACTIONS(175), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(173), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [889] = 2,
    ACTIONS(179), 7,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(181), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [908] = 3,
    ACTIONS(187), 1,
      sym__indent,
    ACTIONS(183), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(185), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [929] = 3,
    ACTIONS(189), 1,
      sym__indent,
    ACTIONS(183), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(185), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [950] = 2,
    ACTIONS(179), 7,
      sym__indent,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(181), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [969] = 2,
    ACTIONS(191), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
    ACTIONS(193), 7,
      sym__indent,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [988] = 3,
    ACTIONS(195), 1,
      sym__indent,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(173), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1009] = 2,
    ACTIONS(191), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
    ACTIONS(193), 7,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [1028] = 2,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(133), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1046] = 2,
    ACTIONS(199), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(197), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1064] = 2,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(141), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1082] = 2,
    ACTIONS(203), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(201), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1100] = 2,
    ACTIONS(207), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(205), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1118] = 2,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(211), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1136] = 2,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(215), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1154] = 2,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(219), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1172] = 2,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(223), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1190] = 2,
    ACTIONS(135), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(133), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1208] = 2,
    ACTIONS(227), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(225), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1226] = 2,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(231), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1244] = 2,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(235), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1262] = 2,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(239), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1280] = 2,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(225), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1298] = 2,
    ACTIONS(237), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(239), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1316] = 2,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(197), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1334] = 2,
    ACTIONS(243), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(241), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1352] = 2,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(247), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1370] = 2,
    ACTIONS(233), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(235), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1388] = 2,
    ACTIONS(139), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(141), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1406] = 2,
    ACTIONS(221), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(223), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1424] = 2,
    ACTIONS(251), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(249), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1442] = 2,
    ACTIONS(217), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(219), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1460] = 2,
    ACTIONS(213), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(215), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1478] = 2,
    ACTIONS(209), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(211), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1496] = 2,
    ACTIONS(149), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(151), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1514] = 2,
    ACTIONS(253), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(255), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1532] = 2,
    ACTIONS(259), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(257), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1550] = 2,
    ACTIONS(253), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(255), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1568] = 2,
    ACTIONS(229), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(231), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1586] = 2,
    ACTIONS(145), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(147), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1604] = 2,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(147), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1622] = 2,
    ACTIONS(245), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(247), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1640] = 2,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(263), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1658] = 2,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(267), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1676] = 2,
    ACTIONS(269), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(271), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1694] = 2,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(205), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1712] = 2,
    ACTIONS(269), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(271), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1730] = 2,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(151), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1748] = 2,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(201), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1766] = 2,
    ACTIONS(265), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(267), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1784] = 2,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(257), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1802] = 2,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(249), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1820] = 2,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(241), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1838] = 2,
    ACTIONS(261), 6,
      sym__dedent,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(263), 7,
      anon_sym_javascript_COLON,
      anon_sym_scss_COLON,
      anon_sym_ruby_COLON,
      anon_sym_sass_COLON,
      anon_sym_doctype,
      anon_sym_EQ,
      sym_tag_name,
  [1856] = 10,
    ACTIONS(273), 1,
      anon_sym_,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      sym_attribute_name,
    ACTIONS(283), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym_tag_repeat1,
    STATE(105), 1,
      aux_sym_attributes_repeat1,
    STATE(159), 1,
      sym_attributes,
    STATE(161), 1,
      sym__attribute_with_mandatory_value,
    ACTIONS(279), 2,
      sym_class,
      sym_id,
  [1888] = 10,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      sym_attribute_name,
    ACTIONS(285), 1,
      anon_sym_,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(291), 1,
      sym__newline,
    STATE(84), 1,
      aux_sym_tag_repeat1,
    STATE(105), 1,
      aux_sym_attributes_repeat1,
    STATE(116), 1,
      sym_attributes,
    STATE(161), 1,
      sym__attribute_with_mandatory_value,
    ACTIONS(289), 2,
      sym_class,
      sym_id,
  [1920] = 4,
    ACTIONS(293), 1,
      sym_doctype_encoding,
    ACTIONS(297), 1,
      anon_sym_1_DOT1,
    STATE(193), 1,
      sym_doctype_name,
    ACTIONS(295), 8,
      anon_sym_html,
      anon_sym_xml,
      anon_sym_5,
      anon_sym_frameset,
      anon_sym_strict,
      anon_sym_mobile,
      anon_sym_basic,
      anon_sym_transitional,
  [1940] = 10,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      sym_attribute_name,
    ACTIONS(299), 1,
      anon_sym_,
    ACTIONS(301), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      sym__newline,
    STATE(87), 1,
      aux_sym_tag_repeat1,
    STATE(105), 1,
      aux_sym_attributes_repeat1,
    STATE(153), 1,
      sym_attributes,
    STATE(161), 1,
      sym__attribute_with_mandatory_value,
    ACTIONS(303), 2,
      sym_class,
      sym_id,
  [1972] = 4,
    ACTIONS(297), 1,
      anon_sym_1_DOT1,
    ACTIONS(307), 1,
      sym_doctype_encoding,
    STATE(173), 1,
      sym_doctype_name,
    ACTIONS(295), 8,
      anon_sym_html,
      anon_sym_xml,
      anon_sym_5,
      anon_sym_frameset,
      anon_sym_strict,
      anon_sym_mobile,
      anon_sym_basic,
      anon_sym_transitional,
  [1992] = 10,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      sym_attribute_name,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      sym__newline,
    STATE(87), 1,
      aux_sym_tag_repeat1,
    STATE(105), 1,
      aux_sym_attributes_repeat1,
    STATE(147), 1,
      sym_attributes,
    STATE(161), 1,
      sym__attribute_with_mandatory_value,
    ACTIONS(303), 2,
      sym_class,
      sym_id,
  [2024] = 4,
    STATE(87), 1,
      aux_sym_tag_repeat1,
    ACTIONS(315), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(319), 2,
      sym_class,
      sym_id,
    ACTIONS(317), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym_attribute_name,
  [2041] = 3,
    ACTIONS(322), 1,
      anon_sym_,
    ACTIONS(326), 1,
      anon_sym_EQ,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2052] = 4,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 1,
      sym_attribute_name,
    STATE(100), 1,
      aux_sym_attributes_repeat2,
    STATE(138), 1,
      sym_attribute,
  [2065] = 4,
    ACTIONS(332), 1,
      sym_content,
    ACTIONS(335), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(338), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2078] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(344), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2091] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(346), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2104] = 2,
    STATE(66), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2113] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(348), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2126] = 4,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      sym_attribute_name,
    STATE(95), 1,
      aux_sym_attributes_repeat2,
    STATE(189), 1,
      sym_attribute,
  [2139] = 2,
    STATE(55), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2148] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(355), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2161] = 2,
    STATE(44), 1,
      sym_tag,
    ACTIONS(49), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2170] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(357), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2183] = 4,
    ACTIONS(330), 1,
      sym_attribute_name,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_attributes_repeat2,
    STATE(130), 1,
      sym_attribute,
  [2196] = 2,
    STATE(35), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2205] = 2,
    STATE(67), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2214] = 4,
    ACTIONS(330), 1,
      sym_attribute_name,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_attributes_repeat2,
    STATE(130), 1,
      sym_attribute,
  [2227] = 4,
    ACTIONS(330), 1,
      sym_attribute_name,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_attributes_repeat2,
    STATE(151), 1,
      sym_attribute,
  [2240] = 4,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      sym_attribute_name,
    STATE(109), 1,
      aux_sym_attributes_repeat1,
    STATE(146), 1,
      sym__attribute_with_mandatory_value,
  [2253] = 2,
    ACTIONS(367), 1,
      anon_sym_,
    ACTIONS(369), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2262] = 2,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(373), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2271] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(375), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2284] = 4,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_attribute_name,
    STATE(109), 1,
      aux_sym_attributes_repeat1,
    STATE(165), 1,
      sym__attribute_with_mandatory_value,
  [2297] = 2,
    STATE(37), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2306] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(382), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2319] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(384), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2332] = 4,
    ACTIONS(330), 1,
      sym_attribute_name,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_attributes_repeat2,
    STATE(137), 1,
      sym_attribute,
  [2345] = 4,
    ACTIONS(340), 1,
      sym_content,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(388), 1,
      sym__newline,
    STATE(90), 1,
      aux_sym__content_or_ruby,
  [2358] = 4,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(330), 1,
      sym_attribute_name,
    STATE(95), 1,
      aux_sym_attributes_repeat2,
    STATE(138), 1,
      sym_attribute,
  [2371] = 3,
    ACTIONS(299), 1,
      anon_sym_,
    ACTIONS(301), 1,
      anon_sym_COLON,
    ACTIONS(305), 1,
      sym__newline,
  [2381] = 2,
    ACTIONS(390), 1,
      anon_sym_,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2389] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(394), 1,
      sym_content,
    STATE(91), 1,
      aux_sym__content_or_ruby,
  [2399] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(396), 1,
      sym_content,
    STATE(92), 1,
      aux_sym__content_or_ruby,
  [2409] = 3,
    ACTIONS(398), 1,
      sym__comment_content,
    ACTIONS(401), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [2419] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(405), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [2429] = 2,
    ACTIONS(409), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(407), 2,
      sym__newline,
      sym_content,
  [2437] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(411), 1,
      sym_content,
    STATE(94), 1,
      aux_sym__content_or_ruby,
  [2447] = 2,
    ACTIONS(413), 1,
      anon_sym_,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2455] = 2,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(417), 2,
      sym__newline,
      anon_sym_,
  [2463] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(421), 1,
      sym_content,
    STATE(97), 1,
      aux_sym__content_or_ruby,
  [2473] = 3,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    ACTIONS(425), 1,
      sym__dedent,
    STATE(144), 1,
      aux_sym_pipe_content_repeat1,
  [2483] = 3,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    ACTIONS(427), 1,
      sym__dedent,
    STATE(127), 1,
      aux_sym_pipe_content_repeat1,
  [2493] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(429), 1,
      sym_content,
    STATE(111), 1,
      aux_sym__content_or_ruby,
  [2503] = 3,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [2513] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(437), 1,
      sym__dedent,
    STATE(121), 1,
      aux_sym_comment_repeat1,
  [2523] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(437), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [2533] = 3,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    ACTIONS(439), 1,
      sym__dedent,
    STATE(140), 1,
      aux_sym_pipe_content_repeat1,
  [2543] = 2,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(441), 2,
      sym__newline,
      anon_sym_,
  [2551] = 2,
    ACTIONS(447), 1,
      anon_sym_COLON,
    ACTIONS(445), 2,
      sym__newline,
      anon_sym_,
  [2559] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(449), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [2569] = 3,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [2579] = 3,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [2589] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(455), 1,
      sym_content,
    STATE(114), 1,
      aux_sym__content_or_ruby,
  [2599] = 3,
    ACTIONS(423), 1,
      anon_sym_PIPE,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(144), 1,
      aux_sym_pipe_content_repeat1,
  [2609] = 3,
    ACTIONS(459), 1,
      aux_sym__raw_block_token1,
    ACTIONS(461), 1,
      sym__dedent,
    STATE(155), 1,
      aux_sym__raw_block_repeat1,
  [2619] = 2,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(463), 2,
      sym__newline,
      anon_sym_,
  [2627] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(467), 1,
      sym__dedent,
    STATE(136), 1,
      aux_sym_comment_repeat1,
  [2637] = 3,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    ACTIONS(472), 1,
      sym__dedent,
    STATE(144), 1,
      aux_sym_pipe_content_repeat1,
  [2647] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(467), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [2657] = 3,
    ACTIONS(474), 1,
      anon_sym_,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
  [2667] = 3,
    ACTIONS(375), 1,
      sym__newline,
    ACTIONS(480), 1,
      anon_sym_,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [2677] = 3,
    ACTIONS(459), 1,
      aux_sym__raw_block_token1,
    ACTIONS(484), 1,
      sym__dedent,
    STATE(155), 1,
      aux_sym__raw_block_repeat1,
  [2687] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(486), 1,
      sym_content,
    STATE(99), 1,
      aux_sym__content_or_ruby,
  [2697] = 3,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_quoted_attribute_value,
  [2707] = 3,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [2717] = 2,
    ACTIONS(496), 1,
      anon_sym_COLON,
    ACTIONS(494), 2,
      sym__newline,
      anon_sym_,
  [2725] = 3,
    ACTIONS(355), 1,
      sym__newline,
    ACTIONS(498), 1,
      anon_sym_,
    ACTIONS(500), 1,
      anon_sym_COLON,
  [2735] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(502), 1,
      sym__dedent,
    STATE(132), 1,
      aux_sym_comment_repeat1,
  [2745] = 3,
    ACTIONS(504), 1,
      aux_sym__raw_block_token1,
    ACTIONS(507), 1,
      sym__dedent,
    STATE(155), 1,
      aux_sym__raw_block_repeat1,
  [2755] = 3,
    ACTIONS(403), 1,
      sym__comment_content,
    ACTIONS(509), 1,
      sym__dedent,
    STATE(145), 1,
      aux_sym_comment_repeat1,
  [2765] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(511), 1,
      sym_content,
    STATE(112), 1,
      aux_sym__content_or_ruby,
  [2775] = 3,
    ACTIONS(342), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(513), 1,
      sym_content,
    STATE(108), 1,
      aux_sym__content_or_ruby,
  [2785] = 3,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      sym__newline,
  [2795] = 3,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_quoted_attribute_value,
  [2805] = 3,
    ACTIONS(474), 1,
      anon_sym_,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
  [2815] = 2,
    ACTIONS(517), 1,
      anon_sym_,
    ACTIONS(519), 1,
      sym__newline,
  [2822] = 2,
    ACTIONS(521), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(26), 1,
      sym__ruby_with_continuation,
  [2829] = 1,
    ACTIONS(507), 2,
      sym__dedent,
      aux_sym__raw_block_token1,
  [2834] = 2,
    ACTIONS(474), 1,
      anon_sym_,
    ACTIONS(476), 1,
      anon_sym_COMMA,
  [2841] = 1,
    ACTIONS(350), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [2846] = 1,
    ACTIONS(401), 2,
      sym__dedent,
      sym__comment_content,
  [2851] = 2,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      sym__newline,
  [2858] = 2,
    ACTIONS(527), 1,
      sym__indent,
    STATE(43), 1,
      sym__raw_block,
  [2865] = 2,
    ACTIONS(527), 1,
      sym__indent,
    STATE(42), 1,
      sym__raw_block,
  [2872] = 2,
    ACTIONS(527), 1,
      sym__indent,
    STATE(41), 1,
      sym__raw_block,
  [2879] = 2,
    ACTIONS(527), 1,
      sym__indent,
    STATE(40), 1,
      sym__raw_block,
  [2886] = 2,
    ACTIONS(529), 1,
      anon_sym_,
    ACTIONS(531), 1,
      sym__newline,
  [2893] = 2,
    ACTIONS(533), 1,
      sym__comment_content,
    ACTIONS(535), 1,
      sym__newline,
  [2900] = 2,
    ACTIONS(537), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(25), 1,
      sym__ruby_with_continuation,
  [2907] = 2,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      sym__newline,
  [2914] = 2,
    ACTIONS(521), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(21), 1,
      sym__ruby_with_continuation,
  [2921] = 2,
    ACTIONS(521), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(22), 1,
      sym__ruby_with_continuation,
  [2928] = 1,
    ACTIONS(543), 2,
      sym__dedent,
      anon_sym_PIPE,
  [2933] = 2,
    ACTIONS(545), 1,
      sym__comment_content,
    ACTIONS(547), 1,
      sym__newline,
  [2940] = 2,
    ACTIONS(537), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(24), 1,
      sym__ruby_with_continuation,
  [2947] = 2,
    ACTIONS(549), 1,
      sym__indent,
    STATE(60), 1,
      sym__raw_block,
  [2954] = 2,
    ACTIONS(549), 1,
      sym__indent,
    STATE(59), 1,
      sym__raw_block,
  [2961] = 2,
    ACTIONS(549), 1,
      sym__indent,
    STATE(58), 1,
      sym__raw_block,
  [2968] = 2,
    ACTIONS(549), 1,
      sym__indent,
    STATE(56), 1,
      sym__raw_block,
  [2975] = 2,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      sym__newline,
  [2982] = 2,
    ACTIONS(459), 1,
      aux_sym__raw_block_token1,
    STATE(148), 1,
      aux_sym__raw_block_repeat1,
  [2989] = 1,
    ACTIONS(555), 2,
      sym__newline,
      anon_sym_,
  [2994] = 2,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_COMMA,
  [3001] = 2,
    ACTIONS(537), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(23), 1,
      sym__ruby_with_continuation,
  [3008] = 2,
    ACTIONS(537), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(28), 1,
      sym__ruby_with_continuation,
  [3015] = 2,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
    ACTIONS(559), 1,
      aux_sym_quoted_attribute_value_token1,
  [3022] = 2,
    ACTIONS(561), 1,
      anon_sym_,
    ACTIONS(563), 1,
      sym__newline,
  [3029] = 2,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    ACTIONS(565), 1,
      aux_sym_quoted_attribute_value_token2,
  [3036] = 1,
    ACTIONS(377), 2,
      anon_sym_LPAREN,
      sym_attribute_name,
  [3041] = 2,
    ACTIONS(521), 1,
      aux_sym__ruby_with_continuation_token1,
    STATE(31), 1,
      sym__ruby_with_continuation,
  [3048] = 2,
    ACTIONS(459), 1,
      aux_sym__raw_block_token1,
    STATE(141), 1,
      aux_sym__raw_block_repeat1,
  [3055] = 1,
    ACTIONS(567), 1,
      sym__newline,
  [3059] = 1,
    ACTIONS(569), 1,
      sym__newline,
  [3063] = 1,
    ACTIONS(571), 1,
      sym__newline,
  [3067] = 1,
    ACTIONS(573), 1,
      sym__newline,
  [3071] = 1,
    ACTIONS(575), 1,
      sym__ruby,
  [3075] = 1,
    ACTIONS(577), 1,
      sym__newline,
  [3079] = 1,
    ACTIONS(563), 1,
      sym__newline,
  [3083] = 1,
    ACTIONS(579), 1,
      sym_doctype_encoding,
  [3087] = 1,
    ACTIONS(581), 1,
      sym__newline,
  [3091] = 1,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [3095] = 1,
    ACTIONS(585), 1,
      sym__newline,
  [3099] = 1,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
  [3103] = 1,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
  [3107] = 1,
    ACTIONS(589), 1,
      sym__newline,
  [3111] = 1,
    ACTIONS(591), 1,
      sym__newline,
  [3115] = 1,
    ACTIONS(593), 1,
      sym__newline,
  [3119] = 1,
    ACTIONS(595), 1,
      sym__newline,
  [3123] = 1,
    ACTIONS(597), 1,
      sym__newline,
  [3127] = 1,
    ACTIONS(531), 1,
      sym__newline,
  [3131] = 1,
    ACTIONS(599), 1,
      anon_sym_RBRACE_RBRACE,
  [3135] = 1,
    ACTIONS(601), 1,
      sym__newline,
  [3139] = 1,
    ACTIONS(603), 1,
      sym__newline,
  [3143] = 1,
    ACTIONS(605), 1,
      sym_doctype_encoding,
  [3147] = 1,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
  [3151] = 1,
    ACTIONS(609), 1,
      sym__newline,
  [3155] = 1,
    ACTIONS(611), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 422,
  [SMALL_STATE(11)] = 474,
  [SMALL_STATE(12)] = 499,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 549,
  [SMALL_STATE(15)] = 574,
  [SMALL_STATE(16)] = 599,
  [SMALL_STATE(17)] = 624,
  [SMALL_STATE(18)] = 649,
  [SMALL_STATE(19)] = 674,
  [SMALL_STATE(20)] = 699,
  [SMALL_STATE(21)] = 724,
  [SMALL_STATE(22)] = 748,
  [SMALL_STATE(23)] = 772,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 820,
  [SMALL_STATE(26)] = 844,
  [SMALL_STATE(27)] = 868,
  [SMALL_STATE(28)] = 889,
  [SMALL_STATE(29)] = 908,
  [SMALL_STATE(30)] = 929,
  [SMALL_STATE(31)] = 950,
  [SMALL_STATE(32)] = 969,
  [SMALL_STATE(33)] = 988,
  [SMALL_STATE(34)] = 1009,
  [SMALL_STATE(35)] = 1028,
  [SMALL_STATE(36)] = 1046,
  [SMALL_STATE(37)] = 1064,
  [SMALL_STATE(38)] = 1082,
  [SMALL_STATE(39)] = 1100,
  [SMALL_STATE(40)] = 1118,
  [SMALL_STATE(41)] = 1136,
  [SMALL_STATE(42)] = 1154,
  [SMALL_STATE(43)] = 1172,
  [SMALL_STATE(44)] = 1190,
  [SMALL_STATE(45)] = 1208,
  [SMALL_STATE(46)] = 1226,
  [SMALL_STATE(47)] = 1244,
  [SMALL_STATE(48)] = 1262,
  [SMALL_STATE(49)] = 1280,
  [SMALL_STATE(50)] = 1298,
  [SMALL_STATE(51)] = 1316,
  [SMALL_STATE(52)] = 1334,
  [SMALL_STATE(53)] = 1352,
  [SMALL_STATE(54)] = 1370,
  [SMALL_STATE(55)] = 1388,
  [SMALL_STATE(56)] = 1406,
  [SMALL_STATE(57)] = 1424,
  [SMALL_STATE(58)] = 1442,
  [SMALL_STATE(59)] = 1460,
  [SMALL_STATE(60)] = 1478,
  [SMALL_STATE(61)] = 1496,
  [SMALL_STATE(62)] = 1514,
  [SMALL_STATE(63)] = 1532,
  [SMALL_STATE(64)] = 1550,
  [SMALL_STATE(65)] = 1568,
  [SMALL_STATE(66)] = 1586,
  [SMALL_STATE(67)] = 1604,
  [SMALL_STATE(68)] = 1622,
  [SMALL_STATE(69)] = 1640,
  [SMALL_STATE(70)] = 1658,
  [SMALL_STATE(71)] = 1676,
  [SMALL_STATE(72)] = 1694,
  [SMALL_STATE(73)] = 1712,
  [SMALL_STATE(74)] = 1730,
  [SMALL_STATE(75)] = 1748,
  [SMALL_STATE(76)] = 1766,
  [SMALL_STATE(77)] = 1784,
  [SMALL_STATE(78)] = 1802,
  [SMALL_STATE(79)] = 1820,
  [SMALL_STATE(80)] = 1838,
  [SMALL_STATE(81)] = 1856,
  [SMALL_STATE(82)] = 1888,
  [SMALL_STATE(83)] = 1920,
  [SMALL_STATE(84)] = 1940,
  [SMALL_STATE(85)] = 1972,
  [SMALL_STATE(86)] = 1992,
  [SMALL_STATE(87)] = 2024,
  [SMALL_STATE(88)] = 2041,
  [SMALL_STATE(89)] = 2052,
  [SMALL_STATE(90)] = 2065,
  [SMALL_STATE(91)] = 2078,
  [SMALL_STATE(92)] = 2091,
  [SMALL_STATE(93)] = 2104,
  [SMALL_STATE(94)] = 2113,
  [SMALL_STATE(95)] = 2126,
  [SMALL_STATE(96)] = 2139,
  [SMALL_STATE(97)] = 2148,
  [SMALL_STATE(98)] = 2161,
  [SMALL_STATE(99)] = 2170,
  [SMALL_STATE(100)] = 2183,
  [SMALL_STATE(101)] = 2196,
  [SMALL_STATE(102)] = 2205,
  [SMALL_STATE(103)] = 2214,
  [SMALL_STATE(104)] = 2227,
  [SMALL_STATE(105)] = 2240,
  [SMALL_STATE(106)] = 2253,
  [SMALL_STATE(107)] = 2262,
  [SMALL_STATE(108)] = 2271,
  [SMALL_STATE(109)] = 2284,
  [SMALL_STATE(110)] = 2297,
  [SMALL_STATE(111)] = 2306,
  [SMALL_STATE(112)] = 2319,
  [SMALL_STATE(113)] = 2332,
  [SMALL_STATE(114)] = 2345,
  [SMALL_STATE(115)] = 2358,
  [SMALL_STATE(116)] = 2371,
  [SMALL_STATE(117)] = 2381,
  [SMALL_STATE(118)] = 2389,
  [SMALL_STATE(119)] = 2399,
  [SMALL_STATE(120)] = 2409,
  [SMALL_STATE(121)] = 2419,
  [SMALL_STATE(122)] = 2429,
  [SMALL_STATE(123)] = 2437,
  [SMALL_STATE(124)] = 2447,
  [SMALL_STATE(125)] = 2455,
  [SMALL_STATE(126)] = 2463,
  [SMALL_STATE(127)] = 2473,
  [SMALL_STATE(128)] = 2483,
  [SMALL_STATE(129)] = 2493,
  [SMALL_STATE(130)] = 2503,
  [SMALL_STATE(131)] = 2513,
  [SMALL_STATE(132)] = 2523,
  [SMALL_STATE(133)] = 2533,
  [SMALL_STATE(134)] = 2543,
  [SMALL_STATE(135)] = 2551,
  [SMALL_STATE(136)] = 2559,
  [SMALL_STATE(137)] = 2569,
  [SMALL_STATE(138)] = 2579,
  [SMALL_STATE(139)] = 2589,
  [SMALL_STATE(140)] = 2599,
  [SMALL_STATE(141)] = 2609,
  [SMALL_STATE(142)] = 2619,
  [SMALL_STATE(143)] = 2627,
  [SMALL_STATE(144)] = 2637,
  [SMALL_STATE(145)] = 2647,
  [SMALL_STATE(146)] = 2657,
  [SMALL_STATE(147)] = 2667,
  [SMALL_STATE(148)] = 2677,
  [SMALL_STATE(149)] = 2687,
  [SMALL_STATE(150)] = 2697,
  [SMALL_STATE(151)] = 2707,
  [SMALL_STATE(152)] = 2717,
  [SMALL_STATE(153)] = 2725,
  [SMALL_STATE(154)] = 2735,
  [SMALL_STATE(155)] = 2745,
  [SMALL_STATE(156)] = 2755,
  [SMALL_STATE(157)] = 2765,
  [SMALL_STATE(158)] = 2775,
  [SMALL_STATE(159)] = 2785,
  [SMALL_STATE(160)] = 2795,
  [SMALL_STATE(161)] = 2805,
  [SMALL_STATE(162)] = 2815,
  [SMALL_STATE(163)] = 2822,
  [SMALL_STATE(164)] = 2829,
  [SMALL_STATE(165)] = 2834,
  [SMALL_STATE(166)] = 2841,
  [SMALL_STATE(167)] = 2846,
  [SMALL_STATE(168)] = 2851,
  [SMALL_STATE(169)] = 2858,
  [SMALL_STATE(170)] = 2865,
  [SMALL_STATE(171)] = 2872,
  [SMALL_STATE(172)] = 2879,
  [SMALL_STATE(173)] = 2886,
  [SMALL_STATE(174)] = 2893,
  [SMALL_STATE(175)] = 2900,
  [SMALL_STATE(176)] = 2907,
  [SMALL_STATE(177)] = 2914,
  [SMALL_STATE(178)] = 2921,
  [SMALL_STATE(179)] = 2928,
  [SMALL_STATE(180)] = 2933,
  [SMALL_STATE(181)] = 2940,
  [SMALL_STATE(182)] = 2947,
  [SMALL_STATE(183)] = 2954,
  [SMALL_STATE(184)] = 2961,
  [SMALL_STATE(185)] = 2968,
  [SMALL_STATE(186)] = 2975,
  [SMALL_STATE(187)] = 2982,
  [SMALL_STATE(188)] = 2989,
  [SMALL_STATE(189)] = 2994,
  [SMALL_STATE(190)] = 3001,
  [SMALL_STATE(191)] = 3008,
  [SMALL_STATE(192)] = 3015,
  [SMALL_STATE(193)] = 3022,
  [SMALL_STATE(194)] = 3029,
  [SMALL_STATE(195)] = 3036,
  [SMALL_STATE(196)] = 3041,
  [SMALL_STATE(197)] = 3048,
  [SMALL_STATE(198)] = 3055,
  [SMALL_STATE(199)] = 3059,
  [SMALL_STATE(200)] = 3063,
  [SMALL_STATE(201)] = 3067,
  [SMALL_STATE(202)] = 3071,
  [SMALL_STATE(203)] = 3075,
  [SMALL_STATE(204)] = 3079,
  [SMALL_STATE(205)] = 3083,
  [SMALL_STATE(206)] = 3087,
  [SMALL_STATE(207)] = 3091,
  [SMALL_STATE(208)] = 3095,
  [SMALL_STATE(209)] = 3099,
  [SMALL_STATE(210)] = 3103,
  [SMALL_STATE(211)] = 3107,
  [SMALL_STATE(212)] = 3111,
  [SMALL_STATE(213)] = 3115,
  [SMALL_STATE(214)] = 3119,
  [SMALL_STATE(215)] = 3123,
  [SMALL_STATE(216)] = 3127,
  [SMALL_STATE(217)] = 3131,
  [SMALL_STATE(218)] = 3135,
  [SMALL_STATE(219)] = 3139,
  [SMALL_STATE(220)] = 3143,
  [SMALL_STATE(221)] = 3147,
  [SMALL_STATE(222)] = 3151,
  [SMALL_STATE(223)] = 3155,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(211),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(212),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(213),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(214),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(176),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(177),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(178),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(163),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(180),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(82),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(82),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(198),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_code_without_output, 2, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_code_without_output, 2, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_code_with_unescaped_output, 2, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_code_with_unescaped_output, 2, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_code_with_output, 2, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_code_with_output, 2, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_with_continuation, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_with_continuation, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ruby_with_continuation, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ruby_with_continuation, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_block, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_block, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_block, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript_block, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scss_block, 3, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scss_block, 3, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_block, 3, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_block, 3, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sass_block, 3, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sass_block, 3, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_code_with_output, 3, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_code_with_output, 3, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_code_without_output, 3, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_code_without_output, 3, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruby_code_with_unescaped_output, 3, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ruby_code_with_unescaped_output, 3, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 5),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 5),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(87),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_ruby, 2), SHIFT_REPEAT(90),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_ruby, 2), SHIFT_REPEAT(202),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_ruby, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat2, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat2, 2), SHIFT_REPEAT(88),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(207),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_with_mandatory_value, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_with_mandatory_value, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(208),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_ruby, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_ruby, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipe_content_repeat1, 2), SHIFT_REPEAT(139),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipe_content_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_block_repeat1, 2), SHIFT_REPEAT(203),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_block_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipe_content_repeat1, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype_name, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [607] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pug_external_scanner_create(void);
void tree_sitter_pug_external_scanner_destroy(void *);
bool tree_sitter_pug_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pug_external_scanner_serialize(void *, char *);
void tree_sitter_pug_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pug(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pug_external_scanner_create,
      tree_sitter_pug_external_scanner_destroy,
      tree_sitter_pug_external_scanner_scan,
      tree_sitter_pug_external_scanner_serialize,
      tree_sitter_pug_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
