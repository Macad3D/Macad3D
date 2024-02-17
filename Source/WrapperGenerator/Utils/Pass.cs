using System.Linq;

namespace Macad.Occt.Generator;

public abstract class Pass
{
    //--------------------------------------------------------------------------------------------------

    public Context Context;

    //--------------------------------------------------------------------------------------------------

    public virtual bool Process()
    {
        bool result = true;
        foreach (var pd in Context.Packages)
        {
            result &= ProcessPackage(pd);
        }
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessPackage(PackageDecl pd)
    {
        bool result = true;

        result &= pd.Classes
                    .Where(cd => !cd.Ignore)
                    .Aggregate(result, (current, cd) => current & ProcessClass(cd));

        result &= pd.Enums
                    .Where(ed => !ed.Ignore)
                    .Aggregate(result, (current, ed) => current & ProcessEnum(ed));

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessClass(ClassDecl cd)
    {
        bool result = cd.Methods
                        .Where(md => !md.Ignore)
                        .Aggregate(true, (current, md) => current & ProcessMethod(md));

        result = cd.Fields
            .Where(fd => !fd.Ignore)
            .Aggregate(result, (current, fd) => current & ProcessField(fd));

        result &= cd.TemplateTypes
            .Aggregate(result, (current, td) => current & ProcessType(td));

        result &= cd.InnerClasses
            .Aggregate(result, (current, cd) => current & ProcessClass(cd));

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessMethod(MethodDecl md)
    {
        bool result = true;

        result &= ProcessType(md.Type);

        foreach (var pd in md.Parameters)
        {
            result &= ProcessParameter(pd);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessField(FieldDecl fd)
    {
        bool result = true;

        result &= ProcessType(fd.Type);

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessParameter(ParameterDecl pd)
    {
        return ProcessType(pd.Type);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessType(TypeDecl td)
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool ProcessEnum(EnumDecl ed)
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}