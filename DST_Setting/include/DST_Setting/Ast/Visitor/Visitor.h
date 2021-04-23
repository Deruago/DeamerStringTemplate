#ifndef DST_Setting_AST_VISITOR_DEAMER_VISITOR_H
#define DST_Setting_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
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

namespace DST_Setting { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) const override
		{
			const auto enumeratedValue = static_cast<DST_Setting::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST_Setting::ast::Type::LEFT_BRACKETS:
			{
				Visit(static_cast<const DST_Setting::ast::node::LEFT_BRACKETS*>(node));
				break;
			}
			case DST_Setting::ast::Type::RIGHT_BRACKETS:
			{
				Visit(static_cast<const DST_Setting::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}
			case DST_Setting::ast::Type::DOT:
			{
				Visit(static_cast<const DST_Setting::ast::node::DOT*>(node));
				break;
			}
			case DST_Setting::ast::Type::ADD_ASSIGNMENT:
			{
				Visit(static_cast<const DST_Setting::ast::node::ADD_ASSIGNMENT*>(node));
				break;
			}
			case DST_Setting::ast::Type::EQUAL:
			{
				Visit(static_cast<const DST_Setting::ast::node::EQUAL*>(node));
				break;
			}
			case DST_Setting::ast::Type::INVALID:
			{
				Visit(static_cast<const DST_Setting::ast::node::INVALID*>(node));
				break;
			}
			case DST_Setting::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Visit(static_cast<const DST_Setting::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Visit(static_cast<const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case DST_Setting::ast::Type::USER_INPUT:
			{
				Visit(static_cast<const DST_Setting::ast::node::USER_INPUT*>(node));
				break;
			}
			case DST_Setting::ast::Type::VARNAME:
			{
				Visit(static_cast<const DST_Setting::ast::node::VARNAME*>(node));
				break;
			}
			case DST_Setting::ast::Type::OTHER:
			{
				Visit(static_cast<const DST_Setting::ast::node::OTHER*>(node));
				break;
			}

			case DST_Setting::ast::Type::program:
			{
				Visit(static_cast<const DST_Setting::ast::node::program*>(node));
				break;
			}
			case DST_Setting::ast::Type::stmts:
			{
				Visit(static_cast<const DST_Setting::ast::node::stmts*>(node));
				break;
			}
			case DST_Setting::ast::Type::stmt:
			{
				Visit(static_cast<const DST_Setting::ast::node::stmt*>(node));
				break;
			}
			case DST_Setting::ast::Type::abstraction:
			{
				Visit(static_cast<const DST_Setting::ast::node::abstraction*>(node));
				break;
			}
			case DST_Setting::ast::Type::special:
			{
				Visit(static_cast<const DST_Setting::ast::node::special*>(node));
				break;
			}
			case DST_Setting::ast::Type::variable_declaration:
			{
				Visit(static_cast<const DST_Setting::ast::node::variable_declaration*>(node));
				break;
			}
			case DST_Setting::ast::Type::main_assignment:
			{
				Visit(static_cast<const DST_Setting::ast::node::main_assignment*>(node));
				break;
			}
			case DST_Setting::ast::Type::keyword_assignment:
			{
				Visit(static_cast<const DST_Setting::ast::node::keyword_assignment*>(node));
				break;
			}
			case DST_Setting::ast::Type::scope:
			{
				Visit(static_cast<const DST_Setting::ast::node::scope*>(node));
				break;
			}
			case DST_Setting::ast::Type::dst_keyword:
			{
				Visit(static_cast<const DST_Setting::ast::node::dst_keyword*>(node));
				break;
			}
			case DST_Setting::ast::Type::user_keyword:
			{
				Visit(static_cast<const DST_Setting::ast::node::user_keyword*>(node));
				break;
			}
			}
		}
		virtual void Visit(const DST_Setting::ast::node::LEFT_BRACKETS* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::RIGHT_BRACKETS* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::DOT* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::ADD_ASSIGNMENT* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::EQUAL* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::INVALID* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::LEFT_SQUARE_BRACKET* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::USER_INPUT* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::VARNAME* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::OTHER* node) const
		{
		}

		virtual void Visit(const DST_Setting::ast::node::program* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::stmts* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::stmt* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::abstraction* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::special* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::variable_declaration* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::main_assignment* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::keyword_assignment* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::scope* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::dst_keyword* node) const
		{
		}
		virtual void Visit(const DST_Setting::ast::node::user_keyword* node) const
		{
		}
	};

}}}

#endif // DST_Setting_AST_VISITOR_DEAMER_VISITOR_H
