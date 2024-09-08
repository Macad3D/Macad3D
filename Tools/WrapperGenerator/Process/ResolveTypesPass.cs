using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class ResolveTypesPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    readonly HashSet<TypeDecl> _TypeDecls = new();

    //--------------------------------------------------------------------------------------------------

    public override bool Process()
    {
        base.Process(); // Enumerate

        foreach (var td in _TypeDecls)
        {
            TryResolveType(td);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessType(TypeDecl td)
    {
        _TypeDecls.Add(td);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static TypeWrapper FindTypeWrapper(TypeDecl td)
    {
        TypeWrapper wrapper;

        if (td.IsHandle)
        {
            if(td.Element != null)
                return HandleWrapper.Instance;
        }
        else if (td.Element is EnumDecl)
        {
            if (Context.Current.TypeWrappers.TryGetValue(td.Name, out wrapper))
            {
                return wrapper;
            }
            return EnumWrapper.Instance;
        }
        else if (td.Element is ClassDecl)
        {
            if (Context.Current.TypeWrappers.TryGetValue(td.Name, out wrapper))
            {
                return wrapper;
            }
            return ClassWrapper.Instance;
        }
        else
        {
            foreach (var typedef in td.Typedefs)
            {
                if (Context.Current.TypeWrappers.TryGetValue(typedef, out wrapper))
                    return wrapper;
            }

            if (Context.Current.TypeWrappers.TryGetValue(td.Name, out wrapper))
                return wrapper;
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool TryResolveType(TypeDecl td)
    {
        if (td.Wrapper != null)
            return false;

        td.Element ??= _FindElement(td);

        if (td.Element?.Ignore ?? false)
            return false;

        TypeWrapper tw = FindTypeWrapper(td);
        if (tw != null)
        {
            td.Wrapper = tw;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static ElementDecl _FindElement(TypeDecl td)
    {
        if (Context.Current.Enums.FirstOrDefault(ed => ed.Name == td.Name) is { Ignore: false } ed)
        {
            return ed;

        }
        if (Context.Current.Classes.FirstOrDefault(cd => cd.Name == td.Name) is { Ignore: false } cd)
        {
            return cd;
        }
        if (td.Context is MethodDecl { Class: { } } md)
        {
            if (md.Class.Name == td.Name)
            {
                return md.Class;
            }
            if (md.Class.InnerClasses.FirstOrDefault(cd => cd.Name == td.Name) is ClassDecl icd)
            {
                return icd;
            }
        }
        if (Context.Current.TypeDefs.FirstOrDefault(kvp => kvp.Value == td.Name).Key is { } typedef)
        {
            td.Name = typedef;
            return _FindElement(td);
        }

        return null;
    }
}