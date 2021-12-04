#ifndef DST_AST_NODE_alternative_field_nt_2_H
#define DST_AST_NODE_alternative_field_nt_2_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class alternative_field_nt_2 : public DST<alternative_field_nt_2>
	{
	private:
	public:
		alternative_field_nt_2(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<alternative_field_nt_2>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_alternative_field_nt_2_H
