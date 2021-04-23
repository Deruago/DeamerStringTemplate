#ifndef DST_Setting_AST_NODE_VARNAME_H
#define DST_Setting_AST_NODE_VARNAME_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class VARNAME : public DST_Setting<VARNAME>
	{
	private:
	public:
		VARNAME(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<VARNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_VARNAME_H
