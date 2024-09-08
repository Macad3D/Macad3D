using System.Diagnostics;

namespace Macad.Occt.Generator;

[DebuggerDisplay("{Name,nq} ({Type.Name,nq})")]
public class ParameterDecl
{
    public string Name;
    public TypeDecl Type;
    public bool HasDefault;
    public string Default;

    //--------------------------------------------------------------------------------------------------

    public bool IsEqual(ParameterDecl other, bool ignoreName)
    {
        return (ignoreName || Name.Equals(other.Name)) && Type.IsEqual(other.Type);
    }

    //--------------------------------------------------------------------------------------------------

    public ParameterDecl()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public ParameterDecl(ParameterDecl other)
    {
        Name = other.Name;
        Type = new(other.Type);
        HasDefault = other.HasDefault;
        Default = other.Default;
    }

    //--------------------------------------------------------------------------------------------------

}