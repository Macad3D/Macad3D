using System.Linq;

namespace Macad.Occt.Generator;

public class EqualityMethodPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        var isEqualMethod = cd.Methods.FirstOrDefault(md => md.Name == "IsEqual" && md.Parameters.Count == 1);
        if (isEqualMethod != default
            && isEqualMethod.Parameters.FirstOrDefault()?.Type.Name == cd.Name)
        {
            var equalsMethod = new MethodDecl
            {
                Name = "Equals",
                Class = cd,
                IsOverride = true,
                BodyGenerate = _EqualsBodyGenerate,
                Type = new TypeDecl
                {
                    Name = "bool",
                    Wrapper = FundamentalTypeWrapper.Instance
                },
                Parameters = new()
                {
                    new ParameterDecl
                    {
                        Name = "obj",
                        Type = new TypeDecl()
                        {
                            Name = "System::Object^",
                            Wrapper = CustomWrapper.Instance
                        }
                    }
                }
            };
            cd.Methods.Add(equalsMethod);
        }

        if(cd.HasHashStruct)
        {
            var getHashCodeMethod = new MethodDecl
            {
                Name = "GetHashCode",
                Class = cd,
                IsOverride = true,
                BodyGenerate = _HashCodeBodyGenerate,
                Type = new TypeDecl
                {
                    Name = "int",
                    Wrapper = FundamentalTypeWrapper.Instance
                },
            };
            cd.Methods.Add(getHashCodeMethod);
        }
        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    void _EqualsBodyGenerate(MethodDecl method, SourceWriter w)
    {
        var isEqualMethod = method.Class.Methods.FirstOrDefault(md => md.Name == "IsEqual");
        if (isEqualMethod.Parameters.Count is < 1 or > 2)
            return;

        w.WriteLine("if(ReferenceEquals(this, obj))");
        w.WriteLine("{");
        w.WriteLine("return true;", 1);
        w.WriteLine("}");

        w.WriteLine("if(ReferenceEquals(nullptr, obj))");
        w.WriteLine("{");
        w.WriteLine("return false;", 1);
        w.WriteLine("}");

        w.WriteLine($"System::Type^ myType = Macad::Occt::{method.Class.FullName}::GetType();");
        w.WriteLine($"System::Type^ objType = obj->GetType();");
        w.WriteLine($"if (myType->Equals(objType) || objType->IsSubclassOf(myType))");
        w.WriteLine("{");
        w.Indent();

        w.Write(isEqualMethod.IsStatic 
            ? $"return ::{method.Class.Name}::IsEqual("
            : "return NativeInstance->IsEqual(");

        var pd = isEqualMethod.Parameters[0];
        w.Write(pd.Type.IsPointer || pd.Type.IsHandle ? $"(({method.Class.Name}^)obj)->NativeInstance" 
                                                      : $"*(({method.Class.Name}^)obj)->NativeInstance");

        w.WriteLine(");");

        w.Outdent();
        w.WriteLine( "}");
        w.WriteLine($"return false;");
    }

    //--------------------------------------------------------------------------------------------------

    void _HashCodeBodyGenerate(MethodDecl method, SourceWriter w)
    {
        w.WriteLine($"return std::hash<::{method.Class.Name}>{{}}(*NativeInstance);");
    }

    //--------------------------------------------------------------------------------------------------

}