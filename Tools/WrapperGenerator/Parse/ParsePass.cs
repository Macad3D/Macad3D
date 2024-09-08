using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Occt.Generator.CastXml;

namespace Macad.Occt.Generator;

public class ParsePass : Pass
{
    Compiler _Compiler;
    string _CachePath;
    CastXML _Db;
    readonly Dictionary<string, TypeDecl> _TypeCache = new();
    readonly TypeDecl _VoidTypeDefinition = new() { Name = "void" };
    static readonly char[] TrimChars = { (char)0x1, (char)0x2, ' ', '=' };

    //--------------------------------------------------------------------------------------------------

    public override bool Process()
    {
        _Compiler = new Compiler(Context);
        _CachePath = Path.GetFullPath(Context.Settings.CachePath);
        Directory.CreateDirectory(_CachePath);

        // Process packages
        for (var i = 0; i < Configuration.Packages.Count; i++)
        {
            var package = Configuration.Packages[i];
            Logger.WriteProgress((float)i / Configuration.Packages.Count, $"Parsing package {package}");

            PackageDecl packageDecl = new() { Name = package, NativeName = package };
            if(!_AddPackage(packageDecl))
            {
                Logger.WriteLine(false, $"Parsing pass failed.");
                return false;
            }
            Context.Packages.Add(packageDecl);
        }
        Logger.WriteLine(false, $"Parsing pass finished.");

        Logger.Context = "";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddPackage(PackageDecl package)
    {
        // headers
        var headerFiles = new List<string>();
        var rootHeader = Path.GetFullPath(Path.Combine(Context.Settings.OcctIncludePath, package.Name + ".hxx"));
        if (File.Exists(rootHeader))
        {
            headerFiles.Add(rootHeader);
        }
        headerFiles.AddRange(Directory.EnumerateFiles(Context.Settings.OcctIncludePath, package.Name + "_*.hxx")
                                      .Select(Path.GetFullPath));

        // Package classes
        bool result = true;
        _Db = _Compiler.GetPackageCompilation(package.Name, headerFiles);
        if (_Db == null)
        {
            Logger.WriteLine(false, $"Parsing package {package.Name} failed.");
            return false;
        }

        Logger.Context = package.Name;
        _TypeCache.Clear();

        // Get file IDs
        var fileItems = from item in _Db.Files
                        where headerFiles.Contains(item.Value, StringComparer.InvariantCultureIgnoreCase)
                        select item;
        Dictionary<string, string> fileSet = fileItems.ToDictionary(fileItem => fileItem.Key, fileItem => fileItem.Value);

        // Process Type Definitions
        var typedefs = from item in _Db.Typedefs
                       where fileSet.ContainsKey(item.file)
                             && item.context == "_1"
                       select item;

        foreach (var t in typedefs)
        {
            result = result && _AddTypedef(t, package);
        }

        // Process Enums
        var enums = from item in _Db.Enumerations
                    where fileSet.ContainsKey(item.file)
                          && item.context == "_1"
                    select item;

        foreach (var e in enums)
        {
            if (Context.Enums.All(ed => ed.Name != e.name))
            {
                result = result && _AddEnum(e, e.id, package);
            }
        }

        // Process Structs
        var structs = from item in _Db.Structs
                      where fileSet.ContainsKey(item.file)
                            && !item.IsIncomplete
                            && item.context == "_1"
                      select item;

        foreach (var s in structs)
        {
            if (Context.Classes.All(cd => cd.Name != s.name))
            {
                _AddClass(s, package, true);
            }
        }
            
        // Process Classes
        var classes = from item in _Db.Classes
                      where fileSet.ContainsKey(item.file)
                            && !item.IsIncomplete
                            && item.context == "_1"
                      select item;

        foreach (var c in classes)
        {
            if (Context.Classes.All(cd => cd.Name != c.name))
            {
                _AddClass(c, package, false);
            }
        }
            
        // Process Hash Structs
        var hashStructs = from item in _Db.Structs
                          where fileSet.ContainsKey(item.file)
                                && item.name.StartsWith("hash<")
                          select item;

        foreach (var s in hashStructs)
        {
            var className = s.name.Substring(5).TrimEnd('>');
            var cd = package.Classes.FirstOrDefault(cd => cd.Name == className);
            if (cd != null)
            {
                cd.HasHashStruct = true;
            }
        }

        Logger.Context = "";
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    Comment _GetComment(string commentId)
    {
        if (string.IsNullOrEmpty(commentId))
            return null;

        if (!_Db.Comments.TryGetValue(commentId, out var itemsComment))
            return null;

        var c = new Comment()
        {
            FileName = Path.GetFileName(_Db.Files[itemsComment.file]),
            BeginOffset = itemsComment.begin_offset,
            EndOffset = itemsComment.end_offset
        };

        return c;
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddEnum(ItemsEnumeration enumeration, string enumId, PackageDecl packageDecl, ClassDecl c = null)
    {
        var name = enumeration.name;
        if (string.IsNullOrEmpty(name))
            return true;

        Logger.WriteLine(true, $"Relevant enum: [{enumeration.id}] [{enumId}] {name}");

        var ed = new EnumDecl()
        {
            Name = name,
            NativeName = name,
            Package = packageDecl,
            FileName = Path.GetFileName(_Db.Files[enumeration.file]),
            OuterClass = c,
            Comment = _GetComment(enumeration.comment)
        };

        packageDecl.Enums.Add(ed);
        if (c != null)
        {
            if (ed.Name.Contains("::"))
            {
                ed.Name = ed.Name.Remove(0, ed.Name.LastIndexOf(":", StringComparison.Ordinal));
            }
            c.InnerEnums.Add(ed);
        }

        foreach (var enumValue in enumeration.EnumValue)
        {
            ed.Enumerators.Add(enumValue.name, enumValue.init.ToString());
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    ClassDecl _AddClass(Record record, PackageDecl package, bool isStruct, ClassDecl outerClass = null, string overrideName = null)
    {
        string className = string.IsNullOrEmpty(overrideName) ? record.name : overrideName;
        if (string.IsNullOrEmpty(className) || className.StartsWith("Handle_"))
            return null;

            
        if (package == null)
        {
            var packageName = className.Split('_').FirstOrDefault("");
            package = Context.Packages.FirstOrDefault(pkg => pkg.Name == packageName);
            if (package == null)
            {
                Logger.WriteLine(true, $"Cannot find package {packageName} for orphan class {className}.");
                return null;
            }

        }

        var cd = new ClassDecl()
        {
            Name = className,
            NativeName = className,
            Package = package,
            FileName = Path.GetFileName(_Db.Files[record.file]),
            IsStruct = isStruct,
            IsAbstract = record.IsAbstract,
            IsPublic = record.IsPublic,
            IsIncomplete = record.IsIncomplete,
            Comment = _GetComment(record.comment)
        };

        if (outerClass != null)
        {
            if (cd.Name.Contains("::"))
            {
                cd.Name = cd.Name.Remove(0, cd.Name.LastIndexOf(":", StringComparison.Ordinal));
            }

            var existentClass = outerClass.InnerClasses.FirstOrDefault(ocd => ocd.Name == cd.Name);
            if (existentClass != null)
            {
                return existentClass;
            }
            cd.OuterClass = outerClass;
            outerClass.InnerClasses.Add(cd);
        }
        else
        {
            package?.Classes.Add(cd);
        }
            
        // Template class?
        if (className.Contains("<"))
        {
            var tpBegin = className.IndexOf('<');
            var tpEnd = className.LastIndexOf('>');
            var sourceParts = className.Substring(tpBegin + 1, tpEnd - tpBegin - 1).Split(',', StringSplitOptions.RemoveEmptyEntries);
            cd.TemplateTypes.AddRange(sourceParts.Select(s => new TypeDecl { Name = s.Trim() }));
        }

        // Search for base class
        var baseClassToCopyIds = new List<string>();
        var currentClass = record;
        if (record.Base != null)
        {
            var baseElements = currentClass.Base;
            currentClass = null;
            bool inTemplate = baseClassToCopyIds.Any();
            foreach (var baseElement in baseElements)
            {
                var baseTypeId = baseElement.type;
                var baseClassElement = _Db.Classes.FirstOrDefault(e => e.id == baseTypeId);
                if (baseClassElement == null)
                {
                    continue;
                }
                cd.NativeBaseClasses.Add(baseClassElement.name);
            }
        }

        var classId = record.id;

        Logger.WriteLine(true, $"Relevant class: [{classId}] {className} : {cd.NativeBaseClasses.FirstOrDefault() ?? "n/a"}");

        _AddMethods(cd, classId, package);

        return cd;
    }

    //--------------------------------------------------------------------------------------------------

    void _AddMethods(ClassDecl cd, string context, PackageDecl package)
    {

        // Search for constructors in class
        var constructors = from item in _Db.Constructors
                           where item.context == context
                           select item;

        foreach (var f in constructors)
        {
            _AddMethod(cd, f, MethodType.Constructor);
        }

        // Search for destructors in class
        var destructors = from item in _Db.Destructors
                          where item.context == context
                          select item;

        foreach (var f in destructors)
        {
            _AddMethod(cd, f, MethodType.Destructor);
        }

        // Search for methods in class
        var methods = from item in _Db.Methods
                      where item.context == context
                      select item;

        foreach (var m in methods)
        {
            _AddMethod(cd, m, MethodType.Function);
        }

        // Search for operators in class
        var operators = from item in _Db.Operators
                        where item.context == context
                        select item;

        foreach (var op in operators)
        {
            _AddMethod(cd, op, MethodType.Operator);
        }

        // Search for fields in class
        var fields = from item in _Db.Fields
                     where item.context == context
                     select item;

        foreach (var f in fields)
        {
            _AddField(cd, f);
        }

        // Search for inner enums
        var enums = from item in _Db.Enumerations
                    where item.context == context
                    select item;

        foreach (var e in enums)
        {
            _AddEnum(e, e.id, package, cd);
        }

        // Search for inner classes
        var classes = from item in _Db.Classes
                      where item.context == context
                      select item;

        foreach (var c in classes)
        {
            _AddClass(c, package, false, cd);
        }

        // Search for inner typedefs
        var typedefs = from item in _Db.Typedefs
                       where item.context == context
                       select item;

        foreach (var t in typedefs)
        {
            _AddTypedef(t, package, cd);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddMethod(ClassDecl klass, Method method, MethodType methodType)
    {
        var mName = methodType is MethodType.Constructor or MethodType.Destructor ? klass.Name : method.name;
        var logName = klass.Name + "::" + mName;

        // Create method
        var m = new MethodDecl()
        {
            Class = klass,
            Name = mName,
            NativeName = mName,
            Comment = _GetComment(method.comment),
            Type = methodType is MethodType.Constructor or MethodType.Destructor ? _VoidTypeDefinition : _GetTypeDefinition(method.returns),
            IsStatic = method.IsStatic,
            IsPublic = method.IsPublic,
            MethodType = methodType,
            IsAbstract = method.IsPureVirtual,
            MangledName = method.mangled
        };

        if (m.Type == null)
        {
            Logger.WriteLine(true, string.Format("\tMethod " + logName + " ignored because of an unknown return type."));
            return;
        }

        m.Type.Context = m;

        Logger.WriteLine(true, $"\tRelevant method: [{method.id}] {logName} type='{m.Type.Name}'");

        // Get parameters
        int unnamedCount = 1;
        if (method.Argument != null)
        {
            foreach (var p in method.Argument)
            {
                var fp = new ParameterDecl
                {
                    Type = _GetTypeDefinition(p.type)
                };

                if (fp.Type == null)
                {
                    Logger.WriteLine(true, string.Format("\tMethod " + logName + " ignored because of an unknown parameter type."));
                    return;
                }
                fp.Type.Context = m;

                if (string.IsNullOrEmpty(p.name))
                {
                    fp.Name = $"parameter{unnamedCount}";
                    unnamedCount++;
                }
                else
                {
                    fp.Name = p.name;
                }

                if (!string.IsNullOrEmpty(p.@default))
                {
                    fp.Default = p.@default.Trim(TrimChars);

                    // Make sure any type is interpreted as native, not wrapped
                    if (fp.Default.StartsWith("opencascade::handle<"))
                    {
                        fp.Default = fp.Default.Insert(20, "::");
                    }
                    else if (fp.Default.EndsWith("()")) // Constructor
                    {
                        fp.Default = "::" + fp.Default;
                    }

                    fp.HasDefault = true;
                }

                Logger.WriteLine(true, $"\t\tRelevant parameter: {fp.Name} type='{fp.Type.Name}' default='{fp.Default}'");

                m.Parameters.Add(fp);
            }
        }

        if (!klass.Methods.Any(other => m.IsEqual(other)))
        {
            klass.Methods.Add(m);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddField(ClassDecl klass, ItemsField field)
    {
        var logName = klass.Name + "::" + field.name;

        // Create function
        var f = new FieldDecl
        {
            Class = klass,
            Name = field.name,
            NativeName = field.name,
            Comment = _GetComment(field.comment),
            Type = _GetTypeDefinition(field.type),
            IsStatic = false,
            IsPublic = field.IsPublic,
        };

        if (f.Type == null)
        {
            Logger.WriteLine(true, string.Format("\tField " + logName + " ignored because of an unknown type."));
            return;
        }

        Logger.WriteLine(true, string.Format("\tRelevant field: [{0}] {1} type='{2}'", field.id, logName, f.Type.Name));

        if (!klass.Fields.Any(other => f.IsEqual(other)))
        {
            klass.Fields.Add(f);
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _AddTypedef(ItemsTypedef typedef, PackageDecl package, ClassDecl outerClass=null)
    {
        // Check if we have a template instantiation
        var targetName = typedef.name;
        if (targetName.Contains("<"))
            return true;

        // Iterate to the class, if multiple typedefs are chained
        Record sourceElement = null;
        ItemsTypedef curTypedef = typedef;
        while (true)
        {
            sourceElement = _Db.Classes.FirstOrDefault(e => e.id == curTypedef.type);
            if (sourceElement != null)
                break;

            curTypedef = _Db.Typedefs.FirstOrDefault(e => e.id == curTypedef.type);
            if(curTypedef == null)
                return true;
        }
            
        var sourceName = sourceElement.name;
        if(!sourceName.Contains("<"))
            return true;

        Logger.WriteLine(true, "\t\tFound relevant template instance: " + targetName + " << " + sourceName);
        _AddClass(sourceElement, null, false);

        var targetClass = new ClassDecl
        {
            Name = targetName,
            NativeName = targetName,
            Package = package,
            IsTypedef = true,
            NativeBaseClasses = new List<string> { sourceName },
            IsPublic = sourceElement.IsPublic,
            FileName = Path.GetFileName(_Db.Files[typedef.file]),
            Comment = _GetComment(typedef.comment)
        };

        if (outerClass != null)
        {
            targetClass.OuterClass = outerClass;
            outerClass.InnerClasses.Add(targetClass);
        }
        else
        {
            package.Classes.Add(targetClass);
        }
        Context.TypeDefs[targetClass.FullNativeName] = sourceName;

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    TypeDecl _GetTypeDefinition(string id)
    {
        TypeDecl cached;
        if(_TypeCache.TryGetValue(id, out cached))
            return cached;

        var (element, type) = _Db.FindById(id);
        if (element == null)
            return null;

        var td = new TypeDecl();

        TypeDecl std;
        switch (type)
        {
            case Items1ChoiceType.FundamentalType:
                td.Name = ((ItemsFundamentalType)element).name;
                break;

            case Items1ChoiceType.Typedef:
                var typedef = (ItemsTypedef)element;

                // Check for known types
                std = _GetTypeDefinition(typedef.type);
                if (std == null)
                    return null;

                if (std.Name.Contains("<") && !typedef.name.Contains("<"))
                {
                    // Only supress typedef resolve if the typedef resolves an template
                    td.Name = typedef.name;
                }
                else
                {
                    td.Name = std.Name;
                    td.IsPointer = std.IsPointer;
                    td.IsReference = std.IsReference;
                    td.IsConst = std.IsConst;
                    td.IsHandle = std.IsHandle;
                    td.Typedefs.Add(typedef.name);
                    td.Typedefs.AddRange(std.Typedefs);
                }
                break;
                    
            case Items1ChoiceType.ElaboratedType:
                return _GetTypeDefinition(((ItemsElaboratedType)element).type);

            case Items1ChoiceType.Class:
            case Items1ChoiceType.Struct:
                td.Name = ((Record)element).name;
                break;

            case Items1ChoiceType.Enumeration:
                td.Name = ((ItemsEnumeration)element).name;
                break;

            case Items1ChoiceType.PointerType:
                td.IsPointer = true;
                std = _GetTypeDefinition(((ItemsPointerType)element).type);
                if (std == null)
                    return null;

                td.Name = std.Name;
                td.IsHandle = std.IsHandle;
                td.IsConst = std.IsConst;
                td.IsReference = std.IsReference;
                td.Typedefs.AddRange(std.Typedefs);
                break;

            case Items1ChoiceType.ReferenceType:
                td.IsReference = true;
                std = _GetTypeDefinition(((ItemsReferenceType)element).type);
                if (std == null)
                    return null;

                td.Name = std.Name;
                td.IsHandle = std.IsHandle;
                td.IsConst = std.IsConst;
                td.IsPointer = std.IsPointer;
                td.Typedefs.AddRange(std.Typedefs);
                break;

            case Items1ChoiceType.CvQualifiedType:
                td.IsConst = true;
                std = _GetTypeDefinition(((ItemsCvQualifiedType)element).type);
                if (std == null)
                    return null;

                td.Name = std.Name;
                td.IsPointer = std.IsPointer;
                td.IsReference = std.IsReference;
                td.IsHandle = std.IsHandle;
                td.Typedefs.AddRange(std.Typedefs);
                break;

            default:
                return null;
        }

        // Is handled?
        if (td.Name.StartsWith("Handle_"))
        {
            td.Name = td.Name.Replace("Handle_", "");
            td.IsHandle = true;
        }
        else if (td.Name.StartsWith("Handle("))
        {
            td.Name = td.Name.Replace("Handle(", "").TrimEnd(')');
            td.IsHandle = true;
        }
        else if (td.Name.StartsWith("handle<"))
        {
            td.Name = td.Name.Replace("handle<", "").TrimEnd('>').TrimStart(':');
            td.IsHandle = true;
        }

        _TypeCache.Add(id, td);

        return td;
    }

    //--------------------------------------------------------------------------------------------------

}