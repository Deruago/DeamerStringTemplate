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
%token<Terminal> ALTERNATE_FIELD_1_0
%token<Terminal> ALTERNATE_FIELD_1_1
%token<Terminal> ALTERNATE_FIELD_1_2
%token<Terminal> ALTERNATE_FIELD_1_3
%token<Terminal> ALTERNATE_FIELD_1_4
%token<Terminal> ALTERNATE_FIELD_1_5
%token<Terminal> ALTERNATE_FIELD_2_0_0
%token<Terminal> ALTERNATE_FIELD_2_0_1
%token<Terminal> ALTERNATE_FIELD_2_0_2
%token<Terminal> ALTERNATE_FIELD_2_0_3
%token<Terminal> ALTERNATE_FIELD_2_0_4
%token<Terminal> ALTERNATE_FIELD_2_0_5
%token<Terminal> ALTERNATE_FIELD_2_1_0
%token<Terminal> ALTERNATE_FIELD_2_1_1
%token<Terminal> ALTERNATE_FIELD_2_1_2
%token<Terminal> ALTERNATE_FIELD_2_1_3
%token<Terminal> ALTERNATE_FIELD_2_1_4
%token<Terminal> ALTERNATE_FIELD_2_1_5
%token<Terminal> ALTERNATE_FIELD_2_2_0
%token<Terminal> ALTERNATE_FIELD_2_2_1
%token<Terminal> ALTERNATE_FIELD_2_2_2
%token<Terminal> ALTERNATE_FIELD_2_2_3
%token<Terminal> ALTERNATE_FIELD_2_2_4
%token<Terminal> ALTERNATE_FIELD_2_2_5
%token<Terminal> ALTERNATE_FIELD_2_3_0
%token<Terminal> ALTERNATE_FIELD_2_3_1
%token<Terminal> ALTERNATE_FIELD_2_3_2
%token<Terminal> ALTERNATE_FIELD_2_3_3
%token<Terminal> ALTERNATE_FIELD_2_3_4
%token<Terminal> ALTERNATE_FIELD_2_3_5
%token<Terminal> ALTERNATE_FIELD_2_4_0
%token<Terminal> ALTERNATE_FIELD_2_4_1
%token<Terminal> ALTERNATE_FIELD_2_4_2
%token<Terminal> ALTERNATE_FIELD_2_4_3
%token<Terminal> ALTERNATE_FIELD_2_4_4
%token<Terminal> ALTERNATE_FIELD_2_4_5
%token<Terminal> ALTERNATE_FIELD_2_5_0
%token<Terminal> ALTERNATE_FIELD_2_5_1
%token<Terminal> ALTERNATE_FIELD_2_5_2
%token<Terminal> ALTERNATE_FIELD_2_5_3
%token<Terminal> ALTERNATE_FIELD_2_5_4
%token<Terminal> ALTERNATE_FIELD_2_5_5

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
%nterm<DST_Setting_alternative_field_nt_1> alternative_field_nt_1
%nterm<DST_Setting_alternative_field_nt_2> alternative_field_nt_2



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
	| alternative_field_nt_1 {
		auto* const newNode = new DST_Setting::ast::node::main_assignment({::DST_Setting::ast::Type::main_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
		$$ = newNode;
	}
	| alternative_field_nt_2 {
		auto* const newNode = new DST_Setting::ast::node::main_assignment({::DST_Setting::ast::Type::main_assignment, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { $1 });
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

alternative_field_nt_1:
	ALTERNATE_FIELD_1_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_1_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_1_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_1_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_1_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_1_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_1({::DST_Setting::ast::Type::alternative_field_nt_1, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_1_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
;

alternative_field_nt_2:
	ALTERNATE_FIELD_2_0_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_0_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_0_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_0_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_0_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_0_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {5, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_1_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {6, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_1_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {7, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_1_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {8, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_1_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {9, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_1_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {10, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_1_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {11, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_2_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {12, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_2_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {13, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_2_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {14, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_2_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {15, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_2_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {16, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_2_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {17, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_3_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {18, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_3_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {19, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_3_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {20, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_3_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {21, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_3_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {22, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_3_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {23, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_4_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {24, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_4_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {25, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_4_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {26, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_4_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {27, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_4_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {28, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_4_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {29, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_5_0 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {30, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_5_1 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {31, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_5_2 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {32, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_5_3 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {33, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_5_4 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {34, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
		$$ = newNode;
	}
	| ALTERNATE_FIELD_2_5_5 {
		auto* const newNode = new DST_Setting::ast::node::alternative_field_nt_2({::DST_Setting::ast::Type::alternative_field_nt_2, ::deamer::external::cpp::ast::NodeValue::nonterminal, {35, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5({::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5, ::deamer::external::cpp::ast::NodeValue::terminal, $1}) });
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

