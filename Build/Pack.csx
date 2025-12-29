#load "_Common.csx"
#load "_Packages.csx"
#load "_ThirdParty_Occt.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Linq;

if (Args.Count() < 4)
{
    Printer.Line("Usage: pack <package> <version> [create <basepath>|push <api_key>] [/warn]");
    return -1;
}

// Ensure nuget.exe
string nugetPath = Packages.FindPackageFile("NuGet", "NuGet.exe");
if(string.IsNullOrEmpty(nugetPath))
    return -1;

/* Prepare parameters */
string packageName = "Macad.ThirdParty." + Args[0];
string version = Args[1];
string outDir = Path.Combine(Common.GetRootFolder(), "Bin", "Nupkg");
Directory.CreateDirectory(outDir);

bool optionWarnings = Args.Any(s => s.ToLower() == "/warn");

if(Args[2].ToLower() == "create")
{
    if(!_CreatePackage())
        return -1;
} 
else if(Args[2].ToLower() == "push")
{
    if(!_PushPackage())
        return -1;
}
return 0;

/***************************************************************/

bool _CreatePackage()
{
    string basePath = Args[3];
    string propDir = Path.Combine(Common.GetRootFolder(), "Build", "Nuget");
    string nuspecFile = Path.Combine(propDir, packageName+".nuspec");

    /* Do we need to generate nuspec first? */
    if(Args[0].ToLower() == "occt")
    {
        if(!Occt.CreateNuspec(basePath))
            return false;

        basePath = Occt.OcctPath;
        nuspecFile = Path.Combine(Common.GetRootFolder(), ".intermediate", "Build", "Nuget", packageName+".nuspec");
    }

    // Check file
    if(!File.Exists(nuspecFile))
    {
        Printer.Error($"Cannot find nuspec file for package {packageName}");
        return false;
    }

    /* Call NuGet pack */
    string commandLine = $"pack \"{nuspecFile}\" "
                    + $"-OutputDirectory \"{outDir}\" "
                    + $"-BasePath \"{basePath}\" "
                    + $"-Properties version={version};propdir={propDir} ";
    if(!optionWarnings)
    {
        commandLine += "-Properties NoWarn=NU5100";
    }
    if (Common.Run(nugetPath, commandLine) != 0)
    {
        Printer.Error($"Packaging {packageName} failed.");
        return false;
    }

    Printer.Success($"Package {packageName} created.");
    return true;
}

/***************************************************************/

bool _PushPackage()
{
    string keyOrDir = Args[3];

    /* Call NuGet push */
    string pkgPath = Path.Combine(outDir, $"{packageName}.{version}.nupkg");
    if(!File.Exists(pkgPath))
    {
        Printer.Error($"Package {packageName} must be created first.");
        return false;
    }

    string commandLine;
    if(Directory.Exists(keyOrDir))
    {
        commandLine = $"add \"{pkgPath}\" -Source \"{keyOrDir}\"";
    }
    else 
    {
        commandLine = $"push \"{pkgPath}\" -Source https://nuget.macad3d.net/ -ApiKey \"{keyOrDir}\"";
    }

    if (Common.Run(nugetPath, commandLine) != 0)
    {
        Printer.Error($"Packaging {packageName} failed.");
        return false;
    }

    Printer.Success($"Package {packageName} pushed to registry.");
    return true;
}

