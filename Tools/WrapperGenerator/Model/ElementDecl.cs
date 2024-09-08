using System.Diagnostics;

namespace Macad.Occt.Generator;

[DebuggerDisplay("{Name,nq}")]
public abstract class ElementDecl
{
    public string Name;
    public string NativeName;
    public string FileName;
    public PackageDecl Package;
    public Comment Comment;
    public bool Generate = true;

    //--------------------------------------------------------------------------------------------------

    public virtual bool Ignore
    {
        get => _Ignore;
        set => _Ignore = value;
    }

    protected bool _Ignore;

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        return Name;
    }
}