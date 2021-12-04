#ifndef DST_AST_NODE_keyword_assignment_H
#define DST_AST_NODE_keyword_assignment_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class keyword_assignment : public DST<keyword_assignment>
	{
	private:
	public:
		keyword_assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<keyword_assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_keyword_assignment_H
