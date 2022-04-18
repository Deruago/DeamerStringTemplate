%define parse.error verbose
%define parse.lac full


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
#include "DST/Ast/Node/ANY.h"


#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/deamerreserved_star__ANY__.h"


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

%token<Terminal> ANY


%nterm<DST_program> program
%nterm<DST_deamerreserved_star__ANY__> deamerreserved_star__ANY__


%union{
	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::DST::ast::node::ANY* DST_ANY;
	::DST::ast::node::program* DST_program;
	::DST::ast::node::deamerreserved_star__ANY__* DST_deamerreserved_star__ANY__;

}

%%


program:
	deamerreserved_star__ANY__  {
		auto* const newNode = new DST::ast::node::program({::DST::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;


deamerreserved_star__ANY__:
	ANY deamerreserved_star__ANY__  {
		auto* const newNode = new DST::ast::node::deamerreserved_star__ANY__({::DST::ast::Type::deamerreserved_star__ANY__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new DST::ast::node::ANY({::DST::ast::Type::ANY, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new DST::ast::node::deamerreserved_star__ANY__({::DST::ast::Type::deamerreserved_star__ANY__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;



%%

void DSTerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* DST::bison::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = DST_scan_string(text.c_str());
	DSTparse();
	DST_delete_buffer(buf);
	DSTlex_destroy();

	return outputTree;
}
