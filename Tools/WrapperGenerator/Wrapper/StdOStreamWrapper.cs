namespace Macad.Occt.Generator;

[TypeList("Standard_OStream")]
public class StdOStreamWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = "System::IO::TextWriter^";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        param = $"oss_{pd.Name}";
        writerPre.WriteLine($"std::ostringstream {param};");
        writerPost.WriteLine($"{pd.Name}->Write(gcnew System::String({param}.str().c_str()));");

        if (pd.Type.IsPointer)
        {
            param = $"&{param}";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        resultAssign = "";
        returnValue = "";
        return false;
    }
}