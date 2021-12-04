#ifndef DST_AST_NODE__H
#define DST_AST_NODE__H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class  : public DST<>
	{
	private:
	public:
		(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE__H
