#ifndef DST_AST_LISTENER_DEAMER_LISTENER_H
#define DST_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
#include "DST/Ast/Node/DST.h"
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

namespace DST { namespace ast { namespace listener { 

	class Listener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		Listener() = default;
		~Listener() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<DST::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST::ast::Type::LEFT_BRACKETS_ESCAPED:
			{
				Listen(static_cast<const DST::ast::node::LEFT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST::ast::Type::RIGHT_BRACKETS_ESCAPED:
			{
				Listen(static_cast<const DST::ast::node::RIGHT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST::ast::Type::LEFT_BRACKETS:
			{
				Listen(static_cast<const DST::ast::node::LEFT_BRACKETS*>(node));
				break;
			}
			case DST::ast::Type::RIGHT_BRACKETS:
			{
				Listen(static_cast<const DST::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}
			case DST::ast::Type::LEFT_BRACKET:
			{
				Listen(static_cast<const DST::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case DST::ast::Type::RIGHT_BRACKET:
			{
				Listen(static_cast<const DST::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case DST::ast::Type::VARNAME:
			{
				Listen(static_cast<const DST::ast::node::VARNAME*>(node));
				break;
			}
			case DST::ast::Type::BACKSLASH:
			{
				Listen(static_cast<const DST::ast::node::BACKSLASH*>(node));
				break;
			}
			case DST::ast::Type::OTHER:
			{
				Listen(static_cast<const DST::ast::node::OTHER*>(node));
				break;
			}

			case DST::ast::Type::program:
			{
				Listen(static_cast<const DST::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case DST::ast::Type::stmts:
			{
				Listen(static_cast<const DST::ast::node::stmts*>(node));
				DefaultAction(node);
				break;
			}
			case DST::ast::Type::stmt:
			{
				Listen(static_cast<const DST::ast::node::stmt*>(node));
				DefaultAction(node);
				break;
			}
			case DST::ast::Type::variable_insertion:
			{
				Listen(static_cast<const DST::ast::node::variable_insertion*>(node));
				DefaultAction(node);
				break;
			}
			case DST::ast::Type::other_symbols:
			{
				Listen(static_cast<const DST::ast::node::other_symbols*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const DST::ast::node::LEFT_BRACKETS_ESCAPED* node)
		{
		}
		virtual void Listen(const DST::ast::node::RIGHT_BRACKETS_ESCAPED* node)
		{
		}
		virtual void Listen(const DST::ast::node::LEFT_BRACKETS* node)
		{
		}
		virtual void Listen(const DST::ast::node::RIGHT_BRACKETS* node)
		{
		}
		virtual void Listen(const DST::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Listen(const DST::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Listen(const DST::ast::node::VARNAME* node)
		{
		}
		virtual void Listen(const DST::ast::node::BACKSLASH* node)
		{
		}
		virtual void Listen(const DST::ast::node::OTHER* node)
		{
		}

		virtual void Listen(const DST::ast::node::program* node)
		{
		}
		virtual void Listen(const DST::ast::node::stmts* node)
		{
		}
		virtual void Listen(const DST::ast::node::stmt* node)
		{
		}
		virtual void Listen(const DST::ast::node::variable_insertion* node)
		{
		}
		virtual void Listen(const DST::ast::node::other_symbols* node)
		{
		}
	private:
		void DefaultAction(const ::deamer::external::cpp::ast::Node* node)
		{
			for(const auto* child : node->GetNodes())
			{
				Dispatch(child);
			}
		}
	};

}}}

#endif // DST_AST_LISTENER_DEAMER_LISTENER_H
