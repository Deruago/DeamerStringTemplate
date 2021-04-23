#ifndef DST_Setting_AST_NODE_other_symbols_H
#define DST_Setting_AST_NODE_other_symbols_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Common/Node/other_symbols.h"
#include "DST_Setting/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class other_symbols : public DST_Setting<other_symbols>, public ::DST_Setting::ast::common::node::other_symbols, public ::DST_Setting::ast::common::node::stmt
	{
	private:
	public:
		other_symbols(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<other_symbols>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_other_symbols_H
