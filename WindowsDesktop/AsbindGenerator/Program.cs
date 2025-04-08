using CppAst;

namespace AsbindGenerator;

internal static class Program
{
    static void Main()
    {
        var currentDirectory = Environment.CurrentDirectory;
        Console.WriteLine(currentDirectory);

        var repositoryRoot = Utils.FindAncestorDirectory(currentDirectory, "OpenSiv3D");
        if (repositoryRoot == null)
        {
            Console.WriteLine("Could not find the OpenSiv3D repository root.");
            return;
        }

        var someFile = Path.Combine(repositoryRoot, "Siv3D/include/Siv3D/Texture.hpp");
        var content = File.ReadAllText(someFile);

        var parseOption = new CppParserOptions().ConfigureForWindowsMsvc();
        parseOption.IncludeFolders.AddRange([
            Path.Combine(repositoryRoot, "Siv3D/include"),
            Path.Combine(repositoryRoot, "Siv3D/include/ThirdParty"),
            Path.Combine(repositoryRoot, "Siv3D/src"),
            Path.Combine(repositoryRoot, "Siv3D/src/Siv3D-Platform/WindowsDesktop"),
            Path.Combine(repositoryRoot, "Siv3D/src/Siv3D-Platform/OpenGL4"),
            Path.Combine(repositoryRoot, "Siv3D/src/ThirdParty"),
            Path.Combine(repositoryRoot, "Siv3D/src/ThirdParty/freetype"),
            Path.Combine(repositoryRoot, "Siv3D/src/ThirdParty/skia"),
            Path.Combine(repositoryRoot, "Siv3D/src/ThirdParty/soloud/include"),
            Path.Combine(repositoryRoot, "Siv3D/src/ThirdParty-prebuilt"),
            Path.Combine(repositoryRoot, "Dependencies/boost_1_83_0"),

            Path.Combine(repositoryRoot, "Siv3D/include/Siv3D"), // ?
        ]);

        // Parse a C++ files
        var compilation = CppParser.Parse(content, parseOption);

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