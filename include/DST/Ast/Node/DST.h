#ifndef DST_AST_NODE_DST_H
#define DST_AST_NODE_DST_H

#include <Deamer/External/Cpp/Ast/TemplateNodeBase.h>

namespace DST { namespace ast { namespace node {

	template<typename Derived>
	class DST : public ::deamer::external::cpp::ast::TemplateNodeBase<DST<Derived>, Derived>
	{
	private:
		
	public:
		DST() = default;
		
		DST(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_ = {}, std::vector<size_t> baseValues_ = {})
		: deamer::external::cpp::ast::TemplateNodeBase<DST<Derived>, Derived>(information_, nodes_, baseValues_)
		{
		}
	};

}}}

#endif // DST_AST_NODE_DST_H
