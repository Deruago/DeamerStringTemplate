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

#ifndef YY_DST_MAIN_DST_MAIN_PARSER_TAB_H_INCLUDED
# define YY_DST_MAIN_DST_MAIN_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int DST_Maindebug;
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
    DOT = 258,                     /* DOT  */
    LEFT_BRACKETS_ESCAPED = 259,   /* LEFT_BRACKETS_ESCAPED  */
    RIGHT_BRACKETS_ESCAPED = 260,  /* RIGHT_BRACKETS_ESCAPED  */
    LEFT_BRACKETS = 261,           /* LEFT_BRACKETS  */
    RIGHT_BRACKETS = 262,          /* RIGHT_BRACKETS  */
    LEFT_BRACKET = 263,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 264,           /* RIGHT_BRACKET  */
    VARNAME = 265,                 /* VARNAME  */
    BACKSLASH = 266,               /* BACKSLASH  */
    OTHER = 267                    /* OTHER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 72 "./DST_Main_parser.y"

	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::DST_Main::ast::node::DOT* DST_Main_DOT;
	::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED* DST_Main_LEFT_BRACKETS_ESCAPED;
	::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED* DST_Main_RIGHT_BRACKETS_ESCAPED;
	::DST_Main::ast::node::LEFT_BRACKETS* DST_Main_LEFT_BRACKETS;
	::DST_Main::ast::node::RIGHT_BRACKETS* DST_Main_RIGHT_BRACKETS;
	::DST_Main::ast::node::LEFT_BRACKET* DST_Main_LEFT_BRACKET;
	::DST_Main::ast::node::RIGHT_BRACKET* DST_Main_RIGHT_BRACKET;
	::DST_Main::ast::node::VARNAME* DST_Main_VARNAME;
	::DST_Main::ast::node::BACKSLASH* DST_Main_BACKSLASH;
	::DST_Main::ast::node::OTHER* DST_Main_OTHER;
	::DST_Main::ast::node::program* DST_Main_program;
	::DST_Main::ast::node::stmts* DST_Main_stmts;
	::DST_Main::ast::node::stmt* DST_Main_stmt;
	::DST_Main::ast::node::variable_insertion* DST_Main_variable_insertion;
	::DST_Main::ast::node::other_symbols* DST_Main_other_symbols;
	::DST_Main::ast::node::variable* DST_Main_variable;
	::DST_Main::ast::node::scope* DST_Main_scope;


#line 98 "DST_Main_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE DST_Mainlval;


int DST_Mainparse (void);


#endif /* !YY_DST_MAIN_DST_MAIN_PARSER_TAB_H_INCLUDED  */
