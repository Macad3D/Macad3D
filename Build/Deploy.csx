#load "_Common.csx"
#load "_BuildTools.csx"
#load "_SSIndex.csx"
#load "_Packages.csx"

if (Args.Count() < 1)
{
    Printer.Line("Usage: deploy <setup, symstore>");
    return -1;
}

var config = Args[0].ToLower();

if (config == "setup")
{
    if(!_ResolveFileList())
        return -1;
    if (!_BuildSetup())
        return -1;
}
else if (config == "symstore")
{
    if (Args.Count() < 2)
    {
        Printer.Line("Usage: deploy symstore <path_to_store>");
        return -1;
    }

    if (!_ResolveFileList())
        return -1;
    if (!_SourceIndexPdbs())
        return -1;
    if (!_StoreSymbols(Args[1]))
        return -1;
}
else
{
    Printer.Error("Invalid command.");
    return -1;
}

Printer.Success("Deploy succeeded.");
return 0;

/***************************************************************/

record FileSet
{
    public string Name;
    public string SourceDir;
    public string TargetDir;
    public string Flags;
    public List<string> Files;
}

/***************************************************************/

static List<FileSet> FileSets = new List<FileSet> {
    {
        new FileSet {
            Name = "app",
            TargetDir = @"{app}",
            SourceDir = @"Bin\Publish",
            Flags = "ignoreversion",
            Files = new List<string> {
                "*.exe",
                "*.dll",
                "*.xml",
                "*.json"
            }
        }
    },
    {
        new FileSet {
            Name = "shellext",
            TargetDir = @"{app}",
            SourceDir = @"Bin\Release",
            Flags = "ignoreversion 64bit restartreplace regserver uninsrestartdelete",
            Files = new List<string> {
                "Macad.ShellExtension.dll",
            }
        }
    },
    {
        new FileSet {
            Name = "dotnetruntime",
            TargetDir = @"{app}\DotNetRuntime",
            SourceDir = @"Bin\Publish\DotNetRuntime",
            Flags = "ignoreversion",
            Files = new List<string> {
                @"**\*.*",
            }
        }
    },
    {
        new FileSet {
            Name = "samples",
            SourceDir = @"Data\Samples",
            TargetDir = @"{app}\Samples",
            Flags = "ignoreversion",
            Files = new List<string> {
                @"*.*",
            }
        }
    },
};


/***************************************************************/

bool _ReadVersion(out string product, out string file, out string informational)
{
    product = "";
    file = "";
    informational = "";
    try
    {
        var rootPath = Common.GetRootFolder();
        var exePath = Path.Combine(rootPath, @"Bin\Publish\Macad.exe");

        if (!File.Exists(exePath))
        {
            Printer.Error($"Executable not found: {exePath}");
            return false;
        }

        var versionInfo = System.Diagnostics.FileVersionInfo.GetVersionInfo(exePath);
        product = $"{versionInfo.FileMajorPart}.{versionInfo.FileMinorPart}";
        file = $"{versionInfo.FileMajorPart}.{versionInfo.FileMinorPart}.{versionInfo.FileBuildPart}.{versionInfo.FilePrivatePart}";
        informational = versionInfo.ProductVersion;
        return true;
    }
    catch (Exception ex)
    {
        Printer.Error($"Error reading version from executable: {ex.Message}");
        return false;
    }
}

/***************************************************************/

bool _ResolveFileList()
{
    var rootPath = Common.GetRootFolder();
    foreach (var fileSet in FileSets)
    {
        foreach (var item in fileSet.Files.ToArray())
        {
            var file = item;
            if(file.IndexOf('*') < 0)
                continue;
            fileSet.Files.Remove(item);

            SearchOption soption = SearchOption.TopDirectoryOnly;
            if (file.Contains(@"**\"))
            {
                file = file.Replace(@"**\", "");
                soption = SearchOption.AllDirectories;
            }

            string fileDir = Path.Combine(rootPath, fileSet.SourceDir, Path.GetDirectoryName(file));
            string fileName = Path.GetFileName(file);
            foreach(var wcfile in Directory.EnumerateFiles(fileDir, fileName, soption))
            {
                var relativeDir = Utils.GetRelativePath(fileDir, Path.GetDirectoryName(wcfile));
                fileSet.Files.Add(Path.Combine(relativeDir, Path.GetFileName(wcfile)));
            }
        }
    }
    return true;
}

/***************************************************************/

bool _BuildSetup()
{
    // Ensure installer
    var setupCompilerPath = Packages.FindPackageFile($"InnoSetup", "tools\\iscc.exe");
	if(string.IsNullOrEmpty(setupCompilerPath))
		return false;

    // Go
    var rootPath = Common.GetRootFolder();
    var tempPath = Path.Combine(Common.GetRootFolder(), ".intermediate", "Build", "Deploy");;
    Directory.CreateDirectory(tempPath);
    var defFile = File.CreateText(Path.Combine(tempPath, "_GeneratedDefinitions.iss"));
    defFile.WriteLine($"; Generated by deploy script on {DateTime.Now.ToString()}\n");

    // Write version
    if(!_ReadVersion(out var productVersion, out var fileVersion, out var informationalVersion))
    {
        Printer.Error("Cannot read version information.");
        return false;
    }
    defFile.WriteLine($"#define MyAppVersion '{productVersion}'");
    defFile.WriteLine($"#define MyAppVersionInfo '{informationalVersion}'");
    defFile.WriteLine($"#define MyAppVersionNum '{fileVersion}'");
    defFile.WriteLine("");

    // Write Files
    defFile.WriteLine("[Files]");
    foreach (var fileSet in FileSets)
    {
        defFile.WriteLine($"; Files of set {fileSet.Name}");
        var fileFlags = fileSet.Flags;
        foreach (var file in fileSet.Files)
        {
            var sourceFile = Path.Combine(rootPath, fileSet.SourceDir, file);
            var targetDir = Path.Combine(fileSet.TargetDir, Path.GetDirectoryName(file));
            defFile.WriteLine($"Source: \"{sourceFile}\"; DestDir: \"{targetDir}\"; Flags: {fileFlags}");
        }
    }
    defFile.WriteLine("");
    defFile.Close();

    // Call InnoSetup
    Printer.Line($"\nCalling InnoSetup compiler...");

    var commandLine = $"/Q \"{rootPath}\\Build\\Setup\\MacadSetup.iss\"";

    if (Common.Run(setupCompilerPath, commandLine) != 0)
    {
        Printer.Error("Compiling installer failed.");
        return false;
    }
    return true;
}

/***************************************************************/

bool _SourceIndexPdbs()
{
    SSIndex ssindex = new SSIndex();

    if (!ssindex.Init(Common.GetRootFolder()))
    {
        Printer.Error("Source indexing failed.");
        return false;
    }

    Printer.Line("Staring source indexing of pdb files...");

    foreach (var fileSet in FileSets)
    {
        foreach (var file in fileSet.Files)
        {
            var pdbPath = Path.Combine(Common.GetRootFolder(), fileSet.SourceDir, Path.ChangeExtension(file, ".pdb"));

            if (File.Exists(pdbPath))
            {
                Printer.Line(pdbPath);
                if (!ssindex.ProcessPdb(pdbPath))
                {
                    Printer.Error("Source indexing failed.");
                    return false;
                }
            }
        }
    }

    Printer.Success("Source indexing finished.");

    return true;
}

/***************************************************************/

bool _StoreSymbols(string pathToSymstore)
{
    Printer.Line($"\nStoring symbol files to {pathToSymstore}...");

    var exePath = Path.Combine(VisualStudio.GetPathToDebuggingTools(), @"x64\symstore.exe");

    if (!File.Exists(exePath))
    {
        Printer.Error("The program symstore.exe could not be found. Do you have this component installed with the Windows Debugging Tools?");
        Printer.Error("Path: " + exePath);
        return false;
    }

    // Get version
    if(!_ReadVersion(out var _, out var fileVersion, out var _))
    {
        Printer.Error("Cannot read version information.");
        return false;
    }

    // Write file list
    var tempPath = Path.Combine(Common.GetRootFolder(), ".intermediate", "Build", "Deploy", "FilesToSymStore.txt");
    Directory.CreateDirectory(Path.GetDirectoryName(tempPath));
    using (var fileListStream = new StreamWriter(tempPath, false, Encoding.ASCII))
    {
        foreach (var fileSet in FileSets)
        {
            foreach (var file in fileSet.Files)
            {
                var path = Path.Combine(Common.GetRootFolder(), fileSet.SourceDir, file);
                var ext = Path.GetExtension(path).ToLower();

                if (ext == ".exe" || ext == ".dll")
                {
                    fileListStream.WriteLine(path);

                    var pdbPath = Path.ChangeExtension(path, ".pdb");

                    if (File.Exists(pdbPath))
                    {
                        fileListStream.WriteLine(pdbPath);
                    }
                }
            }
        }
    }


    var commandLine = $"add /compress /f @\"{tempPath}\" /s \"{pathToSymstore}\" /t Macad /v {fileVersion}";
    if (Common.Run(exePath, commandLine) != 0)
    {
        Printer.Error("Storing symbols failed.");
        return false;
    }

    File.Delete(tempPath);

    Printer.Success("\nSymbols stored successfully.");
    return true;
}

