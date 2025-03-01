#load "_Common.csx"
#load "_BuildTools.csx"
#load "_Packages.csx"

using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Runtime.InteropServices;
using System.Linq;

/***************************************************************/

class Version
{
    /***************************************************************/

    static Regex AssemblyVersionParser = new Regex(
                @"<Version>(?<major>\d+).(?<minor>\d+).(?<revision>\d+).(?<flags>\d+)</Version>",
            RegexOptions.CultureInvariant | RegexOptions.Compiled | RegexOptions.IgnorePatternWhitespace);

    /***************************************************************/

    public static bool ReadCurrentVersion(out int major, out int minor, out int revision, out int flags)
    {
        major = 0;
        minor = 0;
        revision = 0;
        flags = 0;
        
        var infoFile = File.ReadAllText(Path.Combine(Common.GetRootFolder(), @"Build\MSBuild\Macad.VersionInfo.props"));

        if (string.IsNullOrEmpty(infoFile))
            return false;

        Match match = AssemblyVersionParser.Match(infoFile);
        if (!match.Success || match.Groups.Count != 5)
            return false;

        major = Int32.Parse(match.Groups["major"].Value);
        minor = Int32.Parse(match.Groups["minor"].Value);
        revision = Int32.Parse(match.Groups["revision"].Value);
        flags = Int32.Parse(match.Groups["flags"].Value);

        return true;
    }

    /***************************************************************/

    public static string GetFlagsString(int flags)
    {
        switch(flags)
        {
            case 1: return "Beta";
            case 2: return "Alpha";
            case 3: return "Development";
        }
        return "";
    }

    /***************************************************************/

    static bool _UpdateAssemblyInfos(int major, int minor, int revision, int flags)
    {
        var props =  "<Project ToolsVersion=\"4.0\" xmlns=\"http://schemas.microsoft.com/developer/msbuild/2003\">\n"
                  +  "  <PropertyGroup>\n"
                  + $"    <Version>{major}.{minor}.{revision}.{flags}</Version>\n"
                  + $"    <Copyright>Copyright © 2015-{DateTime.Now.Year} Tobias Schachte</Copyright>\n"
                  +  "    <Company>Tobias Schachte</Company>\n"
                  +  "    <Product>Macad|3D</Product>\n"
                  +  "  </PropertyGroup>\n"
                  +  "</Project>\n";
        File.WriteAllText(Path.Combine(Common.GetRootFolder(), @"Build\MSBuild\Macad.VersionInfo.props"), props);

        var cpp =  "using namespace System::Reflection;\n"
                  + $"[assembly:AssemblyVersionAttribute(\"{major}.{minor}.{revision}.{flags}\")];\n"
                  + $"[assembly:AssemblyCopyrightAttribute(L\"Copyright © 2015-{DateTime.Now.Year} Tobias Schachte\")];\n"
                  +  "[assembly:AssemblyCompanyAttribute(L\"Tobias Schachte\")];\n"
                  +  "[assembly:AssemblyProductAttribute(L\"Macad|3D\")];\n";
        File.WriteAllText(Path.Combine(Common.GetRootFolder(), @"Build\MSBuild\Macad.VersionInfo.cpp"), cpp);

        var rc =     "#include <winres.h>\n"
                  +  "VS_VERSION_INFO VERSIONINFO\n"
                  + $"    FILEVERSION    {major},{minor},{revision},{flags}\n"
                  + $"    PRODUCTVERSION {major},{minor},{revision},{flags}\n"
                  +  "BEGIN\n"
                  +  "    BLOCK \"StringFileInfo\"\n"
                  +  "    BEGIN\n"
                  +  "        BLOCK \"040904b0\"\n"
                  +  "        BEGIN\n"
                  + $"            VALUE \"FileVersion\", \"{major}.{minor}.{revision}.{flags}\\0\"\n"
                  + $"            VALUE \"ProductVersion\", \"{major}.{minor}.{revision}.{flags}\\0\"\n"
                  +  "            VALUE \"ProductName\", \"Macad|3D\\0\"\n"
                  + $"            VALUE \"LegalCopyright\", \"Copyright (c) 2015-{DateTime.Now.Year} Tobias Schachte\\0\"\n"
                  +  "            VALUE \"CompanyName\", \"Tobias Schachte\\0\"\n"
                  +  "        END\n"
                  +  "    END\n"
                  +  "    BLOCK \"VarFileInfo\"\n"
                  +  "    BEGIN\n"
                  +  "            VALUE \"Translation\", 0x409, 1200\n"
                  +  "    END\n"
                  +  "END\n";
        File.WriteAllText(Path.Combine(Common.GetRootFolder(), @"Build\MSBuild\Macad.VersionInfo.rc"), rc);

        return true;
    }

    /***************************************************************/

    static bool _UpdateLicenseFile()
    {
        var lines = File.ReadAllLines(Path.Combine(Common.GetRootFolder(), "License.txt"));
        lines[2] = $"Copyright (c) 2015-{DateTime.Now.Year} Tobias Schachte";
        File.WriteAllLines(Path.Combine(Common.GetRootFolder(), "License.txt"), lines);
        return true;
    }

    /***************************************************************/

    static bool _ReadSvnRevision(out int svnRevision)
    {
        svnRevision = 0;

        var commandLine = $"info {Common.GetRootFolder()}";
        var svnOutput = new List<string>();

        if (Common.Run("svn.exe", commandLine, output: svnOutput) != 0)
        {
            Printer.Error("Reading Subversion revision failed: Starting svn.exe failed.");
            return false;
        }

        foreach (var line in svnOutput)
        {
            if (string.IsNullOrEmpty(line))
                continue;

            if (line.StartsWith("Revision: "))
            {
                if (!Int32.TryParse(line.Substring(10), out svnRevision))
                {
                    Printer.Error("Reading Subversion revision failed: Invalid revision number.");
                }
            }
        }

        Printer.Line($"Subversion Revision: {svnRevision}.");
        return true;
    }

    /***************************************************************/

    public static bool Set(string newVersionInput)
    {
        if (string.IsNullOrWhiteSpace(newVersionInput))
            return false;

        var newVersions = newVersionInput.Split('.');

        int major;
        int minor;
        int flags;
        if (newVersions.Count() != 3
            || !Int32.TryParse(newVersions[0], out major)
            || !Int32.TryParse(newVersions[1], out minor)
            || !Int32.TryParse(newVersions[2], out flags))
        {
            return false;
        }

        return Update(major, minor, flags);
    }

    /***************************************************************/

    public static bool Update(int major, int minor, int flags)
    {
        int svnRevision;
        if (!_ReadSvnRevision(out svnRevision))
            return false;

        Printer.Line($"New version: {major}.{minor}.{svnRevision} (Flags: {flags})");
        _UpdateAssemblyInfos(major, minor, svnRevision, flags);
        _UpdateLicenseFile();

        return true;
    }
}
