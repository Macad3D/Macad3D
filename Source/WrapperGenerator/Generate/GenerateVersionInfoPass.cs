using System;
using System.IO;
using System.Text.RegularExpressions;

namespace Macad.Occt.Generator;

public class GenerateVersionInfoPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    const string _VersionRegex = @"#define OCC_VERSION_MAJOR \s*(\d).*\n#define OCC_VERSION_MINOR \s*(\d).*\n#define OCC_VERSION_MAINTENANCE *\s(\d).*";

    public override bool Process()
    {
        try
        {
            var input = File.ReadAllText(Path.Combine(Context.Settings.OcctIncludePath, "Standard_Version.hxx"));
            var match = Regex.Match(input, _VersionRegex, RegexOptions.Multiline);
            if (!(match.Success && match.Groups.Count == 4))
            {
                Logger.WriteLine(false, "Error extracting version meta info: Regex on Standard_Version.hxx failed.");
                return false;
            }

            var writer = new SourceWriter();
            writer.WriteLine("// Generated code for version info");
            writer.WriteLine();
            writer.WriteLine("#pragma once");
            writer.WriteLine();
            writer.WriteLine($"#define REQUIRED_OCCT_VERSION_MAJOR         {match.Groups[1]}");
            writer.WriteLine($"#define REQUIRED_OCCT_VERSION_MINOR         {match.Groups[2]}");
            writer.WriteLine($"#define REQUIRED_OCCT_VERSION_MAINTENANCE   {match.Groups[3]}");
            writer.WriteLine($"#define REQUIRED_OCCT_VERSION_STRING        \"{match.Groups[1]}.{match.Groups[2]}.{match.Groups[3]}\"");
            writer.WriteLine();

            File.WriteAllText(Path.Combine(Context.Settings.OutputPath, "VersionInfo.h"), writer.ToString());
        }
        catch (Exception e)
        {
            Logger.WriteLine(false, "Error extracting version meta info: " + e.Message);
        }

        return true;
    }
}