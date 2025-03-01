#load "_Common.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

public static class Occt
{
    public static string OcctPath { get; private set; }
    const string _OcctPlatformPath = @"win64\vc14";
    static readonly string[] _OcctToolkits = new string[]
    {
        "TKernel", "TKMath",
        "TKG2d", "TKG3d", "TKGeomBase", "TKBRep", "TKMesh",
        "TKGeomAlgo", "TKTopAlgo", "TKPrim", "TKBO", "TKFeat", "TKShHealing", "TKFillet", "TKOffset", "TKBool", 
        "TKService", "TKV3d", "TKOpenGl",
    };

    static readonly string[] _OcctPartialToolkits = new string[]
    {
        "TKXSBase", "TKDE", "TKLCAF", "TKXCAF", "TKVCAF", "TKCAF", "TKCDF", "TKDEIGES", "TKDESTEP",
        "TKHLR",
    };
    
    static readonly string[] _OcctPartialPackages = new string[]
    {
        "HLRAlgo", "HLRBRep",
        "Interface", "IFSelect", "MoniTool", "XSControl", "STEPControl", "StepData", "IGESControl", "IGESData", "XSAlgo", "DESTEP", "DE"
    };

    static readonly string[] _IncludeFileExtensions = new string[]
    {
        ".h", ".hxx", ".lxx", ".gxx"
    };

    public static string FreetypePath { get; private set; }
    public static readonly string[] FreetypeBinaries = new string[]
    {
        "freetype.dll"
    };

    public static string TbbPath { get; private set; }
    public static readonly string[] TbbBinaries = new string[]
    {
        "tbb12.dll",
        "tbbmalloc.dll",
    };

    public static List<string> AdditionalDependenciesSourcePaths = new List<string>();
    static Dictionary<string,string> CmakeValues = new Dictionary<string,string>();

    //--------------------------------------------------------------------------------------------------

    static string GetCmakeValue(string key)
    {
        if(CmakeValues.ContainsKey(key))
            return CmakeValues[key];
        Printer.Error($"The CMake cache does not contain a value for {key}.");
        return "";
    }

    //--------------------------------------------------------------------------------------------------

    public static bool SetOcctPath(string occtSourcePath)
    {
        CmakeValues.Clear();
        if(!File.Exists(Path.Combine(occtSourcePath, @"inc\Standard_Version.hxx")))
        {
            Printer.Error($"Standard_Version.hxx not found in directory {occtSourcePath}\\inc.");
            Printer.Error($"Please make sure that you have generated the project.");
            return false;
        }

        if(!File.Exists(Path.Combine(occtSourcePath, @"CMakeCache.txt")))
        {
            Printer.Error($"CMakeCache.txt not found in directory {occtSourcePath}.");
            Printer.Error($"Please select the cmake build directory of your custom OCCT build.");
            return false;
        }

        Printer.Line($"Reading cmake cache...");
        string cmakeCacheContent = System.IO.File.ReadAllText(Path.Combine(occtSourcePath, @"CMakeCache.txt"));
        Regex rg = new Regex(@"^([A-Za-z_0-9]*):[A-Z]*=(.*)\r", RegexOptions.Multiline);
        foreach(Match m in rg.Matches(cmakeCacheContent))
        {
            CmakeValues.Add(m.Groups[1].Value, m.Groups[2].Value);
        }

        // Check for source
        if(!File.Exists(Path.Combine(GetCmakeValue("TKStd_SOURCE_DIR"), @"PACKAGES")))
        {
            Printer.Error($"PACKAGES not found in directory {GetCmakeValue("TKStd_SOURCE_DIR")}.");
            return false;
        }

        OcctPath = occtSourcePath;
        Printer.Success($"OCCT found in directory {OcctPath}.");

        // Get Third Party Paths
        bool hasTbb = GetCmakeValue("USE_TBB") == "ON";
        if(!hasTbb)
        {
            Printer.Error($"Usage of TBB has not been enabled. The build scripts do expect that TBB has been enabled.");
            return false;
        }
        
        // Check for FreeType
        FreetypePath = GetCmakeValue("3RDPARTY_FREETYPE_DLL_DIR");
        if(!File.Exists(Path.Combine(FreetypePath, FreetypeBinaries[0])))
        {
            Printer.Error($"The file {FreetypeBinaries[0]} could not be found in folder {FreetypePath}.");
            return false;
        }
        Printer.Success($"Freetype found in folder {FreetypePath}");
        
        // Check for TBB
        TbbPath = GetCmakeValue("3RDPARTY_TBB_DLL_DIR");
        if(!File.Exists(Path.Combine(TbbPath, TbbBinaries[0])))
        {
            Printer.Error($"The file {TbbBinaries[0]} could not be found in folder {TbbPath}.");
            return false;
        }
        Printer.Success($"TBB found in folder {TbbPath}");
        
        // Check for FreeImage
        bool hasFreeImage = CmakeValues["USE_FREEIMAGE"] == "ON";
        if(hasFreeImage)
        {
            var freeImageSourcePath = GetCmakeValue("3RDPARTY_FREEIMAGE_DLL_DIR");
            if(File.Exists(Path.Combine(freeImageSourcePath, "FreeImage.dll")))
            {
                Printer.Success($"FreeImage found in folder {freeImageSourcePath}");
                AdditionalDependenciesSourcePaths.Add(freeImageSourcePath);
            }
        }
        
        // Check for FFMPEG
        bool hasFFMpeg = CmakeValues["USE_FFMPEG"] == "ON";
        if(hasFFMpeg)
        {
            var ffmpegSourcePath = GetCmakeValue("3RDPARTY_FFMPEG_DLL_DIR");
            if(File.Exists(Path.Combine(ffmpegSourcePath, "ffprobe.exe")))
            {
                Printer.Success($"FFMPEG found in folder {ffmpegSourcePath}");
                AdditionalDependenciesSourcePaths.Add(ffmpegSourcePath);
            }
        }
        
        // Check for OpenVR
        bool hasOpenVR = CmakeValues["USE_OPENVR"] == "ON";
        if(hasOpenVR)
        {
            var openVrPath = GetCmakeValue("3RDPARTY_OPENVR_DLL_DIR");
            if(File.Exists(Path.Combine(openVrPath, "openvr_api.dll")))
            {
                Printer.Success($"OpenVR found in folder {openVrPath}");
                AdditionalDependenciesSourcePaths.Add(openVrPath);
            }
        }

        return true;
    }
    
    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<string> GetPackages()
    {
        var list = new List<string>();

        foreach (var tk in _OcctToolkits)
        {
            var packages = File.ReadAllLines(Path.Combine(GetCmakeValue($"{tk}_SOURCE_DIR"), "PACKAGES"));
            list.AddRange(packages);
        }
        list.AddRange(_OcctPartialPackages);
        return list.Distinct();
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetLibraryPath(bool debug)
    {
        return Path.Combine(OcctPath, _OcctPlatformPath, "lib" + (debug?"d":""));
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetBinaryPath(bool debug)
    {
        return Path.Combine(OcctPath, _OcctPlatformPath, "bin" + (debug?"d":""));
    }

    //--------------------------------------------------------------------------------------------------
        
    public static bool CreateNuspec(string sourcePath)
    {
        if(!Occt.SetOcctPath(sourcePath))
            return false;

        if(Occt.AdditionalDependenciesSourcePaths.Count > 0)
        {
            Printer.Error("Packaging OCCT is only supported with dependencies Freetype and TBB. Please disable all other and rebuild OCCT.");
            return false;
        }

        var sb = new StringBuilder();

        // Generic files
        string occtSourceDir = Path.GetFullPath(GetCmakeValue("OCCT_SOURCE_DIR"));
        sb.AppendLine(@$"<file src=""{occtSourceDir}\LICENSE_LGPL_21.txt"" target=""native\opencascade"" />");
        sb.AppendLine(@$"<file src=""{occtSourceDir}\OCCT_LGPL_EXCEPTION.txt"" target=""native\opencascade"" />");
        sb.AppendLine(@$"<file src=""{sourcePath}\inc\Standard_Version.hxx"" target=""native\opencascade\inc"" />");

        foreach(string package in Occt.GetPackages())
        {
            string packageDir = Path.Combine(occtSourceDir, "src", package);
            sb.AppendLine(@$"<file src=""{packageDir}\*.hxx"" target=""native\opencascade\inc"" />");
            if(Directory.EnumerateFiles(packageDir, "*.h").Any())
                sb.AppendLine(@$"<file src=""{packageDir}\*.h"" target=""native\opencascade\inc"" />");
            if(Directory.EnumerateFiles(packageDir, "*.lxx").Any())
                sb.AppendLine(@$"<file src=""{packageDir}\*.lxx"" target=""native\opencascade\inc"" />");
            if(Directory.EnumerateFiles(packageDir, "*.gxx").Any())
                sb.AppendLine(@$"<file src=""{packageDir}\*.gxx"" target=""native\opencascade\inc"" />");
        }

        foreach (var tk in _OcctToolkits.Concat(_OcctPartialToolkits))
        {
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\lib\{tk}.lib"" target=""native\opencascade\win-x64\lib"" />");
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\libd\{tk}.lib"" target=""native\opencascade\win-x64\libd"" />");
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\bin\{tk}.*"" target=""native\opencascade\win-x64\bin"" />");
            sb.AppendLine(@$"<file src=""{_OcctPlatformPath}\bind\{tk}.*"" target=""native\opencascade\win-x64\bind"" />");
        }

        var freetypeRelativePath = Utils.GetRelativePath(OcctPath, FreetypePath);
        sb.AppendLine(@$"<file src=""{freetypeRelativePath}\..\*.txt"" target=""native\freetype"" />");
        foreach(var file in FreetypeBinaries)
        {
            sb.AppendLine(@$"<file src=""{freetypeRelativePath}\{file}"" target=""native\freetype\win-x64\bin"" />");
        }

        var tbbRelativePath = Utils.GetRelativePath(OcctPath, TbbPath);
        sb.AppendLine(@$"<file src=""{tbbRelativePath}\..\..\*.txt"" target=""native\tbb"" />");
        foreach(var file in TbbBinaries)
        {
            sb.AppendLine(@$"<file src=""{tbbRelativePath}\{file}"" target=""native\tbb\win-x64\bin"" />");
        }

        var template = File.ReadAllLines(Path.Combine(Common.GetRootFolder(), "Build", "Nuget", "Macad.ThirdParty.Occt.nuspec.tmpl"));
        using var outFile = new StreamWriter(File.Open(Path.Combine(Common.GetRootFolder(), "Build", "Nuget", "Macad.ThirdParty.Occt.nuspec"), FileMode.Create));
        foreach(var line in template)
        {
            if(line.Contains("$additionalFiles$"))
                outFile.Write(sb.ToString());
            else
                outFile.WriteLine(line);
        }

        Printer.Success("Nuspec file created.");
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}