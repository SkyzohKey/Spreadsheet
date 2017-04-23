/* lexer.c generated by valac 0.34.7, the Vala compiler
 * generated from lexer.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define SPREADSHEET_PARSER_TYPE_LEXER (spreadsheet_parser_lexer_get_type ())
#define SPREADSHEET_PARSER_LEXER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexer))
#define SPREADSHEET_PARSER_LEXER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexerClass))
#define SPREADSHEET_PARSER_IS_LEXER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_LEXER))
#define SPREADSHEET_PARSER_IS_LEXER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_LEXER))
#define SPREADSHEET_PARSER_LEXER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexerClass))

typedef struct _SpreadsheetParserLexer SpreadsheetParserLexer;
typedef struct _SpreadsheetParserLexerClass SpreadsheetParserLexerClass;
typedef struct _SpreadsheetParserLexerPrivate SpreadsheetParserLexerPrivate;

#define SPREADSHEET_PARSER_TYPE_GRAMMAR (spreadsheet_parser_grammar_get_type ())
#define SPREADSHEET_PARSER_GRAMMAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammar))
#define SPREADSHEET_PARSER_GRAMMAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammarClass))
#define SPREADSHEET_PARSER_IS_GRAMMAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_GRAMMAR))
#define SPREADSHEET_PARSER_IS_GRAMMAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_GRAMMAR))
#define SPREADSHEET_PARSER_GRAMMAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_GRAMMAR, SpreadsheetParserGrammarClass))

typedef struct _SpreadsheetParserGrammar SpreadsheetParserGrammar;
typedef struct _SpreadsheetParserGrammarClass SpreadsheetParserGrammarClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define SPREADSHEET_PARSER_TYPE_TOKEN (spreadsheet_parser_token_get_type ())
#define SPREADSHEET_PARSER_TOKEN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_TOKEN, SpreadsheetParserToken))
#define SPREADSHEET_PARSER_TOKEN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_TOKEN, SpreadsheetParserTokenClass))
#define SPREADSHEET_PARSER_IS_TOKEN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_TOKEN))
#define SPREADSHEET_PARSER_IS_TOKEN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_TOKEN))
#define SPREADSHEET_PARSER_TOKEN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_TOKEN, SpreadsheetParserTokenClass))

typedef struct _SpreadsheetParserToken SpreadsheetParserToken;
typedef struct _SpreadsheetParserTokenClass SpreadsheetParserTokenClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define SPREADSHEET_PARSER_TYPE_EVALUATOR (spreadsheet_parser_evaluator_get_type ())
#define SPREADSHEET_PARSER_EVALUATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SPREADSHEET_PARSER_TYPE_EVALUATOR, SpreadsheetParserEvaluator))
#define SPREADSHEET_PARSER_EVALUATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SPREADSHEET_PARSER_TYPE_EVALUATOR, SpreadsheetParserEvaluatorClass))
#define SPREADSHEET_PARSER_IS_EVALUATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SPREADSHEET_PARSER_TYPE_EVALUATOR))
#define SPREADSHEET_PARSER_IS_EVALUATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SPREADSHEET_PARSER_TYPE_EVALUATOR))
#define SPREADSHEET_PARSER_EVALUATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SPREADSHEET_PARSER_TYPE_EVALUATOR, SpreadsheetParserEvaluatorClass))

typedef struct _SpreadsheetParserEvaluator SpreadsheetParserEvaluator;
typedef struct _SpreadsheetParserEvaluatorClass SpreadsheetParserEvaluatorClass;
typedef struct _SpreadsheetParserTokenPrivate SpreadsheetParserTokenPrivate;
#define _spreadsheet_parser_token_unref0(var) ((var == NULL) ? NULL : (var = (spreadsheet_parser_token_unref (var), NULL)))

struct _SpreadsheetParserLexer {
	GObject parent_instance;
	SpreadsheetParserLexerPrivate * priv;
};

struct _SpreadsheetParserLexerClass {
	GObjectClass parent_class;
};

struct _SpreadsheetParserLexerPrivate {
	SpreadsheetParserGrammar* _grammar;
};

struct _SpreadsheetParserToken {
	GTypeInstance parent_instance;
	volatile int ref_count;
	SpreadsheetParserTokenPrivate * priv;
	gchar* kind;
	gchar* lexeme;
};

struct _SpreadsheetParserTokenClass {
	GTypeClass parent_class;
	void (*finalize) (SpreadsheetParserToken *self);
};


static gpointer spreadsheet_parser_lexer_parent_class = NULL;

GType spreadsheet_parser_lexer_get_type (void) G_GNUC_CONST;
GType spreadsheet_parser_grammar_get_type (void) G_GNUC_CONST;
#define SPREADSHEET_PARSER_LEXER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexerPrivate))
enum  {
	SPREADSHEET_PARSER_LEXER_DUMMY_PROPERTY,
	SPREADSHEET_PARSER_LEXER_GRAMMAR
};
SpreadsheetParserGrammar* spreadsheet_parser_grammar_new (void);
SpreadsheetParserGrammar* spreadsheet_parser_grammar_construct (GType object_type);
gpointer spreadsheet_parser_token_ref (gpointer instance);
void spreadsheet_parser_token_unref (gpointer instance);
GParamSpec* spreadsheet_parser_param_spec_token (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void spreadsheet_parser_value_set_token (GValue* value, gpointer v_object);
void spreadsheet_parser_value_take_token (GValue* value, gpointer v_object);
gpointer spreadsheet_parser_value_get_token (const GValue* value);
GType spreadsheet_parser_token_get_type (void) G_GNUC_CONST;
GeeArrayList* spreadsheet_parser_lexer_tokenize (SpreadsheetParserLexer* self, const gchar* _expr);
SpreadsheetParserGrammar* spreadsheet_parser_lexer_get_grammar (SpreadsheetParserLexer* self);
GType spreadsheet_parser_evaluator_get_type (void) G_GNUC_CONST;
GeeHashMap* spreadsheet_parser_grammar_get_rules (SpreadsheetParserGrammar* self);
SpreadsheetParserToken* spreadsheet_parser_evaluator_eval (SpreadsheetParserEvaluator* self, const gchar* expr, gint* size);
gboolean spreadsheet_parser_evaluator_get_pop (SpreadsheetParserEvaluator* self);
gchar** spreadsheet_parser_evaluator_get_push (SpreadsheetParserEvaluator* self, int* result_length1);
static gchar** _vala_array_dup2 (gchar** self, int length);
SpreadsheetParserToken* spreadsheet_parser_token_new (const gchar* k, const gchar* l);
SpreadsheetParserToken* spreadsheet_parser_token_construct (GType object_type, const gchar* k, const gchar* l);
SpreadsheetParserLexer* spreadsheet_parser_lexer_new (void);
SpreadsheetParserLexer* spreadsheet_parser_lexer_construct (GType object_type);
void spreadsheet_parser_lexer_set_grammar (SpreadsheetParserLexer* self, SpreadsheetParserGrammar* value);
static void spreadsheet_parser_lexer_finalize (GObject* obj);
static void _vala_spreadsheet_parser_lexer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_spreadsheet_parser_lexer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gchar* string_strip (const gchar* self) {
	gchar* result = NULL;
	gchar* _result_ = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
#line 1207 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1208 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp0_ = g_strdup (self);
#line 1208 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_result_ = _tmp0_;
#line 1209 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp1_ = _result_;
#line 1209 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	g_strstrip (_tmp1_);
#line 1210 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	result = _result_;
#line 1210 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	return result;
#line 140 "lexer.c"
}


static gchar** _vala_array_dup2 (gchar** self, int length) {
	gchar** result;
	int i;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	result = g_new0 (gchar*, length + 1);
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	for (i = 0; i < length; i++) {
#line 151 "lexer.c"
		gchar* _tmp0_ = NULL;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp0_ = g_strdup (self[i]);
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		result[i] = _tmp0_;
#line 157 "lexer.c"
	}
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	return result;
#line 161 "lexer.c"
}


static glong string_strnlen (gchar* str, glong maxlen) {
	glong result = 0L;
	gchar* end = NULL;
	gchar* _tmp0_ = NULL;
	glong _tmp1_ = 0L;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 1295 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp0_ = str;
#line 1295 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp1_ = maxlen;
#line 1295 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp2_ = memchr (_tmp0_, 0, (gsize) _tmp1_);
#line 1295 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	end = _tmp2_;
#line 1296 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp3_ = end;
#line 1296 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	if (_tmp3_ == NULL) {
#line 184 "lexer.c"
		glong _tmp4_ = 0L;
#line 1297 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp4_ = maxlen;
#line 1297 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		result = _tmp4_;
#line 1297 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		return result;
#line 192 "lexer.c"
	} else {
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
#line 1299 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp5_ = end;
#line 1299 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp6_ = str;
#line 1299 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		result = (glong) (_tmp5_ - _tmp6_);
#line 1299 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		return result;
#line 204 "lexer.c"
	}
}


static gchar* string_substring (const gchar* self, glong offset, glong len) {
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	glong _tmp1_ = 0L;
	glong _tmp8_ = 0L;
	glong _tmp14_ = 0L;
	glong _tmp17_ = 0L;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	glong _tmp21_ = 0L;
	gchar* _tmp22_ = NULL;
#line 1306 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1308 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp1_ = offset;
#line 1308 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	if (_tmp1_ >= ((glong) 0)) {
#line 228 "lexer.c"
		glong _tmp2_ = 0L;
#line 1308 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp2_ = len;
#line 1308 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp0_ = _tmp2_ >= ((glong) 0);
#line 234 "lexer.c"
	} else {
#line 1308 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp0_ = FALSE;
#line 238 "lexer.c"
	}
#line 1308 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	if (_tmp0_) {
#line 242 "lexer.c"
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
		glong _tmp5_ = 0L;
#line 1310 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp3_ = offset;
#line 1310 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp4_ = len;
#line 1310 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp5_ = string_strnlen ((gchar*) self, _tmp3_ + _tmp4_);
#line 1310 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		string_length = _tmp5_;
#line 254 "lexer.c"
	} else {
		gint _tmp6_ = 0;
		gint _tmp7_ = 0;
#line 1312 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp6_ = strlen (self);
#line 1312 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp7_ = _tmp6_;
#line 1312 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		string_length = (glong) _tmp7_;
#line 264 "lexer.c"
	}
#line 1315 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp8_ = offset;
#line 1315 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	if (_tmp8_ < ((glong) 0)) {
#line 270 "lexer.c"
		glong _tmp9_ = 0L;
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
#line 1316 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp9_ = string_length;
#line 1316 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp10_ = offset;
#line 1316 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		offset = _tmp9_ + _tmp10_;
#line 1317 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp11_ = offset;
#line 1317 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		g_return_val_if_fail (_tmp11_ >= ((glong) 0), NULL);
#line 284 "lexer.c"
	} else {
		glong _tmp12_ = 0L;
		glong _tmp13_ = 0L;
#line 1319 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp12_ = offset;
#line 1319 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp13_ = string_length;
#line 1319 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		g_return_val_if_fail (_tmp12_ <= _tmp13_, NULL);
#line 294 "lexer.c"
	}
#line 1321 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp14_ = len;
#line 1321 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	if (_tmp14_ < ((glong) 0)) {
#line 300 "lexer.c"
		glong _tmp15_ = 0L;
		glong _tmp16_ = 0L;
#line 1322 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp15_ = string_length;
#line 1322 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		_tmp16_ = offset;
#line 1322 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
		len = _tmp15_ - _tmp16_;
#line 309 "lexer.c"
	}
#line 1324 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp17_ = offset;
#line 1324 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp18_ = len;
#line 1324 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp19_ = string_length;
#line 1324 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	g_return_val_if_fail ((_tmp17_ + _tmp18_) <= _tmp19_, NULL);
#line 1325 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp20_ = offset;
#line 1325 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp21_ = len;
#line 1325 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	_tmp22_ = g_strndup (((gchar*) self) + _tmp20_, (gsize) _tmp21_);
#line 1325 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	result = _tmp22_;
#line 1325 "/usr/share/vala-0.34/vapi/glib-2.0.vapi"
	return result;
#line 329 "lexer.c"
}


GeeArrayList* spreadsheet_parser_lexer_tokenize (SpreadsheetParserLexer* self, const gchar* _expr) {
	GeeArrayList* result = NULL;
	gchar* expr = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	GeeArrayList* res = NULL;
	GeeArrayList* _tmp2_ = NULL;
	GeeArrayList* stack = NULL;
	GeeArrayList* _tmp3_ = NULL;
	GeeArrayList* _tmp4_ = NULL;
	GeeArrayList* _tmp66_ = NULL;
	SpreadsheetParserToken* _tmp67_ = NULL;
	SpreadsheetParserToken* _tmp68_ = NULL;
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 9 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_return_val_if_fail (_expr != NULL, NULL);
#line 10 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp0_ = _expr;
#line 10 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp1_ = string_strip (_tmp0_);
#line 10 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	expr = _tmp1_;
#line 11 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp2_ = gee_array_list_new (SPREADSHEET_PARSER_TYPE_TOKEN, (GBoxedCopyFunc) spreadsheet_parser_token_ref, (GDestroyNotify) spreadsheet_parser_token_unref, NULL, NULL, NULL);
#line 11 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	res = _tmp2_;
#line 12 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp3_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL);
#line 12 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	stack = _tmp3_;
#line 13 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp4_ = stack;
#line 13 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp4_, "root");
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	while (TRUE) {
#line 370 "lexer.c"
		const gchar* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gint _tmp7_ = 0;
		gchar* top = NULL;
		GeeArrayList* _tmp8_ = NULL;
		gpointer _tmp9_ = NULL;
		SpreadsheetParserGrammar* _tmp10_ = NULL;
		GeeHashMap* _tmp11_ = NULL;
		GeeHashMap* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		gboolean _tmp14_ = FALSE;
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp5_ = expr;
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp6_ = strlen (_tmp5_);
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp7_ = _tmp6_;
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		if (!(_tmp7_ > 0)) {
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
			break;
#line 392 "lexer.c"
		}
#line 16 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp8_ = stack;
#line 16 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp9_ = gee_list_last ((GeeList*) _tmp8_);
#line 16 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		top = (gchar*) _tmp9_;
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp10_ = self->priv->_grammar;
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp11_ = spreadsheet_parser_grammar_get_rules (_tmp10_);
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp12_ = _tmp11_;
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp13_ = top;
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_tmp14_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp12_, _tmp13_);
#line 17 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		if (_tmp14_) {
#line 412 "lexer.c"
			gboolean matched = FALSE;
			gboolean _tmp56_ = FALSE;
#line 18 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
			matched = FALSE;
#line 417 "lexer.c"
			{
				GeeArrayList* _eval_list = NULL;
				SpreadsheetParserGrammar* _tmp15_ = NULL;
				GeeHashMap* _tmp16_ = NULL;
				GeeHashMap* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				gpointer _tmp19_ = NULL;
				gint _eval_size = 0;
				GeeArrayList* _tmp20_ = NULL;
				gint _tmp21_ = 0;
				gint _tmp22_ = 0;
				gint _eval_index = 0;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp15_ = self->priv->_grammar;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp16_ = spreadsheet_parser_grammar_get_rules (_tmp15_);
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp17_ = _tmp16_;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp18_ = top;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp19_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp17_, _tmp18_);
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_eval_list = (GeeArrayList*) _tmp19_;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp20_ = _eval_list;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp21_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) _tmp20_);
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp22_ = _tmp21_;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_eval_size = _tmp22_;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_eval_index = -1;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				while (TRUE) {
#line 454 "lexer.c"
					gint _tmp23_ = 0;
					gint _tmp24_ = 0;
					gint _tmp25_ = 0;
					SpreadsheetParserEvaluator* eval = NULL;
					GeeArrayList* _tmp26_ = NULL;
					gint _tmp27_ = 0;
					gpointer _tmp28_ = NULL;
					gint size = 0;
					SpreadsheetParserToken* tok = NULL;
					SpreadsheetParserEvaluator* _tmp29_ = NULL;
					const gchar* _tmp30_ = NULL;
					gint _tmp31_ = 0;
					SpreadsheetParserToken* _tmp32_ = NULL;
					gint _tmp33_ = 0;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp23_ = _eval_index;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_eval_index = _tmp23_ + 1;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp24_ = _eval_index;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp25_ = _eval_size;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					if (!(_tmp24_ < _tmp25_)) {
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						break;
#line 481 "lexer.c"
					}
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp26_ = _eval_list;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp27_ = _eval_index;
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp28_ = gee_abstract_list_get ((GeeAbstractList*) _tmp26_, _tmp27_);
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					eval = (SpreadsheetParserEvaluator*) _tmp28_;
#line 21 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp29_ = eval;
#line 21 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp30_ = expr;
#line 21 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp32_ = spreadsheet_parser_evaluator_eval (_tmp29_, _tmp30_, &_tmp31_);
#line 21 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					size = _tmp31_;
#line 21 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					tok = _tmp32_;
#line 22 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_tmp33_ = size;
#line 22 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					if (_tmp33_ > 0) {
#line 505 "lexer.c"
						SpreadsheetParserToken* _tmp34_ = NULL;
						const gchar* _tmp35_ = NULL;
						SpreadsheetParserEvaluator* _tmp38_ = NULL;
						gboolean _tmp39_ = FALSE;
						gboolean _tmp40_ = FALSE;
						SpreadsheetParserEvaluator* _tmp43_ = NULL;
						gchar** _tmp44_ = NULL;
						gint _tmp44__length1 = 0;
						gchar** _tmp45_ = NULL;
						gint _tmp45__length1 = 0;
						const gchar* _tmp53_ = NULL;
						gint _tmp54_ = 0;
						gchar* _tmp55_ = NULL;
#line 24 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp34_ = tok;
#line 24 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp35_ = _tmp34_->kind;
#line 24 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						if (g_strcmp0 (_tmp35_, "[[ignore]]") != 0) {
#line 525 "lexer.c"
							GeeArrayList* _tmp36_ = NULL;
							SpreadsheetParserToken* _tmp37_ = NULL;
#line 25 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp36_ = res;
#line 25 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp37_ = tok;
#line 25 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							gee_abstract_collection_add ((GeeAbstractCollection*) _tmp36_, _tmp37_);
#line 534 "lexer.c"
						}
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp38_ = eval;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp39_ = spreadsheet_parser_evaluator_get_pop (_tmp38_);
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp40_ = _tmp39_;
#line 28 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						if (_tmp40_) {
#line 544 "lexer.c"
							GeeArrayList* _tmp41_ = NULL;
							const gchar* _tmp42_ = NULL;
#line 29 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp41_ = stack;
#line 29 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp42_ = top;
#line 29 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							gee_abstract_collection_remove ((GeeAbstractCollection*) _tmp41_, _tmp42_);
#line 553 "lexer.c"
						}
#line 32 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp43_ = eval;
#line 32 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp44_ = spreadsheet_parser_evaluator_get_push (_tmp43_, &_tmp44__length1);
#line 32 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp45_ = _tmp44_;
#line 32 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp45__length1 = _tmp44__length1;
#line 32 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						if (_tmp45_ != NULL) {
#line 565 "lexer.c"
							GeeArrayList* _tmp46_ = NULL;
							SpreadsheetParserEvaluator* _tmp47_ = NULL;
							gchar** _tmp48_ = NULL;
							gint _tmp48__length1 = 0;
							gchar** _tmp49_ = NULL;
							gint _tmp49__length1 = 0;
							gchar** _tmp50_ = NULL;
							gint _tmp50__length1 = 0;
							GeeArrayList* _tmp51_ = NULL;
							GeeArrayList* _tmp52_ = NULL;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp46_ = stack;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp47_ = eval;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp48_ = spreadsheet_parser_evaluator_get_push (_tmp47_, &_tmp48__length1);
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp49_ = _tmp48_;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp49__length1 = _tmp48__length1;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp50_ = (_tmp49_ != NULL) ? _vala_array_dup2 (_tmp49_, _tmp49__length1) : ((gpointer) _tmp49_);
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp50__length1 = _tmp49__length1;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp51_ = gee_array_list_new_wrap (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, _tmp50_, _tmp50__length1, NULL, NULL, NULL);
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_tmp52_ = _tmp51_;
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							gee_array_list_add_all (_tmp46_, (GeeCollection*) _tmp52_);
#line 33 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
							_g_object_unref0 (_tmp52_);
#line 598 "lexer.c"
						}
#line 36 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp53_ = expr;
#line 36 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp54_ = size;
#line 36 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_tmp55_ = string_substring (_tmp53_, (glong) _tmp54_, (glong) -1);
#line 36 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_g_free0 (expr);
#line 36 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						expr = _tmp55_;
#line 37 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						matched = TRUE;
#line 38 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_spreadsheet_parser_token_unref0 (tok);
#line 38 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						_g_object_unref0 (eval);
#line 38 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
						break;
#line 618 "lexer.c"
					}
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_spreadsheet_parser_token_unref0 (tok);
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
					_g_object_unref0 (eval);
#line 624 "lexer.c"
				}
#line 19 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_g_object_unref0 (_eval_list);
#line 628 "lexer.c"
			}
#line 42 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
			_tmp56_ = matched;
#line 42 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
			if (!_tmp56_) {
#line 634 "lexer.c"
				const gchar* _tmp57_ = NULL;
				gchar* _tmp58_ = NULL;
				gchar* _tmp59_ = NULL;
				gint _tmp60_ = 0;
				gint _tmp61_ = 0;
				const gchar* _tmp62_ = NULL;
				gint _tmp63_ = 0;
				gint _tmp64_ = 0;
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp57_ = _expr;
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp58_ = string_strip (_tmp57_);
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp59_ = _tmp58_;
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp60_ = strlen (_tmp59_);
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp61_ = _tmp60_;
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp62_ = expr;
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp63_ = strlen (_tmp62_);
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_tmp64_ = _tmp63_;
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				g_error ("lexer.vala:43: Unexpected character at %d", _tmp61_ - _tmp64_);
#line 43 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
				_g_free0 (_tmp59_);
#line 663 "lexer.c"
			}
		} else {
			const gchar* _tmp65_ = NULL;
#line 46 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
			_tmp65_ = top;
#line 46 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
			g_critical ("lexer.vala:46: Unknown context: %s\n", _tmp65_);
#line 671 "lexer.c"
		}
#line 15 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		_g_free0 (top);
#line 675 "lexer.c"
	}
#line 50 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp66_ = res;
#line 50 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp67_ = spreadsheet_parser_token_new ("eof", "");
#line 50 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp68_ = _tmp67_;
#line 50 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp66_, _tmp68_);
#line 50 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_spreadsheet_parser_token_unref0 (_tmp68_);
#line 51 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	result = res;
#line 51 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_g_object_unref0 (stack);
#line 51 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_g_free0 (expr);
#line 51 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	return result;
#line 695 "lexer.c"
}


SpreadsheetParserLexer* spreadsheet_parser_lexer_construct (GType object_type) {
	SpreadsheetParserLexer * self = NULL;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	self = (SpreadsheetParserLexer*) g_object_new (object_type, NULL);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	return self;
#line 705 "lexer.c"
}


SpreadsheetParserLexer* spreadsheet_parser_lexer_new (void) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	return spreadsheet_parser_lexer_construct (SPREADSHEET_PARSER_TYPE_LEXER);
#line 712 "lexer.c"
}


SpreadsheetParserGrammar* spreadsheet_parser_lexer_get_grammar (SpreadsheetParserLexer* self) {
	SpreadsheetParserGrammar* result;
	SpreadsheetParserGrammar* _tmp0_ = NULL;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp0_ = self->priv->_grammar;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	result = _tmp0_;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	return result;
#line 727 "lexer.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	return self ? g_object_ref (self) : NULL;
#line 734 "lexer.c"
}


void spreadsheet_parser_lexer_set_grammar (SpreadsheetParserLexer* self, SpreadsheetParserGrammar* value) {
	SpreadsheetParserGrammar* _tmp0_ = NULL;
	SpreadsheetParserGrammar* _tmp1_ = NULL;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_return_if_fail (self != NULL);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp0_ = value;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_g_object_unref0 (self->priv->_grammar);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	self->priv->_grammar = _tmp1_;
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_object_notify ((GObject *) self, "grammar");
#line 753 "lexer.c"
}


static void spreadsheet_parser_lexer_class_init (SpreadsheetParserLexerClass * klass) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	spreadsheet_parser_lexer_parent_class = g_type_class_peek_parent (klass);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_type_class_add_private (klass, sizeof (SpreadsheetParserLexerPrivate));
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_spreadsheet_parser_lexer_get_property;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_spreadsheet_parser_lexer_set_property;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	G_OBJECT_CLASS (klass)->finalize = spreadsheet_parser_lexer_finalize;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), SPREADSHEET_PARSER_LEXER_GRAMMAR, g_param_spec_object ("grammar", "grammar", "grammar", SPREADSHEET_PARSER_TYPE_GRAMMAR, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 770 "lexer.c"
}


static void spreadsheet_parser_lexer_instance_init (SpreadsheetParserLexer * self) {
	SpreadsheetParserGrammar* _tmp0_ = NULL;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	self->priv = SPREADSHEET_PARSER_LEXER_GET_PRIVATE (self);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_tmp0_ = spreadsheet_parser_grammar_new ();
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	self->priv->_grammar = _tmp0_;
#line 782 "lexer.c"
}


static void spreadsheet_parser_lexer_finalize (GObject* obj) {
	SpreadsheetParserLexer * self;
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexer);
#line 7 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	_g_object_unref0 (self->priv->_grammar);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	G_OBJECT_CLASS (spreadsheet_parser_lexer_parent_class)->finalize (obj);
#line 794 "lexer.c"
}


GType spreadsheet_parser_lexer_get_type (void) {
	static volatile gsize spreadsheet_parser_lexer_type_id__volatile = 0;
	if (g_once_init_enter (&spreadsheet_parser_lexer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SpreadsheetParserLexerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) spreadsheet_parser_lexer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SpreadsheetParserLexer), 0, (GInstanceInitFunc) spreadsheet_parser_lexer_instance_init, NULL };
		GType spreadsheet_parser_lexer_type_id;
		spreadsheet_parser_lexer_type_id = g_type_register_static (G_TYPE_OBJECT, "SpreadsheetParserLexer", &g_define_type_info, 0);
		g_once_init_leave (&spreadsheet_parser_lexer_type_id__volatile, spreadsheet_parser_lexer_type_id);
	}
	return spreadsheet_parser_lexer_type_id__volatile;
}


static void _vala_spreadsheet_parser_lexer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SpreadsheetParserLexer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexer);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	switch (property_id) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		case SPREADSHEET_PARSER_LEXER_GRAMMAR:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		g_value_set_object (value, spreadsheet_parser_lexer_get_grammar (self));
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		break;
#line 821 "lexer.c"
		default:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		break;
#line 827 "lexer.c"
	}
}


static void _vala_spreadsheet_parser_lexer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SpreadsheetParserLexer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, SPREADSHEET_PARSER_TYPE_LEXER, SpreadsheetParserLexer);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
	switch (property_id) {
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		case SPREADSHEET_PARSER_LEXER_GRAMMAR:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		spreadsheet_parser_lexer_set_grammar (self, g_value_get_object (value));
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		break;
#line 843 "lexer.c"
		default:
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 5 "/home/baptiste/Code/Vala/Spreadsheet/src/parser/lexer.vala"
		break;
#line 849 "lexer.c"
	}
}


