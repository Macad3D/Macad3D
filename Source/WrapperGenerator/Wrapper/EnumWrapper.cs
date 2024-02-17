namespace Macad.Occt.Generator;

public class EnumWrapper : TypeWrapper
{
    public static TypeWrapper Instance { get; } = new EnumWrapper();

    //--------------------------------------------------------------------------------------------------

    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = $"{Context.Current.Settings.Namespace}::{_GetFullName(td)}";

        if ((td.IsPointer || td.IsReference) && !(isMethodType || td.IsConst))
        {
            decl += "%";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        string fullName = _GetFullName(pd.Type);

        if (pd.Type.IsReference || pd.Type.IsPointer)
        {
            writerPre.WriteLine($"pin_ptr<{Context.Current.Settings.Namespace}::{fullName}> pp_{pd.Name} = &{pd.Name};");
        }

        if (pd.Type.IsReference)
        {
            param = $"*(::{fullName}*)pp_{pd.Name}";
        }
        else if (pd.Type.IsPointer)
        {
            param = $"(::{fullName}*)pp_{pd.Name}";
        }
        else
        {
            param = $"(::{fullName}){pd.Name}";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        string fullName = _GetFullName(md.Type);
        if (md.Type.IsPointer)
        {
            resultAssign = $"const ::{fullName}* _result = ";
            returnValue = $"({Context.Current.Settings.Namespace}::{fullName})*_result";
        }
        else
        {
            resultAssign = $"::{fullName} _result = ";
            returnValue = $"({Context.Current.Settings.Namespace}::{fullName})_result";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public string ToManaged(TypeDecl td)
    {
        return $"({Context.Current.Settings.Namespace}::{_GetFullName(td)})";
    }

    //--------------------------------------------------------------------------------------------------

    public string ToNative(TypeDecl td)
    {
        return $"(::{_GetFullName(td)})";
    }

    //--------------------------------------------------------------------------------------------------

    string _GetFullName(TypeDecl td)
    {
        EnumDecl ed = td.Element as EnumDecl;
        if(ed?.OuterClass != null)
            return $"{ed.OuterClass.Name}::{td.Name}";
        else
            return $"{td.Name}";
    }

}