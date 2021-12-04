/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         DST_Settingparse
#define yylex           DST_Settinglex
#define yyerror         DST_Settingerror
#define yydebug         DST_Settingdebug
#define yynerrs         DST_Settingnerrs
#define yylval          DST_Settinglval
#define yychar          DST_Settingchar

/* First part of user prologue.  */
#line 1 "./DST_Setting_parser.y"

#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "DST_Setting/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/DST_Setting_lexer.h"
#undef YY_NO_UNISTD_H
#include "DST_Setting/Ast/Enum/Type.h"
#include "DST_Setting/Ast/Node/LEFT_BRACKETS.h"
#include "DST_Setting/Ast/Node/RIGHT_BRACKETS.h"
#include "DST_Setting/Ast/Node/DOT.h"
#include "DST_Setting/Ast/Node/ADD_ASSIGNMENT.h"
#include "DST_Setting/Ast/Node/EQUAL.h"
#include "DST_Setting/Ast/Node/INVALID.h"
#include "DST_Setting/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "DST_Setting/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "DST_Setting/Ast/Node/USER_INPUT.h"
#include "DST_Setting/Ast/Node/VARNAME.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_5.h"
#include "DST_Setting/Ast/Node/OTHER.h"

#include "DST_Setting/Ast/Node/program.h"
#include "DST_Setting/Ast/Node/stmts.h"
#include "DST_Setting/Ast/Node/stmt.h"
#include "DST_Setting/Ast/Node/abstraction.h"
#include "DST_Setting/Ast/Node/special.h"
#include "DST_Setting/Ast/Node/variable_declaration.h"
#include "DST_Setting/Ast/Node/main_assignment.h"
#include "DST_Setting/Ast/Node/keyword_assignment.h"
#include "DST_Setting/Ast/Node/scope.h"
#include "DST_Setting/Ast/Node/dst_keyword.h"
#include "DST_Setting/Ast/Node/user_keyword.h"
#include "DST_Setting/Ast/Node/alternative_field_nt_1.h"
#include "DST_Setting/Ast/Node/alternative_field_nt_2.h"

#ifndef YY_parse_NERRS
#define YY_parse_NERRS DST_Settingnerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC DST_Settinglloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void DST_Settingerror(const char* s);
int DST_Settinglex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;

#line 171 "DST_Setting_parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "DST_Setting_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEFT_BRACKETS = 3,              /* LEFT_BRACKETS  */
  YYSYMBOL_RIGHT_BRACKETS = 4,             /* RIGHT_BRACKETS  */
  YYSYMBOL_DOT = 5,                        /* DOT  */
  YYSYMBOL_ADD_ASSIGNMENT = 6,             /* ADD_ASSIGNMENT  */
  YYSYMBOL_EQUAL = 7,                      /* EQUAL  */
  YYSYMBOL_INVALID = 8,                    /* INVALID  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 9,        /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 10,      /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_USER_INPUT = 11,                /* USER_INPUT  */
  YYSYMBOL_VARNAME = 12,                   /* VARNAME  */
  YYSYMBOL_ALTERNATE_FIELD_1_0 = 13,       /* ALTERNATE_FIELD_1_0  */
  YYSYMBOL_ALTERNATE_FIELD_1_1 = 14,       /* ALTERNATE_FIELD_1_1  */
  YYSYMBOL_ALTERNATE_FIELD_1_2 = 15,       /* ALTERNATE_FIELD_1_2  */
  YYSYMBOL_ALTERNATE_FIELD_1_3 = 16,       /* ALTERNATE_FIELD_1_3  */
  YYSYMBOL_ALTERNATE_FIELD_1_4 = 17,       /* ALTERNATE_FIELD_1_4  */
  YYSYMBOL_ALTERNATE_FIELD_1_5 = 18,       /* ALTERNATE_FIELD_1_5  */
  YYSYMBOL_ALTERNATE_FIELD_2_0_0 = 19,     /* ALTERNATE_FIELD_2_0_0  */
  YYSYMBOL_ALTERNATE_FIELD_2_0_1 = 20,     /* ALTERNATE_FIELD_2_0_1  */
  YYSYMBOL_ALTERNATE_FIELD_2_0_2 = 21,     /* ALTERNATE_FIELD_2_0_2  */
  YYSYMBOL_ALTERNATE_FIELD_2_0_3 = 22,     /* ALTERNATE_FIELD_2_0_3  */
  YYSYMBOL_ALTERNATE_FIELD_2_0_4 = 23,     /* ALTERNATE_FIELD_2_0_4  */
  YYSYMBOL_ALTERNATE_FIELD_2_0_5 = 24,     /* ALTERNATE_FIELD_2_0_5  */
  YYSYMBOL_ALTERNATE_FIELD_2_1_0 = 25,     /* ALTERNATE_FIELD_2_1_0  */
  YYSYMBOL_ALTERNATE_FIELD_2_1_1 = 26,     /* ALTERNATE_FIELD_2_1_1  */
  YYSYMBOL_ALTERNATE_FIELD_2_1_2 = 27,     /* ALTERNATE_FIELD_2_1_2  */
  YYSYMBOL_ALTERNATE_FIELD_2_1_3 = 28,     /* ALTERNATE_FIELD_2_1_3  */
  YYSYMBOL_ALTERNATE_FIELD_2_1_4 = 29,     /* ALTERNATE_FIELD_2_1_4  */
  YYSYMBOL_ALTERNATE_FIELD_2_1_5 = 30,     /* ALTERNATE_FIELD_2_1_5  */
  YYSYMBOL_ALTERNATE_FIELD_2_2_0 = 31,     /* ALTERNATE_FIELD_2_2_0  */
  YYSYMBOL_ALTERNATE_FIELD_2_2_1 = 32,     /* ALTERNATE_FIELD_2_2_1  */
  YYSYMBOL_ALTERNATE_FIELD_2_2_2 = 33,     /* ALTERNATE_FIELD_2_2_2  */
  YYSYMBOL_ALTERNATE_FIELD_2_2_3 = 34,     /* ALTERNATE_FIELD_2_2_3  */
  YYSYMBOL_ALTERNATE_FIELD_2_2_4 = 35,     /* ALTERNATE_FIELD_2_2_4  */
  YYSYMBOL_ALTERNATE_FIELD_2_2_5 = 36,     /* ALTERNATE_FIELD_2_2_5  */
  YYSYMBOL_ALTERNATE_FIELD_2_3_0 = 37,     /* ALTERNATE_FIELD_2_3_0  */
  YYSYMBOL_ALTERNATE_FIELD_2_3_1 = 38,     /* ALTERNATE_FIELD_2_3_1  */
  YYSYMBOL_ALTERNATE_FIELD_2_3_2 = 39,     /* ALTERNATE_FIELD_2_3_2  */
  YYSYMBOL_ALTERNATE_FIELD_2_3_3 = 40,     /* ALTERNATE_FIELD_2_3_3  */
  YYSYMBOL_ALTERNATE_FIELD_2_3_4 = 41,     /* ALTERNATE_FIELD_2_3_4  */
  YYSYMBOL_ALTERNATE_FIELD_2_3_5 = 42,     /* ALTERNATE_FIELD_2_3_5  */
  YYSYMBOL_ALTERNATE_FIELD_2_4_0 = 43,     /* ALTERNATE_FIELD_2_4_0  */
  YYSYMBOL_ALTERNATE_FIELD_2_4_1 = 44,     /* ALTERNATE_FIELD_2_4_1  */
  YYSYMBOL_ALTERNATE_FIELD_2_4_2 = 45,     /* ALTERNATE_FIELD_2_4_2  */
  YYSYMBOL_ALTERNATE_FIELD_2_4_3 = 46,     /* ALTERNATE_FIELD_2_4_3  */
  YYSYMBOL_ALTERNATE_FIELD_2_4_4 = 47,     /* ALTERNATE_FIELD_2_4_4  */
  YYSYMBOL_ALTERNATE_FIELD_2_4_5 = 48,     /* ALTERNATE_FIELD_2_4_5  */
  YYSYMBOL_ALTERNATE_FIELD_2_5_0 = 49,     /* ALTERNATE_FIELD_2_5_0  */
  YYSYMBOL_ALTERNATE_FIELD_2_5_1 = 50,     /* ALTERNATE_FIELD_2_5_1  */
  YYSYMBOL_ALTERNATE_FIELD_2_5_2 = 51,     /* ALTERNATE_FIELD_2_5_2  */
  YYSYMBOL_ALTERNATE_FIELD_2_5_3 = 52,     /* ALTERNATE_FIELD_2_5_3  */
  YYSYMBOL_ALTERNATE_FIELD_2_5_4 = 53,     /* ALTERNATE_FIELD_2_5_4  */
  YYSYMBOL_ALTERNATE_FIELD_2_5_5 = 54,     /* ALTERNATE_FIELD_2_5_5  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_stmts = 57,                     /* stmts  */
  YYSYMBOL_stmt = 58,                      /* stmt  */
  YYSYMBOL_abstraction = 59,               /* abstraction  */
  YYSYMBOL_special = 60,                   /* special  */
  YYSYMBOL_variable_declaration = 61,      /* variable_declaration  */
  YYSYMBOL_main_assignment = 62,           /* main_assignment  */
  YYSYMBOL_keyword_assignment = 63,        /* keyword_assignment  */
  YYSYMBOL_scope = 64,                     /* scope  */
  YYSYMBOL_dst_keyword = 65,               /* dst_keyword  */
  YYSYMBOL_user_keyword = 66,              /* user_keyword  */
  YYSYMBOL_alternative_field_nt_1 = 67,    /* alternative_field_nt_1  */
  YYSYMBOL_alternative_field_nt_2 = 68     /* alternative_field_nt_2  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   57

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  71

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   236,   236,   244,   248,   255,   259,   266,   273,   280,
     284,   291,   295,   299,   306,   310,   317,   321,   328,   335,
     342,   346,   350,   354,   358,   362,   369,   373,   377,   381,
     385,   389,   393,   397,   401,   405,   409,   413,   417,   421,
     425,   429,   433,   437,   441,   445,   449,   453,   457,   461,
     465,   469,   473,   477,   481,   485,   489,   493,   497,   501,
     505,   509
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LEFT_BRACKETS",
  "RIGHT_BRACKETS", "DOT", "ADD_ASSIGNMENT", "EQUAL", "INVALID",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "USER_INPUT", "VARNAME",
  "ALTERNATE_FIELD_1_0", "ALTERNATE_FIELD_1_1", "ALTERNATE_FIELD_1_2",
  "ALTERNATE_FIELD_1_3", "ALTERNATE_FIELD_1_4", "ALTERNATE_FIELD_1_5",
  "ALTERNATE_FIELD_2_0_0", "ALTERNATE_FIELD_2_0_1",
  "ALTERNATE_FIELD_2_0_2", "ALTERNATE_FIELD_2_0_3",
  "ALTERNATE_FIELD_2_0_4", "ALTERNATE_FIELD_2_0_5",
  "ALTERNATE_FIELD_2_1_0", "ALTERNATE_FIELD_2_1_1",
  "ALTERNATE_FIELD_2_1_2", "ALTERNATE_FIELD_2_1_3",
  "ALTERNATE_FIELD_2_1_4", "ALTERNATE_FIELD_2_1_5",
  "ALTERNATE_FIELD_2_2_0", "ALTERNATE_FIELD_2_2_1",
  "ALTERNATE_FIELD_2_2_2", "ALTERNATE_FIELD_2_2_3",
  "ALTERNATE_FIELD_2_2_4", "ALTERNATE_FIELD_2_2_5",
  "ALTERNATE_FIELD_2_3_0", "ALTERNATE_FIELD_2_3_1",
  "ALTERNATE_FIELD_2_3_2", "ALTERNATE_FIELD_2_3_3",
  "ALTERNATE_FIELD_2_3_4", "ALTERNATE_FIELD_2_3_5",
  "ALTERNATE_FIELD_2_4_0", "ALTERNATE_FIELD_2_4_1",
  "ALTERNATE_FIELD_2_4_2", "ALTERNATE_FIELD_2_4_3",
  "ALTERNATE_FIELD_2_4_4", "ALTERNATE_FIELD_2_4_5",
  "ALTERNATE_FIELD_2_5_0", "ALTERNATE_FIELD_2_5_1",
  "ALTERNATE_FIELD_2_5_2", "ALTERNATE_FIELD_2_5_3",
  "ALTERNATE_FIELD_2_5_4", "ALTERNATE_FIELD_2_5_5", "$accept", "program",
  "stmts", "stmt", "abstraction", "special", "variable_declaration",
  "main_assignment", "keyword_assignment", "scope", "dst_keyword",
  "user_keyword", "alternative_field_nt_1", "alternative_field_nt_2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-10)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,    37,     4,   -10,    -1,   -10,   -10,    44,    43,   -10,
     -10,    -8,   -10,    38,    48,   -10,    41,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,    49,   -10,    45,   -10,
     -10
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     2,     4,     5,     6,     0,     0,     1,
       3,     0,    10,     0,     0,    18,     0,    11,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       7,     8,    14,    15,    12,    13,    17,     9,     0,    16,
      19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -10,   -10,    52,   -10,   -10,   -10,   -10,   -10,   -10,    -9,
     -10,   -10,   -10,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,     6,     7,    60,    61,    14,
      62,    63,    64,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      15,    16,     1,    17,     9,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    12,    13,     8,
      66,    11,    67,    68,    13,    70,    10,    69
};

static const yytype_int8 yycheck[] =
{
       8,     9,     3,    11,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     4,     5,    12,
      12,     7,     4,    12,     5,    10,     4,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    56,    57,    58,    59,    60,    61,    12,     0,
      57,     7,     4,     5,    64,     8,     9,    11,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      62,    63,    65,    66,    67,    68,    12,     4,    12,    64,
      10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    60,    61,
      61,    62,    62,    62,    63,    63,    64,    64,    65,    66,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     3,     4,
       3,     1,     1,     1,     1,     1,     3,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: stmts  */
#line 236 "./DST_Setting_parser.y"
              {
		auto* const newNode = new DST_Setting::ast::node::program({::DST_Setting::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_stmts) });
		(yyval.DST_Setting_program) = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1296 "DST_Setting_parser.tab.c"
    break;

  case 3: /* stmts: stmt stmts  */
#line 244 "./DST_Setting_parser.y"
                   {
		auto* const newNode = new DST_Setting::ast::node::stmts({::DST_Setting::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].DST_Setting_stmt), (yyvsp[0].DST_Setting_stmts) });
		(yyval.DST_Setting_stmts) = newNode;
	}
#line 1305 "DST_Setting_parser.tab.c"
    break;

  case 4: /* stmts: %empty  */
#line 248 "./DST_Setting_parser.y"
          {
		auto* const newNode = new DST_Setting::ast::node::stmts({::DST_Setting::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.DST_Setting_stmts) = newNode;
	}
#line 1314 "DST_Setting_parser.tab.c"
    break;

  case 5: /* stmt: abstraction  */
#line 255 "./DST_Setting_parser.y"
                    {
		auto* const newNode = new DST_Setting::ast::node::stmt({::DST_Setting::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_abstraction) });
		(yyval.DST_Setting_stmt) = newNode;
	}
#line 1323 "DST_Setting_parser.tab.c"
    break;

  case 6: /* stmt: special  */
#line 259 "./DST_Setting_parser.y"
                  {
		auto* const newNode = new DST_Setting::ast::node::stmt({::DST_Setting::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_special) });
		(yyval.DST_Setting_stmt) = newNode;
	}
#line 1332 "DST_Setting_parser.tab.c"
    break;

  case 7: /* abstraction: variable_declaration EQUAL main_assignment  */
#line 266 "./DST_Setting_parser.y"
                                                   {
		auto* const newNode = new DST_Setting::ast::node::abstraction({::DST_Setting::ast::Type::abstraction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].DST_Setting_variable_declaration), new DST_Setting::ast::node::EQUAL({::DST_Setting::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].DST_Setting_main_assignment) });
		(yyval.DST_Setting_abstraction) = newNode;
	}
#line 1341 "DST_Setting_parser.tab.c"
    break;

  case 8: /* special: variable_declaration EQUAL keyword_assignment  */
#line 273 "./DST_Setting_parser.y"
                                                      {
		auto* const newNode = new DST_Setting::ast::node::special({::DST_Setting::ast::Type::special, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].DST_Setting_variable_declaration), new DST_Setting::ast::node::EQUAL({::DST_Setting::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].DST_Setting_keyword_assignment) });
		(yyval.DST_Setting_special) = newNode;
	}
#line 1350 "DST_Setting_parser.tab.c"
    break;

  case 9: /* variable_declaration: LEFT_BRACKETS VARNAME scope RIGHT_BRACKETS  */
#line 280 "./DST_Setting_parser.y"
                                                   {
		auto* const newNode = new DST_Setting::ast::node::variable_declaration({::DST_Setting::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::LEFT_BRACKETS({::DST_Setting::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].DST_Setting_scope), new DST_Setting::ast::node::RIGHT_BRACKETS({::DST_Setting::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_variable_declaration) = newNode;
	}
#line 1359 "DST_Setting_parser.tab.c"
    break;

  case 10: /* variable_declaration: LEFT_BRACKETS VARNAME RIGHT_BRACKETS  */
#line 284 "./DST_Setting_parser.y"
                                               {
		auto* const newNode = new DST_Setting::ast::node::variable_declaration({::DST_Setting::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::LEFT_BRACKETS({::DST_Setting::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), new DST_Setting::ast::node::RIGHT_BRACKETS({::DST_Setting::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_variable_declaration) = newNode;
	}
#line 1368 "DST_Setting_parser.tab.c"
    break;

  case 11: /* main_assignment: USER_INPUT  */
#line 291 "./DST_Setting_parser.y"
                   {
		auto* const newNode = new DST_Setting::ast::node::main_assignment({::DST_Setting::ast::Type::main_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::USER_INPUT({::DST_Setting::ast::Type::USER_INPUT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_main_assignment) = newNode;
	}
#line 1377 "DST_Setting_parser.tab.c"
    break;

  case 12: /* main_assignment: alternative_field_nt_1  */
#line 295 "./DST_Setting_parser.y"
                                 {
		auto* const newNode = new DST_Setting::ast::node::main_assignment({::DST_Setting::ast::Type::main_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_alternative_field_nt_1) });
		(yyval.DST_Setting_main_assignment) = newNode;
	}
#line 1386 "DST_Setting_parser.tab.c"
    break;

  case 13: /* main_assignment: alternative_field_nt_2  */
#line 299 "./DST_Setting_parser.y"
                                 {
		auto* const newNode = new DST_Setting::ast::node::main_assignment({::DST_Setting::ast::Type::main_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_alternative_field_nt_2) });
		(yyval.DST_Setting_main_assignment) = newNode;
	}
#line 1395 "DST_Setting_parser.tab.c"
    break;

  case 14: /* keyword_assignment: dst_keyword  */
#line 306 "./DST_Setting_parser.y"
                    {
		auto* const newNode = new DST_Setting::ast::node::keyword_assignment({::DST_Setting::ast::Type::keyword_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_dst_keyword) });
		(yyval.DST_Setting_keyword_assignment) = newNode;
	}
#line 1404 "DST_Setting_parser.tab.c"
    break;

  case 15: /* keyword_assignment: user_keyword  */
#line 310 "./DST_Setting_parser.y"
                       {
		auto* const newNode = new DST_Setting::ast::node::keyword_assignment({::DST_Setting::ast::Type::keyword_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].DST_Setting_user_keyword) });
		(yyval.DST_Setting_keyword_assignment) = newNode;
	}
#line 1413 "DST_Setting_parser.tab.c"
    break;

  case 16: /* scope: DOT VARNAME scope  */
#line 317 "./DST_Setting_parser.y"
                          {
		auto* const newNode = new DST_Setting::ast::node::scope({::DST_Setting::ast::Type::scope, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::DOT({::DST_Setting::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].DST_Setting_scope) });
		(yyval.DST_Setting_scope) = newNode;
	}
#line 1422 "DST_Setting_parser.tab.c"
    break;

  case 17: /* scope: DOT VARNAME  */
#line 321 "./DST_Setting_parser.y"
                      {
		auto* const newNode = new DST_Setting::ast::node::scope({::DST_Setting::ast::Type::scope, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::DOT({::DST_Setting::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_scope) = newNode;
	}
#line 1431 "DST_Setting_parser.tab.c"
    break;

  case 18: /* dst_keyword: INVALID  */
#line 328 "./DST_Setting_parser.y"
                {
		auto* const newNode = new DST_Setting::ast::node::dst_keyword({::DST_Setting::ast::Type::dst_keyword, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::INVALID({::DST_Setting::ast::Type::INVALID, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_dst_keyword) = newNode;
	}
#line 1440 "DST_Setting_parser.tab.c"
    break;

  case 19: /* user_keyword: LEFT_SQUARE_BRACKET VARNAME RIGHT_SQUARE_BRACKET  */
#line 335 "./DST_Setting_parser.y"
                                                         {
		auto* const newNode = new DST_Setting::ast::node::user_keyword({::DST_Setting::ast::Type::user_keyword, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::LEFT_SQUARE_BRACKET({::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), new DST_Setting::ast::node::RIGHT_SQUARE_BRACKET({::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_user_keyword) = newNode;
	}
#line 1449 "DST_Setting_parser.tab.c"
    break;

  case 20: /* alternative_field_nt_1: ALTERNATE_FIELD_1_0  */
#line 342 "./DST_Setting_parser.y"
                            {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_1) = newNode;
	}
#line 1458 "DST_Setting_parser.tab.c"
    break;

  case 21: /* alternative_field_nt_1: ALTERNATE_FIELD_1_1  */
#line 346 "./DST_Setting_parser.y"
                              {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_1) = newNode;
	}
#line 1467 "DST_Setting_parser.tab.c"
    break;

  case 22: /* alternative_field_nt_1: ALTERNATE_FIELD_1_2  */
#line 350 "./DST_Setting_parser.y"
                              {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_1) = newNode;
	}
#line 1476 "DST_Setting_parser.tab.c"
    break;

  case 23: /* alternative_field_nt_1: ALTERNATE_FIELD_1_3  */
#line 354 "./DST_Setting_parser.y"
                              {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_1) = newNode;
	}
#line 1485 "DST_Setting_parser.tab.c"
    break;

  case 24: /* alternative_field_nt_1: ALTERNATE_FIELD_1_4  */
#line 358 "./DST_Setting_parser.y"
                              {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_1) = newNode;
	}
#line 1494 "DST_Setting_parser.tab.c"
    break;

  case 25: /* alternative_field_nt_1: ALTERNATE_FIELD_1_5  */
#line 362 "./DST_Setting_parser.y"
                              {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_1) = newNode;
	}
#line 1503 "DST_Setting_parser.tab.c"
    break;

  case 26: /* alternative_field_nt_2: ALTERNATE_FIELD_2_0_0  */
#line 369 "./DST_Setting_parser.y"
                              {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1512 "DST_Setting_parser.tab.c"
    break;

  case 27: /* alternative_field_nt_2: ALTERNATE_FIELD_2_0_1  */
#line 373 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1521 "DST_Setting_parser.tab.c"
    break;

  case 28: /* alternative_field_nt_2: ALTERNATE_FIELD_2_0_2  */
#line 377 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1530 "DST_Setting_parser.tab.c"
    break;

  case 29: /* alternative_field_nt_2: ALTERNATE_FIELD_2_0_3  */
#line 381 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1539 "DST_Setting_parser.tab.c"
    break;

  case 30: /* alternative_field_nt_2: ALTERNATE_FIELD_2_0_4  */
#line 385 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1548 "DST_Setting_parser.tab.c"
    break;

  case 31: /* alternative_field_nt_2: ALTERNATE_FIELD_2_0_5  */
#line 389 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1557 "DST_Setting_parser.tab.c"
    break;

  case 32: /* alternative_field_nt_2: ALTERNATE_FIELD_2_1_0  */
#line 393 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1566 "DST_Setting_parser.tab.c"
    break;

  case 33: /* alternative_field_nt_2: ALTERNATE_FIELD_2_1_1  */
#line 397 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1575 "DST_Setting_parser.tab.c"
    break;

  case 34: /* alternative_field_nt_2: ALTERNATE_FIELD_2_1_2  */
#line 401 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {8, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1584 "DST_Setting_parser.tab.c"
    break;

  case 35: /* alternative_field_nt_2: ALTERNATE_FIELD_2_1_3  */
#line 405 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {9, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1593 "DST_Setting_parser.tab.c"
    break;

  case 36: /* alternative_field_nt_2: ALTERNATE_FIELD_2_1_4  */
#line 409 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {10, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1602 "DST_Setting_parser.tab.c"
    break;

  case 37: /* alternative_field_nt_2: ALTERNATE_FIELD_2_1_5  */
#line 413 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {11, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1611 "DST_Setting_parser.tab.c"
    break;

  case 38: /* alternative_field_nt_2: ALTERNATE_FIELD_2_2_0  */
#line 417 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {12, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1620 "DST_Setting_parser.tab.c"
    break;

  case 39: /* alternative_field_nt_2: ALTERNATE_FIELD_2_2_1  */
#line 421 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {13, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1629 "DST_Setting_parser.tab.c"
    break;

  case 40: /* alternative_field_nt_2: ALTERNATE_FIELD_2_2_2  */
#line 425 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {14, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1638 "DST_Setting_parser.tab.c"
    break;

  case 41: /* alternative_field_nt_2: ALTERNATE_FIELD_2_2_3  */
#line 429 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {15, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1647 "DST_Setting_parser.tab.c"
    break;

  case 42: /* alternative_field_nt_2: ALTERNATE_FIELD_2_2_4  */
#line 433 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {16, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1656 "DST_Setting_parser.tab.c"
    break;

  case 43: /* alternative_field_nt_2: ALTERNATE_FIELD_2_2_5  */
#line 437 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {17, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1665 "DST_Setting_parser.tab.c"
    break;

  case 44: /* alternative_field_nt_2: ALTERNATE_FIELD_2_3_0  */
#line 441 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {18, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1674 "DST_Setting_parser.tab.c"
    break;

  case 45: /* alternative_field_nt_2: ALTERNATE_FIELD_2_3_1  */
#line 445 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {19, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1683 "DST_Setting_parser.tab.c"
    break;

  case 46: /* alternative_field_nt_2: ALTERNATE_FIELD_2_3_2  */
#line 449 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {20, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1692 "DST_Setting_parser.tab.c"
    break;

  case 47: /* alternative_field_nt_2: ALTERNATE_FIELD_2_3_3  */
#line 453 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {21, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1701 "DST_Setting_parser.tab.c"
    break;

  case 48: /* alternative_field_nt_2: ALTERNATE_FIELD_2_3_4  */
#line 457 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {22, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1710 "DST_Setting_parser.tab.c"
    break;

  case 49: /* alternative_field_nt_2: ALTERNATE_FIELD_2_3_5  */
#line 461 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {23, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1719 "DST_Setting_parser.tab.c"
    break;

  case 50: /* alternative_field_nt_2: ALTERNATE_FIELD_2_4_0  */
#line 465 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {24, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1728 "DST_Setting_parser.tab.c"
    break;

  case 51: /* alternative_field_nt_2: ALTERNATE_FIELD_2_4_1  */
#line 469 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {25, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1737 "DST_Setting_parser.tab.c"
    break;

  case 52: /* alternative_field_nt_2: ALTERNATE_FIELD_2_4_2  */
#line 473 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {26, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1746 "DST_Setting_parser.tab.c"
    break;

  case 53: /* alternative_field_nt_2: ALTERNATE_FIELD_2_4_3  */
#line 477 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {27, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1755 "DST_Setting_parser.tab.c"
    break;

  case 54: /* alternative_field_nt_2: ALTERNATE_FIELD_2_4_4  */
#line 481 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {28, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1764 "DST_Setting_parser.tab.c"
    break;

  case 55: /* alternative_field_nt_2: ALTERNATE_FIELD_2_4_5  */
#line 485 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {29, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1773 "DST_Setting_parser.tab.c"
    break;

  case 56: /* alternative_field_nt_2: ALTERNATE_FIELD_2_5_0  */
#line 489 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {30, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1782 "DST_Setting_parser.tab.c"
    break;

  case 57: /* alternative_field_nt_2: ALTERNATE_FIELD_2_5_1  */
#line 493 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {31, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1791 "DST_Setting_parser.tab.c"
    break;

  case 58: /* alternative_field_nt_2: ALTERNATE_FIELD_2_5_2  */
#line 497 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {32, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1800 "DST_Setting_parser.tab.c"
    break;

  case 59: /* alternative_field_nt_2: ALTERNATE_FIELD_2_5_3  */
#line 501 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {33, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1809 "DST_Setting_parser.tab.c"
    break;

  case 60: /* alternative_field_nt_2: ALTERNATE_FIELD_2_5_4  */
#line 505 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {34, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1818 "DST_Setting_parser.tab.c"
    break;

  case 61: /* alternative_field_nt_2: ALTERNATE_FIELD_2_5_5  */
#line 509 "./DST_Setting_parser.y"
                                {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {35, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.DST_Setting_alternative_field_nt_2) = newNode;
	}
#line 1827 "DST_Setting_parser.tab.c"
    break;


#line 1831 "DST_Setting_parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 515 "./DST_Setting_parser.y"


void DST_Settingerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* DST_Setting::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = DST_Setting_scan_string(text.c_str());
	DST_Settingparse();
	DST_Setting_delete_buffer(buf);
	DST_Settinglex_destroy();

	return outputTree;
}

