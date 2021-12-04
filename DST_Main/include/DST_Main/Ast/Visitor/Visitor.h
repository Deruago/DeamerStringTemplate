#ifndef DST_Main_AST_VISITOR_DEAMER_VISITOR_H
#define DST_Main_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
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

namespace DST_Main { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<DST_Main::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST_Main::ast::Type::DOT:
			{
				Visit(static_cast<const DST_Main::ast::node::DOT*>(node));
				break;
			}
			case DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED:
			{
				Visit(static_cast<const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED:
			{
				Visit(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST_Main::ast::Type::LEFT_BRACKETS:
			{
				Visit(static_cast<const DST_Main::ast::node::LEFT_BRACKETS*>(node));
				break;
			}
			case DST_Main::ast::Type::RIGHT_BRACKETS:
			{
				Visit(static_cast<const DST_Main::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}
			case DST_Main::ast::Type::LEFT_BRACKET:
			{
				Visit(static_cast<const DST_Main::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case DST_Main::ast::Type::RIGHT_BRACKET:
			{
				Visit(static_cast<const DST_Main::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case DST_Main::ast::Type::VARNAME:
			{
				Visit(static_cast<const DST_Main::ast::node::VARNAME*>(node));
				break;
			}
			case DST_Main::ast::Type::BACKSLASH:
			{
				Visit(static_cast<const DST_Main::ast::node::BACKSLASH*>(node));
				break;
			}
			case DST_Main::ast::Type::OTHER:
			{
				Visit(static_cast<const DST_Main::ast::node::OTHER*>(node));
				break;
			}

			case DST_Main::ast::Type::program:
			{
				Visit(static_cast<const DST_Main::ast::node::program*>(node));
				break;
			}
			case DST_Main::ast::Type::stmts:
			{
				Visit(static_cast<const DST_Main::ast::node::stmts*>(node));
				break;
			}
			case DST_Main::ast::Type::stmt:
			{
				Visit(static_cast<const DST_Main::ast::node::stmt*>(node));
				break;
			}
			case DST_Main::ast::Type::variable_insertion:
			{
				Visit(static_cast<const DST_Main::ast::node::variable_insertion*>(node));
				break;
			}
			case DST_Main::ast::Type::other_symbols:
			{
				Visit(static_cast<const DST_Main::ast::node::other_symbols*>(node));
				break;
			}
			case DST_Main::ast::Type::variable:
			{
				Visit(static_cast<const DST_Main::ast::node::variable*>(node));
				break;
			}
			case DST_Main::ast::Type::scope:
			{
				Visit(static_cast<const DST_Main::ast::node::scope*>(node));
				break;
			}
			}
		}
		virtual void Visit(const DST_Main::ast::node::DOT* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::LEFT_BRACKETS_ESCAPED* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::LEFT_BRACKETS* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::RIGHT_BRACKETS* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::VARNAME* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::BACKSLASH* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::OTHER* node)
		{
		}

		virtual void Visit(const DST_Main::ast::node::program* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::stmts* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::stmt* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::variable_insertion* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::other_symbols* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::variable* node)
		{
		}
		virtual void Visit(const DST_Main::ast::node::scope* node)
		{
		}
	};

}}}

#endif // DST_Main_AST_VISITOR_DEAMER_VISITOR_H
