namespace Macad.Occt.Generator;

public class UnsealPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        if (Configuration.Unseal.Contains(cd.Name))
        {
            cd.IsBase = true;
        }

        return true;
    }
}