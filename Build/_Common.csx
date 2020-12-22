using System.IO;
using System;
using System.Diagnostics;
using System.Collections.Generic;

public static class Common
{
    public static string GetRootFolder()
    {
        return Path.GetFullPath(Environment.GetEnvironmentVariable("MMROOT"));
    }

    public static int Run(string path, string commandline, string workingDir = null, List<string> output = null, bool useShell = false)
    {
        try
        {
            var info = new ProcessStartInfo(Environment.ExpandEnvironmentVariables(path), commandline);
            info.UseShellExecute = useShell;
            info.ErrorDialog = false;
            if (!string.IsNullOrEmpty(workingDir))
                info.WorkingDirectory = Environment.ExpandEnvironmentVariables(workingDir);

            var proc = new Process();
            proc.StartInfo = info;

            if (output != null)
            {
                proc.StartInfo.RedirectStandardOutput = true;
                proc.OutputDataReceived += (sender, args) => output.Add(args.Data);
            }

            proc.Start();
            if (output != null)
            {
                proc.BeginOutputReadLine();
            }
            proc.WaitForExit();

            return proc.ExitCode;
        }
        catch(Exception e)
        {
            Printer.Error($"The following process could not be startet: {path}");
            Printer.Error($"Message: {e.Message}");
            return -1;
        }
    }
}

/***************************************************************/

public static class Printer
{
    public static void Error(string message)
    {
        _Print(ConsoleColor.Red, message);
    }

    public static void Success(string message)
    {
        _Print(ConsoleColor.Green, message);
    }

    public static void Warning(string message)
    {
        _Print(ConsoleColor.Yellow, message);
    }

    public static void Line(string message)
    {
        _Print(null, message);
    }

    static void _Print(ConsoleColor? color, string message)
    {
        if (color.HasValue)
            Console.ForegroundColor = color.Value;
        Console.WriteLine(message);
        Console.ResetColor();
    }
}