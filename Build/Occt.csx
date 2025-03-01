#load "_Common.csx"
#load "_ThirdParty_Occt.csx"
#load "_BuildTools.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;
using System.Xml;
using System.Text;

if(Args.Count() < 1)
{
	Printer.Line("Usage: occt <config, generate>");
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
	if(Args[1].ToLower()=="package")
	{
		_ConfigOcctPaths("");
		Printer.Success("The pre-built package will be used again.");
	} 
	else
	{
		if(!_ConfigOcctPaths(Args[1]))
			return -1;
	}
}
else if(Args[0].ToLower() == "generate")
{
	// Generate Wrapper
	if(!_GenerateWrapper())
		return -1;
}
return 0;

/***************************************************************/

bool _OptionDebug = false;
bool _OptionClean = false;
string _occtSourceDir;

/***************************************************************/
		
#region Config

bool _ConfigOcctPaths(string occtPath)
{
	var sb = new StringBuilder();
	sb.AppendLine("<Project ToolsVersion=\"4.0\" xmlns=\"http://schemas.microsoft.com/developer/msbuild/2003\">");
	sb.AppendLine();

	if(!string.IsNullOrEmpty(occtPath))
	{
		if(!Occt.SetOcctPath(occtPath))
		{
			return false;
		}

		sb.AppendLine("  <PropertyGroup>");
		sb.AppendLine("    <OcctIncPath>" + Path.Combine(occtPath, "inc") + "</OcctIncPath>");
		sb.AppendLine("    <FreeTypeBinPath>" + Occt.FreetypePath + "</FreeTypeBinPath>");
		sb.AppendLine("    <TbbBinPath>" + Occt.TbbPath + "</TbbBinPath>");
		sb.AppendLine("  </PropertyGroup>");

		sb.AppendLine("  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='Debug|x64'\">");
		sb.AppendLine("    <OcctLibPath>" + Occt.GetLibraryPath(true) + "</OcctLibPath>");
		sb.AppendLine("    <OcctBinPath>" + Occt.GetBinaryPath(true) + "</OcctBinPath>");
		sb.AppendLine("  </PropertyGroup>");

		sb.AppendLine("  <PropertyGroup Condition=\"'$(Configuration)|$(Platform)'=='Release|x64'\">");
		sb.AppendLine("    <OcctLibPath>" + Occt.GetLibraryPath(false) + "</OcctLibPath>");
		sb.AppendLine("    <OcctBinPath>" + Occt.GetBinaryPath(false) + "</OcctBinPath>");
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

#endregion
		
#region Generate Wrapper

const string _CachePath = @".intermediate\Macad.Occt\CastXml";
const string _WrapperBinPath = @"bin\{0}\WrapperGenerator.exe";
const string _WrapperProjectName = @"Tools\WrapperGenerator";
const string _TargetProjectName = @"Source\Macad.Occt";
const string _GeneratedSourcePath = @"Source\Macad.Occt\Generated";

bool _GenerateWrapper()
{
	var _CastXmlPath = Packages.FindPackageFile("CastXml", "castxml\\bin\\castxml.exe");
	if(string.IsNullOrEmpty(_CastXmlPath))
		return false;

	var vs = new VisualStudio();
	if(!vs.IsReady)
		return false;

	var solutionFile = Path.Combine(Common.GetRootFolder(), "Macad3D.sln");
	var targets = $"{_WrapperProjectName}";
	if(_OptionClean)
	{
		targets += $";{_TargetProjectName}:CleanWrapper";
	}
	targets += $";{_TargetProjectName}:GenerateWrapper";
	if (!vs.Build(solutionFile, targets, _OptionDebug ? "Debug" : "Release", "x64", $"/p:CastXmlPath=\"{_CastXmlPath}\""))
        return false;

    return true;

}

#endregion

/***************************************************************/
