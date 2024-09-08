using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;

namespace Macad.Occt.Generator;

public class Compiler
{
    Context _Context;
    string _CompilerPath;
    string _CompilerOptions;
    string _TemplateDefinitionSource;

    //--------------------------------------------------------------------------------------------------

    public Compiler(Context context)
    {
        _Context = context;
        _CompilerPath = context.Settings.CastXmlPath;
        _CreateCompilerOptions();
        _CreateTemplateDefinition();
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateCompilerOptions()
    {
        var options = new List<string>
        {
            "--castxml-output=1",
            $"--castxml-cc-msvc \"{_Context.Settings.ClPath}\"",

            // Include paths
            $"-I \"{_Context.Settings.OcctIncludePath}\"",

            // Defines
            "-D WNT",
            "-D __WRAPPER_GENERATOR__",
            "-D __clang__",
            "-D _ALLOW_COMPILER_AND_STL_VERSION_MISMATCH",

            // Options for Clang
            "-fcxx-exceptions", // Enable C++ exceptions
        };

        // Additional include paths
        string[] paths = _Context.Settings.IncludePaths.Split(";", StringSplitOptions.RemoveEmptyEntries);
        foreach(var path in paths)
        {
            options.Add( $"-I \"{path}\"" );
        }

        _CompilerOptions = string.Join(" ", options);
    }

    //--------------------------------------------------------------------------------------------------

    public CastXml.CastXML GetPackageCompilation(string package, IEnumerable<string> headerFiles)
    {
        // Check for cache
        var cacheFilePath = $@"{_Context.Settings.CachePath}\{package}.xml";
        if (!File.Exists(cacheFilePath))
        {
            Logger.WriteProgress(-1.0f, $"Compiling package {package}");

            if (!_GenerateSourceFile(package, headerFiles))
                return null;

            if (!_Compile(package))
                return null;

            if (!File.Exists(cacheFilePath))
            {
                Logger.WriteLine(false, "Compiling package " + package + " did not result in an XML file!");
                return null;
            }
        }

        return CastXml.CastXML.Load(cacheFilePath);
    }

    //--------------------------------------------------------------------------------------------------

    bool _GenerateSourceFile(string package, IEnumerable<string> headerFiles)
    {
        try
        {
            // Write source file
            var cacheSourcePath = $"{Path.Combine(_Context.Settings.CachePath, package)}.cxx";
            var writer = File.CreateText(cacheSourcePath);

            // Write includes
            writer.WriteLine(Configuration.CompileHeader);
            writer.WriteLine(_TemplateDefinitionSource);
            foreach (var headerFile in headerFiles)
            {
                writer.WriteLine($"#include \"{headerFile}\"");
            }
            writer.Close();
            return true;
        }
        catch (Exception e)
        {
            Console.WriteLine("Error while generating source file.");
            Console.WriteLine(e.Message);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _Compile(string package)
    {
        var logWriter = File.CreateText(Path.Combine(_Context.Settings.CachePath, package + ".log"));

        var process = new Process
        {
            StartInfo =
            {
                Arguments = $"{_CompilerOptions} \"{Path.Combine(_Context.Settings.CachePath, package)}.cxx\"",
                FileName = _CompilerPath,
                WorkingDirectory = _Context.Settings.CachePath,
                RedirectStandardOutput = true,
                RedirectStandardError = true,
                UseShellExecute = false
            }
        };
        process.ErrorDataReceived += (_, args) => logWriter.WriteLine(args.Data);
        process.OutputDataReceived += (_, args) => logWriter.WriteLine(args.Data);

        logWriter.WriteLine(@"Process arguments: " + process.StartInfo.Arguments);
        if (!process.Start())
        {
            Logger.WriteLine(false, "Failed to start CastXML.");
            logWriter.Close();
            return false;
        }

        process.BeginOutputReadLine();
        process.BeginErrorReadLine();
        process.WaitForExit();

        if (process.ExitCode != 0)
        {
            Logger.WriteLine(false, "CastXML failed to compile source file.");
            logWriter.Close();
            return false;
        }
        logWriter.Close();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateTemplateDefinition()
    {
        SourceWriter writer = new();

        int maxParamCount = Configuration.Templates.Max(td => td.TemplateParameterCount);
        string[] paramNames = new string[maxParamCount];
        for (int i = 0; i < maxParamCount; i++)
        {
            paramNames[i] = $"TI_{i}";
            writer.WriteLine($"struct TI_{i} {{}};");
        }
        writer.WriteLine();

        foreach (var td in Configuration.Templates)
        {
            writer.WriteLine(@$"#include ""{td.Name}.hxx""");
        }
        writer.WriteLine();

        foreach (var td in Configuration.Templates)
        {
            var tmplParamList = string.Join(',', paramNames.Take(td.TemplateParameterCount));
            writer.WriteLine($"class TI_{td.Name} : public {td.Name}<{tmplParamList}> {{}};");
            
            if (td.IncludeIterator)
            {
                writer.WriteLine($"class TI_{td.Name}_Iterator : public {td.Name}<{tmplParamList}>::Iterator {{}};");
            }
        }
        writer.WriteLine();

        _TemplateDefinitionSource = writer.ToString();
    }
}