namespace Macad.Occt.Generator;

[TypeList("Standard_ExtString")]
public class UnicodeStringWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = "System::String^";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        param = $"(Standard_ExtString)pp_{pd.Name}";

        writerPre.WriteLine($"pin_ptr<const wchar_t> pp_{pd.Name} = PtrToStringChars({pd.Name});");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        resultAssign = "Standard_ExtString _result = ";
        returnValue = "gcnew System::String((const wchar_t *)_result)";

        return true;
    }

}