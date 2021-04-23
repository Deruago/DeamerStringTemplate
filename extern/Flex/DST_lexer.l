%option yylineno
%option noyywrap
%option never-interactive
%option nounistd

%{
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include "DST/Flex/Lexer.h"
#include "DST/Ast/Enum/Type.h"
#include "DST/Ast/Node/LEFT_BRACKETS_ESCAPED.h"
#include "DST/Ast/Node/RIGHT_BRACKETS_ESCAPED.h"
#include "DST/Ast/Node/LEFT_BRACKETS.h"
#include "DST/Ast/Node/RIGHT_BRACKETS.h"
#include "DST/Ast/Node/LEFT_BRACKET.h"
#include "DST/Ast/Node/RIGHT_BRACKET.h"
#include "DST/Ast/Node/VARNAME.h"
#include "DST/Ast/Node/BACKSLASH.h"
#include "DST/Ast/Node/OTHER.h"

#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/stmts.h"
#include "DST/Ast/Node/stmt.h"
#include "DST/Ast/Node/variable_insertion.h"
#include "DST/Ast/Node/other_symbols.h"
#include "Bison/DST_parser.tab.h"
void showError();
extern int DSTlex();

static bool local_store = false;
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> local_objects;
#ifndef yyval
#define yyval yytext
#endif //yyval
%}

LEFT_BRACKETS_ESCAPED	([\\][{][{])
RIGHT_BRACKETS_ESCAPED	([\\][}][}])
LEFT_BRACKETS	([{][{])
RIGHT_BRACKETS	([}][}])
LEFT_BRACKET	([{])
RIGHT_BRACKET	([}])
VARNAME	([a-zA-Z]+[a-zA-Z_0-9]*)
BACKSLASH	([\\])
OTHER	([^{}\\]*)

%%

{LEFT_BRACKETS_ESCAPED}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (LEFT_BRACKETS_ESCAPED);;}
{RIGHT_BRACKETS_ESCAPED}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RIGHT_BRACKETS_ESCAPED);;}
{LEFT_BRACKETS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (LEFT_BRACKETS);;}
{RIGHT_BRACKETS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RIGHT_BRACKETS);;}
{LEFT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (LEFT_BRACKET);;}
{RIGHT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (RIGHT_BRACKET);;}
{VARNAME}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (VARNAME);;}
{BACKSLASH}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (BACKSLASH);;}
{OTHER}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno));else DSTlval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno);;if (!local_store) return (OTHER);;}

%%
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

std::vector<const deamer::external::cpp::lexer::TerminalObject*> DST::lexer::Lexer::Tokenize(const std::string& text) const
{
	local_store = true;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}


