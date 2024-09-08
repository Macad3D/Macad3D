using System.Linq;

namespace Macad.Occt.Generator;

public class ClassWrapper : TypeWrapper
{
    public static TypeWrapper Instance { get; } = new ClassWrapper();
    
    //--------------------------------------------------------------------------------------------------

    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        var cd = td.Element as ClassDecl;
        decl = $"{Context.Current.Settings.Namespace}::{cd?.FullName ?? td.Name}^";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        var cd = pd.Type.Element as ClassDecl;
        if (pd.Type.IsPointer)
        {
            param = $"(::{cd?.FullNativeName ?? pd.Type.Name}*){pd.Name}->NativeInstance";
        }
        else
        {
            param = $"*(::{cd?.FullNativeName ?? pd.Type.Name}*){pd.Name}->NativeInstance";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        resultAssign = "";
        returnValue = "";
        var cd = md.Type.Element as ClassDecl;

        if (cd is { IsTransient: true } && md.Type.IsReference)
        {
            if (cd.Methods.Exists(md => md.Name == "ShallowCopy"))
            {
                resultAssign = $"const ::{cd.FullNativeName}& _result = ";
                returnValue = $"gcnew {Context.Current.Settings.Namespace}::{cd.FullName}((::{cd.FullNativeName}*)_result.ShallowCopy().get())";
            }
            else
            {
                // We need an explicit copy method
                return false;
            }
        }
        else if (md.Type.IsPointer)
        {
            if (md.Type.IsConst)
            {
                resultAssign = $"const ::{cd?.FullNativeName ?? md.Type.Name}* _result = ";
                returnValue = $"_result==nullptr ? nullptr : gcnew {Context.Current.Settings.Namespace}::{cd?.FullName ?? md.Type.Name}((::{md.Type.Name}*)_result)";
            }
            else
            {
                resultAssign = $"::{cd?.FullNativeName ?? md.Type.Name}* _result = ";
                returnValue = $"_result==nullptr ? nullptr : gcnew {Context.Current.Settings.Namespace}::{cd?.FullName ?? md.Type.Name}(_result)";
            }
        }
        else 
        {
            // Check if there has any constructors we can fill with value types
            if (cd == null || cd.HasAbstractFunctions || cd.IsAbstract)
            {
                return false;
            }
            var constructor = cd.Methods.FirstOrDefault(kfd => kfd.IsConstructor && kfd.Parameters.All(pd => pd.HasDefault));
            if (constructor == null)
            {
                return false;
            }

            // Generate wrapper code
            writerPre.WriteLine($"::{cd.FullNativeName}* _result = new ::{cd.FullNativeName}();");
            if (md.Type.IsConst)
            {
                var copyOp = cd.Methods.FirstOrDefault(cmd => cmd.Name == "=");
                if (copyOp is { IsPublic: false })
                {
                    // No public copy operator
                    return false;
                }
                resultAssign = $"*_result = (::{cd.FullNativeName})";
            }
            else
            {
                resultAssign = "*_result = ";
            }
            returnValue = $"_result==nullptr ? nullptr : gcnew {Context.Current.Settings.Namespace}::{cd.FullName}(_result)";
        }

        return true;
    }

}