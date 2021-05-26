#ifndef DST_Main_AST_LISTENER_DEAMER_LISTENER_H
#define DST_Main_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
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

namespace DST_Main { namespace ast { namespace listener { 

	class Listener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		Listener() = default;
		~Listener() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<DST_Main::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST_Main::ast::Type::DOT:
			{
				Listen(static_cast<const DST_Main::ast::node::DOT*>(node));
				break;
			}
			case DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED:
			{
				Listen(static_cast<const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED:
			{
				Listen(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST_Main::ast::Type::LEFT_BRACKETS:
			{
				Listen(static_cast<const DST_Main::ast::node::LEFT_BRACKETS*>(node));
				break;
			}
			case DST_Main::ast::Type::RIGHT_BRACKETS:
			{
				Listen(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}
			case DST_Main::ast::Type::LEFT_BRACKET:
			{
				Listen(static_cast<const DST_Main::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case DST_Main::ast::Type::RIGHT_BRACKET:
			{
				Listen(static_cast<const DST_Main::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case DST_Main::ast::Type::VARNAME:
			{
				Listen(static_cast<const DST_Main::ast::node::VARNAME*>(node));
				break;
			}
			case DST_Main::ast::Type::BACKSLASH:
			{
				Listen(static_cast<const DST_Main::ast::node::BACKSLASH*>(node));
				break;
			}
			case DST_Main::ast::Type::OTHER:
			{
				Listen(static_cast<const DST_Main::ast::node::OTHER*>(node));
				break;
			}

			case DST_Main::ast::Type::program:
			{
				Listen(static_cast<const DST_Main::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Main::ast::Type::stmts:
			{
				Listen(static_cast<const DST_Main::ast::node::stmts*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Main::ast::Type::stmt:
			{
				Listen(static_cast<const DST_Main::ast::node::stmt*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Main::ast::Type::variable_insertion:
			{
				Listen(static_cast<const DST_Main::ast::node::variable_insertion*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Main::ast::Type::other_symbols:
			{
				Listen(static_cast<const DST_Main::ast::node::other_symbols*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Main::ast::Type::variable:
			{
				Listen(static_cast<const DST_Main::ast::node::variable*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Main::ast::Type::scope:
			{
				Listen(static_cast<const DST_Main::ast::node::scope*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const DST_Main::ast::node::DOT* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::LEFT_BRACKETS* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::RIGHT_BRACKETS* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::VARNAME* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::BACKSLASH* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::OTHER* node)
		{
		}

		virtual void Listen(const DST_Main::ast::node::program* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::stmts* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::stmt* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::variable_insertion* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::other_symbols* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::variable* node)
		{
		}
		virtual void Listen(const DST_Main::ast::node::scope* node)
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

#endif // DST_Main_AST_LISTENER_DEAMER_LISTENER_H
