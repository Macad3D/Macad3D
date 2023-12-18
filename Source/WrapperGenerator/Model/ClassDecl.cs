using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class ClassDecl : ElementDecl
{
    public bool IsStruct;
    public bool IsAbstract;
    public bool IsPublic;
    public bool IsTypedef;
    public bool IsIncomplete;
    public bool HasHashStruct;

    public ClassDecl BaseClass;
    public ClassDecl OuterClass;
    public List<string> NativeBaseClasses = new();
    public List<ClassDecl> DerivedClasses = new();
    public List<MethodDecl> Methods = new();
    public List<PropertyDecl> Properties = new();
    public List<EnumDecl> InnerEnums = new();
    public List<ClassDecl> InnerClasses = new();
    public List<FieldDecl> Fields = new();
    public List<string> Interfaces = new();
    public List<TypeDecl> TemplateTypes = new();

    //--------------------------------------------------------------------------------------------------

    public override bool Ignore
    {
        get
        {
            // Ignore method if return type or any parameter type is ignored
            return _Ignore || (BaseClass?.Ignore ?? false) || (OuterClass?.Ignore ?? false);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsTransient
    {
        get
        {
            return _IsTransient || (BaseClass?.IsTransient ?? false);
        }
        set
        {
            _IsTransient = value;
        }
    }

    bool _IsTransient;

    //--------------------------------------------------------------------------------------------------

    public string BaseClassName;
    bool _IsExplicitlyBase;

    public bool IsBase
    {
        get
        {
            return _IsExplicitlyBase || DerivedClasses.Any(cd => cd.Ignore == false);
        }
        set
        {
            _IsExplicitlyBase = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasInccessibleConstructor
    {
        get
        {
            var constructors = Methods.Where(md => md.IsConstructor);
            if (!constructors.Any())
                return true;
            return !constructors.Any(md => md.IsPublic && md.IsConstructor);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string FullName
    {
        get
        {
            if (OuterClass != null)
                return OuterClass.FullName + "::" + Name;
            else
                return Name;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string FullNativeName
    {
        get
        {
            if (OuterClass != null)
                return OuterClass.FullNativeName + "::" + NativeName;
            else
                return NativeName;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsStatic
    {
        get { return !(IsBase || IsAbstract || HasDefaultConstructor || BaseClass != null || Methods.Any(fd => !fd.IsStatic)); }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsTemplate
    {
        get { return Name.Contains("<"); }
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasAbstractFunctions
    {
        get { return GetAbstractFunctions().Any(); }
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasExplicitConstructor
    {
        get { return Methods.Any(fd => fd.IsConstructor); }
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasDefaultConstructor
    {
        get
        {
            var constructors = Methods.Where(md => md.IsConstructor);
            if (!constructors.Any())
                return true;
            return constructors.Any(md => md.Parameters.Count - md.DefaultParameterCount == 0);
        }
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<MethodDecl> GetAbstractFunctions()
    {
        var af = Methods.Where(fd => fd.IsAbstract).ToArray();
        if ((BaseClass == null) || af.Any())
        {
            return af;
        }
        else
        {
            var ba = BaseClass.GetAbstractFunctions();
            return ba.Where(bfd => !Methods.Any(fd => fd.IsEqual(bfd))).ToArray();
        }
    }

    //--------------------------------------------------------------------------------------------------

}