#ifndef DST_AST_NODE_other_symbols_H
#define DST_AST_NODE_other_symbols_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Common/Node/other_symbols.h"
#include "DST/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class other_symbols : public DST<other_symbols>, public ::DST::ast::common::node::other_symbols, public ::DST::ast::common::node::stmt
	{
	private:
	public:
		other_symbols(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<other_symbols>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_other_symbols_H
