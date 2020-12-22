#load "_Common.csx"
#load "_BuildTools.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;

if(Args.Count() < 1)
{
	Printer.Line("Usage: Test <all, unit, ui, memory> [/debug] [/stop] [/log]");
	return -1;
}

_OptionDebug = Args.Any(s => s.ToLower() == "/debug");
_OptionStopOnError = Args.Any(s => s.ToLower() == "/stop");
_OptionSaveLog = Args.Any(s => s.ToLower() == "/log");

switch(Args[0].ToLower())
{
	case "all":
		int res = 0;
		if(!_RunTests("Test.Unit,Test.UI"))
			res = -1;
		if(!_RunMemoryTests("Test.Memory"))
			res = -1;
		return res;
		break;
	case "unit":
		if(!_RunTests("Test.Unit"))
			return -1;
		break;
	case "ui":
		if(!_RunTests("Test.UI"))
			return -1;
		break;
	case "memory":
		if(!_RunMemoryTests("Test.Memory"))
			return -1;
		break;
	default:
		Printer.Error("Parameter unknown.");
		return -1;
}
Printer.Success("\nAll tests run.");
return 0;

/***************************************************************/

static bool _OptionDebug = false;
static bool _OptionStopOnError = false;
static bool _OptionSaveLog = false;

/***************************************************************/

static string _EnsureTargets(string targets)
{
	string targetDlls = "";
	string pathToBinaries = Path.Combine(Common.GetRootFolder(), "bin", _OptionDebug ? "Debug" : "Release");
	var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");
	var vs = new VisualStudio();
	if(!vs.IsReady)
		return null;

	// Check if targets were built
	foreach(var target in targets.Split(','))
	{
		if(!vs.Build(solutionFile, target, _OptionDebug ? "Debug" : "Release", "x64"))
			return null;

		targetDlls += target + ".dll ";
	}
	return targetDlls;
}

/***************************************************************/

static string _GetNUnitCommandLine()
{
	var commandLine = $"--noheader --workers=1 --agents=1 --process=Separate --out=TestOutput.txt";
	if(_OptionDebug)
		commandLine += " --pause";
	else
		commandLine += " --timeout=30000";
	if(_OptionStopOnError)
		commandLine += " --stoponerror";
	if(_OptionSaveLog)
		commandLine += " --trace=verbose";
	return commandLine;
}

/***************************************************************/

static bool _RunTests(string targets)
{
	var targetDlls = _EnsureTargets(targets);
	if(targetDlls==null)
		return false;

	// Build command line and run
	var pathToRunner = Packages.FindPackageFile(@"NUnit.ConsoleRunner.*", @"tools\nunit3-console.exe");
	if(string.IsNullOrEmpty(pathToRunner))
		return false;

	Printer.Line($"\nLaunching test runner...");
	var commandLine = targetDlls + " " + _GetNUnitCommandLine();
	var pathToBinaries = Path.Combine(Common.GetRootFolder(), "bin", _OptionDebug ? "Debug" : "Release");
	if(Common.Run(pathToRunner, commandLine, pathToBinaries) != 0)
	{
		Printer.Error("Testrun failed.");
		return false;
	}
	return true;
}

/***************************************************************/

static bool _RunMemoryTests(string targets)
{
	var targetDlls = _EnsureTargets(targets);
	if(targetDlls==null)
		return false;

	// Build command line and run
	var pathToRunner = Packages.FindPackageFile(@"NUnit.ConsoleRunner.*", @"tools\nunit3-console.exe");
	if(string.IsNullOrEmpty(pathToRunner))
		return false;

	var pathToMemRunner = Packages.FindPackageFile(@"JetBrains.dotMemoryUnit.*", @"lib\tools\dotMemoryUnit.exe");
	if(string.IsNullOrEmpty(pathToMemRunner))
		return false;

	Printer.Line($"\nLaunching memory test runner...");
	var commandLine = $"\"{pathToRunner}\" --propagate-exit-code -- \"{targetDlls}\" {_GetNUnitCommandLine()}";
	var pathToBinaries = Path.Combine(Common.GetRootFolder(), "bin", _OptionDebug ? "Debug" : "Release");
	if(Common.Run(pathToMemRunner, commandLine, pathToBinaries) != 0)
	{
		Printer.Error("Testrun failed.");
		return false;
	}
	return true;
}
