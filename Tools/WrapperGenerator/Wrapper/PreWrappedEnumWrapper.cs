using System.Diagnostics;

namespace Macad.Occt.Generator;

[TypeList("gp_TrsfForm", "gp_EulerSequence")]
public class PreWrappedEnumWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = _GetManagedName(td.Name);

        if ((td.IsPointer || td.IsReference) && !(isMethodType || td.IsConst))
        {
            decl += "%";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (pd.Type.IsReference || pd.Type.IsPointer)
        {
            writerPre.WriteLine($"pin_ptr<{_GetManagedName(pd.Type.Name)}> pp_{pd.Name} = &{pd.Name};");
        }

        if (pd.Type.IsReference)
        {
            param = $"*(::{pd.Type.Name}*)pp_{pd.Name}";
        }
        else if (pd.Type.IsPointer)
        {
            param = $"(::{pd.Type.Name}*)pp_{pd.Name}";
        }
        else
        {
            param = $"(::{pd.Type.Name}){pd.Name}";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (md.Type.IsPointer || md.Type.IsReference)
        {
            Logger.WriteLine(true, "Cannot wrap pointer or reference to enums as return type.");
            resultAssign = "";
            returnValue = "";
            return false;
        }

        resultAssign = $"::{md.Type.Name} _result = ";
        returnValue = $"({_GetManagedName(md.Type.Name)})_result";

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    string _GetManagedName(string native)
    {
        Debug.Assert(native.StartsWith("gp_"));
        return $"{Context.Current.Settings.Namespace}::{native.Substring(3)}";
    }
}