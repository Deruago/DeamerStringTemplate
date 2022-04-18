#ifndef DST_BISON_PARSER_H
#define DST_BISON_PARSER_H

#include <Deamer/External/Cpp/Parser/Interface/Parser.h>

namespace DST { namespace bison { namespace parser {

    class Parser : public deamer::external::cpp::parser::Parser
    {
    public:
        Parser() = default;
        ~Parser() override = default;

    public:
        deamer::external::cpp::ast::Tree* Parse(const std::string& text) const override;
		::deamer::external::cpp::ast::Tree* Parse(std::vector<const ::deamer::external::cpp::lexer::TerminalObject*> terminalObjects) const override
        {
            return this->::deamer::external::cpp::parser::Parser::Parse(terminalObjects);
        }
    };

}}}

#endif // DST_BISON_PARSER_H
