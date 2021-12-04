#ifndef DST_AST_LISTENER_ENTEREXITLISTENER_H
#define DST_AST_LISTENER_ENTEREXITLISTENER_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Enum/Type.h"

#include "DST/Ast/Node/ANY.h"


#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/deamerreserved_star__ANY__.h"

#include <Deamer/External/Cpp/Ast/Listener.h>
#include <Deamer/Algorithm/Tree/DFS.h>

namespace DST { namespace ast { namespace listener { 

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
			const auto enumeratedValue = static_cast<DST::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case DST::ast::Type::ANY:
			{
				// Entry terminal
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const DST::ast::node::ANY*>(node));
				break;
			}


			// Nonterminal cases
			
			case DST::ast::Type::program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST::ast::node::program*>(node));
				break;
			}

			case DST::ast::Type::deamerreserved_star__ANY__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const DST::ast::node::deamerreserved_star__ANY__*>(node));
				break;
			}

			}
		}

		void DispatchExit(const ::deamer::external::cpp::ast::Node* node) 
		{
			const auto enumeratedValue = static_cast<DST::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case DST::ast::Type::ANY:
			{
				// Exit terminal
				ListenExit(static_cast<const DST::ast::node::ANY*>(node));
				ExitTerminal(node);
				ExitAnything(node);
				break;
			}


			// Nonterminal cases
			
			case DST::ast::Type::program:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case DST::ast::Type::deamerreserved_star__ANY__:
			{
				// Exit nonterminal
				ListenExit(static_cast<const DST::ast::node::deamerreserved_star__ANY__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const DST::ast::node::ANY* node) 
		{
		}

		
		virtual void ListenExit(const DST::ast::node::ANY* node) 
		{
		}


		
		virtual void ListenEntry(const DST::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const DST::ast::node::deamerreserved_star__ANY__* node) 
		{
		}

		
		virtual void ListenExit(const DST::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const DST::ast::node::deamerreserved_star__ANY__* node) 
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

#endif // DST_AST_LISTENER_ENTEREXITLISTENER_H