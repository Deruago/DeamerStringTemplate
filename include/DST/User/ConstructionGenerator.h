#ifndef DST_USER_CONSTRUCTIONGENERATOR_H
#define DST_USER_CONSTRUCTIONGENERATOR_H

#include "DST/Type/IR/Construction.h"
#include "DST_Main/Bison/Parser.h"
#include "DST_Main/Ast/Listener/User/InsertVariable.h"
#include "DST_Setting/Bison/Parser.h"
#include "DST_Setting/Ast/Listener/User/InsertVariable.h"
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

namespace DST::user
{
	class ConstructionGenerator
	{
	public:
		ConstructionGenerator() = default;
		~ConstructionGenerator() = default;
	public:
		type::ir::Construction* GenerateConstructionFromText(const std::string& templateText, const std::string& settingText = "")
		{
			auto* const construction = new DST::type::ir::Construction();

			if (!templateText.empty())
			{
				const auto main_parser = DST_Main::parser::Parser();
				auto main_listener = DST_Main::ast::listener::user::InsertVariable(construction);

				auto* main_tree = main_parser.Parse(templateText);
				main_listener.Dispatch(main_tree->GetStartNode());
				main_listener.End();

				delete main_tree;
			}

			if (!settingText.empty())
			{
				const auto setting_parser = DST_Setting::parser::Parser();
				auto setting_listener = DST_Setting::ast::listener::user::InsertVariable(construction);

				auto* setting_tree = setting_parser.Parse(settingText);
				setting_listener.Dispatch(setting_tree->GetStartNode());

				delete setting_tree;
			}
			
			return construction;
		}

		type::ir::Construction* GenerateConstructionFromPath(const std::string& templatePath)
		{
			const std::string templateText = ReadInFile(templatePath);

			return GenerateConstructionFromText(templateText);
		}

		type::ir::Construction* GenerateConstructionFromPath(const std::string& templatePath, const std::string& settingPath)
		{
			const std::string templateText = ReadInFile(templatePath);
			const std::string settingText = ReadInFile(settingPath);

			return GenerateConstructionFromText(templateText, settingText);
		}
		
	private:
		std::string ReadInFile(const std::string& file)
		{
			const std::ifstream inputFile(file);

			std::ostringstream sstr;
			sstr << inputFile.rdbuf();

			std::string input = sstr.str();

			return input;
		}
	};
}

#endif // DST_USER_CONSTRUCTIONGENERATOR_H