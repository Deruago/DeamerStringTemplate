%{
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
%}

%token<Terminal> LEFT_BRACKETS
%token<Terminal> RIGHT_BRACKETS
%token<Terminal> DOT
%token<Terminal> ADD_ASSIGNMENT
%token<Terminal> EQUAL
%token<Terminal> INVALID
%token<Terminal> LEFT_SQUARE_BRACKET
%token<Terminal> RIGHT_SQUARE_BRACKET
%token<Terminal> USER_INPUT
%token<Terminal> VARNAME

%nterm<DST_Setting_program> program
%nterm<DST_Setting_stmts> stmts
%nterm<DST_Setting_stmt> stmt
%nterm<DST_Setting_abstraction> abstraction
%nterm<DST_Setting_special> special
%nterm<DST_Setting_variable_declaration> variable_declaration
%nterm<DST_Setting_main_assignment> main_assignment
%nterm<DST_Setting_keyword_assignment> keyword_assignment
%nterm<DST_Setting_scope> scope
%nterm<DST_Setting_dst_keyword> dst_keyword
%nterm<DST_Setting_user_keyword> user_keyword



%union{
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
}

%%

program:
	stmts {
		auto* const newNode = new DST_Setting::ast::node::program({::DST_Setting::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;

stmts:
	stmt stmts {
		auto* const newNode = new DST_Setting::ast::node::stmts({::DST_Setting::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2 });
		$$ = newNode;
	}
	| {
		auto* const newNode = new DST_Setting::ast::node::stmts({::DST_Setting::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		$$ = newNode;
	}
;

stmt:
	abstraction {
		auto* const newNode = new DST_Setting::ast::node::stmt({::DST_Setting::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| special {
		auto* const newNode = new DST_Setting::ast::node::stmt({::DST_Setting::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

abstraction:
	variable_declaration EQUAL main_assignment {
		auto* const newNode = new DST_Setting::ast::node::abstraction({::DST_Setting::ast::Type::abstraction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new DST_Setting::ast::node::EQUAL({::DST_Setting::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
;

special:
	variable_declaration EQUAL keyword_assignment {
		auto* const newNode = new DST_Setting::ast::node::special({::DST_Setting::ast::Type::special, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, new DST_Setting::ast::node::EQUAL({::DST_Setting::ast::Type::EQUAL, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
;

variable_declaration:
	LEFT_BRACKETS VARNAME scope RIGHT_BRACKETS {
		auto* const newNode = new DST_Setting::ast::node::variable_declaration({::DST_Setting::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::LEFT_BRACKETS({::DST_Setting::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3, new DST_Setting::ast::node::RIGHT_BRACKETS({::DST_Setting::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $4}) });
		$$ = newNode;
	}
	| LEFT_BRACKETS VARNAME RIGHT_BRACKETS {
		auto* const newNode = new DST_Setting::ast::node::variable_declaration({::DST_Setting::ast::Type::variable_declaration, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::LEFT_BRACKETS({::DST_Setting::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), new DST_Setting::ast::node::RIGHT_BRACKETS({::DST_Setting::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $3}) });
		$$ = newNode;
	}
;

main_assignment:
	USER_INPUT {
		auto* const newNode = new DST_Setting::ast::node::main_assignment({::DST_Setting::ast::Type::main_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::USER_INPUT({::DST_Setting::ast::Type::USER_INPUT, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

keyword_assignment:
	dst_keyword {
		auto* const newNode = new DST_Setting::ast::node::keyword_assignment({::DST_Setting::ast::Type::keyword_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| user_keyword {
		auto* const newNode = new DST_Setting::ast::node::keyword_assignment({::DST_Setting::ast::Type::keyword_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

scope:
	DOT VARNAME scope {
		auto* const newNode = new DST_Setting::ast::node::scope({::DST_Setting::ast::Type::scope, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::DOT({::DST_Setting::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| DOT VARNAME {
		auto* const newNode = new DST_Setting::ast::node::scope({::DST_Setting::ast::Type::scope, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::DOT({::DST_Setting::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}) });
		$$ = newNode;
	}
;

dst_keyword:
	INVALID {
		auto* const newNode = new DST_Setting::ast::node::dst_keyword({::DST_Setting::ast::Type::dst_keyword, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::INVALID({::DST_Setting::ast::Type::INVALID, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

user_keyword:
	LEFT_SQUARE_BRACKET VARNAME RIGHT_SQUARE_BRACKET {
		auto* const newNode = new DST_Setting::ast::node::user_keyword({::DST_Setting::ast::Type::user_keyword, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::LEFT_SQUARE_BRACKET({::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Setting::ast::node::VARNAME({::DST_Setting::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), new DST_Setting::ast::node::RIGHT_SQUARE_BRACKET({::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3}) });
		$$ = newNode;
	}
;

%%

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

