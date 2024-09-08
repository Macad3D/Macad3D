namespace Macad.Occt.Generator;

public class MarkPreWrappedTypesPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        // Ignore all classes for which we have a pre wrapped class
        if (Context.Current.TypeWrappers.ContainsKey(cd.Name)
            || cd.Name == "Standard_Transient")
        {
            cd.Generate = false;
        }

        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessEnum(EnumDecl ed)
    {
        // Ignore all classes for which we have a pre wrapped class
        if (Context.Current.TypeWrappers.ContainsKey(ed.Name))
        {
            ed.Generate = false;
        }

        return true;
    }
}