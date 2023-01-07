namespace Macad.Occt.Generator;

public class KeepNativeWrapper : TypeWrapper
{
    public static TypeWrapper Instance { get; } = new KeepNativeWrapper();
    
    //--------------------------------------------------------------------------------------------------

    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        if (td.Element is ClassDecl && td.IsPointer)
        {
            decl = $"::{td.Name}*";
            return true;
        }

        decl = "";
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (pd.Type.Element is ClassDecl && pd.Type.IsPointer)
        {
            param = $"{pd.Name}";
            return true;
        }

        param = "";
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        resultAssign = "";
        returnValue = "";

        if (md.Type.Element is ClassDecl && md.Type.IsPointer)
        {
            if (md.Type.IsConst)
            {
                resultAssign = $"const ::{md.Type.Name}* _result = ";
            }
            else
            {
                resultAssign = $"::{md.Type.Name}* _result = ";
            }
            returnValue = "_result";
            return true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

}