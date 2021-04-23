#ifndef DST_Main_AST_NODE_DST_Main_H
#define DST_Main_AST_NODE_DST_Main_H

#include <Deamer/External/Cpp/Ast/TemplateNodeBase.h>

namespace DST_Main { namespace ast { namespace node {

	template<typename Derived>
	class DST_Main : public ::deamer::external::cpp::ast::TemplateNodeBase<DST_Main<Derived>, Derived>
	{
	private:
		
	public:
		DST_Main() = default;
		
		DST_Main(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_ = {}, std::vector<size_t> baseValues_ = {})
		: deamer::external::cpp::ast::TemplateNodeBase<DST_Main<Derived>, Derived>(information_, nodes_, baseValues_)
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_DST_Main_H
