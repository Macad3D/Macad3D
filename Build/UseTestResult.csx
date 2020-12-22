#load "_Common.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Runtime.InteropServices;
using System.Linq;

var count = Args.Count();

// if count is not in valid range throw exception
if (count == 0)
{
	Printer.Line("Usage: UseTestResult <one_or_multiple_paths_to_TestResult_files>");
	return -1;
}

try 
{
	foreach(var path in Args)
	{
		_UseTestResult(path);
	}
}
catch(Exception e)
{
	Printer.Error(e.Message);
	return -1;
}
return 0;


/***************************************************************/

void _UseTestResult(string path)
{
	if(!path.Contains("_TestResult"))
	{
		if(path.Contains("_Difference"))
		{
			path = path.Replace("_Difference", "_TestResult");
		}
		else 
		{
			return;
		}
	}

	if(!File.Exists(path))
		return;
	
	var basename = Path.Combine(Path.GetDirectoryName(path), Path.GetFileNameWithoutExtension(path).Replace("_TestResult", ""));
	var extension = Path.GetExtension(path);
	Printer.Line("Using test result for file " + basename + extension);
	
	if(File.Exists(basename + extension))
		File.Delete(basename + extension);
	File.Move(basename + "_TestResult" + extension, basename + extension);
	if(File.Exists(basename + "_Difference" + extension))
		File.Delete(basename + "_Difference" + extension);
}
