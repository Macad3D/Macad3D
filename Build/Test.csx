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
_PathToBinaries = Path.Combine(Common.GetRootFolder(), "bin", _OptionDebug ? "Debug" : "Release");
_OptionStopOnError = Args.Any(s => s.ToLower() == "/stop");
_OptionSaveLog = Args.Any(s => s.ToLower() == "/log");
_OptionWhere = string.Join(" ", Args.Skip(1).Where(s => !s.StartsWith("/")));
List<string> targets = new();
int res = 0;

switch(Args[0].ToLower())
{
	case "all":
		targets.Add("Test.Unit");
		targets.Add("Test.UI");
		targets.Add("Test.Memory");
		break;
	case "unit":
		targets.Add("Test.Unit");
		break;
	case "ui":
		targets.Add("Test.UI");
		break;
	case "memory":
		targets.Add("Test.Memory");
		break;
	default:
		Printer.Error("Parameter unknown.");
		return -1;
}

foreach(var target in targets)
{
	if(target.Contains("Memory"))
	{
		if(!_RunTestsDotMemoryUnit(target))
			res = -1;
	} 
	else 
	{
		if(!_RunTestsNunit(target))
			res = -1;
	}
}

if(res == 0)
{
	Printer.Success("\nAll tests run.");
} 
else
{
	Printer.Warning("\nAll tests run, but some (or all) tests failed.");
}

return res;

/***************************************************************/

static bool _OptionDebug = false;
static bool _OptionStopOnError = false;
static bool _OptionSaveLog = false;
static string _OptionWhere = "";
static string _PathToBinaries = "";

/***************************************************************/

static string _GetNUnitCommandLine(string target)
{
	var resultSuffix = target.Replace("Test.", null);

	var commandLine = $"--runtimeconfig \"{Path.Combine(_PathToBinaries, $"{target}.runtimeconfig.json")}\" {target}.dll"; // --process:Separate";
	commandLine += " --noheader --workers=1";
	commandLine += $" --result=TestResult_{resultSuffix}.xml --out=TestOutput_{resultSuffix}.txt";

	if(!string.IsNullOrEmpty(_OptionWhere))
	{
		commandLine += $" --where \"{_OptionWhere}\"";
	}

/*	if(!_OptionDebug)
		commandLine += " --timeout=30000";
	else
		commandLine += " --pause"; --debug */

	if(_OptionStopOnError)
		commandLine += " --stoponerror";

	if(_OptionSaveLog)
		commandLine += " --trace=verbose";

	return commandLine;
}

/***************************************************************/

static string _GetNUnitPath()
{
	return Packages.FindPackageFile(@"NUnit.ConsoleRunner.NetCore.*", @"tools\net6.0\any\nunit3-console.exe");
}

/***************************************************************/

static bool _RunTestsNunit(string target)
{
	var pathToRunner = _GetNUnitPath();
	if(string.IsNullOrEmpty(pathToRunner))
		return false;

	Printer.Line($"\nLaunching test runner...");
	if(Common.Run(pathToRunner, _GetNUnitCommandLine(target), _PathToBinaries) != 0)
	{
		Printer.Error("Testrun failed.");
		return false;
	}
	return true;
}

/***************************************************************/

static bool _RunTestsDotMemoryUnit(string target)
{
	var pathToRunner = _GetNUnitPath();
	if(string.IsNullOrEmpty(pathToRunner))
		return false;

	var pathToMemRunner = Packages.FindPackageFile(@"JetBrains.dotMemoryUnit\*", @"lib\tools\dotMemoryUnit.exe");
	if(string.IsNullOrEmpty(pathToMemRunner))
		return false;

	Printer.Line($"\nLaunching memory test runner...");
	var commandLine = $"\"{pathToRunner}\" --propagate-exit-code -- {_GetNUnitCommandLine(target)}";
	if(Common.Run(pathToMemRunner, commandLine, _PathToBinaries) != 0)
	{
		Printer.Error("Testrun failed.");
		return false;
	}
	return true;
}
