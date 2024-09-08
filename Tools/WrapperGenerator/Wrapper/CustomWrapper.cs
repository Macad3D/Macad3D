namespace Macad.Occt.Generator;

public class CustomWrapper : TypeWrapper
{
    public static TypeWrapper Instance { get; } = new CustomWrapper();

    //--------------------------------------------------------------------------------------------------

    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = td.Name;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        // This wrapper can only be used in conjunction with custom generators
        param = "";
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        // This wrapper can only be used in conjunction with custom generators
        resultAssign = "";
        returnValue = "";
        return false;
    }

    //--------------------------------------------------------------------------------------------------

}