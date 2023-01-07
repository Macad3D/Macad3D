using System.Linq;

namespace Macad.Occt.Generator;

public class BuildInheritancePass : Pass
{
    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessPackage(PackageDecl pd)
    {
        base.ProcessPackage(pd);

        // Sort base prior to derived
        for (int i = 0; i < pd.Classes.Count; i++)
        {
            var cd = pd.Classes[i];
            var baseClass = cd.BaseClass;
            if (baseClass != null)
            {
                if (baseClass.Package != cd.Package)
                {
                    // Check if base class is in a later package
                    int pidDerived = Configuration.Packages.IndexOf(cd.Package.Name);
                    int pidBase = Configuration.Packages.IndexOf(baseClass.Package.Name);
                    if (pidBase > pidDerived)
                    {
                        Logger.WriteLine(false, $"ERROR: The package {baseClass.Package} needs to be priorized over package {cd.Package} for class {cd.Name}::{baseClass.Name}");
                        return false;
                    }
                }
                else
                {
                    var classes = pd.Classes;
                    classes.IndexOf(baseClass);
                    int idxBase = classes.IndexOf(baseClass);
                    if (idxBase > i)
                    {
                        // Swap class position
                        classes[idxBase] = classes[i];
                        classes[i] = baseClass;
                        i--;
                    }
                }
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        _DetermineBaseClass(cd);
        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    protected void _DetermineBaseClass(ClassDecl cd)
    {
        // Set links to base classes
        if (string.IsNullOrEmpty(cd.BaseClassName))
        {
            if (cd.NativeBaseClasses.Count == 0)
            {
                cd.BaseClassName = $"BaseClass<::{cd.FullNativeName}>";
                return;
            }
            cd.BaseClassName = cd.NativeBaseClasses[0];
        }

        if (cd.NativeBaseClasses.Contains("Standard_Transient"))
        {
            cd.IsTransient = true;
        }
        else
        {
            cd.BaseClass = Context.Classes.FirstOrDefault(ci => ci.Name.Equals(cd.BaseClassName));
            if (cd.BaseClass == null)
            {
                Logger.WriteLine(true, $"[{cd.Package}] Baseclass not found: {cd.BaseClassName} used from {cd.Name}");
                cd.Ignore = true;
                return;
            }
            cd.BaseClass.DerivedClasses.Add(cd);
        }
    }
}