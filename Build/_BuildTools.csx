#load "_Common.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

public class VisualStudio
{
    public const string DotNetRelease = "8.0";
    public const string DotNetRuntime = "Microsoft.WindowsDesktop.App";

    public bool IsReady
    {
        get { return !(string.IsNullOrEmpty(PathToVS) || string.IsNullOrEmpty(PathToMSBuild)); }
    }
    public string PathToVS { get; private set; }
    public string PathToMSBuild { get; private set; }
    public bool LogToFile { get; set; }

    public VisualStudio()
    {
		// Check VS and Win SDK
		if( !_FindVSInstance() )
		{
			// VS or SDK missing
			PathToVS = "";
			PathToMSBuild = "";
		}
    }

    //--------------------------------------------------------------------------------------------------

    public bool Clean(string pathToSolution, string projectName, string configuration, string platform)
    {
        var target = "Clean";
        if (!string.IsNullOrEmpty(projectName))
            target = projectName.Replace(".", "_") + ":Clean";

        var commandLine = $"\"{pathToSolution}\" /t:{target} /p:Configuration={configuration} /p:Platform=\"{platform}\" /m /nologo /v:minimal /ds";

        if (Common.Run(PathToMSBuild, commandLine) != 0)
        {
            Printer.Error("Cleaning failed.");
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Build(string pathToSolution, string targetName, string configuration, string platform, string additionalOptions="")
    {
        //Environment.SetEnvironmentVariable("MSBuildEmitSolution", "1");

        string target = string.IsNullOrEmpty(targetName) ? "Build" : targetName.Replace(".", "_");
        var commandLine = $"\"{pathToSolution}\" /t:{target}";

        if(!string.IsNullOrEmpty(configuration))
            commandLine += $" /p:Configuration={configuration}";

        if(!string.IsNullOrEmpty(platform))
            commandLine += $" /p:Platform=\"{platform}\"";

        commandLine += " /m /nologo /ds /verbosity:minimal /clp:NoSummary;EnableMPLogging";

        if(LogToFile)
            commandLine += $" /fl /flp:logfile=\"{Path.ChangeExtension(pathToSolution, ".MSBuild.log")}\";verbosity=Detailed"; // Detailed, Diagnostic

        commandLine += " /nr:false"; // Disable node reuse to prevent locking of MSBuilExtension.dll
        commandLine += " " + additionalOptions;

        if (Common.Run(PathToMSBuild, commandLine) != 0)
        {
            Printer.Error("Build failed.");
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public string GetPathToMSVC()
    {
        if (!IsReady)
            return null;

        var vcVersionPath = Path.Combine(PathToVS, @"VC\Auxiliary\Build", "Microsoft.VCToolsVersion.default.txt");

        if (!File.Exists(vcVersionPath))
        {
            Printer.Error("Path to Visual C++ version file not found.");
        }

        var vsVersion = File.ReadLines(vcVersionPath).First().Trim();
        return Path.Combine(PathToVS, @"VC\Tools\MSVC", vsVersion);
    }

    //--------------------------------------------------------------------------------------------------

    public string GetPathToVcRedist()
    {
        if (!IsReady)
            return null;

        var vcVersionPath = Path.Combine(PathToVS, @"VC\Auxiliary\Build", "Microsoft.VCRedistVersion.default.txt");

        if (!File.Exists(vcVersionPath))
        {
            Printer.Error("Path to Visual C++ version file not found.");
        }

        var vsVersion = File.ReadLines(vcVersionPath).First().Trim();
        return Path.Combine(PathToVS, @"VC\Redist\MSVC", vsVersion);
    }

    //--------------------------------------------------------------------------------------------------

    public int[] GetVersionOfVcRedist()
    {
        if (!IsReady)
            return null;

        var vcVersionPath = Path.Combine(PathToVS, @"VC\Auxiliary\Build", "Microsoft.VCRedistVersion.default.txt");

        if (!File.Exists(vcVersionPath))
        {
            Printer.Error("Path to Visual C++ version file not found.");
        }

        var vsVersion = File.ReadLines(vcVersionPath).First().Trim();
        return vsVersion.Split('.').Select(s => Int32.Parse(s)).ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetPathToDebuggingTools()
    {
        var pathToDebuggingTools = Microsoft.Win32.Registry.GetValue(@"HKEY_LOCAL_MACHINE\SOFTWARE\WOW6432Node\Microsoft\Windows Kits\Installed Roots", "WindowsDebuggersRoot10", "") as string;
        if(string.IsNullOrEmpty(pathToDebuggingTools) || !Directory.Exists(pathToDebuggingTools))
        {
            pathToDebuggingTools = Path.Combine(Microsoft.Win32.Registry.GetValue(@"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows Kits\Installed Roots", "KitsRoot10", "") as string ?? "", "Debuggers");
            if(string.IsNullOrEmpty(pathToDebuggingTools) || !Directory.Exists(pathToDebuggingTools))
            {
                pathToDebuggingTools = @"c:\Program Files (x86)\Windows Kits\10\Debuggers";
                if(!Directory.Exists(pathToDebuggingTools))
                {
                    Printer.Error("Debugging Tools for Windows not found.");
                    return "";
                }
            }
        }

        return pathToDebuggingTools;
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetLatestDotNetVersion()
    {
        List<string> dotNetOutput = new();
        if (Common.Run("dotnet.exe", "--list-runtimes", null, dotNetOutput ) != 0)
        {
            Printer.Error("Calling dotnet.exe failed.");
            return null;
        }

        string highestVersion = "";
        foreach(var line in dotNetOutput)
        {
            if(line==null || !line.StartsWith(DotNetRuntime))
                continue;

            var rtInfo = line.Split(' ');
            if(!rtInfo[1].StartsWith(DotNetRelease))
                continue;

            highestVersion = rtInfo[1];
        }

        if(!string.IsNullOrEmpty(highestVersion))
        {
            return highestVersion;
        }
        
        Printer.Error($"No release of .NET {DotNetRuntime} {DotNetRelease} found.");
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #region Finding Visual Studio

    static readonly List<string> _RequiredComponents = new List<string>();

    //--------------------------------------------------------------------------------------------------

    bool _FindVSInstance()
    {
        if(_RequiredComponents.Count==0)
        {
            if(!_ReadVSConfig())
                return false;
        }

        var exePath = @"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe";
        var commandLine = "-prerelease -version 17.0 -latest -property installationPath -requires " + string.Join(" ", _RequiredComponents);
        var vswhereOutput = new List<string>();

        if (Common.Run(exePath, commandLine, output: vswhereOutput) != 0)
        {
            Console.WriteLine("The VisualStudio Setup API is not available. Assuming no instances are installed.");
            return false;
        }

        if(vswhereOutput.Count>0 && !string.IsNullOrEmpty(vswhereOutput[0]))
        {
            PathToVS = vswhereOutput[0];
            PathToMSBuild = Path.Combine(PathToVS, @"MSBuild\Current\Bin\MSBuild.exe");
            if (!File.Exists(PathToMSBuild))
            {
                Printer.Error($"MSBuild.exe not found in path {PathToMSBuild}.");
                return false;
            }
            Printer.Success($"Found VS in path {PathToVS}");
            return true;
        }

        Printer.Error("Required installation of VisualStudio 2022 not found.");
        Printer.Line("Please ensure that the following components are installed:");
        foreach (var component in _RequiredComponents)
        {
            Printer.Line("  " + component);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    bool _ReadVSConfig()
    {
        var pathToVsConfig = Path.Combine(Common.GetRootFolder(), ".vsconfig");
        if(!File.Exists(pathToVsConfig))
        {
            Printer.Error("VSConfig file not found. The repository seems top be corrupted.");
            return false;
        }
        var lines = File.ReadAllLines(pathToVsConfig);

        // find start
        int li = 0;
        char[] charsToTrim = { '"', ' ', '\t', ','};
        while(li < lines.Length)
        {
            if(lines[li].Contains("\"components\": ["))
            {
                li++;
                while(li < lines.Length && !lines[li].Contains("]"))
                {
                    _RequiredComponents.Add( lines[li].Trim(charsToTrim) );
                    li++;
                }
            }
            li++;
        }

        if(_RequiredComponents.Count == 0)
        {
            Printer.Error("VSConfig file could not be read.");
            return false;
        }
        return true;
    }

    #endregion


}
