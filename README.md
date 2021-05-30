# Deamer String Template

## Installing DST for Linux

**Getting the source code**
```bash
git clone https://github.com/Deruago/DeamerStringTemplate
cd DeamerStringTemplate
```

**Creating a build directory**
```bash
mkdir build
cd build
```

**Building and installing DST**
```bash
cmake ..
sudo cmake --build . --target install
```

## Concept

DST is a DSL to parse templates, you can use these templates to easily generate code. The DSL will be available via a library created using [Deamer](https://github.com/Deruago/theDeamerProject).

Aside from using DST to parse at runtime, DST is also able to generate C++ classes to generate the specific files. This gives the user even more flexibility, when generating files.

## Examples

**Creating the file**:

This is the main template file, DST will parse this and create an internal structure.

```DST
#ifndef {{header_guard}}
#define {{header_guard}}

namespace {{language_name}} { namespace ast { namespace {{ast_name}} {
    class {{ast_name}} : public {{language_name}} {{base_names}}
    {
    private:
        Value* value;
    public:
    	{{ast_name}}(Value* value_);
    	~{{ast_name}}() override = default;
    
    public:
    	const Value* GetValue() const;
    }
}}}

#endif // {{header_guard}}
```

**Creating the settings file**:

This file is optional, it can be used to:

- Make abstractions
- Specify common operations

```DST
{{file.file_name}} = {{ast_name}}.h

{{header_guard}} = {{language_name.Upper}}_AST_NODE_{{ast_name.Upper}}_H	/ abstraction
```

**Parsing the template**:

This c++ code, uses DST to parse and implement the varies parameters.

```c++
#include <DST/User/ConstructionGenerator.h>
#include <string>

int main()
{
    auto* const generator = user::ConstructionGenerator().GenerateConstructionFromPath(
        "./template.dst",
        "./template.setting.dst"
    );
    
    std::string lang_name = "Test";
    std::string ast_name = "TestNode";
    
    std::string output = generator->Output(
        {
            {"language_name", "", lang_name},
            {"ast_name", "", ast_name}
        }
    );
    
    std::cout << output << std::endl;
    
    return 0;
}
```

**Example repo**

For more examples visit the [example repo](https://github.com/Deruago/DeamerExamples).

## Using DST to generate a C++ file

DST is also capable of generating C++ files, to implement the the code generation with.

To generate such C++ file, first install the DST program using the "install" target of CMake.

After this run DST as follows:
```bash
DST ./templatepath.dst ./template_settings_path.setting.dst
```

If everything was correctly executed you will see an header file. You can now use this header file for code generation.

