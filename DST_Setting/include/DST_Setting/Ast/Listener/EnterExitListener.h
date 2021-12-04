#ifndef DST_SETTING_AST_LISTENER_ENTEREXITLISTENER_H
#define DST_SETTING_AST_LISTENER_ENTEREXITLISTENER_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
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

#include <Deamer/External/Cpp/Ast/Listener.h>
#include <Deamer/Algorithm/Tree/DFS.h>

namespace DST_Setting { namespace ast { namespace listener { 

	class EnterExitListener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		EnterExitListener() = default;
		~EnterExitListener() override = default;

	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node)  override
		{
			::deamer::algorithm::tree::DFS::Execute::Heap::Search(node,
				&::deamer::external::cpp::ast::Node::GetParent,
				&::deamer::external::cpp::ast::Node::GetNodes,
				&EnterExitListener::DispatchEntry,
				&EnterExitListener::DispatchExit,
				this);
		}

		void DispatchEntry(const ::deamer::external::cpp::ast::Node* node) 
		{
			const auto enumeratedValue = static_cast<DST_Setting::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case DST_Setting::ast::Type::LEFT_BRACKETS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::LEFT_BRACKETS*>(node));
				break;
			}

			case DST_Setting::ast::Type::RIGHT_BRACKETS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}

			case DST_Setting::ast::Type::DOT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::DOT*>(node));
				break;
			}

			case DST_Setting::ast::Type::ADD_ASSIGNMENT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ADD_ASSIGNMENT*>(node));
				break;
			}

			case DST_Setting::ast::Type::EQUAL:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::EQUAL*>(node));
				break;
			}

			case DST_Setting::ast::Type::INVALID:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::INVALID*>(node));
				break;
			}

			case DST_Setting::ast::Type::LEFT_SQUARE_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}

			case DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}

			case DST_Setting::ast::Type::USER_INPUT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::USER_INPUT*>(node));
				break;
			}

			case DST_Setting::ast::Type::VARNAME:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::VARNAME*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*>(node));
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*>(node));
				break;
			}

			case DST_Setting::ast::Type::OTHER:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::OTHER*>(node));
				break;
			}


			// Nonterminal cases
			
			case DST_Setting::ast::Type::program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::program*>(node));
				break;
			}

			case DST_Setting::ast::Type::stmts:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::stmts*>(node));
				break;
			}

			case DST_Setting::ast::Type::stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::stmt*>(node));
				break;
			}

			case DST_Setting::ast::Type::abstraction:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::abstraction*>(node));
				break;
			}

			case DST_Setting::ast::Type::special:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::special*>(node));
				break;
			}

			case DST_Setting::ast::Type::variable_declaration:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::variable_declaration*>(node));
				break;
			}

			case DST_Setting::ast::Type::main_assignment:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::main_assignment*>(node));
				break;
			}

			case DST_Setting::ast::Type::keyword_assignment:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::keyword_assignment*>(node));
				break;
			}

			case DST_Setting::ast::Type::scope:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::scope*>(node));
				break;
			}

			case DST_Setting::ast::Type::dst_keyword:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::dst_keyword*>(node));
				break;
			}

			case DST_Setting::ast::Type::user_keyword:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::user_keyword*>(node));
				break;
			}

			case DST_Setting::ast::Type::alternative_field_nt_1:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::alternative_field_nt_1*>(node));
				break;
			}

			case DST_Setting::ast::Type::alternative_field_nt_2:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Setting::ast::node::alternative_field_nt_2*>(node));
				break;
			}

			}
		}

		void DispatchExit(const ::deamer::external::cpp::ast::Node* node) 
		{
			const auto enumeratedValue = static_cast<DST_Setting::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case DST_Setting::ast::Type::LEFT_BRACKETS:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::LEFT_BRACKETS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::RIGHT_BRACKETS:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::RIGHT_BRACKETS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::DOT:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::DOT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ADD_ASSIGNMENT:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ADD_ASSIGNMENT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::EQUAL:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::EQUAL*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::INVALID:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::INVALID*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::LEFT_SQUARE_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::LEFT_SQUARE_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::USER_INPUT:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::USER_INPUT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::VARNAME:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::VARNAME*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::OTHER:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Setting::ast::node::OTHER*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}


			// Nonterminal cases
			
			case DST_Setting::ast::Type::program:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::stmts:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::stmts*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::stmt:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::abstraction:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::abstraction*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::special:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::special*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::variable_declaration:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::variable_declaration*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::main_assignment:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::main_assignment*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::keyword_assignment:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::keyword_assignment*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::scope:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::scope*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::dst_keyword:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::dst_keyword*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::user_keyword:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::user_keyword*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::alternative_field_nt_1:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::alternative_field_nt_1*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Setting::ast::Type::alternative_field_nt_2:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Setting::ast::node::alternative_field_nt_2*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const DST_Setting::ast::node::LEFT_BRACKETS* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::RIGHT_BRACKETS* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::DOT* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ADD_ASSIGNMENT* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::EQUAL* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::INVALID* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::LEFT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::USER_INPUT* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_1_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_1_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_1_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_1_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_1_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_1_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::OTHER* node) 
		{
		}

		
		virtual void ListenExit(const DST_Setting::ast::node::LEFT_BRACKETS* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::RIGHT_BRACKETS* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::DOT* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ADD_ASSIGNMENT* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::EQUAL* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::INVALID* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::LEFT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::USER_INPUT* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_1_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_1_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_1_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_1_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_1_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_1_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::OTHER* node) 
		{
		}


		
		virtual void ListenEntry(const DST_Setting::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::stmts* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::stmt* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::abstraction* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::special* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::main_assignment* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::keyword_assignment* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::scope* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::dst_keyword* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::user_keyword* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::alternative_field_nt_1* node) 
		{
		}

		virtual void ListenEntry(const DST_Setting::ast::node::alternative_field_nt_2* node) 
		{
		}

		
		virtual void ListenExit(const DST_Setting::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::stmts* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::stmt* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::abstraction* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::special* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::variable_declaration* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::main_assignment* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::keyword_assignment* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::scope* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::dst_keyword* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::user_keyword* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::alternative_field_nt_1* node) 
		{
		}

		virtual void ListenExit(const DST_Setting::ast::node::alternative_field_nt_2* node) 
		{
		}


		
		virtual void EnterTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterAnything(const ::deamer::external::cpp::ast::Node* node) 
		{
		}

		virtual void ExitAnything(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
	};

}}}

#endif // DST_SETTING_AST_LISTENER_ENTEREXITLISTENER_H