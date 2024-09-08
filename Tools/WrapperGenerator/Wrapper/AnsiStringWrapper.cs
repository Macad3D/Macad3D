namespace Macad.Occt.Generator;

[TypeList("Standard_CString")]
public class AnsiStringWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = "System::String^";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        param = $"sz_{pd.Name}";
        writerPre.WriteLine($"const char* {param} = (char*)(void*)Marshal::StringToHGlobalAnsi({pd.Name});");
        writerPost.WriteLine($"Marshal::FreeHGlobal((System::IntPtr)(void*){param});");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        resultAssign = "Standard_CString _result = ";
        returnValue = "gcnew System::String(_result)";

        return true;
    }

}