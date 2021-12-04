#ifndef DST_SETTING_AST_RELATION_NODEENUMTOTYPE_H
#define DST_SETTING_AST_RELATION_NODEENUMTOTYPE_H

#include "DST_Setting/Ast/Enum/Type.h"

#include "DST_Setting/Ast/Node/program.h"
#include "DST_Setting/Ast/Node/stmts.h"
#include "DST_Setting/Ast/Node/stmt.h"
#include "DST_Setting/Ast/Node/abstraction.h"
#include "DST_Setting/Ast/Node/special.h"
#include "DST_Setting/Ast/Node/variable_declaration.h"
#include "DST_Setting/Ast/Node/main_assignment.h"
#include "DST_Setting/Ast/Node/keyword_assignment.h"
#include "DST_Setting/Ast/Node/scope.h"
#include "DST_Setting/Ast/Node/dst_keyword.h"
#include "DST_Setting/Ast/Node/user_keyword.h"
#include "DST_Setting/Ast/Node/alternative_field_nt_1.h"
#include "DST_Setting/Ast/Node/alternative_field_nt_2.h"
#include "DST_Setting/Ast/Node/LEFT_BRACKETS.h"
#include "DST_Setting/Ast/Node/RIGHT_BRACKETS.h"
#include "DST_Setting/Ast/Node/DOT.h"
#include "DST_Setting/Ast/Node/ADD_ASSIGNMENT.h"
#include "DST_Setting/Ast/Node/EQUAL.h"
#include "DST_Setting/Ast/Node/INVALID.h"
#include "DST_Setting/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "DST_Setting/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "DST_Setting/Ast/Node/USER_INPUT.h"
#include "DST_Setting/Ast/Node/VARNAME.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_5.h"
#include "DST_Setting/Ast/Node/OTHER.h"


namespace DST_Setting { namespace ast { namespace relation { 

	template<::DST_Setting::ast::Type T>
	struct NodeEnumToType
	{
		constexpr static auto value = T;
		using type = void;
	};


	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::program>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::program;
		using type = ::DST_Setting::ast::node::program;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::stmts>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::stmts;
		using type = ::DST_Setting::ast::node::stmts;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::stmt>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::stmt;
		using type = ::DST_Setting::ast::node::stmt;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::abstraction>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::abstraction;
		using type = ::DST_Setting::ast::node::abstraction;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::special>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::special;
		using type = ::DST_Setting::ast::node::special;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::variable_declaration>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::variable_declaration;
		using type = ::DST_Setting::ast::node::variable_declaration;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::main_assignment>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::main_assignment;
		using type = ::DST_Setting::ast::node::main_assignment;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::keyword_assignment>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::keyword_assignment;
		using type = ::DST_Setting::ast::node::keyword_assignment;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::scope>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::scope;
		using type = ::DST_Setting::ast::node::scope;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::dst_keyword>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::dst_keyword;
		using type = ::DST_Setting::ast::node::dst_keyword;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::user_keyword>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::user_keyword;
		using type = ::DST_Setting::ast::node::user_keyword;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::alternative_field_nt_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::alternative_field_nt_1;
		using type = ::DST_Setting::ast::node::alternative_field_nt_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::alternative_field_nt_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::alternative_field_nt_2;
		using type = ::DST_Setting::ast::node::alternative_field_nt_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::LEFT_BRACKETS>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::LEFT_BRACKETS;
		using type = ::DST_Setting::ast::node::LEFT_BRACKETS;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::RIGHT_BRACKETS>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::RIGHT_BRACKETS;
		using type = ::DST_Setting::ast::node::RIGHT_BRACKETS;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::DOT>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::DOT;
		using type = ::DST_Setting::ast::node::DOT;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ADD_ASSIGNMENT>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ADD_ASSIGNMENT;
		using type = ::DST_Setting::ast::node::ADD_ASSIGNMENT;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::EQUAL>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::EQUAL;
		using type = ::DST_Setting::ast::node::EQUAL;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::INVALID>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::INVALID;
		using type = ::DST_Setting::ast::node::INVALID;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::USER_INPUT>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::USER_INPUT;
		using type = ::DST_Setting::ast::node::USER_INPUT;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::VARNAME>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::VARNAME;
		using type = ::DST_Setting::ast::node::VARNAME;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5;
	};

	template<>
	struct NodeEnumToType<::DST_Setting::ast::Type::OTHER>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::OTHER;
		using type = ::DST_Setting::ast::node::OTHER;
	};


template<::DST_Setting::ast::Type T>
constexpr static auto NodeEnumToType_v = ::DST_Setting::ast::relation::NodeEnumToType<T>::value;

template<::DST_Setting::ast::Type T>
using NodeEnumToType_t = typename ::DST_Setting::ast::relation::NodeEnumToType<T>::type;

}}}

#endif // DST_SETTING_AST_RELATION_NODEENUMTOTYPE_H