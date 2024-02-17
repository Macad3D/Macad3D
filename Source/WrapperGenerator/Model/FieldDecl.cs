namespace Macad.Occt.Generator;

public class FieldDecl : ElementDecl
{
    public TypeDecl Type;
    public bool IsStatic;
    public bool IsPublic = true;
    public ClassDecl Class;

    //--------------------------------------------------------------------------------------------------

    public string FullName
    {
        get { return $"{Class.Name}::{Name}"; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsEqual(FieldDecl other)
    {
        if (Name.Equals(other.Name) && IsStatic == other.IsStatic)
        {
            return true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public FieldDecl()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public FieldDecl(FieldDecl other)
    {
        Name = other.Name;
        NativeName = other.NativeName;
        Type = new TypeDecl(other.Type);
        IsStatic = other.IsStatic;
        IsPublic = other.IsPublic;
        Class = other.Class;
    }

    //--------------------------------------------------------------------------------------------------
}