using CppAst;

namespace AsbindGenerator;

internal static class Program
{
    static void Main()
    {
        var currentDirectory = Environment.CurrentDirectory;
        Console.WriteLine(currentDirectory);

        // Parse a C++ files
        var compilation = CppParser.Parse(@"
            enum MyEnum { MyEnum_0, MyEnum_1 };
            void function0(int a, int b);
            struct MyStruct { int field0; int field1;};
            typedef MyStruct* MyStructPtr;
        ");

        // Print diagnostic messages
        foreach (var message in compilation.Diagnostics.Messages)
            Console.WriteLine(message);

        // Print All enums
        foreach (var cppEnum in compilation.Enums)
            Console.WriteLine(cppEnum);

        // Print All functions
        foreach (var cppFunction in compilation.Functions)
            Console.WriteLine(cppFunction);

        // Print All classes, structs
        foreach (var cppClass in compilation.Classes)
            Console.WriteLine(cppClass);

        // Print All typedefs
        foreach (var cppTypedef in compilation.Typedefs)
            Console.WriteLine(cppTypedef);
    }
}