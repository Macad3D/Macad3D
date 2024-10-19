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
    Printer.Line("Usage: build <all, debug, release, publish> [/clean] [/log]");
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

    Printer.Success($"\nCleaning configuration {configuration}...");
    if (!_VS.Clean(solutionFile, "", configuration, "x64"))
        return false;

    Printer.Success("\nClean succeeded.");
    return true;
}

//--------------------------------------------------------------------------------------------------

bool _BuildConfiguration(string configuration)
{
    if(!_EnsureVS())
        return false;

    var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");

    Printer.Success($"\nBuilding configuration {configuration}...");
    if (!_VS.Build(solutionFile, "", configuration, "x64", "-restore"))
        return false;

    Printer.Success("\nBuild succeeded.");
    return true;
}

//--------------------------------------------------------------------------------------------------

bool _BuildPublish()
{
    if(!_EnsureVS())
        return false;

    var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");
    var pathToProject = Path.Combine(Common.GetRootFolder(), @"Source\Macad\Macad.csproj");
    var commandLine = $"\"{pathToProject}\" /t:Publish /p:Configuration=Release /p:Platform=x64 /nologo /verbosity:minimal ";

    Printer.Success($"\nPublishing...");
    if (Common.Run(_VS.PathToMSBuild, commandLine) != 0)
    {
        Printer.Error("Publish failed.");
        return false;
    }

    Printer.Success("\nPublish succeeded.");
    return true;
}

//--------------------------------------------------------------------------------------------------
