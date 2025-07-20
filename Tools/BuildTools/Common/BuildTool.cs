using System;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;

namespace Macad.Build;

public abstract class BuildTool
{
    public static BuildTool CreateTool(string toolName)
    {
        string className = toolName.ToLower() + "tool";

        // Search all loaded assemblies for the type
        var toolType = Assembly.GetExecutingAssembly()
                               .GetTypes()
                               .FirstOrDefault(t => t.Name.ToLower() == className 
                                                    && typeof(BuildTool).IsAssignableFrom(t) 
                                                    && !t.IsAbstract);

        if (toolType == null)
        {
            return null;
        }

        // Ensure it has a parameterless constructor
        var constructor = toolType.GetConstructor(Type.EmptyTypes);
        if (constructor == null)
        {
            return null;
        }

        return (BuildTool)Activator.CreateInstance(toolType);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    readonly string _DisplayName;

    //--------------------------------------------------------------------------------------------------

    protected BuildTool()
    {
        _DisplayName = GetType().Name;
        if (_DisplayName.EndsWith("Tool"))
        {
            _DisplayName = _DisplayName[..^4];
        }
    }

    //--------------------------------------------------------------------------------------------------

    public abstract bool Execute(Parameters parameters);

    //--------------------------------------------------------------------------------------------------

    protected void LogError(string line)
    {
        Console.WriteLine($"[{_DisplayName}] Error: {line}");
    }
    
    //--------------------------------------------------------------------------------------------------

    protected void LogWarning(string line)
    {
        Console.WriteLine($"[{_DisplayName}] Warning: {line}");
    }
    
    //--------------------------------------------------------------------------------------------------

    protected void LogInfo(string line)
    {
        Console.WriteLine($"[{_DisplayName}] {line}");
    }
}