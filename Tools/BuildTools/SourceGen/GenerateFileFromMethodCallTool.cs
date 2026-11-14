using System;
using System.IO;
using System.Reflection;
using System.Text;

namespace Macad.Build.SourceGen;

// Writes the string returned by a public static method without parameters of a built assembly to a file.
// Parameters: Assembly (path of the assembly), Method (full name: Namespace.Type.Method), Out (path of the file).
// Used for the items GenerateFileFromMethodCall, see Macad.GenerateFile.targets.
internal class GenerateFileFromMethodCallTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        string assemblyFileName = parameters.GetValueOrDefault("Assembly");
        if (string.IsNullOrEmpty(assemblyFileName) || !File.Exists(assemblyFileName))
        {
            LogError($"Assembly not found: {assemblyFileName}.");
            return false;
        }
        assemblyFileName = Path.GetFullPath(assemblyFileName);

        string methodFullName = parameters.GetValueOrDefault("Method");
        int lastDot = methodFullName?.LastIndexOf('.') ?? -1;
        if (lastDot <= 0 || lastDot == methodFullName.Length - 1)
        {
            LogError($"Method must be given with its full name (Namespace.Type.Method): {methodFullName}.");
            return false;
        }
        string typeName = methodFullName.Substring(0, lastDot);
        string methodName = methodFullName.Substring(lastDot + 1);

        string outputFileName = parameters.GetValueOrDefault("Out");
        if (string.IsNullOrEmpty(outputFileName))
        {
            LogError("Output file not specified.");
            return false;
        }

        // Resolve dependencies from the directory of the assembly
        string assemblyDir = Path.GetDirectoryName(assemblyFileName);
        AppDomain.CurrentDomain.AssemblyResolve += (_, args) =>
        {
            string path = Path.Combine(assemblyDir, new AssemblyName(args.Name).Name + ".dll");
            return File.Exists(path) ? Assembly.LoadFrom(path) : null;
        };

        var assembly = Assembly.LoadFrom(assemblyFileName);
        var method = assembly.GetType(typeName)?.GetMethod(methodName, BindingFlags.Public | BindingFlags.Static, Type.EmptyTypes);
        if (method == null || method.ReturnType != typeof(string))
        {
            LogError($"No public static method {methodFullName}() returning a string found in {assemblyFileName}.");
            return false;
        }

        string content;
        try
        {
            content = (string)method.Invoke(null, null);
        }
        catch (TargetInvocationException e)
        {
            LogError($"{methodFullName} failed: {e.InnerException ?? e}");
            return false;
        }
        if (string.IsNullOrEmpty(content))
        {
            LogError($"{methodFullName} returned nothing.");
            return false;
        }

        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outputFileName)));
        File.WriteAllText(outputFileName, content, new UTF8Encoding(false));
        return true;
    }
}
