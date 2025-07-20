using System;
using System.Linq;

namespace Macad.Build;

public static class Program
{
    static int Main(string[] args)
    {
        if (args.Length < 1)
        {
            Console.WriteLine("Error: No tool specified.");
            return -1;
        }

        string toolName = args[0];
        BuildTool tool = BuildTool.CreateTool(toolName);
        if (tool == null)
        {
            Console.WriteLine($"Error: Tool {toolName} not found.");
            return -1;
        }

        bool success = false;
        try
        {
            Parameters parameters = new Parameters(args.Skip(1));
            success = tool.Execute(parameters);
        }
        catch (Exception e)
        {
            Console.WriteLine($"Exception while running tool {toolName}: {e.Message}");
        }

        return success ? 0 : -1;
    }
}