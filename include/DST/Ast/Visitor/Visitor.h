#ifndef DST_AST_VISITOR_DEAMER_VISITOR_H
#define DST_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Enum/Type.h"
#include "DST/Ast/Node/ANY.h"

#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/deamerreserved_star__ANY__.h"

namespace DST { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<DST::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case DST::ast::Type::ANY:
			{
				Visit(static_cast<const DST::ast::node::ANY*>(node));
				break;
			}

			case DST::ast::Type::program:
			{
				Visit(static_cast<const DST::ast::node::program*>(node));
				break;
			}
			case DST::ast::Type::deamerreserved_star__ANY__:
			{
				Visit(static_cast<const DST::ast::node::deamerreserved_star__ANY__*>(node));
				break;
			}
			}
		}
		virtual void Visit(const DST::ast::node::ANY* node)
		{
		}

		virtual void Visit(const DST::ast::node::program* node)
		{
		}
		virtual void Visit(const DST::ast::node::deamerreserved_star__ANY__* node)
		{
		}
	};

}}}

#endif // DST_AST_VISITOR_DEAMER_VISITOR_H
