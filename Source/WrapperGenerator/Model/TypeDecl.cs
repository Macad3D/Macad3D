using System.Collections.Generic;
using System.Diagnostics;

namespace Macad.Occt.Generator;

[DebuggerDisplay("{Name,nq}")]
public class TypeDecl
{
    public string Name = "";
    public List<string> Typedefs = new();
    public ElementDecl Context;
    public ElementDecl Element;
    public TypeWrapper Wrapper;

    public bool IsReference;
    public bool IsPointer;
    public bool IsConst;
    public bool IsConstructor;
    public bool IsDestructor;
    public bool IsHandle;
    public bool IsTemplate;

    //--------------------------------------------------------------------------------------------------

    public bool IsEqual(TypeDecl other)
    {
        return Name.Equals(other.Name);
    }

    //--------------------------------------------------------------------------------------------------

    public TypeDecl()
    { }

    //--------------------------------------------------------------------------------------------------

    public TypeDecl(ElementDecl element)
    {
        Element = element;
        Name = element?.Name;
    }

    //--------------------------------------------------------------------------------------------------

    public TypeDecl(TypeDecl other)
    {
        Name = other.Name;
        Element = other.Element;
        Context = other.Context;
        IsReference = other.IsReference;
        IsPointer = other.IsPointer;
        IsConst = other.IsConst;
        IsConstructor = other.IsConstructor;
        IsDestructor = other.IsDestructor;
        Wrapper = other.Wrapper;
        IsHandle = other.IsHandle;
        IsTemplate = other.IsTemplate;
    }

    //--------------------------------------------------------------------------------------------------

}