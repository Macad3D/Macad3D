using System.Linq;

namespace Macad.Occt.Generator;

public class EqualityMethodPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        var isEqualMethod = cd.Methods.FirstOrDefault(md => md.Name == "IsEqual");
        var hashCodeMethod = cd.Methods.FirstOrDefault(md => md.Name == "HashCode");
        if (isEqualMethod != default 
            && isEqualMethod.Parameters[0].Type.Name == cd.Name
            && hashCodeMethod != default)
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

        w.WriteLine($"System::Type^ myType = Macad::Occt::{method.Class.Name}::GetType();");
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

        if (isEqualMethod.Parameters.Count == 2)
        {
            pd = isEqualMethod.Parameters[1];
            w.Write(pd.Type.IsPointer || pd.Type.IsHandle ? ", NativeInstance" 
                                                          : ", *NativeInstance");
        }
        w.WriteLine(");");

        w.Outdent();
        w.WriteLine( "}");
        w.WriteLine($"return false;");
    }

    //--------------------------------------------------------------------------------------------------

    void _HashCodeBodyGenerate(MethodDecl method, SourceWriter w)
    {
        var hashCodeMethod = method.Class.Methods.FirstOrDefault(md => md.Name == "HashCode");
        if (hashCodeMethod.Parameters.Count is < 1 or > 2)
            return;

        w.Write(hashCodeMethod.IsStatic
            ? $"return ::{method.Class.Name}::HashCode("
            : "return NativeInstance->HashCode(");

        if (hashCodeMethod.Parameters.Count == 2)
        {
            var pd = hashCodeMethod.Parameters[0];
            w.Write(pd.Type.IsPointer || pd.Type.IsHandle ? "NativeInstance, "
                : "*NativeInstance, ");
        }
        w.WriteLine("MAXINT);");
    }

    //--------------------------------------------------------------------------------------------------

}