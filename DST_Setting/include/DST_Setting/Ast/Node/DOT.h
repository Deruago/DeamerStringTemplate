#ifndef DST_Setting_AST_NODE_DOT_H
#define DST_Setting_AST_NODE_DOT_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class DOT : public DST_Setting<DOT>
	{
	private:
	public:
		DOT(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<DOT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_DOT_H
