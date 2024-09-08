using System.Diagnostics;

namespace Macad.Occt.Generator;

[TypeList("gp_XYZ", "gp_Pnt", "gp_Vec", "gp_Dir", "gp_Ax1", "gp_Ax2", "gp_Ax3",
          "gp_Pln", "gp_Mat", "gp_Trsf", "gp_Quaternion",
          "gp_XY", "gp_Pnt2d", "gp_Vec2d", "gp_Dir2d", "gp_Ax2d", "gp_Ax22d",
          "gp_Trsf2d", "gp_Mat2d")]
public class PreWrappedStructWrapper : TypeWrapper
{
    public override bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl)
    {
        var typeName = _GetManagedName(td.Name);
        
        if (!isMethodType && td.IsReference && !td.IsConst)
        {
            decl = $"{typeName}%";
        }
        else
        {
            decl = $"{typeName}";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost)
    {
        var typeName = _GetManagedName(pd.Type.Name);

        writerPre.WriteLine($"pin_ptr<{typeName}> pp_{pd.Name} = &{pd.Name};");

        if (pd.Type.IsPointer)
        {
            param = $"({pd.Type.Name}*)pp_{pd.Name}";
        }
        else
        {
            param = $"*({pd.Type.Name}*)pp_{pd.Name}";
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost)
    {
        var typeName = _GetManagedName(md.Type.Name);

        if (md.Type.IsPointer)
        {
            if (md.Type.IsConst)
            {
                resultAssign = $"const ::{md.Type.Name}* _constResult = ";
                writerPost.WriteLine($"::{md.Type.Name}* _nativeResult = (::{md.Type.Name}*)_constResult;");
            }
            else
            {
                resultAssign = $"::{md.Type.Name}* _nativeResult = ";
            }
            returnValue = $"_nativeResult != nullptr ? {typeName}(*_nativeResult) : {typeName}()";
        }
        else
        {
            resultAssign = $"::{md.Type.Name} _nativeResult = ";
            returnValue = $"{typeName}(_nativeResult)";
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    string _GetManagedName(string native)
    {
        Debug.Assert(native.StartsWith("gp_"));
        return $"{Context.Current.Settings.Namespace}::{native.Substring(3)}";
    }
}