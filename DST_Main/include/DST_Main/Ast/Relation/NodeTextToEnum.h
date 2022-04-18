#ifndef DST_MAIN_AST_RELATION_NODETEXTTOENUM_H
#define DST_MAIN_AST_RELATION_NODETEXTTOENUM_H

#include "DST_Main/Ast/Enum/Type.h"
#include <string>
#include <map>

namespace DST_Main { namespace ast { namespace relation { 

	static constexpr ::DST_Main::ast::Type ConvertTextToEnum(const std::string& text)
	{
		static const std::map<std::string, ::DST_Main::ast::Type> mapTextWithType = {
			{"", ::DST_Main::ast::Type::deamerreserved_unknown },
			
		{ "program", ::DST_Main::ast::Type::program },
	

		{ "stmts", ::DST_Main::ast::Type::stmts },
	

		{ "stmt", ::DST_Main::ast::Type::stmt },
	

		{ "variable_insertion", ::DST_Main::ast::Type::variable_insertion },
	

		{ "other_symbols", ::DST_Main::ast::Type::other_symbols },
	

		{ "variable", ::DST_Main::ast::Type::variable },
	

		{ "scope", ::DST_Main::ast::Type::scope },
	

		{ "DOT", ::DST_Main::ast::Type::DOT },
	

		{ "LEFT_BRACKETS_ESCAPED", ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED },
	

		{ "RIGHT_BRACKETS_ESCAPED", ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED },
	

		{ "LEFT_BRACKETS", ::DST_Main::ast::Type::LEFT_BRACKETS },
	

		{ "RIGHT_BRACKETS", ::DST_Main::ast::Type::RIGHT_BRACKETS },
	

		{ "LEFT_BRACKET", ::DST_Main::ast::Type::LEFT_BRACKET },
	

		{ "RIGHT_BRACKET", ::DST_Main::ast::Type::RIGHT_BRACKET },
	

		{ "VARNAME", ::DST_Main::ast::Type::VARNAME },
	

		{ "BACKSLASH", ::DST_Main::ast::Type::BACKSLASH },
	

		{ "OTHER", ::DST_Main::ast::Type::OTHER },
	

		};

		return mapTextWithType[text];
	}

}}}

#endif // DST_MAIN_AST_RELATION_NODETEXTTOENUM_H