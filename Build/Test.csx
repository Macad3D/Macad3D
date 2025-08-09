#load "_Common.csx"
#load "_BuildTools.csx"

if (Args.Count() < 1)
{
	Printer.Line("Usage: Test <'all', 'unit' | projectName> [/debug] [/parallel] [/stop] [/log] [/where <condition>]");
	return -1;
}

_OptionDebug = Args.Any(s => s.ToLower() == "/debug");
_OptionParallel = Args.Any(s => s.ToLower() == "/parallel");
if (_OptionParallel && _OptionDebug)
{
	Printer.Warning("Parallel execution is not supported in debug mode. Running tests sequentially.");
	_OptionParallel = false;
}
_OptionStopOnError = Args.Any(s => s.ToLower() == "/stop");
_OptionSaveLog = Args.Any(s => s.ToLower() == "/log");
var whereIndex = 0;
for (int i = 1; i < Args.Count; i++)
{
	if (Args[i].ToLower() == "/where")
	{
		whereIndex = i;
		break;
	}
}


List<string> targets = new();
int res = 0;

for (int i = 0; i < Args.Count; i++)
{
	var arg = Args[i].Trim().ToLower();
	if (arg.StartsWith("/"))
	{
		if (arg == "/where")
		{
			var whereArgs = Args.Skip(i + 1).TakeWhile(arg => !arg.StartsWith("/"));
			_OptionWhere = string.Join(" ", whereArgs);
			i += whereArgs.Count(); // Skip the where arguments
		}
		continue; // Skip options
	}

	switch (arg)
	{
		case "all":
			targets.Add("Test.Core");
			targets.Add("Test.Interaction");
			targets.Add("Test.Exchange");
			targets.Add("Test.UI");
			targets.Add("Test.Memory");
			break;

		case "unit":
			targets.Add("Test.Core");
			targets.Add("Test.Interaction");
			targets.Add("Test.Exchange");
			targets.Add("Test.Memory");
			break;

		default:
			targets.Add($"Test.{arg}");
			if (!File.Exists(Path.Combine(Common.GetRootFolder(), "Tests", targets[0], $"{targets[0]}.csproj")))
			{
				Printer.Error($"Test project '{targets[0]}' not found.");
				return -1;
			}
			break;
	}
}

if(!_RunTests(targets.Distinct()))
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
static bool _OptionParallel = false;
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

static bool _RunTests(IEnumerable<string> targets)
{
	var vs = new VisualStudio();
	if (!vs.IsReady)
	{
		return false;
	}

	bool result = true;

	if (_OptionParallel)
	{
		// Run tests in parallel for non-UI projects
		var parallelTargets = targets.Where(t => !t.ToLower().Contains("ui"));
		if (parallelTargets.Any())
		{
			var tasks = parallelTargets.Select(target => Task.Run(() => _RunTests(vs, target))).ToArray();
			Task.WaitAll(tasks);
			result &= tasks.All(t => t.Result);
			targets = targets.Except(parallelTargets).ToList(); // Remove parallel targets from the list
		}
	}
	
	// Run other tests sequentially
	foreach (var target in targets)
	{
		result &= _RunTests(vs, target);
	}
	return result;
}

/***************************************************************/

static bool _RunTests(VisualStudio vs, string target)
{
	Printer.Line($"Starting tests: {target}");
	var projectFile = Path.Combine(Common.GetRootFolder(), "Tests", target, $"{target}.csproj");
	if (!vs.Build(projectFile, "Test", _OptionDebug ? "Debug" : "Release", "x64", $"/p:AdditionalRunSettings=\"{_GetAdditionalRunSettings()}\""))
	{
		return false;
	}
	return true;
}