#ifndef DST_MAIN_AST_LISTENER_ENTEREXITLISTENER_H
#define DST_MAIN_AST_LISTENER_ENTEREXITLISTENER_H

#include "DST_Main/Ast/Node/DST_Main.h"
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

#include <Deamer/External/Cpp/Ast/Listener.h>
#include <Deamer/Algorithm/Tree/DFS.h>

namespace DST_Main { namespace ast { namespace listener { 

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
			const auto enumeratedValue = static_cast<DST_Main::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case DST_Main::ast::Type::DOT:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::DOT*>(node));
				break;
			}

			case DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*>(node));
				break;
			}

			case DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*>(node));
				break;
			}

			case DST_Main::ast::Type::LEFT_BRACKETS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::LEFT_BRACKETS*>(node));
				break;
			}

			case DST_Main::ast::Type::RIGHT_BRACKETS:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}

			case DST_Main::ast::Type::LEFT_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::LEFT_BRACKET*>(node));
				break;
			}

			case DST_Main::ast::Type::RIGHT_BRACKET:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::RIGHT_BRACKET*>(node));
				break;
			}

			case DST_Main::ast::Type::VARNAME:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::VARNAME*>(node));
				break;
			}

			case DST_Main::ast::Type::BACKSLASH:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::BACKSLASH*>(node));
				break;
			}

			case DST_Main::ast::Type::OTHER:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::OTHER*>(node));
				break;
			}


			// Nonterminal cases
			
			case DST_Main::ast::Type::program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::program*>(node));
				break;
			}

			case DST_Main::ast::Type::stmts:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::stmts*>(node));
				break;
			}

			case DST_Main::ast::Type::stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::stmt*>(node));
				break;
			}

			case DST_Main::ast::Type::variable_insertion:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::variable_insertion*>(node));
				break;
			}

			case DST_Main::ast::Type::other_symbols:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::other_symbols*>(node));
				break;
			}

			case DST_Main::ast::Type::variable:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::variable*>(node));
				break;
			}

			case DST_Main::ast::Type::scope:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST_Main::ast::node::scope*>(node));
				break;
			}

			}
		}

		void DispatchExit(const ::deamer::external::cpp::ast::Node* node) 
		{
			const auto enumeratedValue = static_cast<DST_Main::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case DST_Main::ast::Type::DOT:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::DOT*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::LEFT_BRACKETS:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::LEFT_BRACKETS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::RIGHT_BRACKETS:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::LEFT_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::LEFT_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::RIGHT_BRACKET:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::RIGHT_BRACKET*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::VARNAME:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::VARNAME*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::BACKSLASH:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::BACKSLASH*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::OTHER:
			{
				// Exit terminal
				ListenExit(static_cast<const DST_Main::ast::node::OTHER*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}


			// Nonterminal cases
			
			case DST_Main::ast::Type::program:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::stmts:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::stmts*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::stmt:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::variable_insertion:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::variable_insertion*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::other_symbols:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::other_symbols*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::variable:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::variable*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST_Main::ast::Type::scope:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST_Main::ast::node::scope*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const DST_Main::ast::node::DOT* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::LEFT_BRACKETS* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::RIGHT_BRACKETS* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::LEFT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::RIGHT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::BACKSLASH* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::OTHER* node) 
		{
		}

		
		virtual void ListenExit(const DST_Main::ast::node::DOT* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::LEFT_BRACKETS* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::RIGHT_BRACKETS* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::LEFT_BRACKET* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::RIGHT_BRACKET* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::BACKSLASH* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::OTHER* node) 
		{
		}


		
		virtual void ListenEntry(const DST_Main::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::stmts* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::stmt* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::variable_insertion* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::other_symbols* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::variable* node) 
		{
		}

		virtual void ListenEntry(const DST_Main::ast::node::scope* node) 
		{
		}

		
		virtual void ListenExit(const DST_Main::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::stmts* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::stmt* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::variable_insertion* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::other_symbols* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::variable* node) 
		{
		}

		virtual void ListenExit(const DST_Main::ast::node::scope* node) 
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

#endif // DST_MAIN_AST_LISTENER_ENTEREXITLISTENER_H