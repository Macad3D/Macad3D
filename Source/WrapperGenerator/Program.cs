using System.IO;

namespace Macad.Occt.Generator;

class Program
{
    static bool _TryGetPathFromArg(string arg, string key, ref string target)
    {
        if (!arg.StartsWith(key))
            return false;
        target = arg.Substring(arg.IndexOf('=') + 1).Trim('"');
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static int Main(string[] args)
    {
#if _DEBUG
            MessageBox.Show(
                $"If you want to debug me, you can now attach the debugger to process {Process.GetCurrentProcess().ProcessName} (PID {Process.GetCurrentProcess().Id})",
                "Wrapper Generator", MessageBoxButton.OK, MessageBoxImage.Information);
#endif
        Context context = new();

        foreach (var arg in args)
        {
            var argl = arg.ToLower();
            if (_TryGetPathFromArg(argl, "castxml", ref context.Settings.CastXmlPath))
                continue;
            if (_TryGetPathFromArg(argl, "occt", ref context.Settings.OcctIncludePath))
                continue;
            if (_TryGetPathFromArg(argl, "out", ref context.Settings.OutputPath))
                continue;
            if (_TryGetPathFromArg(argl, "cache", ref context.Settings.CachePath))
                continue;
            if (_TryGetPathFromArg(argl, "includes", ref context.Settings.IncludePaths))
                continue;
            if (_TryGetPathFromArg(argl, "msvc", ref context.Settings.ClPath))
                continue;
        }

        Logger.SetOutputFilepath(Path.Combine(context.Settings.CachePath, "WrapperGeneratorLog.txt"));

        if (context.Settings.AreSettingsMissing())
        {
            Logger.WriteLine(false, "Missing parameter.");
            Logger.WriteLine(false, "You need to specify the following paths:");
            Logger.WriteLine(false, "\tocct, out, msvc, cache");
            Logger.Flush();
            return -1; 
        }

        foreach (var pass in Configuration.Passes)
        {
            Logger.WriteLine(false, $"=== {pass.GetType().Name} ===");
                
            pass.Context = context;
            if (!pass.Process())
            {
                Logger.Flush();
                return -1;
            }
        }

        Logger.Flush();
        return 0;
    }
}