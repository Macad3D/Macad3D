namespace Macad.Occt.Generator;

public class HandleWrapper : TypeWrapper
{
    public static TypeWrapper Instance { get; } = new HandleWrapper();

    //--------------------------------------------------------------------------------------------------

    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        decl = $"{Context.Current.Settings.Namespace}::{td.Name}^";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        if (pd.Type.IsReference && !pd.Type.IsConst)
        {
            // References to handles may receive another encapsulated object.
            writerPre.WriteLine($"Handle(::{pd.Type.Name}) h_{pd.Name} = {pd.Name}->NativeInstance;");
            param = $"h_{pd.Name}";
            writerPost.WriteLine($"{pd.Name}->NativeInstance = h_{pd.Name}.get();");
        }
        else
        {
            param = $"Handle(::{pd.Type.Name})({pd.Name}->NativeInstance)";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        resultAssign = "";
        returnValue = "";

        if (md.Type.IsPointer)
        {
            Logger.WriteLine(true, $"[{md.Class.Name}::{md.Name}] Native method returns pointer to handle which cannot be wrapped.\");");
            return false;
        }

        resultAssign = $"Handle(::{md.Type.Name}) _result = ";
        returnValue = $"_result.IsNull() ? nullptr : {Context.Current.Settings.Namespace}::{md.Type.Name}::CreateDowncasted(_result.get())";

        return true;
    }

}