using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Globalization;
using System.IO;
using System.Reflection;
using System.Runtime.Loader;
using System.Text;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Scripting;
using Microsoft.CodeAnalysis.Scripting;
using Macad.Common;
using Microsoft.CodeAnalysis.Scripting.Hosting;

namespace Macad.Core;

internal sealed class ScriptCompiler
{
    static readonly string[] _DefaultReferenceAppAssemblies =
    {
        "Macad.Occt.dll",
        "Macad.Managed.dll",
        "Macad.Common.dll",
        "Macad.Core.dll",
        "Macad.Presentation.dll",
        "Macad.Interaction.dll",
        "Macad.Resources.dll"
    };

    static readonly string[] _DefaultImports =
    {
        "System",
        "Macad.Common",
        "Macad.Core",
        "Macad.Core.Shapes",
        "Macad.Core.Toolkits",
        "Macad.Core.Topology",
        "Macad.Occt",
    };

    static readonly string[] _MetadataSearchPaths =
    {
        Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location),
        Path.GetDirectoryName(typeof(object).Assembly.Location)
    };

    //--------------------------------------------------------------------------------------------------

    static float _Version;

    //--------------------------------------------------------------------------------------------------

    static ScriptCompiler()
    {
        var version = Assembly.GetExecutingAssembly().GetName().Version;
        _Version = float.Parse($"{version.Major}.{version.Minor}", CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    internal static void OverrideVersion(float version)
    {
        _Version = version;
    }

    //--------------------------------------------------------------------------------------------------

    internal static bool Compile(ScriptInstance scriptInstance)
    {
        var compiler = new ScriptCompiler(scriptInstance);
        if (!compiler._Compile())
            return false;

        ScriptCache.Add(scriptInstance, compiler._FileList);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    readonly ScriptInstance _ScriptInstance;
    readonly List<string> _FileList = new List<string>();
    readonly bool _EnableDebugging = true;

    //--------------------------------------------------------------------------------------------------

    ScriptCompiler(ScriptInstance scriptInstance)
    {
        _ScriptInstance = scriptInstance;
    }

    //--------------------------------------------------------------------------------------------------

    bool _Compile()
    {
        try
        {
            var codeStream = _ReadAndPreprocessFile(_ScriptInstance.Path);
            if (codeStream == null)
                return false;

            var baseDirectory = Path.GetDirectoryName(_ScriptInstance.Path);

            var metadataResolver = ScriptMetadataResolver.Default
                                                         .WithSearchPaths(_MetadataSearchPaths)
                                                         .WithBaseDirectory(baseDirectory);

            var sourceResolver = new ScriptSourceResolver(baseDirectory, _ReadAndPreprocessFile);

            var options = ScriptOptions.Default
                                       .WithWarningLevel(4)
                                       .WithReferences(_DefaultReferenceAppAssemblies)
                                       .WithMetadataResolver(metadataResolver)
                                       .WithSourceResolver(sourceResolver)
                                       .WithImports(_DefaultImports)
                                       .WithEmitDebugInformation(_EnableDebugging)
                                       .WithLanguageVersion(LanguageVersion.Latest);

            var assemblyLoader = new InteractiveAssemblyLoader();
            foreach (var defaultAssembly in AssemblyLoadContext.Default.Assemblies)
            {
                assemblyLoader.RegisterDependency(defaultAssembly);
            }
            // This extra reference is needed for unit test runner which isolate this assembly
            assemblyLoader.RegisterDependency(Assembly.GetExecutingAssembly());

            var script = CSharpScript.Create(codeStream, options, _ScriptInstance.ContextInstance.GetType(), assemblyLoader);
            var results = script.Compile();
            codeStream.Dispose();

            var hasErrors = _ReportResults(results);
            if (!hasErrors)
            {
                return _ScriptInstance.Init(script.CreateDelegate());
            }
        }
        catch (Exception e)
        {
            Messages.Exception("Script compilation failed. Scriptfile: " + _ScriptInstance.Path, e);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    Stream _ReadAndPreprocessFile(string filename)
    {
        if (!File.Exists(filename))
        {
            Messages.Error($"Script imported file {filename} not found. Scriptfile: {_ScriptInstance.Path}");
            return null;
        }

        if (!_FileList.Contains(filename))
        {
            _FileList.Add(filename);
        }

        var ms = new MemoryStream();
        using StreamWriter sw = new StreamWriter(ms, Encoding.Unicode, 1024, true);

        sw.WriteLine($"#line 1 \"{Path.GetFileName(filename)}\"");

        bool inComment = false;
        int lineNumber = 0;
        using (var reader = File.OpenText(filename))
        {
            while (!reader.EndOfStream)
            {
                var rawLine = reader.ReadLine();
                if (rawLine == null)
                    break;
                var line = rawLine.Trim().ToLower();

                lineNumber++;

                if (line.IsNullOrWhiteSpace())
                {
                    sw.WriteLine(rawLine);
                    continue;
                }

                // We are in a comment block
                if (inComment)
                {
                    var posStart = line.LastIndexOf("/*", StringComparison.Ordinal);
                    var posEnd = line.LastIndexOf("*/", StringComparison.Ordinal);
                    if (posEnd > posStart)
                    {
                        // Comment closed
                        inComment = false;

                        // only continue if no code follows
                        if (!line.EndsWith("*/"))
                            continue;
                    }

                    // Comment continues
                    sw.WriteLine(rawLine);
                    continue;
                }

                // Pragma
                if (line.StartsWith("#"))
                {
                    if (line.StartsWith("#if ") || line.StartsWith("#elif "))
                    {
                        var second = line.Substring(line.IndexOf(' ') + 1).Trim();
                        if (second.StartsWith("version "))
                        {
                            var value = second.Substring(8);
                            var substitute = _ProcessVersion(value);
                            if (substitute == null)
                            {
                                Messages.Error($"Script error in line {lineNumber}: The version expression is invalid. Scriptfile: {_ScriptInstance.Path}.");
                                ms.Close();
                                return null;
                            }

                            sw.Write(rawLine.Substring(0, rawLine.IndexOf('#')));
                            sw.Write(line.Substring(0, line.IndexOf(' ') + 1));
                            sw.WriteLine(substitute + " // version " + value);
                            continue;
                        }
                    }

                    // non-directive for us, just skip
                    sw.WriteLine(rawLine);
                    continue;
                }

                // Single comment line
                if (line.StartsWith("//"))
                {
                    // non-directive comment line, just skip
                    sw.WriteLine(rawLine);
                    continue;
                }

                // Comment starting
                if (line.StartsWith("/*"))
                {
                    var posStart = line.LastIndexOf("/*", StringComparison.Ordinal);
                    var posEnd = line.LastIndexOf("*/", StringComparison.Ordinal);
                    if (posEnd < posStart)
                    {
                        // Comment opened, but not closed
                        inComment = true;
                    }
                    else
                    {
                        // Comment opened and closed
                        // only continue if no code follows
                        if (!line.EndsWith("*/"))
                            continue;
                    }

                    sw.WriteLine(rawLine);
                    continue;
                }

                sw.WriteLine(rawLine);
            }
        }

        return ms;
    }

    //--------------------------------------------------------------------------------------------------

    static readonly char[] _VersionOperands = {'<', '>', '=', '!', ' '};

    string _ProcessVersion(string line)
    {
        var splitIndex = line.LastIndexOfAny(_VersionOperands);
        if (splitIndex < 0)
            return null;

        var value = line.Substring(splitIndex + 1);
        if (!float.TryParse(value, NumberStyles.AllowDecimalPoint, CultureInfo.InvariantCulture, out var version))
            return null;

        bool result;
        var operand = line.Substring(0, splitIndex + 1).Trim();
        switch (operand)
        {
            case "==":
                result = version.IsEqual(_Version, 0.001f);
                break;
            case "!=":
                result = !version.IsEqual(_Version, 0.001f);
                break;
            case "<":
                result = _Version < version;
                break;
            case "<=":
                result = _Version < version || version.IsEqual(_Version, 0.001f);
                break;
            case ">":
                result = _Version > version;
                break;
            case ">=":
                result = _Version > version || version.IsEqual(_Version, 0.001f);
                break;
            default:
                return null;
        }

        return result ? "true" : "false";
    }

    //--------------------------------------------------------------------------------------------------

    bool _ReportResults(ImmutableArray<Diagnostic> errors)
    {
        DiagnosticSeverity severity = DiagnosticSeverity.Info;
        var sb = new StringBuilder();
        foreach (var diag in errors)
        {
            if (diag.Severity < DiagnosticSeverity.Warning)
                continue;
            if (diag.Severity > severity)
                severity = diag.Severity;

            if (diag.Location != null)
            {
                var location = diag.Location.GetMappedLineSpan();
                if (location.IsValid && !location.Path.IsNullOrEmpty())
                {
                    sb.Append(Path.GetFileName(location.Path));
                    sb.Append($" ({location.Span.Start.Line + 1},{location.Span.Start.Character + 1}): ");
                }
            }

            sb.Append(severity == DiagnosticSeverity.Error ? "Error " : "Warning ");
            sb.Append(diag.Id);
            sb.Append(": ");
            sb.AppendLine(diag.GetMessage(CultureInfo.InvariantCulture));
        }

        if (severity == DiagnosticSeverity.Error)
        {
            Messages.Error("Script compilation failed with errors.", sb.ToString());
        }
        else if(severity == DiagnosticSeverity.Warning)
        {
            Messages.Warning("Script compiled with warnings.", sb.ToString());
        }

        return severity == DiagnosticSeverity.Error;
    }

}