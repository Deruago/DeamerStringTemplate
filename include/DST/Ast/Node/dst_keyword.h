#ifndef DST_AST_NODE_dst_keyword_H
#define DST_AST_NODE_dst_keyword_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Common/Node/dst_keyword.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class dst_keyword : public DST<dst_keyword>, public ::DST::ast::common::node::dst_keyword
	{
	private:
	public:
		dst_keyword(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<dst_keyword>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_dst_keyword_H
