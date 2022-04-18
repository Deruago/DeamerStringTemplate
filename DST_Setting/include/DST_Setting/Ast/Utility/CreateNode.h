#ifndef DST_SETTING_AST_UTILITY_CREATENODE_H
#define DST_SETTING_AST_UTILITY_CREATENODE_H

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


#include <Deamer/External/Cpp/Ast/Node.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <string>
#include <vector>

namespace DST_Setting { namespace ast { namespace utility { 

	struct CreateNode
	{
	private:
		std::string nodeValue;
		std::size_t nodeType = 0;
		
		std::vector<::deamer::external::cpp::ast::Node*> nodes;
		std::vector<std::size_t> baseValues;

		int lineNumber = -1;
		int columnNumber = -1;

		std::size_t productionRuleId = 0;
		::deamer::external::cpp::ast::ProductionRuleType productionRuleType =
					::deamer::external::cpp::ast::ProductionRuleType::unknown;
	
	public:
		CreateNode() = default;
		~CreateNode() = default;

	public:
		CreateNode& Node(const ::deamer::external::cpp::lexer::TerminalObject* terminalObject)
		{
			nodeValue = terminalObject->GetValue();
			nodeType = terminalObject->GetType();
			
			lineNumber = terminalObject->GetLineNumber();
			columnNumber = terminalObject->GetColumnNumber();

			return *this;
		}

		CreateNode& Node(std::size_t nodeType_)
		{
			nodeType = nodeType_;

			return *this;
		}

		CreateNode& ProductionRule(std::size_t productionRuleId_,
			::deamer::external::cpp::ast::ProductionRuleType productionRuleType_ = ::deamer::external::cpp::ast::ProductionRuleType::user)
		{
			productionRuleId = productionRuleId_;
			productionRuleType = productionRuleType_;

			return *this;
		}

		CreateNode& SubNode(::deamer::external::cpp::lexer::TerminalObject* terminalObject)
		{
			CreateNode tmp{};
			
			tmp.Node(terminalObject);
			nodes.push_back(tmp.GetNode());

			return *this;
		}

		CreateNode& SubNode(::deamer::external::cpp::ast::Node* subNode_)
		{
			nodes.push_back(subNode_);
			return *this;
		}

		::deamer::external::cpp::ast::Node* GetNode()
		{
			switch(static_cast<::DST_Setting::ast::Type>(nodeType))
			{
			case ::DST_Setting::ast::Type::deamerreserved_unknown: {
				return new ::deamer::external::cpp::ast::Node(
					deamer::external::cpp::ast::NodeInformation{
						nodeType, deamer::external::cpp::ast::NodeValue::terminal, nodeValue,
						lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::LEFT_BRACKETS: {
				return new ::DST_Setting::ast::node::LEFT_BRACKETS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::RIGHT_BRACKETS: {
				return new ::DST_Setting::ast::node::RIGHT_BRACKETS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::DOT: {
				return new ::DST_Setting::ast::node::DOT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ADD_ASSIGNMENT: {
				return new ::DST_Setting::ast::node::ADD_ASSIGNMENT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::EQUAL: {
				return new ::DST_Setting::ast::node::EQUAL({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::INVALID: {
				return new ::DST_Setting::ast::node::INVALID({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET: {
				return new ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET: {
				return new ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::USER_INPUT: {
				return new ::DST_Setting::ast::node::USER_INPUT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::VARNAME: {
				return new ::DST_Setting::ast::node::VARNAME({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5: {
				return new ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::OTHER: {
				return new ::DST_Setting::ast::node::OTHER({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Setting::ast::Type::program: {
				return new ::DST_Setting::ast::node::program({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::stmts: {
				return new ::DST_Setting::ast::node::stmts({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::stmt: {
				return new ::DST_Setting::ast::node::stmt({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::abstraction: {
				return new ::DST_Setting::ast::node::abstraction({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::special: {
				return new ::DST_Setting::ast::node::special({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::variable_declaration: {
				return new ::DST_Setting::ast::node::variable_declaration({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::main_assignment: {
				return new ::DST_Setting::ast::node::main_assignment({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::keyword_assignment: {
				return new ::DST_Setting::ast::node::keyword_assignment({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::scope: {
				return new ::DST_Setting::ast::node::scope({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::dst_keyword: {
				return new ::DST_Setting::ast::node::dst_keyword({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::user_keyword: {
				return new ::DST_Setting::ast::node::user_keyword({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::alternative_field_nt_1: {
				return new ::DST_Setting::ast::node::alternative_field_nt_1({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Setting::ast::Type::alternative_field_nt_2: {
				return new ::DST_Setting::ast::node::alternative_field_nt_2({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}

			}

			return nullptr;
		}
	};

}}}

#endif // DST_SETTING_AST_UTILITY_CREATENODE_H