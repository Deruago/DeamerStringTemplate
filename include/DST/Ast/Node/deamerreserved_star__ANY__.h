#ifndef DST_AST_NODE_deamerreserved_star__ANY___H
#define DST_AST_NODE_deamerreserved_star__ANY___H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class deamerreserved_star__ANY__ : public DST<deamerreserved_star__ANY__>
	{
	private:
	public:
		deamerreserved_star__ANY__(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<deamerreserved_star__ANY__>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_deamerreserved_star__ANY___H
