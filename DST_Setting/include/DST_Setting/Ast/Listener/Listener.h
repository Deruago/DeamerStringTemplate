#ifndef DST_Setting_AST_LISTENER_DEAMER_LISTENER_H
#define DST_Setting_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
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

namespace DST_Setting { namespace ast { namespace listener { 

	class Listener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		Listener() = default;
		~Listener() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<DST_Setting::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST_Setting::ast::Type::LEFT_BRACKETS:
			{
				Listen(static_cast<const DST_Setting::ast::node::LEFT_BRACKETS*>(node));
				break;
			}
			case DST_Setting::ast::Type::RIGHT_BRACKETS:
			{
				Listen(static_cast<const DST_Setting::ast::node::RIGHT_BRACKETS*>(node));
				break;
			}
			case DST_Setting::ast::Type::DOT:
			{
				Listen(static_cast<const DST_Setting::ast::node::DOT*>(node));
				break;
			}
			case DST_Setting::ast::Type::ADD_ASSIGNMENT:
			{
				Listen(static_cast<const DST_Setting::ast::node::ADD_ASSIGNMENT*>(node));
				break;
			}
			case DST_Setting::ast::Type::EQUAL:
			{
				Listen(static_cast<const DST_Setting::ast::node::EQUAL*>(node));
				break;
			}
			case DST_Setting::ast::Type::INVALID:
			{
				Listen(static_cast<const DST_Setting::ast::node::INVALID*>(node));
				break;
			}
			case DST_Setting::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Listen(static_cast<const DST_Setting::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Listen(static_cast<const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case DST_Setting::ast::Type::USER_INPUT:
			{
				Listen(static_cast<const DST_Setting::ast::node::USER_INPUT*>(node));
				break;
			}
			case DST_Setting::ast::Type::VARNAME:
			{
				Listen(static_cast<const DST_Setting::ast::node::VARNAME*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_1_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_1_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*>(node));
				break;
			}
			case DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5:
			{
				Listen(static_cast<const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*>(node));
				break;
			}
			case DST_Setting::ast::Type::OTHER:
			{
				Listen(static_cast<const DST_Setting::ast::node::OTHER*>(node));
				break;
			}

			case DST_Setting::ast::Type::program:
			{
				Listen(static_cast<const DST_Setting::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::stmts:
			{
				Listen(static_cast<const DST_Setting::ast::node::stmts*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::stmt:
			{
				Listen(static_cast<const DST_Setting::ast::node::stmt*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::abstraction:
			{
				Listen(static_cast<const DST_Setting::ast::node::abstraction*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::special:
			{
				Listen(static_cast<const DST_Setting::ast::node::special*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::variable_declaration:
			{
				Listen(static_cast<const DST_Setting::ast::node::variable_declaration*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::main_assignment:
			{
				Listen(static_cast<const DST_Setting::ast::node::main_assignment*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::keyword_assignment:
			{
				Listen(static_cast<const DST_Setting::ast::node::keyword_assignment*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::scope:
			{
				Listen(static_cast<const DST_Setting::ast::node::scope*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::dst_keyword:
			{
				Listen(static_cast<const DST_Setting::ast::node::dst_keyword*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::user_keyword:
			{
				Listen(static_cast<const DST_Setting::ast::node::user_keyword*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::alternative_field_nt_1:
			{
				Listen(static_cast<const DST_Setting::ast::node::alternative_field_nt_1*>(node));
				DefaultAction(node);
				break;
			}
			case DST_Setting::ast::Type::alternative_field_nt_2:
			{
				Listen(static_cast<const DST_Setting::ast::node::alternative_field_nt_2*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const DST_Setting::ast::node::LEFT_BRACKETS* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::RIGHT_BRACKETS* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::DOT* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ADD_ASSIGNMENT* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::EQUAL* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::INVALID* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::LEFT_SQUARE_BRACKET* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::USER_INPUT* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::VARNAME* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_1_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_1_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_1_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_1_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_1_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_1_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::OTHER* node)
		{
		}

		virtual void Listen(const DST_Setting::ast::node::program* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::stmts* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::stmt* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::abstraction* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::special* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::variable_declaration* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::main_assignment* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::keyword_assignment* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::scope* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::dst_keyword* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::user_keyword* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::alternative_field_nt_1* node)
		{
		}
		virtual void Listen(const DST_Setting::ast::node::alternative_field_nt_2* node)
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

#endif // DST_Setting_AST_LISTENER_DEAMER_LISTENER_H
