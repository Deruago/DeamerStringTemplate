# Deamer String Template (WIP)

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
    public:
    	{{ast_name}}(Value* value) = default;
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
- Set default values
- Set required operations
- Specify common operations

```DST
{{directory}} = {{language_name}}/Ast/Node/{{ast_name.PascalCase}}
{{file_name}} = {{ast_name.PascalCase}}.h

{{header_guard}} = {{language_name.Upper}}_AST_NODE_{{ast_name.Upper}}_H	/ abstraction

{{language_name.Default}} = Language	/ default value assignment
{{ast_name.Default}} = {{invalid}}		/ make sure this is always set
```

**Parsing the template**:

This c++ code, uses DST to parse and implement the varies parameters.

```c++
#include <DST/Parser/Parser.h>
#include <DST/Type/Template.h>
#include <string>

int main()
{
    std::string lang_name = "Test";
    std::string ast_name = "TestNode";
    
    auto parser = DST::parser::Parser();
    DST::type::Template templateFile = parser.Parse("AstTemplate.cpp");
    
    templateFile.Write(
        {
            {"language_name", lang_name},
            {"ast_name", ast_name}
        }
    );
}
```





