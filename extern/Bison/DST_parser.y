%{
#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "DST/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/DST_lexer.h"
#undef YY_NO_UNISTD_H
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

#ifndef YY_parse_NERRS
#define YY_parse_NERRS DSTnerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC DSTlloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void DSTerror(const char* s);
int DSTlex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;
%}

%token<Terminal> LEFT_BRACKETS_ESCAPED
%token<Terminal> RIGHT_BRACKETS_ESCAPED
%token<Terminal> LEFT_BRACKETS
%token<Terminal> RIGHT_BRACKETS
%token<Terminal> LEFT_BRACKET
%token<Terminal> RIGHT_BRACKET
%token<Terminal> VARNAME
%token<Terminal> BACKSLASH
%token<Terminal> OTHER

%nterm<DST_program> program
%nterm<DST_stmts> stmts
%nterm<DST_stmt> stmt
%nterm<DST_variable_insertion> variable_insertion
%nterm<DST_other_symbols> other_symbols



%union{
	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::DST::ast::node::LEFT_BRACKETS_ESCAPED* DST_LEFT_BRACKETS_ESCAPED;
	::DST::ast::node::RIGHT_BRACKETS_ESCAPED* DST_RIGHT_BRACKETS_ESCAPED;
	::DST::ast::node::LEFT_BRACKETS* DST_LEFT_BRACKETS;
	::DST::ast::node::RIGHT_BRACKETS* DST_RIGHT_BRACKETS;
	::DST::ast::node::LEFT_BRACKET* DST_LEFT_BRACKET;
	::DST::ast::node::RIGHT_BRACKET* DST_RIGHT_BRACKET;
	::DST::ast::node::VARNAME* DST_VARNAME;
	::DST::ast::node::BACKSLASH* DST_BACKSLASH;
	::DST::ast::node::OTHER* DST_OTHER;
	::DST::ast::node::program* DST_program;
	::DST::ast::node::stmts* DST_stmts;
	::DST::ast::node::stmt* DST_stmt;
	::DST::ast::node::variable_insertion* DST_variable_insertion;
	::DST::ast::node::other_symbols* DST_other_symbols;
}

%%

program:
	stmts {
		auto* const newNode = new DST::ast::node::program({::DST::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;

stmts:
	stmt stmts {
		auto* const newNode = new DST::ast::node::stmts({::DST::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1, $2 });
		$$ = newNode;
	}
	| {
		auto* const newNode = new DST::ast::node::stmts({::DST::ast::Type::stmts, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		$$ = newNode;
	}
;

stmt:
	variable_insertion {
		auto* const newNode = new DST::ast::node::stmt({::DST::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| other_symbols {
		auto* const newNode = new DST::ast::node::stmt({::DST::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
;

variable_insertion:
	LEFT_BRACKETS VARNAME RIGHT_BRACKETS {
		auto* const newNode = new DST::ast::node::variable_insertion({::DST::ast::Type::variable_insertion, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::LEFT_BRACKETS({::DST::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}), new DST::ast::node::VARNAME({::DST::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $2}), new DST::ast::node::RIGHT_BRACKETS({::DST::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $3}) });
		$$ = newNode;
	}
;

other_symbols:
	LEFT_BRACKETS_ESCAPED {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::LEFT_BRACKETS_ESCAPED({::DST::ast::Type::LEFT_BRACKETS_ESCAPED, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| RIGHT_BRACKETS_ESCAPED {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::RIGHT_BRACKETS_ESCAPED({::DST::ast::Type::RIGHT_BRACKETS_ESCAPED, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| LEFT_BRACKETS {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::LEFT_BRACKETS({::DST::ast::Type::LEFT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| RIGHT_BRACKETS {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::RIGHT_BRACKETS({::DST::ast::Type::RIGHT_BRACKETS, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| LEFT_BRACKET {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::LEFT_BRACKET({::DST::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| RIGHT_BRACKET {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::RIGHT_BRACKET({::DST::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| OTHER {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::OTHER({::DST::ast::Type::OTHER, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| BACKSLASH {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::BACKSLASH({::DST::ast::Type::BACKSLASH, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| VARNAME {
		auto* const newNode = new DST::ast::node::other_symbols({::DST::ast::Type::other_symbols, ::deamer::external::cpp::ast::NodeValue::nonterminal, {8, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST::ast::node::VARNAME({::DST::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

%%

void DSTerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* DST::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = DST_scan_string(text.c_str());
	DSTparse();
	DST_delete_buffer(buf);
	DSTlex_destroy();

	return outputTree;
}

