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
#include "DST_Setting/Flex/Lexer.h"
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
#include "Bison/DST_Setting_parser.tab.h"
void showError();
extern int DST_Settinglex();

static bool local_store = false;
static int column = 0;
static int handleColumn(const std::string& text);
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> local_objects;
#ifndef yyval
#define yyval yytext
#endif //yyval
%}

LEFT_BRACKETS	([{][{])
RIGHT_BRACKETS	([}][}])
DOT	([\.])
ADD_ASSIGNMENT	([+][=])
EQUAL	([=])
INVALID	([\[][Ii]nvalid[\]])
LEFT_SQUARE_BRACKET	([\[])
RIGHT_SQUARE_BRACKET	([\]])
USER_INPUT	([<][^>]*[>])
VARNAME	([a-zA-Z]+[a-zA-Z_0-9]*)
ALTERNATE_FIELD_1_0	([@][<]([^>]|([>][>]*[^>@]))*[>][>]*[@])
ALTERNATE_FIELD_1_1	([#][<]([^>]|([>][>]*[^>#]))*[>][>]*[#])
ALTERNATE_FIELD_1_2	([!][<]([^>]|([>][>]*[^>!]))*[>][>]*[!])
ALTERNATE_FIELD_1_3	([?][<]([^>]|([>][>]*[^>?]))*[>][>]*[?])
ALTERNATE_FIELD_1_4	([|][<]([^>]|([>][>]*[^>|]))*[>][>]*[|])
ALTERNATE_FIELD_1_5	([:][<]([^>]|([>][>]*[^>:]))*[>][>]*[:])
ALTERNATE_FIELD_2_0_0	([@][@][<](([^>])|([>][>]*([^>]([^@]))))*[>][>]*[@][@])
ALTERNATE_FIELD_2_0_1	([@][#][<](([^>])|([>][>]*([^>]([^@]))))*[>][>]*[#][@])
ALTERNATE_FIELD_2_0_2	([@][!][<](([^>])|([>][>]*([^>]([^@]))))*[>][>]*[!][@])
ALTERNATE_FIELD_2_0_3	([@][?][<](([^>])|([>][>]*([^>]([^@]))))*[>][>]*[?][@])
ALTERNATE_FIELD_2_0_4	([@][|][<](([^>])|([>][>]*([^>]([^@]))))*[>][>]*[|][@])
ALTERNATE_FIELD_2_0_5	([@][:][<](([^>])|([>][>]*([^>]([^@]))))*[>][>]*[:][@])
ALTERNATE_FIELD_2_1_0	([#][@][<](([^>])|([>][>]*([^>]([^#]))))*[>][>]*[@][#])
ALTERNATE_FIELD_2_1_1	([#][#][<](([^>])|([>][>]*([^>]([^#]))))*[>][>]*[#][#])
ALTERNATE_FIELD_2_1_2	([#][!][<](([^>])|([>][>]*([^>]([^#]))))*[>][>]*[!][#])
ALTERNATE_FIELD_2_1_3	([#][?][<](([^>])|([>][>]*([^>]([^#]))))*[>][>]*[?][#])
ALTERNATE_FIELD_2_1_4	([#][|][<](([^>])|([>][>]*([^>]([^#]))))*[>][>]*[|][#])
ALTERNATE_FIELD_2_1_5	([#][:][<](([^>])|([>][>]*([^>]([^#]))))*[>][>]*[:][#])
ALTERNATE_FIELD_2_2_0	([!][@][<](([^>])|([>][>]*([^>]([^!]))))*[>][>]*[@][!])
ALTERNATE_FIELD_2_2_1	([!][#][<](([^>])|([>][>]*([^>]([^!]))))*[>][>]*[#][!])
ALTERNATE_FIELD_2_2_2	([!][!][<](([^>])|([>][>]*([^>]([^!]))))*[>][>]*[!][!])
ALTERNATE_FIELD_2_2_3	([!][?][<](([^>])|([>][>]*([^>]([^!]))))*[>][>]*[?][!])
ALTERNATE_FIELD_2_2_4	([!][|][<](([^>])|([>][>]*([^>]([^!]))))*[>][>]*[|][!])
ALTERNATE_FIELD_2_2_5	([!][:][<](([^>])|([>][>]*([^>]([^!]))))*[>][>]*[:][!])
ALTERNATE_FIELD_2_3_0	([?][@][<](([^>])|([>][>]*([^>]([^?]))))*[>][>]*[@][?])
ALTERNATE_FIELD_2_3_1	([?][#][<](([^>])|([>][>]*([^>]([^?]))))*[>][>]*[#][?])
ALTERNATE_FIELD_2_3_2	([?][!][<](([^>])|([>][>]*([^>]([^?]))))*[>][>]*[!][?])
ALTERNATE_FIELD_2_3_3	([?][?][<](([^>])|([>][>]*([^>]([^?]))))*[>][>]*[?][?])
ALTERNATE_FIELD_2_3_4	([?][|][<](([^>])|([>][>]*([^>]([^?]))))*[>][>]*[|][?])
ALTERNATE_FIELD_2_3_5	([?][:][<](([^>])|([>][>]*([^>]([^?]))))*[>][>]*[:][?])
ALTERNATE_FIELD_2_4_0	([|][@][<](([^>])|([>][>]*([^>]([^|]))))*[>][>]*[@][|])
ALTERNATE_FIELD_2_4_1	([|][#][<](([^>])|([>][>]*([^>]([^|]))))*[>][>]*[#][|])
ALTERNATE_FIELD_2_4_2	([|][!][<](([^>])|([>][>]*([^>]([^|]))))*[>][>]*[!][|])
ALTERNATE_FIELD_2_4_3	([|][?][<](([^>])|([>][>]*([^>]([^|]))))*[>][>]*[?][|])
ALTERNATE_FIELD_2_4_4	([|][|][<](([^>])|([>][>]*([^>]([^|]))))*[>][>]*[|][|])
ALTERNATE_FIELD_2_4_5	([|][:][<](([^>])|([>][>]*([^>]([^|]))))*[>][>]*[:][|])
ALTERNATE_FIELD_2_5_0	([:][@][<](([^>])|([>][>]*([^>]([^:]))))*[>][>]*[@][:])
ALTERNATE_FIELD_2_5_1	([:][#][<](([^>])|([>][>]*([^>]([^:]))))*[>][>]*[#][:])
ALTERNATE_FIELD_2_5_2	([:][!][<](([^>])|([>][>]*([^>]([^:]))))*[>][>]*[!][:])
ALTERNATE_FIELD_2_5_3	([:][?][<](([^>])|([>][>]*([^>]([^:]))))*[>][>]*[?][:])
ALTERNATE_FIELD_2_5_4	([:][|][<](([^>])|([>][>]*([^>]([^:]))))*[>][>]*[|][:])
ALTERNATE_FIELD_2_5_5	([:][:][<](([^>])|([>][>]*([^>]([^:]))))*[>][>]*[:][:])
OTHER	([\n\r\t\b\f\v\a ]*)

%%

{LEFT_BRACKETS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LEFT_BRACKETS);;}
{RIGHT_BRACKETS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (RIGHT_BRACKETS);;}
{DOT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (DOT);;}
{ADD_ASSIGNMENT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ADD_ASSIGNMENT);;}
{EQUAL}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (EQUAL);;}
{INVALID}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (INVALID);;}
{LEFT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LEFT_SQUARE_BRACKET);;}
{RIGHT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (RIGHT_SQUARE_BRACKET);;}
{USER_INPUT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (USER_INPUT);;}
{VARNAME}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (VARNAME);;}
{ALTERNATE_FIELD_1_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_1_0);;}
{ALTERNATE_FIELD_1_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_1_1);;}
{ALTERNATE_FIELD_1_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_1_2);;}
{ALTERNATE_FIELD_1_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_1_3);;}
{ALTERNATE_FIELD_1_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_1_4);;}
{ALTERNATE_FIELD_1_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_1_5);;}
{ALTERNATE_FIELD_2_0_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_0_0);;}
{ALTERNATE_FIELD_2_0_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_0_1);;}
{ALTERNATE_FIELD_2_0_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_0_2);;}
{ALTERNATE_FIELD_2_0_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_0_3);;}
{ALTERNATE_FIELD_2_0_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_0_4);;}
{ALTERNATE_FIELD_2_0_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_0_5);;}
{ALTERNATE_FIELD_2_1_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_1_0);;}
{ALTERNATE_FIELD_2_1_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_1_1);;}
{ALTERNATE_FIELD_2_1_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_1_2);;}
{ALTERNATE_FIELD_2_1_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_1_3);;}
{ALTERNATE_FIELD_2_1_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_1_4);;}
{ALTERNATE_FIELD_2_1_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_1_5);;}
{ALTERNATE_FIELD_2_2_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_2_0);;}
{ALTERNATE_FIELD_2_2_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_2_1);;}
{ALTERNATE_FIELD_2_2_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_2_2);;}
{ALTERNATE_FIELD_2_2_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_2_3);;}
{ALTERNATE_FIELD_2_2_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_2_4);;}
{ALTERNATE_FIELD_2_2_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_2_5);;}
{ALTERNATE_FIELD_2_3_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_3_0);;}
{ALTERNATE_FIELD_2_3_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_3_1);;}
{ALTERNATE_FIELD_2_3_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_3_2);;}
{ALTERNATE_FIELD_2_3_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_3_3);;}
{ALTERNATE_FIELD_2_3_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_3_4);;}
{ALTERNATE_FIELD_2_3_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_3_5);;}
{ALTERNATE_FIELD_2_4_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_4_0);;}
{ALTERNATE_FIELD_2_4_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_4_1);;}
{ALTERNATE_FIELD_2_4_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_4_2);;}
{ALTERNATE_FIELD_2_4_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_4_3);;}
{ALTERNATE_FIELD_2_4_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_4_4);;}
{ALTERNATE_FIELD_2_4_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_4_5);;}
{ALTERNATE_FIELD_2_5_0}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_5_0);;}
{ALTERNATE_FIELD_2_5_1}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_5_1);;}
{ALTERNATE_FIELD_2_5_2}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_5_2);;}
{ALTERNATE_FIELD_2_5_3}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_5_3);;}
{ALTERNATE_FIELD_2_5_4}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_5_4);;}
{ALTERNATE_FIELD_2_5_5}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ALTERNATE_FIELD_2_5_5);;}
{OTHER}	{handleColumn(yyval);if (!local_store) ;}

%%
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

static int handleColumn(const std::string& text)
{
	int currentColumn = column;
	currentColumn += text.size();
	for (auto character : text)
	{
		if (character == '\n')
		{
			currentColumn = 0;
			break;
		}
	}
	
	return currentColumn;
}

std::vector<const deamer::external::cpp::lexer::TerminalObject*> DST_Setting::lexer::Lexer::Tokenize(const std::string& text) const
{
	local_store = true;
	column = 0;

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


