using System;
using System.IO;
using System.Linq;

namespace Macad.Occt.Generator;

public class GenerateForwardDeclarationsPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    SourceWriter _Writer;

    //--------------------------------------------------------------------------------------------------

    public override bool Process()
    {
        var namespaceList = Context.Settings.Namespace.Split(new[] { "::" }, StringSplitOptions.RemoveEmptyEntries);

        // Write forward decl list
        _Writer = new();
        _Writer.WriteLine("// Generated forward declarations list");
        _Writer.WriteLine("#pragma once");
        _Writer.WriteLine();
        foreach (var ns in namespaceList)
        {
            _Writer.WriteLine($"namespace {ns}");
            _Writer.WriteLine("{");
        }
        _Writer.Indent();

        base.Process();

        _Writer.Outdent();
        foreach (var ns in namespaceList.Reverse())
        {
            _Writer.WriteLine($"}}; // namespace {ns}");
        }

        File.WriteAllText(Path.Combine(Context.Settings.OutputPath, "ForwardDeclarations.h"), _Writer.ToString());
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        if (cd.Generate)
        {
            _Writer.WriteLine("ref class " + cd.Name + ";");
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessEnum(EnumDecl ed)
    {
        if (ed.Generate)
        {
            _Writer.WriteLine("enum class " + ed.Name + ";");
        }

        return true;
    }
}