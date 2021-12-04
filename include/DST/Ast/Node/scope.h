#ifndef DST_AST_NODE_scope_H
#define DST_AST_NODE_scope_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class scope : public DST<scope>
	{
	private:
	public:
		scope(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<scope>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_scope_H
