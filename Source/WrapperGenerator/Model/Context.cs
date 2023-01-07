using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class Context
{
    public static Context Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public Settings Settings { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<EnumDecl> Enums
    {
        get { return Packages.SelectMany(package => package.Enums); }
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<ClassDecl> Classes
    {
        get { return Packages.SelectMany(package => package.Classes); }
    }

    //--------------------------------------------------------------------------------------------------

    public List<PackageDecl> Packages { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Dictionary<string, string> TypeDefs { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Dictionary<string, TypeWrapper> TypeWrappers { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Context()
    {
        Current = this;
        TypeWrapper.EnumerateTypeWrappers(TypeWrappers);
    }
}