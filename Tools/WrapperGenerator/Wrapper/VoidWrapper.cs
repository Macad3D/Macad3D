namespace Macad.Occt.Generator;

[TypeList("void")]
public class VoidWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        if (td.IsPointer)
        {
            decl = $"System::IntPtr";
        }
        else
        {
            decl = $"void";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (pd.Type.IsPointer)
        {
            if (pd.Type.IsReference)
            {
                writerPre.WriteLine($"void* _{pd.Name} = {pd.Name}.ToPointer();");
                param = $"_{pd.Name}";
            }
            else
            {
                param = $"{pd.Name}.ToPointer()";
            }
        }
        else
        {
            param = "";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (!md.Type.IsPointer)
        {
            resultAssign = "";
            returnValue = "";
            return true;
        }

        if (md.Type.IsConst)
        {
            resultAssign = $"const void* _result = ";
            returnValue = "System::IntPtr((void*)_result)";
        }
        else
        {
            resultAssign = $"void* _result = ";
            returnValue = "System::IntPtr(_result)";
        }

        return true;
    }
}