#ifndef DST_AST_NODE_alternative_field_nt__H
#define DST_AST_NODE_alternative_field_nt__H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class alternative_field_nt_ : public DST<alternative_field_nt_>
	{
	private:
	public:
		alternative_field_nt_(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<alternative_field_nt_>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_alternative_field_nt__H
