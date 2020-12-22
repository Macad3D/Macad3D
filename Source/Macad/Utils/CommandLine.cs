using Macad.Common;

namespace Macad.Window
{
    public class CommandLine
    {
        public string PathToOpen { get; }
        public bool HasPathToOpen => !PathToOpen.IsNullOrEmpty();
        public bool EnableSandbox { get; }
        public bool NoWelcomeDialog { get; }

        //--------------------------------------------------------------------------------------------------

        public CommandLine(string[] cmdArgs)
        {
            foreach (var cmdarg in cmdArgs)
            {
                if (cmdarg.StartsWith("-") | cmdarg.StartsWith("/"))
                {
                    var option = cmdarg.Substring(1).ToLower();
                    switch (option)
                    {
                        case "sandbox":
                            EnableSandbox = true;
                            break;

                        case "nowelcome":
                            NoWelcomeDialog = true;
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
}