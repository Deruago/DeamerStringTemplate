#ifndef DST_AST_LISTENER_DEAMER_LISTENER_H
#define DST_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Enum/Type.h"
#include "DST/Ast/Node/ANY.h"

#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/deamerreserved_star__ANY__.h"

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
			case DST::ast::Type::ANY:
			{
				Listen(static_cast<const DST::ast::node::ANY*>(node));
				break;
			}

			case DST::ast::Type::program:
			{
				Listen(static_cast<const DST::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case DST::ast::Type::deamerreserved_star__ANY__:
			{
				Listen(static_cast<const DST::ast::node::deamerreserved_star__ANY__*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const DST::ast::node::ANY* node)
		{
		}

		virtual void Listen(const DST::ast::node::program* node)
		{
		}
		virtual void Listen(const DST::ast::node::deamerreserved_star__ANY__* node)
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
