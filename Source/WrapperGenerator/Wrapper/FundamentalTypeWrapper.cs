namespace Macad.Occt.Generator;

[TypeList("bool",
          "float",
          "double",
          "char",
          "unsigned char",
          "short int",
          "short unsigned int",
          "int",
          "unsigned int",
          "long int",
          "long unsigned int",
          "long long int",
          "long long unsigned int")]
public class FundamentalTypeWrapper : TypeWrapper
{
    public static TypeWrapper Instance { get; } = new FundamentalTypeWrapper();

    //--------------------------------------------------------------------------------------------------

    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        if ((td.IsPointer || td.IsReference)
            && !(isMethodType || td.IsConst))
        {
            decl = $"{td.Name}%";
        }
        else
        {
            decl = $"{td.Name}";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (pd.Type.IsReference || pd.Type.IsPointer)
        {
            writerPre.WriteLine($"pin_ptr<{pd.Type.Name}> pp_{pd.Name} = &{pd.Name};");
        }

        if (pd.Type.IsPointer)
        {
            if (pd.Type.IsReference)
            {
                writerPre.WriteLine($"{pd.Type.Name}* p_{pd.Name} = ({pd.Type.Name}*){pd.Name};");
                param = $"p_{pd.Name}";
            }
            else
            {
                param = $"({pd.Type.Name}*)pp_{pd.Name}";
            }
        }
        else if (pd.Type.IsReference)
        {
            param = $"*({pd.Type.Name}*)pp_{pd.Name}";
        }
        else
        {
            param = pd.Name;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (md.Type.IsPointer)
        {
            Logger.WriteLine(true, "Cannot wrap pointer or reference to fundamental types as return type.");
            resultAssign = "";
            returnValue = "";
            return false;
        }

        resultAssign = $"{md.Type.Name} _result = ";
        returnValue = "_result";
        return true;
    }
}