#load "_Common.csx"
#load "_ThirdParty.csx"
#load "_BuildTools.csx"
#load "_SSIndex.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;
using System.Xml;

if(Args.Count() < 1)
{
	Printer.Line("Usage: occt <config, import, generate, patch>");
	return -1;
}

_OptionDebug = Args.Any(s => s.ToLower() == "/debug");
_OptionClean = Args.Any(s => s.ToLower() == "/clean");

if(Args[0].ToLower() == "config")
{
	// Set paths to OCCT distri
	if(Args.Count() < 2)
	{
		Printer.Error("Missing parameter. Usage: occt config <path_to_occt>");
		return -1;
	}
	if(!_ConfigOcctPaths(Args[1]))
		return -1;
}
else if(Args[0].ToLower() == "import")
{
	// Import from OCCT distri
	if(Args.Count() < 2)
	{
		Printer.Error("Missing parameter. Usage: occt import <path_to_occt>");
		return -1;
	}
	if(!_ImportFromOcctPackage(Args[1]))
		return -1;
	if(!_ApplyPatch())
		return -1;
	_ConfigOcctPaths("");
}
else if(Args[0].ToLower() == "generate")
{
	// Generate Wrapper
	if(!_GenerateWrapper())
		return -1;
}
else if(Args[0].ToLower() == "patch")
{
	// Patch include files for fixing compilation errors
	if(!_ApplyPatch())
		return -1;
}
return 0;

/***************************************************************/

bool _OptionDebug = false;
bool _OptionClean = false;
string _occtSourceDir;
SSIndex _SSIndex = null;

/***************************************************************/
		
#region 

bool _ConfigOcctPaths(string occtPath)
{
	var sb = new StringBuilder();
	sb.AppendLine("<Project ToolsVersion=\"4.0\" xmlns=\"http://schemas.microsoft.com/developer/msbuild/2003\">");
	sb.AppendLine();

	if(!string.IsNullOrEmpty(occtPath))
	{
		if(!Occt.SetOcctSourcePath(occtPath))
		{
			return false;
		}

		sb.AppendLine("  <PropertyGroup>");
		sb.AppendLine("    <OcctIncPath>" + Path.Combine(occtPath, "inc") + "</OcctIncPath>");
		sb.AppendLine("    <FreeTypeBinPath>" + Occt.FreetypeSourcePath + "</FreeTypeBinPath>");
		sb.AppendLine("    <TbbBinPath>" + Occt.TbbSourcePath + "</TbbBinPath>");
		sb.AppendLine("  </PropertyGroup>");

		sb.AppendLine("  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='Debug|x64'\">");
		sb.AppendLine("    <OcctLibPath>" + Occt.GetLibrarySourcePath(true) + "</OcctLibPath>");
		sb.AppendLine("    <OcctBinPath>" + Occt.GetBinarySourcePath(true) + "</OcctBinPath>");
		sb.AppendLine("  </PropertyGroup>");

		sb.AppendLine("  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='Release|x64'\">");
		sb.AppendLine("    <OcctLibPath>" + Occt.GetLibrarySourcePath(false) + "</OcctLibPath>");
		sb.AppendLine("    <OcctBinPath>" + Occt.GetBinarySourcePath(false) + "</OcctBinPath>");
		sb.AppendLine("  </PropertyGroup>");

		if(Occt.AdditionalDependenciesSourcePaths.Count > 0)
		{
			sb.AppendLine("  <ItemGroup>");
			foreach(var additionalPath in Occt.AdditionalDependenciesSourcePaths)
			{
				sb.AppendLine("    <OcctDeployFiles Include=\"" + additionalPath + "\\*.*\" />");
			}
			sb.AppendLine("  </ItemGroup>");
		}
	}

	sb.AppendLine();
	sb.AppendLine("</Project>");
	var propsPath = Path.Combine(Common.GetRootFolder(), "Build", "MSBuild", "LocalSettings.props");
	File.WriteAllText(propsPath, sb.ToString());
	return true;
}

/***************************************************************/
	
bool _ImportFromOcctPackage(string occtPath)
{
	_occtSourceDir = occtPath;
	var rootPath = Common.GetRootFolder();

	if(!Occt.SetOcctSourcePath(occtPath))
	{
		return false;
	}

	if(Occt.AdditionalDependenciesSourcePaths.Count > 0)
	{
		Printer.Error("Importing OCCT is only supported with dependencies Freetype and TBB. Please disable all other and rebuild OCCT.");
		return false;
	}
	
	_SSIndex = new SSIndex();
	if(!_SSIndex.Init(occtPath))
	{
		Printer.Warning("Source indexing is disabled.");
		_SSIndex = null;
	}

	bool successful =
		_CopyIncludes(rootPath)
		&& _CopyBinaries(rootPath);

	if (!successful)
		Printer.Error("Not completed.");
		
	return successful;
}

/***************************************************************/

bool _CopyIncludes(string rootPath)
{
	Printer.Line("Copying include files...");

	var targetPath = Path.Combine(rootPath, Occt.OcctPath, "inc");
	Directory.CreateDirectory(targetPath);

	var filesToDelete = Directory.EnumerateFiles(targetPath).Select(fn => Path.GetFileName(fn)).ToList();

	var sourceList = Occt.GetIncludeFiles();

	var copyCount = 0;
	var deleteCount = 0;

	foreach (var sourceFilepath in sourceList)
	{
		var filename = Path.GetFileName(sourceFilepath);
		filesToDelete.Remove(filename);

		var targetFilepath = Path.Combine(targetPath, filename);

		if (File.GetLastWriteTime(sourceFilepath).CompareTo(File.GetLastWriteTime(targetFilepath)) > 0)
		{
			File.Copy(sourceFilepath, targetFilepath, true);
			copyCount++;
		}
	}

	foreach (var file in filesToDelete)
	{
		File.Delete(Path.Combine(targetPath, file));
		deleteCount++;
	}

	Printer.Success($"Copied {copyCount} missing or newer files to include directory, deleted {deleteCount} obsolete files.");

	return true;
}

/***************************************************************/

bool _CopyBinaries(string rootPath)
{
	return _CopyBinaries(Occt.GetLibrarySourcePath(false), Occt.GetLibraryFiles(), Path.Combine(rootPath, Occt.OcctPath, "lib"), true)
		&& _CopyBinaries(Occt.GetLibrarySourcePath(true), Occt.GetLibraryFiles(), Path.Combine(rootPath, Occt.OcctPath, "libd"), true)
		&& _CopyBinaries(Occt.GetBinarySourcePath(false), Occt.GetBinaryFiles(), Path.Combine(rootPath, Occt.OcctPath, "bin"), true)
		&& _CopyBinaries(Occt.GetBinarySourcePath(true), Occt.GetBinaryFiles(), Path.Combine(rootPath, Occt.OcctPath, "bind"), true)
		&& _CopyBinaries(Occt.FreetypeSourcePath, Occt.FreetypeBinaries, Path.Combine(rootPath, Occt.FreetypePath, "bin"), false)
		&& _CopyBinaries(Occt.TbbSourcePath, Occt.TbbBinariesRelease, Path.Combine(rootPath, Occt.TbbPath, "bin"), false)
		&& _CopyBinaries(Occt.TbbSourcePath, Occt.TbbBinariesDebug, Path.Combine(rootPath, Occt.TbbPath, "bind"), false);

	return true;
}

/***************************************************************/

bool _CopyBinaries(string sourcePath, IEnumerable<string> sourceList, string targetPath, bool ssindex)
{
	Printer.Line($"Copying files to {targetPath}...");
	Directory.CreateDirectory(targetPath);

	var filesToDelete = Directory.EnumerateFiles(targetPath).Select(fn => Path.GetFileName(fn)).ToList();

	var copyCount = 0;
	var deleteCount = 0;

	foreach (var filename in sourceList)
	{
		filesToDelete.Remove(filename);
		
		var sourceFilepath = Path.Combine(sourcePath, filename);
		if(!File.Exists(sourceFilepath))
		{
			Printer.Warning($"The file {filename} was not found in source path.");
			continue;
		}

		var targetFilepath = Path.Combine(targetPath, filename);

		if (File.GetLastWriteTime(sourceFilepath).CompareTo(File.GetLastWriteTime(targetFilepath)) > 0)
		{
			File.Copy(sourceFilepath, targetFilepath, true);
			copyCount++;
			
			if(ssindex && _SSIndex != null && Path.GetExtension(targetFilepath).ToLower() == ".pdb")
			{
				_SSIndex.ProcessPdb(targetFilepath);
			}
		}
	}

	foreach (var file in filesToDelete)
	{
		File.Delete(Path.Combine(targetPath, file));
		deleteCount++;
	}

	Printer.Success($"Copied {copyCount} missing or newer files, deleted {deleteCount} obsolete files.");

	return true;
}

#endregion

/***************************************************************/
		
#region Generate Wrapper

const string _CachePath = @".intermediate\Macad.Occt\CastXml";
const string _WrapperBinPath = @"bin\{0}\WrapperGenerator.exe";
const string _WrapperProjectName = @"WrapperGenerator";
const string _GeneratedSourcePath = @"Source\Macad.Occt\Generated";
const string _PatchFileName = @"OcctCompilationFixes.patch";
string _CastXmlPath = @"Tools\CastXML";

bool _GenerateWrapper()
{
	var _CastXmlPath = Packages.FindPackageFile("CastXml.0.4.1", "castxml\\bin\\castxml.exe");
	if(string.IsNullOrEmpty(_CastXmlPath))
		return false;

	var vs = new VisualStudio();
	if(!vs.IsReady)
		return false;
	
	var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");
	if(!vs.Build(solutionFile, _WrapperProjectName, _OptionDebug ? "Debug" : "Release", "x64"))
		return false;
	
	// Determine Occt path from settings
	var occtIncludePath = Path.Combine(Common.GetRootFolder(), Occt.OcctPath, "inc");
	var propsPath = Path.Combine(Common.GetRootFolder(), "Build", "MSBuild", "LocalSettings.props");
	if(File.Exists(propsPath))
	{
		var xmldoc = new XmlDocument();
		xmldoc.Load(propsPath);
		var path = xmldoc.GetElementsByTagName("OcctIncPath")?[0]?.InnerText;
		Printer.Line(path);
		if(!string.IsNullOrEmpty(path))
		{
			occtIncludePath = path;
		}
	}
	
	// Clean
	if(_OptionClean)
	{
		Printer.Line("Cleaning CastXml cache...");
		int count = 0;
		foreach (var file in Directory.EnumerateFiles(Path.Combine(Common.GetRootFolder(), _CachePath)))
		{
			File.Delete(file);
			count++;
		}
		Printer.Success($"Cleaned {count} files from cache.");
	}

	// Prepare command line
	string modulePath = Path.Combine(Common.GetRootFolder(), string.Format(_WrapperBinPath,_OptionDebug ? "Debug" : "Release" ));
	string commandLine = "";
	commandLine += " occt=\"" + occtIncludePath + "\" ";
	commandLine += " out=\"" + Path.Combine(Common.GetRootFolder(), _GeneratedSourcePath) + "\" ";
	commandLine += " castxml=\"" + Path.Combine(Common.GetRootFolder(), _CastXmlPath) + "\" ";
	commandLine += " cache=\"" + Path.Combine(Common.GetRootFolder(), _CachePath) + "\" ";
	commandLine += " msvc=\"" + vs.GetPathToMSVC() + "\" ";
	commandLine += " ucrt=\"" + vs.GetPathToUCRT() + "\" ";
	commandLine += " winsdk=\"" + VisualStudio.GetPathToWindowsSDK() + "\" ";

	Printer.Success($"\nLaunching wrapper generator...");
	Printer.Line($"Command line: {commandLine}\n");
	
	if(Common.Run(modulePath, commandLine)==0)
	{
		Printer.Success("\nWrapper source file generation completed.");
		return true;
	} else {
		Printer.Error("\nError while generating wrapper source files.");
		return false;
	}
}

#endregion

/***************************************************************/

#region Apply Patch

bool _ApplyPatch()
{
	var rootPath = Common.GetRootFolder();
	var patchPath = Path.Combine(rootPath, "Build", "Patches", _PatchFileName);
	if(!File.Exists(patchPath))
	{
		Printer.Line($"Patch file not found, currently no patch needed.");
		return true;
	}

	var svnPath = Packages.FindPackageFile($"Subversion", @"bin\svn.exe");
	if(string.IsNullOrEmpty(svnPath))
		return false;

	Printer.Line($"\nApplying patch to fix compilation issues...\n");

	var targetPath = Path.Combine(rootPath, Occt.OcctPath, "inc");
	var commandLine = $"patch \"{patchPath}\" \"{targetPath}\"";
	var svnOutput = new List<string>();

	if (Common.Run(svnPath, commandLine) != 0)
	{
		Printer.Error("Patch process failed.");
		return false;
	}

	Printer.Success($"\nFinished.");

	return true;
}

#endregion