#ifndef DST_SETTING_AST_RELATION_NODETYPETOENUM_H
#define DST_SETTING_AST_RELATION_NODETYPETOENUM_H

#include "DST_Setting/Ast/Enum/Type.h"

namespace DST_Setting { namespace ast { namespace node {

class program;
class stmts;
class stmt;
class abstraction;
class special;
class variable_declaration;
class main_assignment;
class keyword_assignment;
class scope;
class dst_keyword;
class user_keyword;
class alternative_field_nt_1;
class alternative_field_nt_2;
class LEFT_BRACKETS;
class RIGHT_BRACKETS;
class DOT;
class ADD_ASSIGNMENT;
class EQUAL;
class INVALID;
class LEFT_SQUARE_BRACKET;
class RIGHT_SQUARE_BRACKET;
class USER_INPUT;
class VARNAME;
class ALTERNATE_FIELD_1_0;
class ALTERNATE_FIELD_1_1;
class ALTERNATE_FIELD_1_2;
class ALTERNATE_FIELD_1_3;
class ALTERNATE_FIELD_1_4;
class ALTERNATE_FIELD_1_5;
class ALTERNATE_FIELD_2_0_0;
class ALTERNATE_FIELD_2_0_1;
class ALTERNATE_FIELD_2_0_2;
class ALTERNATE_FIELD_2_0_3;
class ALTERNATE_FIELD_2_0_4;
class ALTERNATE_FIELD_2_0_5;
class ALTERNATE_FIELD_2_1_0;
class ALTERNATE_FIELD_2_1_1;
class ALTERNATE_FIELD_2_1_2;
class ALTERNATE_FIELD_2_1_3;
class ALTERNATE_FIELD_2_1_4;
class ALTERNATE_FIELD_2_1_5;
class ALTERNATE_FIELD_2_2_0;
class ALTERNATE_FIELD_2_2_1;
class ALTERNATE_FIELD_2_2_2;
class ALTERNATE_FIELD_2_2_3;
class ALTERNATE_FIELD_2_2_4;
class ALTERNATE_FIELD_2_2_5;
class ALTERNATE_FIELD_2_3_0;
class ALTERNATE_FIELD_2_3_1;
class ALTERNATE_FIELD_2_3_2;
class ALTERNATE_FIELD_2_3_3;
class ALTERNATE_FIELD_2_3_4;
class ALTERNATE_FIELD_2_3_5;
class ALTERNATE_FIELD_2_4_0;
class ALTERNATE_FIELD_2_4_1;
class ALTERNATE_FIELD_2_4_2;
class ALTERNATE_FIELD_2_4_3;
class ALTERNATE_FIELD_2_4_4;
class ALTERNATE_FIELD_2_4_5;
class ALTERNATE_FIELD_2_5_0;
class ALTERNATE_FIELD_2_5_1;
class ALTERNATE_FIELD_2_5_2;
class ALTERNATE_FIELD_2_5_3;
class ALTERNATE_FIELD_2_5_4;
class ALTERNATE_FIELD_2_5_5;
class OTHER;

}}}

namespace DST_Setting { namespace ast { namespace relation { 

	template<typename T>
	struct NodeTypeToEnum
	{
		constexpr static auto value = ::DST_Setting::ast::Type::deamerreserved_unknown;
		using type = void;
	};


	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::program>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::program;
		using type = ::DST_Setting::ast::node::program;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::stmts>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::stmts;
		using type = ::DST_Setting::ast::node::stmts;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::stmt>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::stmt;
		using type = ::DST_Setting::ast::node::stmt;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::abstraction>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::abstraction;
		using type = ::DST_Setting::ast::node::abstraction;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::special>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::special;
		using type = ::DST_Setting::ast::node::special;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::variable_declaration>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::variable_declaration;
		using type = ::DST_Setting::ast::node::variable_declaration;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::main_assignment>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::main_assignment;
		using type = ::DST_Setting::ast::node::main_assignment;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::keyword_assignment>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::keyword_assignment;
		using type = ::DST_Setting::ast::node::keyword_assignment;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::scope>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::scope;
		using type = ::DST_Setting::ast::node::scope;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::dst_keyword>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::dst_keyword;
		using type = ::DST_Setting::ast::node::dst_keyword;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::user_keyword>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::user_keyword;
		using type = ::DST_Setting::ast::node::user_keyword;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::alternative_field_nt_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::alternative_field_nt_1;
		using type = ::DST_Setting::ast::node::alternative_field_nt_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::alternative_field_nt_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::alternative_field_nt_2;
		using type = ::DST_Setting::ast::node::alternative_field_nt_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::LEFT_BRACKETS>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::LEFT_BRACKETS;
		using type = ::DST_Setting::ast::node::LEFT_BRACKETS;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::RIGHT_BRACKETS>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::RIGHT_BRACKETS;
		using type = ::DST_Setting::ast::node::RIGHT_BRACKETS;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::DOT>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::DOT;
		using type = ::DST_Setting::ast::node::DOT;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ADD_ASSIGNMENT>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ADD_ASSIGNMENT;
		using type = ::DST_Setting::ast::node::ADD_ASSIGNMENT;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::EQUAL>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::EQUAL;
		using type = ::DST_Setting::ast::node::EQUAL;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::INVALID>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::INVALID;
		using type = ::DST_Setting::ast::node::INVALID;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::USER_INPUT>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::USER_INPUT;
		using type = ::DST_Setting::ast::node::USER_INPUT;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::VARNAME>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::VARNAME;
		using type = ::DST_Setting::ast::node::VARNAME;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5;
		using type = ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5;
	};

	template<>
	struct NodeTypeToEnum<::DST_Setting::ast::node::OTHER>
	{
		constexpr static auto value = ::DST_Setting::ast::Type::OTHER;
		using type = ::DST_Setting::ast::node::OTHER;
	};


template<typename T>
constexpr static auto NodeTypeToEnum_v = ::DST_Setting::ast::relation::NodeTypeToEnum<T>::value;

template<typename T>
using NodeTypeToEnum_t = typename ::DST_Setting::ast::relation::NodeTypeToEnum<T>::type;

}}}

#endif // DST_SETTING_AST_RELATION_NODETYPETOENUM_H