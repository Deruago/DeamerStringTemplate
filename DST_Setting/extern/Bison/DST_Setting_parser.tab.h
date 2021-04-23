/* A Bison parser, made by GNU Bison 3.7.5.  */

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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
    VARNAME = 267                  /* VARNAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 75 "./DST_Setting_parser.y"

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

#line 102 "DST_Setting_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE DST_Settinglval;

int DST_Settingparse (void);

#endif /* !YY_DST_SETTING_DST_SETTING_PARSER_TAB_H_INCLUDED  */
