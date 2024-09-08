using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Macad.Occt.Generator;

public class GenerateNativeIncludesPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    List<string> _Files = new();

    //--------------------------------------------------------------------------------------------------

    public override bool Process()
    {
        base.Process();

        // Write include list
        SourceWriter writer = new();
        writer.WriteLine("// Generated include list");
        writer.WriteLine("#pragma once");
        writer.WriteLine();

        foreach (var fn in _Files.Distinct())
        {
            writer.WriteLine($"#include \"{fn}\"");
        }

        File.WriteAllText(Path.Combine(Context.Settings.OutputPath, "NativeIncludes.h"), writer.ToString());
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        if (cd.Generate && !string.IsNullOrEmpty(cd.FileName))
        {
            _Files.Add(cd.FileName);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessEnum(EnumDecl ed)
    {
        if (ed.Generate)
        {
            _Files.Add(ed.FileName);
        }

        return true;
    }
}