#ifndef DST_AST_VISITOR_DEAMER_VISITOR_H
#define DST_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
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

namespace DST { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) const override
		{
			const auto enumeratedValue = static_cast<DST::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST::ast::Type::LEFT_BRACKETS_ESCAPED:
			{
				Visit(static_cast<const DST::ast::node::LEFT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST::ast::Type::RIGHT_BRACKETS_ESCAPED:
			{
				Visit(static_cast<const DST::ast::node::RIGHT_BRACKETS_ESCAPED*>(node));
				break;
			}
			case DST::ast::Type::LEFT_BRACKETS:
			{
				Visit(static_cast<const DST::ast::node::LEFT_BRACKETS*>(node));
				break;
			}
			case DST::ast::Type::RIGHT_BRACKETS:
			{
				Visit(static_cast<const DST::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}
			case DST::ast::Type::LEFT_BRACKET:
			{
				Visit(static_cast<const DST::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case DST::ast::Type::RIGHT_BRACKET:
			{
				Visit(static_cast<const DST::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case DST::ast::Type::VARNAME:
			{
				Visit(static_cast<const DST::ast::node::VARNAME*>(node));
				break;
			}
			case DST::ast::Type::BACKSLASH:
			{
				Visit(static_cast<const DST::ast::node::BACKSLASH*>(node));
				break;
			}
			case DST::ast::Type::OTHER:
			{
				Visit(static_cast<const DST::ast::node::OTHER*>(node));
				break;
			}

			case DST::ast::Type::program:
			{
				Visit(static_cast<const DST::ast::node::program*>(node));
				break;
			}
			case DST::ast::Type::stmts:
			{
				Visit(static_cast<const DST::ast::node::stmts*>(node));
				break;
			}
			case DST::ast::Type::stmt:
			{
				Visit(static_cast<const DST::ast::node::stmt*>(node));
				break;
			}
			case DST::ast::Type::variable_insertion:
			{
				Visit(static_cast<const DST::ast::node::variable_insertion*>(node));
				break;
			}
			case DST::ast::Type::other_symbols:
			{
				Visit(static_cast<const DST::ast::node::other_symbols*>(node));
				break;
			}
			}
		}
		virtual void Visit(const DST::ast::node::LEFT_BRACKETS_ESCAPED* node) const
		{
		}
		virtual void Visit(const DST::ast::node::RIGHT_BRACKETS_ESCAPED* node) const
		{
		}
		virtual void Visit(const DST::ast::node::LEFT_BRACKETS* node) const
		{
		}
		virtual void Visit(const DST::ast::node::RIGHT_BRACKETS* node) const
		{
		}
		virtual void Visit(const DST::ast::node::LEFT_BRACKET* node) const
		{
		}
		virtual void Visit(const DST::ast::node::RIGHT_BRACKET* node) const
		{
		}
		virtual void Visit(const DST::ast::node::VARNAME* node) const
		{
		}
		virtual void Visit(const DST::ast::node::BACKSLASH* node) const
		{
		}
		virtual void Visit(const DST::ast::node::OTHER* node) const
		{
		}

		virtual void Visit(const DST::ast::node::program* node) const
		{
		}
		virtual void Visit(const DST::ast::node::stmts* node) const
		{
		}
		virtual void Visit(const DST::ast::node::stmt* node) const
		{
		}
		virtual void Visit(const DST::ast::node::variable_insertion* node) const
		{
		}
		virtual void Visit(const DST::ast::node::other_symbols* node) const
		{
		}
	};

}}}

#endif // DST_AST_VISITOR_DEAMER_VISITOR_H
