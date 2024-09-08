using System.Linq;

namespace Macad.Occt.Generator;

public class IndexEnumerablePass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        var upperMethod = cd.Methods.FirstOrDefault(md => md.Name == "Upper" && md.Parameters.Count == 0 && md.Type.Name == "int");
        if (upperMethod == null)
            return true;

        var lowerMethod = cd.Methods.FirstOrDefault(md => md.Name == "Lower" && md.Parameters.Count == 0 && md.Type.Name == "int");
        if (lowerMethod == null)
            return true;

        var valueMethod = cd.Methods.FirstOrDefault(md => md.Name == "Value" && md.Parameters.Count == 1 && md.Parameters[0].Type.Name == "int");
        if (valueMethod == null || valueMethod.Type.Wrapper == null)
            return true;
        if (!valueMethod.Type.Wrapper.GetDeclaration(valueMethod.Type, true, out var typeDecl))
            return true;

        // Create interface and it's implementation methods
        valueMethod.IsVirtual = true;
        cd.Interfaces.Add($"IIndexEnumerable<{typeDecl}>");

        MethodDecl enumMethod = new MethodDecl
        {
            Name = "GetEnumerator",
            Class = cd,
            IsVirtual = true,
            Type = new TypeDecl()
            {
                Name = $"System::Collections::Generic::IEnumerator<{typeDecl}>^",
                Wrapper = CustomWrapper.Instance
            },
            BodyGenerate = _GetEnumeratorBodyGenerate
        };
        cd.Methods.Add(enumMethod);

        MethodDecl enum2Method = new MethodDecl
        {
            Name = "GetEnumerator2",
            ExplicitImplements = "System::Collections::IEnumerable::GetEnumerator",
            Class = cd,
            IsVirtual = true,
            Type = new TypeDecl()
            {
                Name = $"System::Collections::IEnumerator^",
                Wrapper = CustomWrapper.Instance
            },
            BodyGenerate = _GetEnumeratorBodyGenerate
        };
        cd.Methods.Add(enum2Method);

        Logger.WriteLine(true, $"Added IIndexEnumerable interface to {cd.Name}");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _GetEnumeratorBodyGenerate(MethodDecl method, SourceWriter writer)
    {
        var interfaceDecl = method.Class.Interfaces.FirstOrDefault(name => name.StartsWith("IIndexEnumerable"));
        if (interfaceDecl == null)
            return;

        var templateParam = interfaceDecl.Substring(interfaceDecl.IndexOf('<'));
        writer.WriteLine($"return gcnew IndexEnumerator{templateParam}(this, Lower(), Upper());");
    }
}