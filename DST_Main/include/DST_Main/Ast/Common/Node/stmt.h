#ifndef DST_Main_AST_COMMON_NODE_stmt_H
#define DST_Main_AST_COMMON_NODE_stmt_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace DST_Main { namespace ast { namespace common { namespace node {

	class stmt : public ::deamer::external::cpp::ast::CommonNodeAPI<stmt>
	{	private:
	public:
		stmt() = default;
		virtual ~stmt() = default;
	public:
	};
}}}}

#endif // DST_Main_AST_COMMON_NODE_stmt_H
