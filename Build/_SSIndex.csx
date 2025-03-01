#load "_Common.csx"
#load "_BuildTools.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.ComponentModel;

class SSIndex
{
    string VerCtrl;
    string ExtractTarget;
    string ExtractCmd;
    Dictionary<string, string> sourceItems = new Dictionary<string, string>();

    public bool Init(string rootPath)
    {
        if( Directory.Exists( Path.Combine( rootPath, ".svn" )))
        {
            Printer.Line("Subversion repository detected.");
            if(!InitSubversion(rootPath))
            {
                return false;
            }
        }
        else if( Directory.Exists( Path.Combine( rootPath, ".git" )))
        {
            Printer.Line("Git repository detected.");
            if(!InitGit(rootPath))
            {
                return false;  
            }
        }
        else
        {
            Printer.Error("Unknown repository format.");
            return false;
        }

        // Check for items
        if (sourceItems.Keys.Count == 0)
        {
            Printer.Error("No file infos received from VCS.");
            return false;
        }
        else
        {
            Printer.Success($"Gathered infos for {sourceItems.Keys.Count} files from VCS.");
            return true;
        }
    }

    public bool InitSubversion(string rootPath)
    {
        VerCtrl = "Subversion";
        ExtractTarget = @"%targ%\%fnbksl%(%var3%)\%var4%\%fnfile%(%var1%)";
        ExtractCmd = @"cmd /c svn.exe cat ""%var2%%var3%@%var4%"" --non-interactive > ""%svn_extract_target%""";

        Printer.Line($"Gathering information from Subversion...");
        var commandLine = $"info -R {rootPath}";
        var svnOutput = new List<string>();

        if (Common.Run("svn.exe", commandLine, output: svnOutput) != 0)
        {
            Printer.Error("Starting SVN.EXE failed.");
            return false;
        }

        string itemPath = "";
        string itemUrl = "";
        string itemRevision = "";

        foreach (var line in svnOutput)
        {
            if (string.IsNullOrEmpty(line))
                continue;

            if (line.StartsWith("Path: "))
            {
                itemPath = line.Substring(6);
            }
            else if (line.StartsWith("URL: "))
            {
                itemUrl = line.Substring(5);
            }
            else if (line.StartsWith("Revision: "))
            {
                itemRevision = line.Substring(10);
            }
            else if (line.StartsWith("Node Kind: "))
            {
                // Item complete
                if ((line == "Node Kind: file")
                    && !string.IsNullOrEmpty(itemPath)
                    && !string.IsNullOrEmpty(itemUrl)
                    && !string.IsNullOrEmpty(itemRevision))
                {
                    var uri = new Uri(itemUrl);
                    var path = uri.AbsolutePath.TrimStart('/');
                    var server = uri.AbsoluteUri.Substring(0, uri.AbsoluteUri.Length - path.Length);
                    sourceItems.Add(Path.GetFullPath(itemPath).ToLower(), $"{server}*{path}*{itemRevision}");
                }
                itemPath = "";
                itemUrl = "";
                itemRevision = "";
            }
        }
        return true;
    }

    public bool InitGit(string rootPath)
    {
        var baseOptions = $"--git-dir={Path.Combine( rootPath, ".git" )}";
        Printer.Line($"Gathering information from Git...");
        
        var commandLine = $"{baseOptions} rev-parse HEAD";
        var gitOutput = new List<string>();
        if (Common.Run("git.exe", commandLine, output: gitOutput) != 0)
        {
            Printer.Error("Starting GIT.EXE failed.");
            return false;
        }
        var gitCommit = gitOutput.FirstOrDefault();
        Printer.Line($"Commit: {gitCommit}");

        commandLine = $"{baseOptions} config --get remote.origin.url";
        gitOutput = new List<string>();
        if (Common.Run("git.exe", commandLine, output: gitOutput) != 0)
        {
            Printer.Error("Starting GIT.EXE failed.");
            return false;
        }

        var gitUrl = gitOutput.FirstOrDefault();
        if( !gitUrl.StartsWith("https://github.com/") )
        {
            Printer.Error($"Detected non-GitHub repo, this is not supported.");
            return false;
        }
        gitUrl = gitUrl.Replace(".git", $"/{gitCommit}/")
                       .Replace("https://github.com/", "https://raw.githubusercontent.com/");
        Printer.Line($"Repo URL: {gitUrl}");

        VerCtrl = "http";
        ExtractTarget = @$"{gitUrl}%var2%";

        // Enumerate files
        commandLine = $"{baseOptions} ls-tree --name-only --full-tree -r {gitCommit}";
        gitOutput = new List<string>();
        if (Common.Run("git.exe", commandLine, output: gitOutput) != 0)
        {
            Printer.Error("Starting GIT.EXE failed.");
            return false;
        }

        foreach(string file in gitOutput)
        {
            if( string.IsNullOrEmpty(file) )
            {
                continue;
            }

            string fullPath = Path.GetFullPath(Path.Combine( rootPath, file )).ToLower();
            sourceItems.Add(fullPath, file);
        }

        return true;
    }

    public bool ProcessPdb(string pdbFile)
    {
        var exePath = Path.Combine(VisualStudio.GetPathToDebuggingTools(), @"x64\srcsrv\srctool.exe");
        var commandLine = $"\"{pdbFile}\" -r";
        var srcToolOutput = new List<string>();

        if (!File.Exists(exePath))
        {
            Printer.Error("The program srctool.exe could not be found. Do you have this component installed with the Windows Debugging Tools?");
            Printer.Error("Path: " + exePath);
            return false;
        }

        int sourceCount = Common.Run(exePath, commandLine, output: srcToolOutput);

        if (sourceCount == 0 || sourceCount != srcToolOutput.Count - 2)
        {
            Printer.Error("Starting srctool.exe failed.");
            return false;
        }

        var sourceIndices = new List<string>();

        for (int i = 0; i < sourceCount; i++)
        {
            string sourceName = Path.GetFullPath(srcToolOutput[i]).ToLower();
            string sourceIndex = "";

            if (sourceItems.TryGetValue(sourceName, out sourceIndex))
            {
                sourceIndices.Add($"{sourceName}*{sourceIndex}");
            }
            else if(TryFollowSymLink(sourceName, out var linkTarget))
            {
                linkTarget =  Path.GetFullPath(linkTarget.ToLower());
                if (sourceItems.TryGetValue(linkTarget, out sourceIndex))
                {
                    sourceIndices.Add($"{sourceName}*{sourceIndex}");
                }
            }
        }

        if (sourceIndices.Count == 0)
        {
            Printer.Line($"{Path.GetFileName(pdbFile)}: No matching source files found.");
            return true;
        }

        if (!_CreateStreamFile(pdbFile, sourceIndices))
        {
            Printer.Error($"{Path.GetFileName(pdbFile)}: Failed creating source index stream file.");
            return false;
        }

        if (!_AddStreamToPdb(pdbFile))
            return false;

        Printer.Line($"{Path.GetFileName(pdbFile)}: Source indexing stream has been added for {sourceIndices.Count} source files.");

        return true;
    }

    bool _CreateStreamFile(string pdbFile, IEnumerable<string> indices)
    {
        string streamFilePath = Path.ChangeExtension(pdbFile, ".srcsrv.txt");

        using (StreamWriter writer = File.CreateText(streamFilePath))
        {
            _WriteHeader(writer);

            foreach (var index in indices)
                writer.WriteLine(index);

            _WriteFooter(writer);
        }
        return true;
    }

    void _WriteHeader(StreamWriter writer)
    {
        writer.WriteLine("SRCSRV: ini ------------------------------------------------");
        writer.WriteLine("VERSION=1");
        writer.WriteLine("INDEXVERSION=2");
        writer.WriteLine($"VERCTRL={VerCtrl}");
        writer.WriteLine("DATETIME={0:R}", DateTime.Now);
        writer.WriteLine("SRCSRV: variables ------------------------------------------");
        if(!string.IsNullOrEmpty(ExtractTarget))
        {
            writer.WriteLine($"VCS_EXTRACT_TARGET={ExtractTarget}");
        }
        if(!string.IsNullOrEmpty(ExtractCmd))
        {
            writer.WriteLine($"VCS_EXTRACT_CMD={ExtractCmd}");
        }
        writer.WriteLine("SRCSRVTRG=%VCS_EXTRACT_TARGET%");
        writer.WriteLine("SRCSRVCMD=%VCS_EXTRACT_CMD%");
        writer.WriteLine("SRCSRV: source files ---------------------------------------");
    }

    void _WriteFooter(StreamWriter writer)
    {
        writer.WriteLine("SRCSRV: end ------------------------------------------------");
    }

    bool _AddStreamToPdb(string pdbFile)
    {
        string streamFilePath = Path.ChangeExtension(pdbFile, ".srcsrv.txt");

        var exePath = Path.Combine(VisualStudio.GetPathToDebuggingTools(), @"x64\srcsrv\pdbstr.exe");
        var commandLine = $"-w -s:srcsrv -p:\"{pdbFile}\" -i:\"{streamFilePath}\"";

        if (!File.Exists(exePath))
        {
            Printer.Error("The program pdbstr.exe could not be found. Do you have this component installed with the Windows Debugging Tools?");
        }

        if (Common.Run(exePath, commandLine) != 0)
        {
            Printer.Error("Starting pdbstr.exe failed.");
            return false;
        }

        File.Delete(streamFilePath);

        return true;
    }

    private static readonly IntPtr INVALID_HANDLE_VALUE = new IntPtr(-1);

    private const uint FILE_READ_EA = 0x0008;
    private const uint FILE_FLAG_BACKUP_SEMANTICS = 0x2000000;

    [DllImport("Kernel32.dll", SetLastError = true, CharSet = CharSet.Auto)]
    static extern uint GetFinalPathNameByHandle(IntPtr hFile, [MarshalAs(UnmanagedType.LPTStr)] StringBuilder lpszFilePath, uint cchFilePath, uint dwFlags);

    [DllImport("kernel32.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    static extern bool CloseHandle(IntPtr hObject);

    [DllImport("kernel32.dll", CharSet = CharSet.Auto, SetLastError = true)]
    public static extern IntPtr CreateFile( [MarshalAs(UnmanagedType.LPTStr)] string filename, [MarshalAs(UnmanagedType.U4)] uint access, [MarshalAs(UnmanagedType.U4)] FileShare share, 
                                            IntPtr securityAttributes, // optional SECURITY_ATTRIBUTES struct or IntPtr.Zero
                                            [MarshalAs(UnmanagedType.U4)] FileMode creationDisposition, [MarshalAs(UnmanagedType.U4)] uint flagsAndAttributes, IntPtr templateFile);

    public static bool TryFollowSymLink(string path, out string finalPath)
    {
        finalPath = "";
        IntPtr fileHandle = IntPtr.Zero;

        try
        {
            var fileAttr = System.IO.File.GetAttributes(path);
            if ((fileAttr & FileAttributes.ReparsePoint) == 0)
            {
                return false;
            }

            fileHandle = CreateFile(path, FILE_READ_EA, FileShare.ReadWrite | FileShare.Delete, IntPtr.Zero, FileMode.Open, FILE_FLAG_BACKUP_SEMANTICS, IntPtr.Zero);
            if (fileHandle == INVALID_HANDLE_VALUE)
            {
                return false;
            }

            var sb = new StringBuilder(1024);
            var res = GetFinalPathNameByHandle(fileHandle, sb, 1024, 0);
            if (res > 0)
            {
                finalPath = sb.ToString();
                if( finalPath.StartsWith(@"\\?\") )
                {
                    finalPath = finalPath.Substring( 4 );
                }
            }
        }
        catch(Exception _)
        {}
        finally
        {
            if( fileHandle != IntPtr.Zero )
            {
                CloseHandle(fileHandle);
            }
        }
        return !string.IsNullOrEmpty(finalPath);
    }
}