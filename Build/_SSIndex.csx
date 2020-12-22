#load "_Common.csx"
#load "_BuildTools.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class SSIndex
{
    Dictionary<string, string> svnItems = new Dictionary<string, string>();

    public bool Init(string rootPath)
    {
        var svnPath = Packages.FindPackageFile($"Subversion", @"bin\svn.exe");
        if(string.IsNullOrEmpty(svnPath))
            return false;

        Printer.Line($"Gathering information from Subversion...");
        var commandLine = $"info -R {rootPath}";
        var svnOutput = new List<string>();

        if (Common.Run(svnPath, commandLine, output: svnOutput) != 0)
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
                    svnItems.Add(itemPath.ToLower(), $"{server}*{path}*{itemRevision}");
                }
                itemPath = "";
                itemUrl = "";
                itemRevision = "";
            }
        }

        if (svnItems.Keys.Count == 0)
        {
            Printer.Error("No file infos received from Subversion.");
            return false;
        }
        else
        {
            Printer.Success($"Gathered infos for {svnItems.Keys.Count} files from subversion.");
            return true;
        }
    }

    public bool ProcessPdb(string pdbFile)
    {
        var exePath = Path.Combine(VisualStudio.GetPathToWindowsSDK(), @"..\..\Debuggers\x64\srcsrv\srctool.exe");
        var commandLine = $"\"{pdbFile}\" -r";
        var srcToolOutput = new List<string>();

        if (!File.Exists(exePath))
        {
            Printer.Error("The program srctool.exe could not be found. Do you have the Windows Debugging Tools installed?");
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
            string sourceName = srcToolOutput[i].ToLower();
            string sourceIndex = "";

            if (svnItems.TryGetValue(sourceName, out sourceIndex))
            {
                sourceIndices.Add($"{sourceName}*{sourceIndex}");
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
        writer.WriteLine("VERCTRL=Subversion");
        writer.WriteLine("DATETIME={0:R}", DateTime.Now);
        writer.WriteLine("SRCSRV: variables ------------------------------------------");
        writer.WriteLine("SVN_EXTRACT_TARGET=%targ%\\%fnbksl%(%var3%)\\%var4%\\%fnfile%(%var1%)");
        writer.WriteLine("SVN_EXTRACT_CMD=cmd /c svn.exe cat \"%var2%%var3%@%var4%\" --non-interactive > \"%svn_extract_target%\"");
        writer.WriteLine("SRCSRVTRG=%SVN_extract_target%");
        writer.WriteLine("SRCSRVCMD=%SVN_extract_cmd%");
        writer.WriteLine("SRCSRV: source files ---------------------------------------");
    }

    void _WriteFooter(StreamWriter writer)
    {
        writer.WriteLine("SRCSRV: end ------------------------------------------------");
    }

    bool _AddStreamToPdb(string pdbFile)
    {
        string streamFilePath = Path.ChangeExtension(pdbFile, ".srcsrv.txt");

        var exePath = Path.Combine(VisualStudio.GetPathToWindowsSDK(), @"..\..\Debuggers\x64\srcsrv\pdbstr.exe");
        var commandLine = $"-w -s:srcsrv -p:\"{pdbFile}\" -i:\"{streamFilePath}\"";

        if (!File.Exists(exePath))
        {
            Printer.Error("The program pdbstr.exe could not be found. Do you have the Windows Debugging Tools installed?");
        }

        if (Common.Run(exePath, commandLine) != 0)
        {
            Printer.Error("Starting pdbstr.exe failed.");
            return false;
        }

        File.Delete(streamFilePath);

        return true;
    }
}