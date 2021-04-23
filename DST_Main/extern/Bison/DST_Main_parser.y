%{
#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "DST_Main/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/DST_Main_lexer.h"
#undef YY_NO_UNISTD_H
#include "DST_Main/Ast/Enum/Type.h"
#include "DST_Main/Ast/Node/DOT.h"
#include "DST_Main/Ast/Node/LEFT_BRACKETS_ESCAPED.h"
#include "DST_Main/Ast/Node/RIGHT_BRACKETS_ESCAPED.h"
#include "DST_Main/Ast/Node/LEFT_BRACKETS.h"
#include "DST_Main/Ast/Node/RIGHT_BRACKETS.h"
#include "DST_Main/Ast/Node/LEFT_BRACKET.h"
#include "DST_Main/Ast/Node/RIGHT_BRACKET.h"
#include "DST_Main/Ast/Node/VARNAME.h"
#include "DST_Main/Ast/Node/BACKSLASH.h"
#include "DST_Main/Ast/Node/OTHER.h"

#include "DST_Main/Ast/Node/program.h"
#include "DST_Main/Ast/Node/stmts.h"
#include "DST_Main/Ast/Node/stmt.h"
#include "DST_Main/Ast/Node/variable_insertion.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include "DST_Main/Ast/Node/variable.h"
#include "DST_Main/Ast/Node/scope.h"

#ifndef YY_parse_NERRS
#define YY_parse_NERRS DST_Mainnerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC DST_Mainlloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void DST_Mainerror(const char* s);
int DST_Mainlex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;
%}

%token<Terminal> DOT
%token<Terminal> LEFT_BRACKETS_ESCAPED
%token<Terminal> RIGHT_BRACKETS_ESCAPED
%token<Terminal> LEFT_BRACKETS
%token<Terminal> RIGHT_BRACKETS
%token<Terminal> LEFT_BRACKET
%token<Terminal> RIGHT_BRACKET
%token<Terminal> VARNAME
%token<Terminal> BACKSLASH
%token<Terminal> OTHER

%nterm<DST_Main_program> program
%nterm<DST_Main_stmts> stmts
%nterm<DST_Main_stmt> stmt
%nterm<DST_Main_variable_insertion> variable_insertion
%nterm<DST_Main_other_symbols> other_symbols
%nterm<DST_Main_variable> variable
%nterm<DST_Main_scope> scope



%union{
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
}

%%

program:
	stmts {
		auto* const newNode = new DST_Main::ast::node::program({::DST_Main::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;

stmts:
	stmt stmts {
		auto* const newNode = new DST_Main::ast::node::stmts({::DST_Main::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2 });
		$$ = newNode;
	}
	| {
		auto* const newNode = new DST_Main::ast::node::stmts({::DST_Main::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		$$ = newNode;
	}
;

stmt:
	variable_insertion {
		auto* const newNode = new DST_Main::ast::node::stmt({::DST_Main::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| other_symbols {
		auto* const newNode = new DST_Main::ast::node::stmt({::DST_Main::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

variable_insertion:
	LEFT_BRACKETS variable RIGHT_BRACKETS {
		auto* const newNode = new DST_Main::ast::node::variable_insertion({::DST_Main::ast::Type::variable_insertion, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::LEFT_BRACKETS({::DST_Main::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), $2, new DST_Main::ast::node::RIGHT_BRACKETS({::DST_Main::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $3}) });
		$$ = newNode;
	}
;

other_symbols:
	LEFT_BRACKETS_ESCAPED {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::LEFT_BRACKETS_ESCAPED({::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| RIGHT_BRACKETS_ESCAPED {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED({::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| LEFT_BRACKETS {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::LEFT_BRACKETS({::DST_Main::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| RIGHT_BRACKETS {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::RIGHT_BRACKETS({::DST_Main::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| LEFT_BRACKET {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::LEFT_BRACKET({::DST_Main::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| RIGHT_BRACKET {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::RIGHT_BRACKET({::DST_Main::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| OTHER {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::OTHER({::DST_Main::ast::Type::OTHER, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| BACKSLASH {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::BACKSLASH({::DST_Main::ast::Type::BACKSLASH, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| VARNAME {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {8, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::VARNAME({::DST_Main::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| DOT {
		auto* const newNode = new DST_Main::ast::node::other_symbols({::DST_Main::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {9, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::DOT({::DST_Main::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

variable:
	VARNAME scope {
		auto* const newNode = new DST_Main::ast::node::variable({::DST_Main::ast::Type::variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::VARNAME({::DST_Main::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), $2 });
		$$ = newNode;
	}
	| VARNAME {
		auto* const newNode = new DST_Main::ast::node::variable({::DST_Main::ast::Type::variable, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::VARNAME({::DST_Main::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

scope:
	DOT VARNAME scope {
		auto* const newNode = new DST_Main::ast::node::scope({::DST_Main::ast::Type::scope, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::DOT({::DST_Main::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Main::ast::node::VARNAME({::DST_Main::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), $3 });
		$$ = newNode;
	}
	| DOT VARNAME {
		auto* const newNode = new DST_Main::ast::node::scope({::DST_Main::ast::Type::scope, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Main::ast::node::DOT({::DST_Main::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST_Main::ast::node::VARNAME({::DST_Main::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}) });
		$$ = newNode;
	}
;

%%

void DST_Mainerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* DST_Main::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = DST_Main_scan_string(text.c_str());
	DST_Mainparse();
	DST_Main_delete_buffer(buf);
	DST_Mainlex_destroy();

	return outputTree;
}

