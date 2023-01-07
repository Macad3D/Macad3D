namespace Macad.Occt.Generator;

public class DowncastMethodPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        if (cd.IsTransient && cd.Generate)
        {
            var method = new MethodDecl
            {
                Name = "CreateDowncasted",
                Class = cd,
                IsStatic = true,
                BodyGenerate = _Generate,
                Type = new TypeDecl(cd),
                Parameters = new()
                {
                    new ParameterDecl
                    {
                        Name = "instance",
                        Type = new TypeDecl(cd)
                        {
                            IsPointer = true,
                            Wrapper = KeepNativeWrapper.Instance
                        }
                    }
                }
            };
            cd.Methods.Add(method);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _Generate(MethodDecl method, SourceWriter w)
    {
        var cd = method.Class;
        if (cd.IsBase)
        {
            w.WriteLine("if( instance == nullptr )");
            w.WriteLine("return nullptr;", indent: +1);
            w.WriteLine("");

            foreach (var derivedClass in cd.DerivedClasses)
            {
                if (derivedClass.Ignore)
                    continue;

                w.WriteLine($"if (instance->IsKind(STANDARD_TYPE(::{derivedClass.FullName})))");
                w.WriteLine($"return {Context.Settings.Namespace}::{derivedClass.FullName}::CreateDowncasted((::{derivedClass.FullName}*)instance);", indent: +1);
            }
            w.WriteLine("");
        }

        w.WriteLine($"return gcnew {Context.Settings.Namespace}::{cd.FullName}( instance );");
    }
}