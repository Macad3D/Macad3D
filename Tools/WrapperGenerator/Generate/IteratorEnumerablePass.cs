using System.Linq;

namespace Macad.Occt.Generator;

public class IteratorEnumerablePass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        // Check if template class fullfillls requirements
        if (cd.TemplateTypes.Count == 0
            || cd.TemplateTypes.Any(td => td.Wrapper == null)
            || cd.Interfaces.Any(name => name.Contains("Enumerable")))
        {
            return true;
        }

        var cdIterator = cd.InnerClasses.FirstOrDefault(icd => icd.Name == "Iterator");
        if (cdIterator == null || cdIterator.Ignore)
        {
            return true;
        }

        var mdMore = cdIterator.Methods.FirstOrDefault(md => md.Name == "More");
        var mdNext = cdIterator.Methods.FirstOrDefault(md => md.Name == "Next");
        var mdValue = cdIterator.Methods.FirstOrDefault(md => md.Name == "Value");
        if (mdMore == null || mdNext == null || mdValue == null)
        {
            return true;
        }

        var collectionTemplateParts = cd.TemplateTypes.Select(td => td.Name).ToArray();
        if (collectionTemplateParts.Length > 1)
        {
            return true;
        }

        TypeDecl valueType = new(cd.TemplateTypes[0])
        {
            IsReference = true
        };

        if (!(valueType.Wrapper?.GetDeclaration(valueType, true, out string valueTypeDecl) ?? false))
        {
            return true;
        }

        cdIterator.BaseClassName = $"IteratorEnumerator<{valueTypeDecl}, ::{cdIterator.FullNativeName}>";
        cd.Interfaces.Add($"IEnumerable<{valueTypeDecl}>");

        MethodDecl enumMethod = new MethodDecl
        {
            Name = "GetEnumerator",
            Class = cd,
            IsVirtual = true,
            Type = new TypeDecl
            {
                Name = $"System::Collections::Generic::IEnumerator<{valueTypeDecl}>^",
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
            Type = new TypeDecl
            {
                Name = $"System::Collections::IEnumerator^",
                Wrapper = CustomWrapper.Instance
            },
            BodyGenerate = _GetEnumeratorBodyGenerate
        };
        cd.Methods.Add(enum2Method);

        mdMore.IsOverride = true;
        mdNext.IsOverride = true;
        mdValue.IsOverride = true;

        Logger.WriteLine(true, $"Added IIteratorEnumerable interface to {cd.Name}");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _GetEnumeratorBodyGenerate(MethodDecl method, SourceWriter writer)
    {
        writer.WriteLine($"return gcnew Macad::Occt::{method.Class.FullName}::Iterator(new ::{method.Class.NativeName}::Iterator(*NativeInstance));");
    }

    //--------------------------------------------------------------------------------------------------

}