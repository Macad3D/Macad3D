#load "_Common.csx"
#load "_BuildTools.csx"
#load "_Version.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;

if (Args.Count() < 1)
{
    Printer.Line("Usage: build <all, debug, release, publish, webdoc> [/clean] [/log]");
    return -1;
}

_OptionClean = Args.Any(s => s.ToLower() == "/clean");
_OptionLog = Args.Any(s => s.ToLower() == "/log");
var config = Args[0].ToLower();
var buildDebug = config == "all" || config == "debug";
var buildRelease = config == "all" || config == "release";

if( _OptionClean )
{
    if (buildDebug)
        if (!_CleanConfiguration("Debug"))
            return -1;
    if (buildRelease)
        if (!_CleanConfiguration("Release"))
            return -1;
}

if (buildDebug)
    if (!_BuildConfiguration("Debug"))
        return -1;

if (buildRelease)
    if (!_BuildConfiguration("Release"))
        return -1;

if (config == "all" || config == "publish")
    if (!_BuildPublish())
        return -1;

if (config == "webdoc")
    if (!_BuildDocumentation("WebDoc"))
        return -1;

Printer.Success("\nBuild succeeded.");
return 0;

//--------------------------------------------------------------------------------------------------

VisualStudio _VS;
bool _OptionClean = false;
bool _OptionLog = false;

//--------------------------------------------------------------------------------------------------

bool _EnsureVS()
{
    if(_VS == null)
    {
        _VS = new VisualStudio();
        _VS.LogToFile = _OptionLog;
    }
    return _VS.IsReady;
}

//--------------------------------------------------------------------------------------------------

bool _CleanConfiguration(string configuration)
{
    if(!_EnsureVS())
        return false;

    var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");

    if (!_VS.Clean(solutionFile, "", configuration, "x64"))
        return false;

    return true;
}

//--------------------------------------------------------------------------------------------------

bool _BuildConfiguration(string configuration)
{
    if(!_EnsureVS())
        return false;

    var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");

    if (!_VS.Build(solutionFile, "", configuration, "x64"))
        return false;

    return true;
}

//--------------------------------------------------------------------------------------------------

bool _BuildPublish()
{
    if(!_EnsureVS())
        return false;

    var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");
    var pathToProject = Path.Combine(Common.GetRootFolder(), @"Source\Macad\Macad.csproj");
    var commandLine = $"\"{pathToProject}\" /t:Publish /p:Configuration=Release /p:Platform=x64 /p:PublishProfile=\"$(MMRootDir)Build\\MSBuild\\Macad.Publish.pubxml\" /nologo /verbosity:minimal ";

    if (Common.Run(_VS.PathToMSBuild, commandLine) != 0)
    {
        Printer.Error("Publish failed.");
        return false;
    }

    return true;
}

//--------------------------------------------------------------------------------------------------

bool _BuildDocumentation(string configuration)
{
    if(!_EnsureVS())
        return false;

    // Ensure SHFB
    var shfbPath = Packages.FindPackageFile($"EWSoftware.SHFB.20*", "tools\\SandcastleHelpFileBuilder.targets");
	if(string.IsNullOrEmpty(shfbPath))
		return false;

    // Ensure .Net Reflection Package
    var shfbNetReflectionPath = Packages.FindPackageFile($"EWSoftware.SHFB.NET.*", "build\\EWSoftware.SHFB.NET.props");
	if(string.IsNullOrEmpty(shfbNetReflectionPath))
		return false;
    shfbNetReflectionPath = Path.GetDirectoryName(shfbNetReflectionPath);

    if(!Version.ReadCurrentVersion(out var major, out var minor, out var revision, out var flags))
    {
        Printer.Error("Cannot read version information.");
        return false;
    }
    var flagsStr = flags==0 ? "" : " " + Version.GetFlagsString(flags);

    var pathToProject = Path.Combine(Common.GetRootFolder(), @"Source\Macad.UserGuide\Macad.UserGuide.shfbproj");

    var commandLine = $"\"{pathToProject}\" /p:Configuration={configuration} /p:SHFBNETFRAMEWORK=\"{shfbNetReflectionPath}\" /p:HelpFileVersion=\"{major}.{minor}{flagsStr}\" /m /nologo /ds /verbosity:minimal /clp:Summary;EnableMPLogging";
    if (_OptionClean)
    {
        if (Common.Run(_VS.PathToMSBuild, commandLine + " /t:clean") != 0)
        {
            Printer.Error("Clean failed.");
            return false;
        }
    }

    if (Common.Run(_VS.PathToMSBuild, commandLine) != 0)
    {
        Printer.Error("Build failed.");
        return false;
    }

    return true;
}

//--------------------------------------------------------------------------------------------------
