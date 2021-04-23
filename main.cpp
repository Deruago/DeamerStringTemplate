#include "DST/Type/IR/Construction.h"
#include "DST_Main/Ast/Listener/User/InsertVariable.h"
#include "DST_Setting/Ast/Listener/User/InsertVariable.h"
#include "DST_Setting/Bison/Parser.h"
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

std::string ReadInFile(const std::string& file)
{
	const std::ifstream inputFile(file);

	std::ostringstream sstr;
	sstr << inputFile.rdbuf();

	std::string input = sstr.str();

	return input;
}

int main()
{
	DST::type::ir::Construction construction;

	const auto template_file = ReadInFile("./template.txt");
	const auto setting_file = ReadInFile("./setting.txt");

	const auto main_parser = DST_Main::parser::Parser();
	const auto main_listener = DST_Main::ast::listener::user::InsertVariable(&construction);

	const auto setting_parser = DST_Setting::parser::Parser();
	const auto setting_listener = DST_Setting::ast::listener::user::InsertVariable(&construction);

	auto* main_tree = main_parser.Parse(template_file);
	main_listener.Dispatch(main_tree->GetStartNode());
	main_listener.End();
	auto* setting_tree = setting_parser.Parse(setting_file);
	setting_listener.Dispatch(setting_tree->GetStartNode());


	const std::string class_name = "VariableName";
	const std::string language_name = "Dst";
	
	const auto output = construction.Output({
		{"class_name", "", class_name},
		{"language_name", "", language_name}
	});

	std::cout << output << std::endl;
}
