using System.Diagnostics;
using System.Windows;

namespace Macad.Occt.Generator
{
    class Program
    {
        static int Main(string[] args)
        {
#if DEBUG
            MessageBox.Show($"If you want to debug me, you can now attach the debugger to process {Process.GetCurrentProcess().ProcessName} (PID {Process.GetCurrentProcess().Id})", "Wrapper Generator", MessageBoxButton.OK, MessageBoxImage.Information);
#endif
            foreach (var arg in args)
            {
                var argl = arg.ToLower();
                if (argl.StartsWith("occt"))
                    Configuration.OcctIncludePath = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
                else if (argl.StartsWith("out"))
                    Configuration.Output = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
                else if (argl.StartsWith("castxml"))
                    Configuration.CastXmlPath = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
                else if (argl.StartsWith("cache"))
                    Configuration.CachePath = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
                else if (argl.StartsWith("msvc"))
                    Configuration.VisualCppPath = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
                else if (argl.StartsWith("ucrt"))
                    Configuration.UcrtPath = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
                else if (argl.StartsWith("winsdk"))
                    Configuration.WinSDKPath = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
            }

            if (string.IsNullOrEmpty(Configuration.OcctIncludePath)
                || string.IsNullOrEmpty(Configuration.Output)
                || string.IsNullOrEmpty(Configuration.CastXmlPath)
                || string.IsNullOrEmpty(Configuration.CachePath)
                || string.IsNullOrEmpty(Configuration.VisualCppPath)
                || string.IsNullOrEmpty(Configuration.UcrtPath)
                || string.IsNullOrEmpty(Configuration.WinSDKPath))
            {
                Logger.WriteLine(false, "Missing parameter.");
                Logger.WriteLine(false, "You need to specify the following paths:");
                Logger.WriteLine(false, "\tocct,out,castxml,msvc,ucrt,winsdk");
            }

            var success = false;
            var browser = new ClassBrowser();
            var generator = new CodeGen();
            success = browser.Execute() && generator.Generate();

            Logger.Flush();
            return success ? 0 : -1;
        }
    }
}
