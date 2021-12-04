#ifndef DST_AST_NODE_alternative_field_nt_1_H
#define DST_AST_NODE_alternative_field_nt_1_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class alternative_field_nt_1 : public DST<alternative_field_nt_1>
	{
	private:
	public:
		alternative_field_nt_1(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<alternative_field_nt_1>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_alternative_field_nt_1_H
