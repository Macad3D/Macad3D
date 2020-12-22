using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

public static class Occt
{
    public const string OcctPath = @"ThirdParty\OCCT";
    static string _OcctSourcePath = "";
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
        "TKXSBase", "TKIGES", "TKSTEPBase", "TKSTEPAttr","TKSTEP209", "TKSTEP", 			
        "TKHLR",
    };
    
    static readonly string[] _OcctPartialPackages = new string[]
    {
        "HLRAlgo", "HLRBRep",
        "Interface", "IFSelect", "MoniTool", "XSControl", "STEPControl", "IGESControl", "IGESData"
    };

    static readonly string[] _IncludeFileExtensions = new string[]
    {
        ".h", ".hxx", ".lxx", ".gxx"
    };

    public static string FreetypeSourcePath = "";
    public const string FreetypePath = @"ThirdParty\freetype";
    public static readonly string[] FreetypeBinaries = new string[]
    {
        "freetype.dll"
    };

    public static string TbbSourcePath = "";
    public const string TbbPath = @"ThirdParty\tbb";
    public static readonly string[] TbbBinariesRelease = new string[]
    {
        "tbb.dll",
        "tbbmalloc.dll",
    };
    public static readonly string[] TbbBinariesDebug = new string[]
    {
        "tbb_debug.dll",
        "tbbmalloc_debug.dll",
    };

    //--------------------------------------------------------------------------------------------------

    public static bool SetOcctSourcePath(string occtSourcePath)
    {
        _OcctSourcePath = occtSourcePath;
        if(!File.Exists(Path.Combine(_OcctSourcePath, @"src\Standard\Standard_Version.hxx")))
        {
            Printer.Error($"OCCT not found in directory {occtSourcePath}.");
            Printer.Error($"Please make sure that you have slected to install the sources (folder 'src' must exist in path).");
            return false;
        }
        Printer.Success($"OCCT found in directory {occtSourcePath}.");

        // Get Third Party Paths
        var output = new List<string>();
        if(Common.Run("cmd.exe", "/V /C \"call custom.bat && echo !HAVE_TBB! && echo !CSF_OPT_BIN64!\"", _OcctSourcePath, output)!=0)
        {
            Printer.Error($"The batch file 'Custom.bat' in OCCT directory could not be executed.");
            return false;
        }
        if(!output[0].Contains("true"))
        {
            Printer.Error($"Usage of TBB has not been enabled. The build scripts do expect that TBB has been enabled.");
            return false;
        }
        var binPaths = output[1].Split(';');
        
        // Check for FreeType
        FreetypeSourcePath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("freetype")) ?? "");
        if(!File.Exists(Path.Combine(FreetypeSourcePath, "freetype.dll")))
        {
            Printer.Error($"The file freetype.dll could not be found in folder {FreetypeSourcePath}.");
            return false;
        }
        Printer.Success($"Freetype found in folder {FreetypeSourcePath}");
        
        // Check for TBB
        TbbSourcePath = Path.GetFullPath(binPaths.FirstOrDefault(s => s.Contains("tbb")) ?? "");
        if(!File.Exists(Path.Combine(TbbSourcePath, "tbb.dll")))
        {
            Printer.Error($"The file tbb.dll could not be found in folder {TbbSourcePath}.");
            return false;
        }
        Printer.Success($"TBB found in folder {TbbSourcePath}");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<string> GetIncludeFiles()
    {
        var list = new List<string>();

        foreach (var tk in _OcctToolkits)
        {
            var packages = File.ReadAllLines(Path.Combine(_OcctSourcePath, string.Format("src\\{0}\\PACKAGES", tk)));

            foreach (var pkg in packages)
            {
                list.AddRange(_GetIncludeFilesFromPackage(pkg));
            }
        }
        foreach (var pkg in _OcctPartialPackages)
        {
            list.AddRange(_GetIncludeFilesFromPackage(pkg));
        }
        return list.Distinct();
    }
    
    //--------------------------------------------------------------------------------------------------

    static IEnumerable<string> _GetIncludeFilesFromPackage(string pkg)
    {
        var files = File.ReadAllLines(Path.Combine(_OcctSourcePath, string.Format("src\\{0}\\FILES", pkg)))
            .Where(fn => _IncludeFileExtensions.Contains(Path.GetExtension(fn)));

        return files.Select(fn => Path.Combine(_OcctSourcePath, string.Format("src\\{0}\\{1}", pkg, fn)));

        //Console.WriteLine(string.Format("Toolkit {0}, Package {1} has {2} include files.", tk, pkg, files.Count()));
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetLibrarySourcePath(bool debug)
    {
        return Path.Combine(_OcctSourcePath, _OcctPlatformPath, "lib" + (debug?"d":""));
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<string> GetLibraryFiles()
    {
        foreach (var tk in _OcctToolkits.Concat(_OcctPartialToolkits))
        {
            yield return $"{tk}.lib";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetBinarySourcePath(bool debug)
    {
        return Path.Combine(_OcctSourcePath, _OcctPlatformPath, "bin" + (debug?"d":""));
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<string> GetBinaryFiles()
    {
        foreach (var tk in _OcctToolkits.Concat(_OcctPartialToolkits))
        {
            yield return $"{tk}.dll";
            yield return $"{tk}.pdb";
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<string> GetDeployFiles()
    {
        foreach (var tk in _OcctToolkits.Concat(_OcctPartialToolkits))
        {
            yield return Path.Combine(OcctPath, $"bin\\{tk}.dll");
        }
        
        yield return Path.Combine(FreetypePath, @"bin\freetype.dll");
        yield return Path.Combine(TbbPath, @"bin\tbb.dll");
        yield return Path.Combine(TbbPath, @"bin\tbbmalloc.dll");
    }
}