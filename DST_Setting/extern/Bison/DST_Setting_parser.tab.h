/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_DST_SETTING_DST_SETTING_PARSER_TAB_H_INCLUDED
# define YY_DST_SETTING_DST_SETTING_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int DST_Settingdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LEFT_BRACKETS = 258,           /* LEFT_BRACKETS  */
    RIGHT_BRACKETS = 259,          /* RIGHT_BRACKETS  */
    DOT = 260,                     /* DOT  */
    ADD_ASSIGNMENT = 261,          /* ADD_ASSIGNMENT  */
    EQUAL = 262,                   /* EQUAL  */
    INVALID = 263,                 /* INVALID  */
    LEFT_SQUARE_BRACKET = 264,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 265,    /* RIGHT_SQUARE_BRACKET  */
    USER_INPUT = 266,              /* USER_INPUT  */
    VARNAME = 267,                 /* VARNAME  */
    ALTERNATE_FIELD_1_0 = 268,     /* ALTERNATE_FIELD_1_0  */
    ALTERNATE_FIELD_1_1 = 269,     /* ALTERNATE_FIELD_1_1  */
    ALTERNATE_FIELD_1_2 = 270,     /* ALTERNATE_FIELD_1_2  */
    ALTERNATE_FIELD_1_3 = 271,     /* ALTERNATE_FIELD_1_3  */
    ALTERNATE_FIELD_1_4 = 272,     /* ALTERNATE_FIELD_1_4  */
    ALTERNATE_FIELD_1_5 = 273,     /* ALTERNATE_FIELD_1_5  */
    ALTERNATE_FIELD_2_0_0 = 274,   /* ALTERNATE_FIELD_2_0_0  */
    ALTERNATE_FIELD_2_0_1 = 275,   /* ALTERNATE_FIELD_2_0_1  */
    ALTERNATE_FIELD_2_0_2 = 276,   /* ALTERNATE_FIELD_2_0_2  */
    ALTERNATE_FIELD_2_0_3 = 277,   /* ALTERNATE_FIELD_2_0_3  */
    ALTERNATE_FIELD_2_0_4 = 278,   /* ALTERNATE_FIELD_2_0_4  */
    ALTERNATE_FIELD_2_0_5 = 279,   /* ALTERNATE_FIELD_2_0_5  */
    ALTERNATE_FIELD_2_1_0 = 280,   /* ALTERNATE_FIELD_2_1_0  */
    ALTERNATE_FIELD_2_1_1 = 281,   /* ALTERNATE_FIELD_2_1_1  */
    ALTERNATE_FIELD_2_1_2 = 282,   /* ALTERNATE_FIELD_2_1_2  */
    ALTERNATE_FIELD_2_1_3 = 283,   /* ALTERNATE_FIELD_2_1_3  */
    ALTERNATE_FIELD_2_1_4 = 284,   /* ALTERNATE_FIELD_2_1_4  */
    ALTERNATE_FIELD_2_1_5 = 285,   /* ALTERNATE_FIELD_2_1_5  */
    ALTERNATE_FIELD_2_2_0 = 286,   /* ALTERNATE_FIELD_2_2_0  */
    ALTERNATE_FIELD_2_2_1 = 287,   /* ALTERNATE_FIELD_2_2_1  */
    ALTERNATE_FIELD_2_2_2 = 288,   /* ALTERNATE_FIELD_2_2_2  */
    ALTERNATE_FIELD_2_2_3 = 289,   /* ALTERNATE_FIELD_2_2_3  */
    ALTERNATE_FIELD_2_2_4 = 290,   /* ALTERNATE_FIELD_2_2_4  */
    ALTERNATE_FIELD_2_2_5 = 291,   /* ALTERNATE_FIELD_2_2_5  */
    ALTERNATE_FIELD_2_3_0 = 292,   /* ALTERNATE_FIELD_2_3_0  */
    ALTERNATE_FIELD_2_3_1 = 293,   /* ALTERNATE_FIELD_2_3_1  */
    ALTERNATE_FIELD_2_3_2 = 294,   /* ALTERNATE_FIELD_2_3_2  */
    ALTERNATE_FIELD_2_3_3 = 295,   /* ALTERNATE_FIELD_2_3_3  */
    ALTERNATE_FIELD_2_3_4 = 296,   /* ALTERNATE_FIELD_2_3_4  */
    ALTERNATE_FIELD_2_3_5 = 297,   /* ALTERNATE_FIELD_2_3_5  */
    ALTERNATE_FIELD_2_4_0 = 298,   /* ALTERNATE_FIELD_2_4_0  */
    ALTERNATE_FIELD_2_4_1 = 299,   /* ALTERNATE_FIELD_2_4_1  */
    ALTERNATE_FIELD_2_4_2 = 300,   /* ALTERNATE_FIELD_2_4_2  */
    ALTERNATE_FIELD_2_4_3 = 301,   /* ALTERNATE_FIELD_2_4_3  */
    ALTERNATE_FIELD_2_4_4 = 302,   /* ALTERNATE_FIELD_2_4_4  */
    ALTERNATE_FIELD_2_4_5 = 303,   /* ALTERNATE_FIELD_2_4_5  */
    ALTERNATE_FIELD_2_5_0 = 304,   /* ALTERNATE_FIELD_2_5_0  */
    ALTERNATE_FIELD_2_5_1 = 305,   /* ALTERNATE_FIELD_2_5_1  */
    ALTERNATE_FIELD_2_5_2 = 306,   /* ALTERNATE_FIELD_2_5_2  */
    ALTERNATE_FIELD_2_5_3 = 307,   /* ALTERNATE_FIELD_2_5_3  */
    ALTERNATE_FIELD_2_5_4 = 308,   /* ALTERNATE_FIELD_2_5_4  */
    ALTERNATE_FIELD_2_5_5 = 309,   /* ALTERNATE_FIELD_2_5_5  */
    OTHER = 310                    /* OTHER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 170 "./DST_Setting_parser.y"

	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::DST_Setting::ast::node::LEFT_BRACKETS* DST_Setting_LEFT_BRACKETS;
	::DST_Setting::ast::node::RIGHT_BRACKETS* DST_Setting_RIGHT_BRACKETS;
	::DST_Setting::ast::node::DOT* DST_Setting_DOT;
	::DST_Setting::ast::node::ADD_ASSIGNMENT* DST_Setting_ADD_ASSIGNMENT;
	::DST_Setting::ast::node::EQUAL* DST_Setting_EQUAL;
	::DST_Setting::ast::node::INVALID* DST_Setting_INVALID;
	::DST_Setting::ast::node::LEFT_SQUARE_BRACKET* DST_Setting_LEFT_SQUARE_BRACKET;
	::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* DST_Setting_RIGHT_SQUARE_BRACKET;
	::DST_Setting::ast::node::USER_INPUT* DST_Setting_USER_INPUT;
	::DST_Setting::ast::node::VARNAME* DST_Setting_VARNAME;
	::DST_Setting::ast::node::ALTERNATE_FIELD_1_0* DST_Setting_ALTERNATE_FIELD_1_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_1_1* DST_Setting_ALTERNATE_FIELD_1_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_1_2* DST_Setting_ALTERNATE_FIELD_1_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_1_3* DST_Setting_ALTERNATE_FIELD_1_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_1_4* DST_Setting_ALTERNATE_FIELD_1_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_1_5* DST_Setting_ALTERNATE_FIELD_1_5;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0* DST_Setting_ALTERNATE_FIELD_2_0_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1* DST_Setting_ALTERNATE_FIELD_2_0_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2* DST_Setting_ALTERNATE_FIELD_2_0_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3* DST_Setting_ALTERNATE_FIELD_2_0_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4* DST_Setting_ALTERNATE_FIELD_2_0_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5* DST_Setting_ALTERNATE_FIELD_2_0_5;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0* DST_Setting_ALTERNATE_FIELD_2_1_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1* DST_Setting_ALTERNATE_FIELD_2_1_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2* DST_Setting_ALTERNATE_FIELD_2_1_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3* DST_Setting_ALTERNATE_FIELD_2_1_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4* DST_Setting_ALTERNATE_FIELD_2_1_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5* DST_Setting_ALTERNATE_FIELD_2_1_5;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0* DST_Setting_ALTERNATE_FIELD_2_2_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1* DST_Setting_ALTERNATE_FIELD_2_2_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2* DST_Setting_ALTERNATE_FIELD_2_2_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3* DST_Setting_ALTERNATE_FIELD_2_2_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4* DST_Setting_ALTERNATE_FIELD_2_2_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5* DST_Setting_ALTERNATE_FIELD_2_2_5;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0* DST_Setting_ALTERNATE_FIELD_2_3_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1* DST_Setting_ALTERNATE_FIELD_2_3_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2* DST_Setting_ALTERNATE_FIELD_2_3_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3* DST_Setting_ALTERNATE_FIELD_2_3_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4* DST_Setting_ALTERNATE_FIELD_2_3_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5* DST_Setting_ALTERNATE_FIELD_2_3_5;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0* DST_Setting_ALTERNATE_FIELD_2_4_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1* DST_Setting_ALTERNATE_FIELD_2_4_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2* DST_Setting_ALTERNATE_FIELD_2_4_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3* DST_Setting_ALTERNATE_FIELD_2_4_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4* DST_Setting_ALTERNATE_FIELD_2_4_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5* DST_Setting_ALTERNATE_FIELD_2_4_5;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0* DST_Setting_ALTERNATE_FIELD_2_5_0;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1* DST_Setting_ALTERNATE_FIELD_2_5_1;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2* DST_Setting_ALTERNATE_FIELD_2_5_2;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3* DST_Setting_ALTERNATE_FIELD_2_5_3;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4* DST_Setting_ALTERNATE_FIELD_2_5_4;
	::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5* DST_Setting_ALTERNATE_FIELD_2_5_5;
	::DST_Setting::ast::node::OTHER* DST_Setting_OTHER;
	::DST_Setting::ast::node::program* DST_Setting_program;
	::DST_Setting::ast::node::stmts* DST_Setting_stmts;
	::DST_Setting::ast::node::stmt* DST_Setting_stmt;
	::DST_Setting::ast::node::abstraction* DST_Setting_abstraction;
	::DST_Setting::ast::node::special* DST_Setting_special;
	::DST_Setting::ast::node::variable_declaration* DST_Setting_variable_declaration;
	::DST_Setting::ast::node::main_assignment* DST_Setting_main_assignment;
	::DST_Setting::ast::node::keyword_assignment* DST_Setting_keyword_assignment;
	::DST_Setting::ast::node::scope* DST_Setting_scope;
	::DST_Setting::ast::node::dst_keyword* DST_Setting_dst_keyword;
	::DST_Setting::ast::node::user_keyword* DST_Setting_user_keyword;
	::DST_Setting::ast::node::alternative_field_nt_1* DST_Setting_alternative_field_nt_1;
	::DST_Setting::ast::node::alternative_field_nt_2* DST_Setting_alternative_field_nt_2;


#line 190 "DST_Setting_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE DST_Settinglval;


int DST_Settingparse (void);


#endif /* !YY_DST_SETTING_DST_SETTING_PARSER_TAB_H_INCLUDED  */
