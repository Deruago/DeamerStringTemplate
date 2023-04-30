#include "DST/Type/Generation/CPP/Generator.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>

/* Currently the main application of DST, is used for C++ generation.
 * If you want to use the runtime variant, use the library instead.
 */

enum class Type
{
	RT,
	CT,
};

void Generate(std::string pathToTemplateFile, std::string pathToSettingFile, std::string pathOutput)
{
	DST::type::generation::cpp::Generator generator;
	std::string fileContent =
		generator.GetCPPClassRepresentationOfConstructionCT(pathToTemplateFile, pathToSettingFile);

	std::ofstream file("./" + pathOutput + generator.GetFileName());
	file << fileContent << "\n";
	file.close();
};

void RecursiveFindFiles()
{
	for (const std::filesystem::directory_entry& dir_entry :
		 std::filesystem::recursive_directory_iterator("./"))
	{
		if (!dir_entry.is_directory())
		{
			continue;
		}

		std::set<std::string> templateFiles;
		std::set<std::string> settingFiles;
		for (const auto& entry : std::filesystem::directory_iterator(dir_entry.path()))
		{
			std::string path = entry.path().generic_string();
			path.erase(0, dir_entry.path().generic_string().size() + 1);

			if (path.find(".setting.dst") != std::string::npos)
			{
				settingFiles.insert(path.substr(0, path.size() - 12));
			}
			else if (path.find(".dst") != std::string::npos)
			{
				templateFiles.insert(path.substr(0, path.size() - 4));
			}
			else
			{
				continue;
			}
		}

		for (auto templateFile : templateFiles)
		{
			if (settingFiles.find(templateFile) == settingFiles.end())
			{
				continue;
			}
			std::cout << "Generating: \n"
					  << "\tTemplate File: ./" << dir_entry.path().generic_string() << "/"
					  << templateFile << ".dst\n"
					  << "\tSetting File: ./" << dir_entry.path().generic_string() << "/"
					  << templateFile << ".setting.dst\n"
					  << "\tOutput Directory: ./" << dir_entry.path().generic_string() << "/\n";
			Generate(dir_entry.path().generic_string() + "/" + templateFile + ".dst",
					 dir_entry.path().generic_string() + "/" + templateFile + ".setting.dst",
					 dir_entry.path().generic_string() + "/");
		}
	}
}

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		RecursiveFindFiles();
		return 0;
	}

	std::string templateFile;
	std::string settingFile;

	for (int i = 1; i < argc; i++)
	{
		if (i == 1)
		{
			templateFile = argv[i];
		}
		else if (i == 2)
		{
			settingFile = argv[i];
		}
	}

	Generate(templateFile, settingFile, "");

	return 0;
}
