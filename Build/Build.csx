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
    Printer.Line("Usage: build <all, restore, debug, release, doc> [/clean]");
    return -1;
}

_OptionClean = Args.Any(s => s.ToLower() == "/clean");
var config = Args[0].ToLower();
var buildDebug = config == "all" || config == "debug";
var buildRelease = config == "all" || config == "release";

if (config == "all" || config == "restore")
    if (!_RestorePackages())
        return -1;

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

if (config == "all" || config == "doc")
{
    if (!_BuildDocumentation())
        return -1;
}

Printer.Success("\nBuild succeeded.");
return 0;

//--------------------------------------------------------------------------------------------------

VisualStudio _VS;
bool _OptionClean = false;


//--------------------------------------------------------------------------------------------------

bool _EnsureVS()
{
    if(_VS == null)
    {
        _VS = new VisualStudio();
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

bool _BuildDocumentation()
{
    if(!_EnsureVS())
        return false;

    // Ensure SHFB
    var shfbPath = Packages.FindPackageFile($"EWSoftware.SHFB.2019.*", "Tools\\BuildAssembler.exe");
	if(string.IsNullOrEmpty(shfbPath))
		return false;
    Environment.SetEnvironmentVariable("SHFBROOT", Path.GetDirectoryName(shfbPath));

    // Ensure NetFramework Reflection Package
    var shfbNetFrameworkPath = Packages.FindPackageFile($"EWSoftware.SHFB.NETFramework.*", "build\\EWSoftware.SHFB.NETFramework.props");
	if(string.IsNullOrEmpty(shfbNetFrameworkPath))
		return false;
    Environment.SetEnvironmentVariable("SHFBNETFRAMEWORK", Path.GetDirectoryName(shfbNetFrameworkPath));

    // Ensure HtmlHelp
    var setupCompilerPath = Packages.FindPackageFile($"HtmlHelp", "htmlhelp.exe");
	if(string.IsNullOrEmpty(setupCompilerPath))
		return false;
       
    if(!Version.ReadCurrentVersion(out var major, out var minor, out var revision, out var flags))
    {
        Printer.Error("Cannot read version information.");
        return false;
    }
    var flagsStr = flags==0 ? "" : " " + Version.GetFlagsString(flags);

    var pathToProject = Path.Combine(Common.GetRootFolder(), @"Source\Macad.UserGuide\Macad.UserGuide.shfbproj");

    var commandLine = $"\"{pathToProject}\" /p:Configuration=Doc /p:HelpFileVersion=\"{major}.{minor}{flagsStr}\" /m /nologo /ds /verbosity:minimal /clp:Summary;EnableMPLogging";
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

bool _RestorePackages()
{
    return Packages.RestorePackages();
}

//--------------------------------------------------------------------------------------------------

