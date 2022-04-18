#ifndef DST_MAIN_AST_UTILITY_CREATENODE_H
#define DST_MAIN_AST_UTILITY_CREATENODE_H

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


#include <Deamer/External/Cpp/Ast/Node.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <string>
#include <vector>

namespace DST_Main { namespace ast { namespace utility { 

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
			switch(static_cast<::DST_Main::ast::Type>(nodeType))
			{
			case ::DST_Main::ast::Type::deamerreserved_unknown: {
				return new ::deamer::external::cpp::ast::Node(
					deamer::external::cpp::ast::NodeInformation{
						nodeType, deamer::external::cpp::ast::NodeValue::terminal, nodeValue,
						lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::DOT: {
				return new ::DST_Main::ast::node::DOT({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED: {
				return new ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED: {
				return new ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::LEFT_BRACKETS: {
				return new ::DST_Main::ast::node::LEFT_BRACKETS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::RIGHT_BRACKETS: {
				return new ::DST_Main::ast::node::RIGHT_BRACKETS({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::LEFT_BRACKET: {
				return new ::DST_Main::ast::node::LEFT_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::RIGHT_BRACKET: {
				return new ::DST_Main::ast::node::RIGHT_BRACKET({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::VARNAME: {
				return new ::DST_Main::ast::node::VARNAME({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::BACKSLASH: {
				return new ::DST_Main::ast::node::BACKSLASH({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::OTHER: {
				return new ::DST_Main::ast::node::OTHER({nodeType, ::deamer::external::cpp::ast::NodeValue::terminal, nodeValue, lineNumber, columnNumber});
			}
			case ::DST_Main::ast::Type::program: {
				return new ::DST_Main::ast::node::program({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Main::ast::Type::stmts: {
				return new ::DST_Main::ast::node::stmts({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Main::ast::Type::stmt: {
				return new ::DST_Main::ast::node::stmt({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Main::ast::Type::variable_insertion: {
				return new ::DST_Main::ast::node::variable_insertion({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Main::ast::Type::other_symbols: {
				return new ::DST_Main::ast::node::other_symbols({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Main::ast::Type::variable: {
				return new ::DST_Main::ast::node::variable({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}
			case ::DST_Main::ast::Type::scope: {
				return new ::DST_Main::ast::node::scope({nodeType, ::deamer::external::cpp::ast::NodeValue::nonterminal, {productionRuleId, productionRuleType}}, nodes);
			}

			}

			return nullptr;
		}
	};

}}}

#endif // DST_MAIN_AST_UTILITY_CREATENODE_H