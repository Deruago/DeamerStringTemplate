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
static bool include_deleted = false;
static int column = 0;
static void handleColumn(const std::string& text);
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> 
local_objects;


#ifndef yyval
#define yyval yytext
#endif // yyval
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

DEAMER_RESERVED_UNRECOGNIZED_RULE_MATCH	(.)

%%

{LEFT_BRACKETS}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(1))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(1))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(1)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(1)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_BRACKETS); }
{RIGHT_BRACKETS}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(2))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(2))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(2)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(2)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_BRACKETS); }
{DOT}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(3))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(3))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(3)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(3)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (DOT); }
{ADD_ASSIGNMENT}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(4))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(4))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(4)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(4)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ADD_ASSIGNMENT); }
{EQUAL}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(5))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(5))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(5)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(5)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (EQUAL); }
{INVALID}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(6))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(6))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(6)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(6)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (INVALID); }
{LEFT_SQUARE_BRACKET}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(7))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(7))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(7)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(7)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_SQUARE_BRACKET); }
{RIGHT_SQUARE_BRACKET}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(8))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(8))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(8)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(8)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_SQUARE_BRACKET); }
{USER_INPUT}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(9))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(9))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(9)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(9)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (USER_INPUT); }
{VARNAME}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(10))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(10))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(10)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(10)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (VARNAME); }
{ALTERNATE_FIELD_1_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(11))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(11))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(11)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(11)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_1_0); }
{ALTERNATE_FIELD_1_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(12))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(12))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(12)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(12)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_1_1); }
{ALTERNATE_FIELD_1_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(13))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(13))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(13)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(13)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_1_2); }
{ALTERNATE_FIELD_1_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(14))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(14))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(14)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(14)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_1_3); }
{ALTERNATE_FIELD_1_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(15))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(15))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(15)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(15)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_1_4); }
{ALTERNATE_FIELD_1_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(16))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(16))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(16)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(16)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_1_5); }
{ALTERNATE_FIELD_2_0_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(17))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(17))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(17)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(17)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_0_0); }
{ALTERNATE_FIELD_2_0_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(18))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(18))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(18)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(18)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_0_1); }
{ALTERNATE_FIELD_2_0_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(19))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(19))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(19)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(19)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_0_2); }
{ALTERNATE_FIELD_2_0_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(20))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(20))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(20)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(20)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_0_3); }
{ALTERNATE_FIELD_2_0_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(21))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(21))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(21)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(21)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_0_4); }
{ALTERNATE_FIELD_2_0_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(22))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(22))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(22)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(22)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_0_5); }
{ALTERNATE_FIELD_2_1_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(23))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(23))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(23)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(23)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_1_0); }
{ALTERNATE_FIELD_2_1_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(24))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(24))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(24)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(24)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_1_1); }
{ALTERNATE_FIELD_2_1_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(25))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(25))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(25)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(25)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_1_2); }
{ALTERNATE_FIELD_2_1_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(26))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(26))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(26)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(26)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_1_3); }
{ALTERNATE_FIELD_2_1_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(27))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(27))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(27)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(27)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_1_4); }
{ALTERNATE_FIELD_2_1_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(28))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(28))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(28)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(28)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_1_5); }
{ALTERNATE_FIELD_2_2_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(29))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(29))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(29)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(29)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_2_0); }
{ALTERNATE_FIELD_2_2_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(30))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(30))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(30)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(30)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_2_1); }
{ALTERNATE_FIELD_2_2_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(31))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(31))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(31)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(31)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_2_2); }
{ALTERNATE_FIELD_2_2_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(32))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(32))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(32)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(32)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_2_3); }
{ALTERNATE_FIELD_2_2_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(33))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(33))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(33)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(33)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_2_4); }
{ALTERNATE_FIELD_2_2_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(34))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(34))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(34)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(34)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_2_5); }
{ALTERNATE_FIELD_2_3_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(35))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(35))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(35)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(35)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_3_0); }
{ALTERNATE_FIELD_2_3_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(36))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(36))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(36)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(36)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_3_1); }
{ALTERNATE_FIELD_2_3_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(37))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(37))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(37)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(37)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_3_2); }
{ALTERNATE_FIELD_2_3_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(38))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(38))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(38)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(38)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_3_3); }
{ALTERNATE_FIELD_2_3_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(39))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(39))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(39)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(39)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_3_4); }
{ALTERNATE_FIELD_2_3_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(40))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(40))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(40)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(40)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_3_5); }
{ALTERNATE_FIELD_2_4_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(41))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(41))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(41)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(41)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_4_0); }
{ALTERNATE_FIELD_2_4_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(42))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(42))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(42)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(42)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_4_1); }
{ALTERNATE_FIELD_2_4_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(43))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(43))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(43)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(43)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_4_2); }
{ALTERNATE_FIELD_2_4_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(44))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(44))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(44)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(44)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_4_3); }
{ALTERNATE_FIELD_2_4_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(45))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(45))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(45)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(45)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_4_4); }
{ALTERNATE_FIELD_2_4_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(46))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(46))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(46)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(46)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_4_5); }
{ALTERNATE_FIELD_2_5_0}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(47))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(47))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(47)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(47)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_5_0); }
{ALTERNATE_FIELD_2_5_1}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(48))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(48))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(48)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(48)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_5_1); }
{ALTERNATE_FIELD_2_5_2}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(49))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(49))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(49)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(49)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_5_2); }
{ALTERNATE_FIELD_2_5_3}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(50))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(50))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(50)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(50)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_5_3); }
{ALTERNATE_FIELD_2_5_4}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(51))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(51))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(51)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(51)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_5_4); }
{ALTERNATE_FIELD_2_5_5}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(52))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(52))); else if (local_store && false); else if (!false || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(52)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(52)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ALTERNATE_FIELD_2_5_5); }
{OTHER}	{  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(53))); else if (local_store && false) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(53))); else if (local_store && true); else if (!true || include_deleted) DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(53)); else DST_Settinglval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(53)); handleColumn(yyval); if ((!local_store && false) || (!local_store && include_deleted)) return (OTHER); }

{DEAMER_RESERVED_UNRECOGNIZED_RULE_MATCH} { if (local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(0))); }

%%

static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

static void handleColumn(const std::string& text)
{
	int& currentColumn = column;
	currentColumn += text.size();
	for (auto character : text)
	{
		if (character == '\n')
		{
			currentColumn = 0;
			break;
		}
	}
}

std::vector<const ::deamer::external::cpp::lexer::TerminalObject*> DST_Setting::flex::lexer::Lexer::Tokenize(const std::string& text, ::deamer::external::cpp::lexer::TerminalConstructionPolicy constructionPolicy) const
{
	if (constructionPolicy == ::deamer::external::cpp::lexer::TerminalConstructionPolicy::include_deleted_terminals)
	{
		include_deleted = true;
	}
	else
	{
		include_deleted = false;
	}

	local_store = true;
	column = 0;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;
	include_deleted = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}