#ifndef DST_MainHEADER_H
#define DST_MainHEADER_H 1
#define DST_MainIN_HEADER 1

#line 6 "./DST_Main_lexer.h"

#define  YY_INT_ALIGNED short int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 6
#define YY_FLEX_SUBMINOR_VERSION 4
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

#ifdef yy_create_buffer
#define DST_Main_create_buffer_ALREADY_DEFINED
#else
#define yy_create_buffer DST_Main_create_buffer
#endif

#ifdef yy_delete_buffer
#define DST_Main_delete_buffer_ALREADY_DEFINED
#else
#define yy_delete_buffer DST_Main_delete_buffer
#endif

#ifdef yy_scan_buffer
#define DST_Main_scan_buffer_ALREADY_DEFINED
#else
#define yy_scan_buffer DST_Main_scan_buffer
#endif

#ifdef yy_scan_string
#define DST_Main_scan_string_ALREADY_DEFINED
#else
#define yy_scan_string DST_Main_scan_string
#endif

#ifdef yy_scan_bytes
#define DST_Main_scan_bytes_ALREADY_DEFINED
#else
#define yy_scan_bytes DST_Main_scan_bytes
#endif

#ifdef yy_init_buffer
#define DST_Main_init_buffer_ALREADY_DEFINED
#else
#define yy_init_buffer DST_Main_init_buffer
#endif

#ifdef yy_flush_buffer
#define DST_Main_flush_buffer_ALREADY_DEFINED
#else
#define yy_flush_buffer DST_Main_flush_buffer
#endif

#ifdef yy_load_buffer_state
#define DST_Main_load_buffer_state_ALREADY_DEFINED
#else
#define yy_load_buffer_state DST_Main_load_buffer_state
#endif

#ifdef yy_switch_to_buffer
#define DST_Main_switch_to_buffer_ALREADY_DEFINED
#else
#define yy_switch_to_buffer DST_Main_switch_to_buffer
#endif

#ifdef yypush_buffer_state
#define DST_Mainpush_buffer_state_ALREADY_DEFINED
#else
#define yypush_buffer_state DST_Mainpush_buffer_state
#endif

#ifdef yypop_buffer_state
#define DST_Mainpop_buffer_state_ALREADY_DEFINED
#else
#define yypop_buffer_state DST_Mainpop_buffer_state
#endif

#ifdef yyensure_buffer_stack
#define DST_Mainensure_buffer_stack_ALREADY_DEFINED
#else
#define yyensure_buffer_stack DST_Mainensure_buffer_stack
#endif

#ifdef yylex
#define DST_Mainlex_ALREADY_DEFINED
#else
#define yylex DST_Mainlex
#endif

#ifdef yyrestart
#define DST_Mainrestart_ALREADY_DEFINED
#else
#define yyrestart DST_Mainrestart
#endif

#ifdef yylex_init
#define DST_Mainlex_init_ALREADY_DEFINED
#else
#define yylex_init DST_Mainlex_init
#endif

#ifdef yylex_init_extra
#define DST_Mainlex_init_extra_ALREADY_DEFINED
#else
#define yylex_init_extra DST_Mainlex_init_extra
#endif

#ifdef yylex_destroy
#define DST_Mainlex_destroy_ALREADY_DEFINED
#else
#define yylex_destroy DST_Mainlex_destroy
#endif

#ifdef yyget_debug
#define DST_Mainget_debug_ALREADY_DEFINED
#else
#define yyget_debug DST_Mainget_debug
#endif

#ifdef yyset_debug
#define DST_Mainset_debug_ALREADY_DEFINED
#else
#define yyset_debug DST_Mainset_debug
#endif

#ifdef yyget_extra
#define DST_Mainget_extra_ALREADY_DEFINED
#else
#define yyget_extra DST_Mainget_extra
#endif

#ifdef yyset_extra
#define DST_Mainset_extra_ALREADY_DEFINED
#else
#define yyset_extra DST_Mainset_extra
#endif

#ifdef yyget_in
#define DST_Mainget_in_ALREADY_DEFINED
#else
#define yyget_in DST_Mainget_in
#endif

#ifdef yyset_in
#define DST_Mainset_in_ALREADY_DEFINED
#else
#define yyset_in DST_Mainset_in
#endif

#ifdef yyget_out
#define DST_Mainget_out_ALREADY_DEFINED
#else
#define yyget_out DST_Mainget_out
#endif

#ifdef yyset_out
#define DST_Mainset_out_ALREADY_DEFINED
#else
#define yyset_out DST_Mainset_out
#endif

#ifdef yyget_leng
#define DST_Mainget_leng_ALREADY_DEFINED
#else
#define yyget_leng DST_Mainget_leng
#endif

#ifdef yyget_text
#define DST_Mainget_text_ALREADY_DEFINED
#else
#define yyget_text DST_Mainget_text
#endif

#ifdef yyget_lineno
#define DST_Mainget_lineno_ALREADY_DEFINED
#else
#define yyget_lineno DST_Mainget_lineno
#endif

#ifdef yyset_lineno
#define DST_Mainset_lineno_ALREADY_DEFINED
#else
#define yyset_lineno DST_Mainset_lineno
#endif

#ifdef yywrap
#define DST_Mainwrap_ALREADY_DEFINED
#else
#define yywrap DST_Mainwrap
#endif

#ifdef yyalloc
#define DST_Mainalloc_ALREADY_DEFINED
#else
#define yyalloc DST_Mainalloc
#endif

#ifdef yyrealloc
#define DST_Mainrealloc_ALREADY_DEFINED
#else
#define yyrealloc DST_Mainrealloc
#endif

#ifdef yyfree
#define DST_Mainfree_ALREADY_DEFINED
#else
#define yyfree DST_Mainfree
#endif

#ifdef yytext
#define DST_Maintext_ALREADY_DEFINED
#else
#define yytext DST_Maintext
#endif

#ifdef yyleng
#define DST_Mainleng_ALREADY_DEFINED
#else
#define yyleng DST_Mainleng
#endif

#ifdef yyin
#define DST_Mainin_ALREADY_DEFINED
#else
#define yyin DST_Mainin
#endif

#ifdef yyout
#define DST_Mainout_ALREADY_DEFINED
#else
#define yyout DST_Mainout
#endif

#ifdef yy_flex_debug
#define DST_Main_flex_debug_ALREADY_DEFINED
#else
#define yy_flex_debug DST_Main_flex_debug
#endif

#ifdef yylineno
#define DST_Mainlineno_ALREADY_DEFINED
#else
#define yylineno DST_Mainlineno
#endif

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* end standard C headers. */

/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 says to define __STDC_LIMIT_MACROS before including stdint.h,
 * if you want the limit (max/min) macros for int types. 
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#ifndef SIZE_MAX
#define SIZE_MAX               (~(size_t)0)
#endif

#endif /* ! C99 */

#endif /* ! FLEXINT_H */

/* begin standard C++ headers. */

/* TODO: this is always defined, so inline it */
#define yyconst const

#if defined(__GNUC__) && __GNUC__ >= 3
#define yynoreturn __attribute__((__noreturn__))
#else
#define yynoreturn
#endif

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k.
 * Moreover, YY_BUF_SIZE is 2*YY_READ_BUF_SIZE in the general case.
 * Ditto for the __ia64__ case accordingly.
 */
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif /* __ia64__ */
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

extern int yyleng;

extern FILE *yyin, *yyout;

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	int yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */

	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

void yyrestart ( FILE *input_file  );
void yy_switch_to_buffer ( YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE yy_create_buffer ( FILE *file, int size  );
void yy_delete_buffer ( YY_BUFFER_STATE b  );
void yy_flush_buffer ( YY_BUFFER_STATE b  );
void yypush_buffer_state ( YY_BUFFER_STATE new_buffer  );
void yypop_buffer_state ( void );

YY_BUFFER_STATE yy_scan_buffer ( char *base, yy_size_t size  );
YY_BUFFER_STATE yy_scan_string ( const char *yy_str  );
YY_BUFFER_STATE yy_scan_bytes ( const char *bytes, int len  );

void *yyalloc ( yy_size_t  );
void *yyrealloc ( void *, yy_size_t  );
void yyfree ( void *  );

/* Begin user sect3 */

#define DST_Mainwrap() (/*CONSTCOND*/1)
#define YY_SKIP_YYWRAP

extern int yylineno;

extern char *yytext;
#ifdef yytext_ptr
#undef yytext_ptr
#endif
#define yytext_ptr yytext

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int yylex_destroy ( void );

int yyget_debug ( void );

void yyset_debug ( int debug_flag  );

YY_EXTRA_TYPE yyget_extra ( void );

void yyset_extra ( YY_EXTRA_TYPE user_defined  );

FILE *yyget_in ( void );

void yyset_in  ( FILE * _in_str  );

FILE *yyget_out ( void );

void yyset_out  ( FILE * _out_str  );

			int yyget_leng ( void );

char *yyget_text ( void );

int yyget_lineno ( void );

void yyset_lineno ( int _line_number  );

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap ( void );
#else
extern int yywrap ( void );
#endif
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy ( char *, const char *, int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen ( const char * );
#endif

#ifndef YY_NO_INPUT

#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k */
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int yylex (void);

#define YY_DECL int yylex (void)
#endif /* !YY_DECL */

/* yy_get_previous_state - get the state just before the EOB char was reached */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif

#ifndef DST_Main_create_buffer_ALREADY_DEFINED
#undef yy_create_buffer
#endif
#ifndef DST_Main_delete_buffer_ALREADY_DEFINED
#undef yy_delete_buffer
#endif
#ifndef DST_Main_scan_buffer_ALREADY_DEFINED
#undef yy_scan_buffer
#endif
#ifndef DST_Main_scan_string_ALREADY_DEFINED
#undef yy_scan_string
#endif
#ifndef DST_Main_scan_bytes_ALREADY_DEFINED
#undef yy_scan_bytes
#endif
#ifndef DST_Main_init_buffer_ALREADY_DEFINED
#undef yy_init_buffer
#endif
#ifndef DST_Main_flush_buffer_ALREADY_DEFINED
#undef yy_flush_buffer
#endif
#ifndef DST_Main_load_buffer_state_ALREADY_DEFINED
#undef yy_load_buffer_state
#endif
#ifndef DST_Main_switch_to_buffer_ALREADY_DEFINED
#undef yy_switch_to_buffer
#endif
#ifndef DST_Mainpush_buffer_state_ALREADY_DEFINED
#undef yypush_buffer_state
#endif
#ifndef DST_Mainpop_buffer_state_ALREADY_DEFINED
#undef yypop_buffer_state
#endif
#ifndef DST_Mainensure_buffer_stack_ALREADY_DEFINED
#undef yyensure_buffer_stack
#endif
#ifndef DST_Mainlex_ALREADY_DEFINED
#undef yylex
#endif
#ifndef DST_Mainrestart_ALREADY_DEFINED
#undef yyrestart
#endif
#ifndef DST_Mainlex_init_ALREADY_DEFINED
#undef yylex_init
#endif
#ifndef DST_Mainlex_init_extra_ALREADY_DEFINED
#undef yylex_init_extra
#endif
#ifndef DST_Mainlex_destroy_ALREADY_DEFINED
#undef yylex_destroy
#endif
#ifndef DST_Mainget_debug_ALREADY_DEFINED
#undef yyget_debug
#endif
#ifndef DST_Mainset_debug_ALREADY_DEFINED
#undef yyset_debug
#endif
#ifndef DST_Mainget_extra_ALREADY_DEFINED
#undef yyget_extra
#endif
#ifndef DST_Mainset_extra_ALREADY_DEFINED
#undef yyset_extra
#endif
#ifndef DST_Mainget_in_ALREADY_DEFINED
#undef yyget_in
#endif
#ifndef DST_Mainset_in_ALREADY_DEFINED
#undef yyset_in
#endif
#ifndef DST_Mainget_out_ALREADY_DEFINED
#undef yyget_out
#endif
#ifndef DST_Mainset_out_ALREADY_DEFINED
#undef yyset_out
#endif
#ifndef DST_Mainget_leng_ALREADY_DEFINED
#undef yyget_leng
#endif
#ifndef DST_Mainget_text_ALREADY_DEFINED
#undef yyget_text
#endif
#ifndef DST_Mainget_lineno_ALREADY_DEFINED
#undef yyget_lineno
#endif
#ifndef DST_Mainset_lineno_ALREADY_DEFINED
#undef yyset_lineno
#endif
#ifndef DST_Mainget_column_ALREADY_DEFINED
#undef yyget_column
#endif
#ifndef DST_Mainset_column_ALREADY_DEFINED
#undef yyset_column
#endif
#ifndef DST_Mainwrap_ALREADY_DEFINED
#undef yywrap
#endif
#ifndef DST_Mainget_lval_ALREADY_DEFINED
#undef yyget_lval
#endif
#ifndef DST_Mainset_lval_ALREADY_DEFINED
#undef yyset_lval
#endif
#ifndef DST_Mainget_lloc_ALREADY_DEFINED
#undef yyget_lloc
#endif
#ifndef DST_Mainset_lloc_ALREADY_DEFINED
#undef yyset_lloc
#endif
#ifndef DST_Mainalloc_ALREADY_DEFINED
#undef yyalloc
#endif
#ifndef DST_Mainrealloc_ALREADY_DEFINED
#undef yyrealloc
#endif
#ifndef DST_Mainfree_ALREADY_DEFINED
#undef yyfree
#endif
#ifndef DST_Maintext_ALREADY_DEFINED
#undef yytext
#endif
#ifndef DST_Mainleng_ALREADY_DEFINED
#undef yyleng
#endif
#ifndef DST_Mainin_ALREADY_DEFINED
#undef yyin
#endif
#ifndef DST_Mainout_ALREADY_DEFINED
#undef yyout
#endif
#ifndef DST_Main_flex_debug_ALREADY_DEFINED
#undef yy_flex_debug
#endif
#ifndef DST_Mainlineno_ALREADY_DEFINED
#undef yylineno
#endif
#ifndef DST_Maintables_fload_ALREADY_DEFINED
#undef yytables_fload
#endif
#ifndef DST_Maintables_destroy_ALREADY_DEFINED
#undef yytables_destroy
#endif
#ifndef DST_MainTABLES_NAME_ALREADY_DEFINED
#undef yyTABLES_NAME
#endif

#line 69 "./DST_Main_lexer.l"


#line 708 "./DST_Main_lexer.h"
#undef DST_MainIN_HEADER
#endif /* DST_MainHEADER_H */
