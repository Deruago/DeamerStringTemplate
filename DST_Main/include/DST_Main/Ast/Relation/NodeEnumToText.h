#ifndef DST_MAIN_AST_RELATION_NODEENUMTOTEXT_H
#define DST_MAIN_AST_RELATION_NODEENUMTOTEXT_H

#include "DST_Main/Ast/Enum/Type.h"

namespace DST_Main { namespace ast { namespace relation { 

	static constexpr const char* ConvertEnumToText(::DST_Main::ast::Type type)
	{
		switch(type)
		{
			
	case ::DST_Main::ast::Type::program: {
		return "program";
	}
	

	case ::DST_Main::ast::Type::stmts: {
		return "stmts";
	}
	

	case ::DST_Main::ast::Type::stmt: {
		return "stmt";
	}
	

	case ::DST_Main::ast::Type::variable_insertion: {
		return "variable_insertion";
	}
	

	case ::DST_Main::ast::Type::other_symbols: {
		return "other_symbols";
	}
	

	case ::DST_Main::ast::Type::variable: {
		return "variable";
	}
	

	case ::DST_Main::ast::Type::scope: {
		return "scope";
	}
	

	case ::DST_Main::ast::Type::DOT: {
		return "DOT";
	}
	

	case ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED: {
		return "LEFT_BRACKETS_ESCAPED";
	}
	

	case ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED: {
		return "RIGHT_BRACKETS_ESCAPED";
	}
	

	case ::DST_Main::ast::Type::LEFT_BRACKETS: {
		return "LEFT_BRACKETS";
	}
	

	case ::DST_Main::ast::Type::RIGHT_BRACKETS: {
		return "RIGHT_BRACKETS";
	}
	

	case ::DST_Main::ast::Type::LEFT_BRACKET: {
		return "LEFT_BRACKET";
	}
	

	case ::DST_Main::ast::Type::RIGHT_BRACKET: {
		return "RIGHT_BRACKET";
	}
	

	case ::DST_Main::ast::Type::VARNAME: {
		return "VARNAME";
	}
	

	case ::DST_Main::ast::Type::BACKSLASH: {
		return "BACKSLASH";
	}
	

	case ::DST_Main::ast::Type::OTHER: {
		return "OTHER";
	}
	

		}
		
		return "";
	}

}}}

#endif // DST_MAIN_AST_RELATION_NODEENUMTOTEXT_H