using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Occt.Generator;

public class InstantiateTemplatesPass : Pass
{
    protected override bool ProcessClass(ClassDecl cd)
    {
        Dictionary<string, string> substitutes = new();
        return _ProcessClass(cd, substitutes);
    }

    //--------------------------------------------------------------------------------------------------

    protected bool _ProcessClass(ClassDecl cd, Dictionary<string, string> substitutes)
    {
        var sourceName = cd.NativeBaseClasses.FirstOrDefault();
        if (string.IsNullOrEmpty(sourceName) || !sourceName.Contains("<"))
        {
            return true;
        }

        if (sourceName.StartsWith("handle<")        // Handle typedefs not used
            || sourceName.Contains("TI_"))          // Cascaded templates not supported
        {
            cd.Ignore = true;
            return true;
        }

        // Find template class 
        var sourceClass = Context.Current.Classes.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(sourceName));
        if (sourceClass is { IsIncomplete: false })
        {
            substitutes[sourceName] = cd.Name;
        }
        else
        {
            var instanceParts = _GetTemplateParts(sourceName).ToArray();
            var templateParts = new string[instanceParts.Length - 1];
            for (int i = 0; i < instanceParts.Length - 1; i++)
                templateParts[i] = "TI_" + i;
            var templateClassName = instanceParts[0] + "<" + string.Join(", ", templateParts) + ">";
            sourceClass = Context.Current.Classes.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(templateClassName));
            if (sourceClass == null)
            {
                Logger.WriteLine(true, "Template class not found: " + templateClassName + " for instance " + cd.Name);
                cd.Ignore = true;
                return true;
            }

            substitutes[templateClassName] = cd.Name;
            for (int i = 0; i < templateParts.Length; i++)
            {
                substitutes["TI_" + i] = instanceParts[i + 1];
            }
        }

        // Cleanup base class
        if (cd.NativeBaseClasses.Contains("Standard_Transient"))
        {
            cd.BaseClassName = "Standard_Transient";
            cd.IsTransient = true;
        }
        cd.NativeBaseClasses.Clear();

        // Create template instance
        _CopyClass(sourceClass, cd, substitutes, cd.IsTypedef);
        foreach (var md in cd.Methods)
        {
            _FixTypeReferences(md.Type, cd);
            foreach (var pd in md.Parameters)
            {
                _FixTypeReferences(pd.Type, cd);
            }
        }

        // Remove all inner classes except Iterator which is used by our Enumerators
        cd.InnerClasses.ForEach(icd =>
        {
            if (icd.Name is not "Iterator")
                icd.Ignore = true;
        });

        return base.ProcessClass(cd);
    }

    //--------------------------------------------------------------------------------------------------

    void _CopyClass(ClassDecl template, ClassDecl cd, Dictionary<string, string> substitutes, bool includeConstructors)
    {
        // Copy base class
        template.NativeBaseClasses.ForEach(baseClassName =>
        {
            ClassDecl basecd = Context.Classes.FirstOrDefault(cd => cd.Name == baseClassName);
            if (basecd != null)
            {
                if (basecd.IsTemplate)
                {
                    _CopyClass(basecd, cd, substitutes, false);
                }
                else
                {
                    cd.NativeBaseClasses.Add(basecd.Name);
                }
            }
        });

        // Copy current class
        cd.IsTransient |= template.IsTransient;
        cd.IsPublic |= template.IsPublic;

        foreach (var method in template.Methods)
        {
            // Constructors are not inherited
            if (method.IsConstructor && !includeConstructors)
            {
                continue;
            }

            MethodDecl md = new(method)
            {
                Class = cd,
            };
            if (md.IsConstructor || md.IsDestructor)
                md.Name = cd.Name;
            _SubtituteType(md.Type, substitutes);
            md.Type.Context = md;
            foreach (var pd in md.Parameters)
            {
                _SubtituteType(pd.Type, substitutes);
                pd.Type.Context = md;
            }
            int baseEntry = cd.Methods.FindIndex(md => md.Name == method.Name);
            if (baseEntry != -1)
                continue;

            cd.Methods.Add(md);
        }

        foreach (var templateType in template.TemplateTypes)
        {
            cd.TemplateTypes.Add(new TypeDecl
            {
                Name = substitutes.GetValueOrDefault(templateType.Name) ?? templateType.Name
            });
        }

        foreach (var innerClassOriginal in template.InnerClasses)
        {
            Dictionary<string, string> innerClassSubstitutes = new(substitutes);
            var innerClass = innerClassOriginal.IsIncomplete
                ? _TryFindGenericInnerClass(innerClassOriginal, innerClassSubstitutes)
                : innerClassOriginal;

            _ProcessClass(innerClass, innerClassSubstitutes);

            // a nested class cannot have the same name as the immediately enclosing class
            if (innerClass.Name == cd.Name)
                continue; 

            var copiedClass = new ClassDecl
            {
                Name = innerClass.Name,
                NativeName = innerClass.NativeName,
                Package = cd.Package,
                FileName = innerClass.FileName,
                BaseClassName = innerClass.BaseClassName,
                IsTransient = innerClass.IsTransient,
                IsPublic = innerClass.IsPublic,
                OuterClass = cd,
                Comment = innerClass.Comment
            };
            _CopyClass(innerClass, copiedClass, innerClassSubstitutes, innerClass.OuterClass.IsTemplate || includeConstructors);

            int baseEntry = cd.InnerClasses.FindIndex(icd => icd.Name == copiedClass.Name);
            if(baseEntry != -1)
                cd.InnerClasses.RemoveAt(baseEntry);
            cd.InnerClasses.Add(copiedClass);
        }
    }

    //--------------------------------------------------------------------------------------------------

    ClassDecl _TryFindGenericInnerClass(ClassDecl innerClass, Dictionary<string, string> substitutes)
    {
        var instanceParts = _GetTemplateParts(innerClass.OuterClass.Name)?.ToArray();
        if (instanceParts?.Length <= 1)
        {
            // No template class 
            return innerClass;
        }

        var templateParts = new string[instanceParts.Length - 1];
        for (int i = 0; i < instanceParts.Length - 1; i++)
            templateParts[i] = "TI_" + i;
        var templateClassName = instanceParts[0] + "<" + string.Join(", ", templateParts) + ">";
        var genericClass = Context.Current.Classes.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(templateClassName));
        if (genericClass == null)
        {
            Logger.WriteLine(true, "Generic instantnce of template class not found: " + templateClassName + " for inner class " + innerClass.FullName);
            return innerClass;
        }

        if (substitutes.ContainsKey(innerClass.OuterClass.Name))
            substitutes[genericClass.Name] = substitutes[innerClass.OuterClass.Name];
        else
            substitutes[genericClass.Name] = innerClass.OuterClass.Name;

        for (int i = 0; i < templateParts.Length; i++)
        {
            substitutes["TI_" + i] = instanceParts[i + 1];
        }

        var completeInnerClass = genericClass.InnerClasses.FirstOrDefault(cd => cd.Name == innerClass.Name);
        if (completeInnerClass == null)
        {
            Logger.WriteLine(true, "Generic instantnce of template class has no matching inner class: " + templateClassName + " for instance " + innerClass.FullName);
            return innerClass;
        }

        return completeInnerClass;
    }

    //--------------------------------------------------------------------------------------------------

    void _FixTypeReferences(TypeDecl td, ClassDecl cd)
    {
        // check inner class
        var name = td.Name;
        if (cd.InnerClasses.Any(cd => cd.Name == name))
            return;

        // check with outer class in typedefs
        name = cd.BaseClassName + "::" + td.Name;
        if (Context.TypeDefs.TryGetValue(name, out name))
        {
            td.Name = name;
            return;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SubtituteType(TypeDecl td, Dictionary<string, string> substitutes)
    {
        if (substitutes.TryGetValue(td.Name, out var newName))
        {
            td.Name = newName;
            if (td.Name.StartsWith("opencascade::handle<"))
            {
                td.Name = td.Name.Substring(20, td.Name.Length - 21).Trim();
                td.IsHandle = true;
            }
            td.IsTemplate = td.Name.Contains("<");
        }
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<string> _GetTemplateParts(string source)
    {
        var tpBegin = source.IndexOf('<');
        var tpEnd = source.LastIndexOf('>');
        yield return source.Substring(0, tpBegin);
        foreach (string part in source.Substring(tpBegin + 1, tpEnd - tpBegin - 1)
                     .Split(new[] { "," }, StringSplitOptions.RemoveEmptyEntries))
        {
            yield return part.Trim();
        }

    }
}