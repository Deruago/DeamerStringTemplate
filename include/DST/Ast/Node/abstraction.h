#ifndef DST_AST_NODE_abstraction_H
#define DST_AST_NODE_abstraction_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class abstraction : public DST<abstraction>, public ::DST::ast::common::node::stmt
	{
	private:
	public:
		abstraction(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<abstraction>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_abstraction_H
