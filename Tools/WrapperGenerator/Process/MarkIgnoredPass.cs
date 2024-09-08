using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class MarkIgnoredPass : Pass
{
    //--------------------------------------------------------------------------------------------------

    List<string> _OptInList;

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessPackage(PackageDecl pd)
    {
        Configuration.OptInClasses.TryGetValue(pd.Name, out _OptInList);

        return base.ProcessPackage(pd);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessClass(ClassDecl cd)
    {
        if (cd.IsTemplate)
        {
            cd.Ignore = true;
            Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored because it is a uninstantiated template class.");
            return true;
        }

        if (string.IsNullOrEmpty(cd.BaseClassName))
        {
            cd.Ignore = true;
            Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored because of missing base class.");
            return true;
        }

        if (!cd.IsPublic)
        {
            cd.Ignore = true;
            Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored because of non-public access.");
            return true;
        }
        
        if (Configuration.Ignore.Contains(cd.Name))
        {
            Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored by definition.");
            cd.Ignore = true;
            return true;
        }

        if (_OptInList != null)
        {
            // OptIn-Package
            if (!_OptInList.Contains(cd.Name))
            {
                Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored beacause of opt-in package.");
                cd.Ignore = true;
                return true;
            }
        }

        // Check for non-placement overload for 'operator delete'
        var deleteOps = cd.Methods.Where(md => md.IsOperator && md.Name == "delete").ToArray();
        if (deleteOps.Length > 0)
        {
            if(deleteOps.All(md => md.Parameters.Count != 1))
            {
                // non-placement overload
                cd.Ignore = true;
                Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored because of missing non-placement overload for 'operator delete'.");
                return true;
            }
        }

        // Check for protected destructor if no base class
        if (cd.NativeBaseClasses.Count == 0)
        {
            foreach (var md in cd.Methods.Where(md => md.MethodType == MethodType.Destructor))
            {
                if (md.IsPublic)
                    continue;

                _DisconnectDerived(cd);
                cd.Ignore = true;
                Logger.WriteLine(true, $"[{cd.Package}] Class {cd.Name} ignored because it has an inaccessible destructor.");
                return true;
            }
        }

        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessEnum(EnumDecl ed)
    {
        if (_OptInList != null)
        {
            // OptIn-Package
            if (!_OptInList.Contains(ed.Name))
            {
                Logger.WriteLine(true, $"[{ed.Package}] Enum {ed.Name} ignored because of opt-in package.");
                ed.Ignore = true;
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessMethod(MethodDecl md)
    {
        if (md.IsDestructor || !md.IsPublic || md.IsTemplate)
        {
            md.Ignore = true;
            return true;
        }

        if (Configuration.Ignore.Contains(md.FullName) 
            || Configuration.Ignore.Contains($"*::{md.Name}"))
        {
            md.Ignore = true;
            Logger.WriteLine(true, $"Function {md.FullName} ignored by definition.");
            return true;
        }

        if (md.Name.StartsWith("_CSFDB_"))
        {
            md.Ignore = true;
            Logger.WriteLine(true, $"Function {md.FullName} ignored because it begins with _CSFDB_.");
            return true;
        }

        // Check for unexported function
        if (md.MangledName != null && Configuration.MissingExports.Contains(md.MangledName))
        {
            md.Ignore = true;
            Logger.WriteLine(true, $"Function {md.FullName} ignored because it is unexported.");
            return true;
        }

        // Check for overloads with support for CString and ExtString
        for (int i = 0; i < md.Parameters.Count; i++)
        {
            var pd = md.Parameters[i];
            if(!pd.Type.Typedefs.Contains("Standard_ExtString"))
                continue;

            // find overload
            var overload = md.Class.Methods.FirstOrDefault(ovl => ovl.Name == md.Name
                                                                  && ovl.Parameters.Count == md.Parameters.Count
                                                                  && ovl.Parameters[i].Type.Typedefs.Contains("Standard_CString"));
            if (overload != null)
            {
                overload.Ignore = true;
                return true;
            }
        }

        // Check for no non-placement overload for 'operator delete'
        if (md.IsOperator)
        {
            md.Ignore = true;
        }

        // Check for copy constructor of Standard_Transient class
        if (md.IsConstructor && md.Parameters.Count == 1 && md.Parameters[0].Type.Name == md.Class.Name)
        {
            md.Ignore = true;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool ProcessField(FieldDecl fd)
    {
        if (!fd.IsPublic)
        {
            fd.Ignore = true;
            return true;
        }
        return base.ProcessField(fd);
    }

    //--------------------------------------------------------------------------------------------------

    void _DisconnectDerived(ClassDecl cd)
    {
        foreach (var cdDerivedClass in cd.DerivedClasses)
        {
            if(cdDerivedClass.BaseClass != cd)
                continue;

            cdDerivedClass.BaseClassName = $"BaseClass<::{cdDerivedClass.FullNativeName}>";
            cdDerivedClass.BaseClass = null;
        }
    }
}