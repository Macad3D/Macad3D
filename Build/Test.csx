#load "_Common.csx"
#load "_BuildTools.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;
using System.Runtime.CompilerServices;

if (Args.Count() < 1)
{
	Printer.Line("Usage: Test <all, unit, ui, memory> [/debug] [/stop] [/log]");
	return -1;
}

_OptionDebug = Args.Any(s => s.ToLower() == "/debug");
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

if(!_RunTests(targets))
	res = -1;

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

/***************************************************************/

static string _GetAdditionalRunSettings()
{
	string options = "";
	if(!string.IsNullOrEmpty(_OptionWhere))
	{
		options += $" NUnit.Where=\"{_OptionWhere}\"";
	}

	if(_OptionStopOnError)
		options += " StopOnError=\"true\"";

	if(_OptionSaveLog)
		options += " NUnit.InternalTraceLevel=\"verbose\"";

	return options;
}

/***************************************************************/

static bool _RunTests(List<string> targets)
{
	var vs = new VisualStudio();
	if(!vs.IsReady)
		return false;

	bool result = true;
	foreach(var target in targets)
	{
		Printer.Line($"Starting tests: {target}");
		var projectFile = Path.Combine(Common.GetRootFolder(), "Tests", target, $"{target}.csproj");
		if (!vs.Build(projectFile, "Test", _OptionDebug ? "Debug" : "Release", "x64", $"/p:AdditionalRunSettings=\"{_GetAdditionalRunSettings()}\""))
		{
			result = false;
		}
	}
	return result;
}
