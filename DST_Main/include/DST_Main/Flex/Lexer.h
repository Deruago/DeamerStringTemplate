#ifndef DST_Main_FLEX_LEXER_H
#define DST_Main_FLEX_LEXER_H

#include <Deamer/External/Cpp/Lexer/Interface/Lexer.h>

namespace DST_Main { namespace flex { namespace lexer {

	class Lexer : public ::deamer::external::cpp::lexer::Lexer
	{
	public:
		Lexer() = default;
		~Lexer() override = default;
	
	public:
		std::vector<const ::deamer::external::cpp::lexer::TerminalObject*> Tokenize(const std::string& text) const override
		{
			return ::deamer::external::cpp::lexer::Lexer::Tokenize(text);
		}

		std::vector<const ::deamer::external::cpp::lexer::TerminalObject*> Tokenize(const std::string& text, ::deamer::external::cpp::lexer::TerminalConstructionPolicy constructionPolicy) const override;
	};

}}}

#endif // DST_Main_FLEX_LEXER_H
