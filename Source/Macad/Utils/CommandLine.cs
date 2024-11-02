using System;
using Macad.Common;

namespace Macad.Window;

public class CommandLine
{
    public string PathToOpen { get; }
    public bool HasPathToOpen => !PathToOpen.IsNullOrEmpty();
    public bool EnableSandbox { get; }
    public bool NoWelcomeDialog { get; }
    public bool EnableGlDebugging { get; }
    public string ScriptToRun { get; }
    public bool HasScriptToRun => !ScriptToRun.IsNullOrEmpty();

    //--------------------------------------------------------------------------------------------------

    public CommandLine(string[] cmdArgs)
    {
        foreach (var cmdarg in cmdArgs)
        {
            if (cmdarg.StartsWith("-") | cmdarg.StartsWith("/"))
            {
                string option, parameter;
                int splitPos = Math.Min(cmdarg.IndexOf('='), cmdarg.IndexOf(':'));
                if (splitPos > 1)
                {
                    option = cmdarg.Substring(1, splitPos-1).ToLower();
                    parameter = cmdarg.Substring(splitPos + 1);
                }
                else
                {
                    option = cmdarg.Substring(1).ToLower();
                    parameter = null;
                }

                switch (option)
                {
                    case "sandbox":
                        EnableSandbox = true;
                        break;

                    case "nowelcome":
                        NoWelcomeDialog = true;
                        break;

                    case "runscript":
                        ScriptToRun = parameter;
                        break;

                    case "gldebug":
                        EnableGlDebugging = true;
                        break;
                }
            }
            else
            {
                PathToOpen = cmdarg;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}