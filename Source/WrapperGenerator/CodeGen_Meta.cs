using System;
using System.IO;
using System.Text.RegularExpressions;

namespace Macad.Occt.Generator
{
    public partial class CodeGen
    {
        const string _VersionRegex = @"#define OCC_VERSION_MAJOR \s*(\d).*\n#define OCC_VERSION_MINOR \s*(\d).*\n#define OCC_VERSION_MAINTENANCE *\s(\d).*";

        bool GenerateVersionInfo()
        {
            Console.WriteLine("Generating code for version info.");

            try
            {
                var input = File.ReadAllText(Path.Combine(Configuration.OcctIncludePath, "Standard_Version.hxx"));
                var match = Regex.Match(input, _VersionRegex, RegexOptions.Multiline);
                if (!(match.Success && match.Groups.Count == 4))
                {
                    Console.WriteLine("Error extracting version meta info: Regex on Standard_Version.hxx failed.");
                    return false;
                }

                var wh = new StringWriter();
                wh.WriteLine("// Generated code for version info");
                wh.WriteLine();
                wh.WriteLine("#pragma once");
                wh.WriteLine();
                wh.WriteLine($"#define REQUIRED_OCCT_VERSION_MAJOR         {match.Groups[1]}");
                wh.WriteLine($"#define REQUIRED_OCCT_VERSION_MINOR         {match.Groups[2]}");
                wh.WriteLine($"#define REQUIRED_OCCT_VERSION_MAINTENANCE   {match.Groups[3]}");
                wh.WriteLine($"#define REQUIRED_OCCT_VERSION_STRING        \"{match.Groups[1]}.{match.Groups[2]}.{match.Groups[3]}\"");
                wh.WriteLine();

                File.WriteAllText(Path.Combine(Configuration.Output, "VersionInfo.h"), wh.ToString());
            }
            catch (Exception e)
            {
                Console.WriteLine("Error extracting version meta info: " + e.Message);
            }

            return true;
        }
    }
}