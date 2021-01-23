using System;
using System.CodeDom;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Xml.Linq;

namespace Macad.Occt.Generator
{
    public class ClassBrowser
    {
        string _IncludePath;
        string _CachePath;
        string _CastXmlPath;
        CastXml.CastXML _Db;
        Dictionary<string, Definitions.TypeDefinition> _TypeCache = new Dictionary<string, Definitions.TypeDefinition>();
        Definitions.TypeDefinition _VoidTypeDefinition = new Definitions.TypeDefinition() { Name = "void" };
        Dictionary<string, string> _CurrentFileSet = new Dictionary<string, string>();
        public static Dictionary<string, string> CollectionTypedefs = new Dictionary<string, string>();

        static readonly char[] TrimChars = new[] { (char)0x1, (char)0x2, ' ', '=' };

        //--------------------------------------------------------------------------------------------------

        public bool Execute()
        {
            bool result = true;

            _IncludePath = Path.GetFullPath(Configuration.OcctIncludePath);
            _CastXmlPath = Path.GetFullPath(Configuration.CastXmlPath);
            _CachePath = Path.GetFullPath(Configuration.CachePath);
            Directory.CreateDirectory(_CachePath);

            // Process packages
            foreach (var package in Configuration.PackageList)
            {
                result = result && _AddPackage(package);
            }

            // Remove all template classes
            Definitions.ClassItems.RemoveAll(cd => cd.IsTemplate);

            // Link and sort
            Logger.Context = "-Post-Classes-";
            result = result && _PostProcessClasses();

            Logger.Context = "";
            return result;
        }

        //--------------------------------------------------------------------------------------------------

        bool _PostProcessClasses()
        {
            bool result = true;

            // Correct links to base classes
            foreach (var derived in Definitions.ClassItems)
            {
                if (string.IsNullOrEmpty(derived.BaseClassName))
                    continue;

                if (derived.BaseClassName.Equals("Standard_Transient"))
                {
                    derived.IsTransient = true;
                    continue;
                }

                if (Configuration.Ignore.Contains(derived.BaseClassName))
                {
                    Configuration.Ignore.Add(derived.Name);
                    if (derived.DerivedClasses.Count > 0)
                    {
                        Configuration.Ignore.AddRange(derived.DerivedClasses.Select(cd => cd.Name));
                    }
                    continue;
                }

                derived.BaseClass = Definitions.ClassItems.FirstOrDefault(ci => ci.Name.Equals(derived.BaseClassName));

                if (derived.BaseClass == null)
                {
                    Logger.WriteLine(false, string.Format("!!! Baseclass not found: {0} used from {1}", derived.BaseClassName, derived.Name));
                    Configuration.Ignore.Add(derived.Name);
                    if (derived.DerivedClasses.Count > 0)
                    {
                        Configuration.Ignore.AddRange(derived.DerivedClasses.Select(cd => cd.Name));
                    }
                    continue;
                }

                derived.BaseClass.IsBase = true;
                derived.BaseClass.DerivedClasses.Add(derived);
            }

            // Post processing of classes
            for (int i = 0; i < Definitions.ClassItems.Count; i++)
            {
                // Remove ignored
                if (Configuration.Ignore.Contains(Definitions.ClassItems[i].Name))
                {
                    Definitions.ClassItems.RemoveAt(i);
                    i--;
                    continue;
                }

                // Set class hierarchy flags
                var absBase = Definitions.ClassItems[i].BaseClass;
                while (absBase != null)
                {
                    if (absBase.IsTransient)
                    {
                        Definitions.ClassItems[i].IsTransient = true;
                        break;
                    }
                    absBase = absBase.BaseClass;
                }

                // Sort base prior to derived
                var baseClass = Definitions.ClassItems[i].BaseClass;
                if (baseClass != null)
                {
                    if (baseClass.Package != Definitions.ClassItems[i].Package)
                    {
                        // Move package if base class is in a later package
                        int pidDerived = Configuration.PackageList.IndexOf(Definitions.ClassItems[i].Package);
                        int pidBase = Configuration.PackageList.IndexOf(baseClass.Package);
                        if (pidBase > pidDerived)
                        {
                            Configuration.PackageList.RemoveAt(pidBase);
                            Configuration.PackageList.Insert(pidDerived, baseClass.Package);

                            //Definitions.PackageList[pidBase] = Definitions.ClassItems[i].Package;
                            //Definitions.PackageList[pidDerived] = baseClass.Package;
                            Logger.WriteLine(true, "The package " + baseClass.Package + " needs to be priorized over package " + Definitions.ClassItems[i].Package
                                + " for class " + Definitions.ClassItems[i].Name + "::" + baseClass.Name);
                            result = false;
                        }
                    }

                    int idxBase = Definitions.ClassItems.IndexOf(baseClass);
                    if (idxBase > i)
                    {
                        // Swap classes
                        Definitions.ClassItems[idxBase] = Definitions.ClassItems[i];
                        Definitions.ClassItems[i] = baseClass;
                        i--;
                    }
                }
            }
            return result;
        }

        //--------------------------------------------------------------------------------------------------

        bool _AddPackage(string package)
        {
            var headerFiles = new List<string>();

            // Root class
            var filePath = Path.GetFullPath(Path.Combine(_IncludePath, package + ".hxx"));
            if (File.Exists(filePath))
            {
                headerFiles.Add(filePath);
            }

            // Package classes
            headerFiles.AddRange(Directory.EnumerateFiles(_IncludePath, package + "_*.hxx").Select(Path.GetFullPath));

            // Check for cache
            var cacheFilePath = _CachePath + @"\" + package + ".xml";
            if (!File.Exists(cacheFilePath))
            {
                Logger.WriteLine(false, "Compiling package " + package);

                // Write source file
                var cacheSourcePath = _CachePath + @"\" + package + ".cxx";
                var writer = File.CreateText(cacheSourcePath);

                // Write include
                writer.WriteLine(Configuration.SourceFileHeader);
                writer.WriteLine("");

                foreach (var headerFile in headerFiles)
                {
                    writer.WriteLine("#include \"{0}\"", Path.GetFileName(headerFile));
                }
                writer.Close();

                // Compile
                if (!_CompilePackage(_CachePath + @"\" + package))
                    return false;

                if (!File.Exists(cacheFilePath))
                {
                    Logger.WriteLine(false, "Compiling package " + package + " did not result in an XML file!");
                    return false;
                }
            }

            Logger.WriteLine(false, "Parsing package " + package);
            Logger.Context = package;

            bool result = true;

            _Db = CastXml.CastXML.Load(cacheFilePath);
            _TypeCache.Clear();
            _CurrentFileSet.Clear();

            // Get file IDs
            var fileItems = from item in _Db.Files
                where headerFiles.Contains(item.name)
                select item;

            foreach (var fileItem in fileItems)
            {
                _CurrentFileSet.Add(fileItem.id, fileItem.name);
            }

            // Process Type Definitions
            var typedefs = from item in _Db.Typedefs
                where _CurrentFileSet.ContainsKey(item.file)
                      && item.context == "_1"
                select item;

            foreach (var t in typedefs)
            {
                result = result && _AddTypedef(t, package);
            }

            // Process Enums
            var enums = from item in _Db.Enumerations
                where _CurrentFileSet.ContainsKey(item.file)
                      && item.context == "_1"
                select item;

            foreach (var e in enums)
            {
                if (Definitions.EnumItems.All(ed => ed.Name != e.name))
                {
                    result = result && _AddEnum(e, e.id, package);
                }
            }

            // Process Structs
            var structs = from item in _Db.Structs
                          where _CurrentFileSet.ContainsKey(item.file)
                                && !item.IsIncomplete
                                && item.context == "_1"
                          select item;

            foreach (var s in structs)
            {
                if (Definitions.ClassItems.All(cd => cd.Name != s.name))
                {
                    _AddClass(s, package, true);
                }
            }
            
            // Process Classes
            var classes = from item in _Db.Classes
                          where _CurrentFileSet.ContainsKey(item.file)
                      && !item.IsIncomplete
                      && item.context == "_1"
                select item;

            foreach (var c in classes)
            {
                if (Definitions.ClassItems.All(cd => cd.Name != c.name))
                {
                    _AddClass(c, package, false);
                }
            }

            Logger.Context = "";
            return result;
        }

        //--------------------------------------------------------------------------------------------------

        bool _CompilePackage(string cacheFilePath)
        {
            var options = new List<string>
            {
                @"--castxml-output=1",
                @"--castxml-cc-msvc """ + Path.Combine(Configuration.VisualCppPath, @"bin\Hostx64\x64\cl.exe") + @"""",

                // Include paths
                @"-I """ + _IncludePath + @"""",
                @"-I """ + _IncludePath + @"\..\..\freetype\include""",
                @"-I """ + Path.Combine(Configuration.VisualCppPath, @"include") + @"""",
                @"-I """ + Configuration.UcrtPath + @"""",
                @"-I """ + Path.Combine(Configuration.WinSDKPath, @"um") + @"""",
                @"-I """ + Path.Combine(Configuration.WinSDKPath, @"shared") + @"""",

                // Defines
                @"-D WNT",
                @"-D __STDCPP_DEFAULT_NEW_ALIGNMENT__=8U",
                @"-D __WRAPPER_GENERATOR__",
                @"-D __clang__",
                @"-D _ALLOW_COMPILER_AND_STL_VERSION_MISMATCH",

                // Options for Clang
                "-fcxx-exceptions", // Enable C++ exceptions

                // Source file
                cacheFilePath + @".cxx"
            };


            var logWriter = File.CreateText(cacheFilePath + @".log");

            var process = new Process
            {
                StartInfo =
                {
                    Arguments = string.Join(" ", options),
                    FileName = _CastXmlPath,
                    WorkingDirectory = _CachePath,
                    RedirectStandardOutput = true,
                    RedirectStandardError = true,
                    UseShellExecute = false
                }
            };
            process.ErrorDataReceived += (sender, args) => logWriter.WriteLine(args.Data);
            process.OutputDataReceived += (sender, args) => logWriter.WriteLine(args.Data);

            logWriter.WriteLine(@"Process arguments: " + process.StartInfo.Arguments);
            if (!process.Start())
            {
                Logger.WriteLine(false, "Failed to start CastXML.");
                logWriter.Close();
                return false;
            }

            process.BeginOutputReadLine();
            process.BeginErrorReadLine();
            process.WaitForExit();

            if (process.ExitCode != 0)
            {
                Logger.WriteLine(false, "CastXML failed to compile source file.");
                logWriter.Close();
                return false;
            }
            logWriter.Close();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _AddEnum(CastXml.ItemsEnumeration enumeration, string enumId, string package, Definitions.ClassDefinition c = null)
        {
            var name = enumeration.name;
            if (string.IsNullOrEmpty(name))
                return true;

            if (Configuration.KnownTypes.Any(def => def.NativeFqn == name))
            {
                Logger.WriteLine(true, "Enum " + name + " already in known types list.");
                return true;
            }

            if (Configuration.ClassOptInList.ContainsKey(package))
            {
                // OptIn-Package
                if (!Configuration.ClassOptInList[package].Contains(name))
                {
                    Logger.WriteLine(true, "Enum " + name + " ignored beacause of opt-in package.");
                    return true;
                }
            }

            Logger.WriteLine(true, $"Relevant enum: [{enumeration.id}] [{enumId}] {name}");

            var e = new Definitions.EnumDefinition()
            {
                Name = name,
                Package = package,
                OuterClass = c
            };

            if (c == null)
            {
                Definitions.EnumItems.Add(e);
            }
            else
            {
                if (e.Name.Contains("::"))
                    e.Name = e.Name.Remove(0, e.Name.LastIndexOf(":", StringComparison.Ordinal));
                c.InnerEnums.Add(e);
            }

            foreach (var enumValue in enumeration.EnumValue)
            {
                e.Enumerators.Add(enumValue.name, enumValue.init.ToString());
            }

            _AddInclude(enumeration.file);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        Definitions.ClassDefinition _AddClass(CastXml.Record record, string package, bool isStruct, string overrideName = null)
        {
            string className = string.IsNullOrEmpty(overrideName) ? record.name : overrideName;
            if (string.IsNullOrEmpty(className) || className.StartsWith("Handle_"))
                return null;

            if (Configuration.Ignore.Contains(className))
            {
                Logger.WriteLine(true, "Class " + className + " ignored by definition.");
                return null;
            }

            if (Configuration.KnownTypes.Any(def => def.NativeFqn == className))
            {
                Logger.WriteLine(true, "Class " + className + " already in known types list.");
                return null;
            }

            if (Configuration.ClassOptInList.ContainsKey(package))
            {
                // OptIn-Package
                if (!Configuration.ClassOptInList[package].Contains(className))
                {
                    Logger.WriteLine(true, "Class " + className + " ignored beacause of opt-in package.");
                    return null;
                }
            }

            var c = new Definitions.ClassDefinition()
            {
                Name = className,
                Package = package,
                IsStruct = isStruct,
                IsAbstract = record.IsAbstract
            };
            Definitions.ClassItems.Add(c);

            // Search for base class
            var baseClassToCopyIds = new List<string>();
            if (record.Base != null)
            {
                foreach (var baseElement in record.Base)
                {
                    var baseTypeId = baseElement.type;
                    var baseClassElement = _Db.Classes.FirstOrDefault(e => e.id == baseTypeId);
                    if (baseClassElement != null)
                    {
                        var baseClassName = baseClassElement.name;
                        // Take base class name only if it is not template.
                        if (baseClassName.Contains("<"))
                        {
                            baseClassToCopyIds.Add(baseTypeId);
                            continue;
                        }
                        c.BaseClassName = baseClassName;
                        break;
                    }
                }
            }

            var classId = record.id;

            Logger.WriteLine(true, $"Relevant class: [{classId}] {className} : {c.BaseClassName}");

            // Search for constructors in class
            var constructors = from item in _Db.Constructors
                            where item.context == classId
                            select item;

            foreach (var f in constructors)
            {
                _AddFunction(c, f, 1);
            }

            // Search for destructors in class
            var destructors = from item in _Db.Destructors
                where item.context == classId
                select item;

            foreach (var f in destructors)
            {
                _AddFunction(c, f, 2);
            }

            // Search for functions in class
            var functions = from item in _Db.Methods
                            where item.context == classId
                            select item;

            foreach (var f in functions)
            {
                _AddFunction(c, f, 0);
            }

            // Search for functions in base class to copy
            // e.g. if the base class was templated
            foreach (var id in baseClassToCopyIds)
            {
                var baseFuncs = from item in _Db.Methods
                                where item.context == id
                                select item;

                foreach (var f in baseFuncs)
                {
                    _AddFunction(c, f, 0);
                }
            }

            // Search for inner enums
            var enums = from item in _Db.Enumerations
                        where item.context == classId
                        select item;

            foreach (var e in enums)
            {
                _AddEnum(e, e.id, package, c);
            }

            _AddInclude(record.file);
            return c;
        }

        //--------------------------------------------------------------------------------------------------

        void _AddFunction(Definitions.ClassDefinition klass, CastXml.Method method, int funcType)
        {
            var fName = funcType == 0 ? method.name : klass.Name;
            var logName = klass.Name + "::" + fName;

            if (Configuration.Ignore.Contains(klass.Name + "::" + fName) || Configuration.Ignore.Contains("*::" + fName))
            {
                Logger.WriteLine(true, "Function " + logName + " ignored by definition.");
                return;
            }

            if (fName.StartsWith("_CSFDB_"))
            {
                Logger.WriteLine(true, "Function " + logName + " ignored because it begins with _CSFDB_");
                return;
            }

            // Create function
            var f = new Definitions.FunctionDefintion()
            {
                Class = klass,
                Name = fName,
                Type = (funcType == 0) ? _GetTypeDefinition(method.returns) : _VoidTypeDefinition,
                IsStatic = method.IsStatic,
                IsPublic = method.IsPublic,
                IsConstructor = funcType == 1,
                IsDestructor = funcType == 2,
                IsOperator = false,
                IsTemplate = fName.Contains('<'),
                IsAbstract = method.IsPureVirtual,
            };

            if (f.Type == null)
            {
                Logger.WriteLine(true, string.Format("\tFunction " + logName + " ignored because of an unknown return type (FunctionType?)."));
                return;
            }

            Logger.WriteLine(true, string.Format("\tRelevant function: [{0}] {1} type='{2}'", method.id, fName, f.Type.Name));

            // Get parameters
            int unnamedCount = 1;
            if (method.Argument != null)
            {
                foreach (var p in method.Argument)
                {
                    var fp = new Definitions.ParameterDefinition
                    {
                        Type = _GetTypeDefinition(p.type)
                    };

                    if (fp.Type == null)
                    {
                        Logger.WriteLine(true, string.Format("\tFunction " + logName + " ignored because of an unknown parameter type (FunctionType?)."));
                        return;
                    }

                    if (string.IsNullOrEmpty(p.name))
                    {
                        fp.Name = $"parameter{unnamedCount}";
                        unnamedCount++;
                    }
                    else
                    {
                        fp.Name = p.name;
                    }

                    if (Configuration.NameReplacements.ContainsKey(fp.Name))
                        fp.Name = Configuration.NameReplacements[fp.Name];

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

                    f.Parameters.Add(fp);
                }

                if (f.Parameters.All(pd => pd.Type.IsVoid && !pd.Type.IsPointer))
                {
                    // Only one void parameter, thats equivalent to no parameter
                    Logger.WriteLine(true, "\t\tFunction " + logName + " cleared all parameters because it has only one of type void.");
                    f.Parameters.Clear();
                }
            }

            if (!klass.Functions.Any(other => f.IsEqual(other)))
            {
                klass.Functions.Add(f);
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _AddTypedef(CastXml.ItemsTypedef typedef, string package)
        {
            // Check if we have a typedef to a NCollection
            var targetName = typedef.name;
            if (targetName.Contains("<"))
                return true;

            var sourceId = typedef.type;
            var sourceElement = _Db.Classes.FirstOrDefault(e => e.id == sourceId);
            if (sourceElement == null)
                return true;

            var sourceName = sourceElement.name;
            if(!(sourceName.StartsWith("NCollection_") && sourceName.Contains("<")))
                return true;

            // Add Typedef
            if (CollectionTypedefs.ContainsKey(targetName))
                return true;

            if (Configuration.ClassOptInList.ContainsKey(package))
            {
                // OptIn-Package
                if (!Configuration.ClassOptInList[package].Contains(targetName))
                {
                    Logger.WriteLine(true, "Collection class " + targetName + " ignored beacause of opt-in package.");
                    return true;
                }
            }


            Logger.WriteLine(true, "\t\tFound relevant collection typedef: " + targetName + " << " + sourceName);

            _AddCollectionTemplateClass(targetName, sourceName, package);

            _AddInclude(typedef.file);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _AddCollectionTemplateClass(string targetName, string sourceName, string package)
        {
            var resolvedSourceName = Configuration.NameReplacements.ContainsKey(sourceName) ? Configuration.NameReplacements[sourceName] : sourceName;
            var tpBegin = resolvedSourceName.IndexOf('<');
            var tpEnd = resolvedSourceName.LastIndexOf('>');
            var templateClassName = resolvedSourceName.Substring(0, tpBegin);
            var sourceParts = resolvedSourceName.Substring(tpBegin+1, tpEnd-tpBegin-1).Split(new[] { ",", " " }, StringSplitOptions.RemoveEmptyEntries);

            var refParts = new List<string>();
            for (int i = 0; i < sourceParts.Length; i++)
                refParts.Add("TI_" + i);
            var refClassName = templateClassName + "<" + string.Join(", ", refParts) + ">";

            var sourceClass = Definitions.ClassItems.FirstOrDefault(cd => cd.IsTemplate && cd.Name.Equals(refClassName));
            if (sourceClass == null)
            {
                var sourceElement = _Db.Classes.FirstOrDefault(e => e.name == refClassName);
                if (sourceElement == null)
                {
                    Logger.WriteLine(true, "\t\t\tSource class not found: " + templateClassName + " for target " + targetName);
                    return false;
                }
                sourceClass = _AddClass(sourceElement, "", false);
            }

            Logger.WriteLine(true, "\t\t\tSource class found: " + refClassName + " for target " + targetName);

            var replacementTypes = new Dictionary<string, string>();
            replacementTypes.Add(refClassName, targetName);

            for (int i = 0; i < sourceParts.Length; i++)
                replacementTypes.Add("TI_" + i, sourceParts[i]);

            var targetClass = sourceClass.DeepCopy(targetName, package, replacementTypes);

            // Remove base class reference
            targetClass.BaseClassName = "";
            targetClass.BaseClass = null;

            // Remove ignored functions
            foreach (var fn in targetClass.Functions.ToArray())
            {
                var fnName = targetClass.Name + "::" + fn.Name;
                if (Configuration.Ignore.Contains(fnName))
                {
                    Logger.WriteLine(true, "\t\t\tRemoved copied function because it is ignored: " + fnName);
                    targetClass.Functions.Remove(fn);
                }
            }

            Definitions.ClassItems.Add(targetClass);


            return true;
        }

        //--------------------------------------------------------------------------------------------------

        Definitions.TypeDefinition _GetTypeDefinition(string id)
        {
            Definitions.TypeDefinition cached;
            if(_TypeCache.TryGetValue(id, out cached))
                return cached;

            var (element, type) = _Db.FindById(id);
            if (element == null)
                return null;

            var td = new Definitions.TypeDefinition();

            Definitions.TypeDefinition std;
            switch (type)
            {
                case CastXml.Items1ChoiceType.FundamentalType:
                    td.Name = ((CastXml.ItemsFundamentalType)element).name;
                    break;

                case CastXml.Items1ChoiceType.Typedef:
                    var typedef = (CastXml.ItemsTypedef)element;

                    // Check for known types
                    if (Configuration.KnownTypes.Any(kt => kt.NativeFqn == typedef.name))
                    {
                        td.Name = typedef.name;
                    }
                    else
                    {
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
                            td.IsHandle = std.IsHandle;
                        }
                    }
                    break;
                    
                case CastXml.Items1ChoiceType.ElaboratedType:
                    return _GetTypeDefinition(((CastXml.ItemsElaboratedType)element).type);

                case CastXml.Items1ChoiceType.Class:
                case CastXml.Items1ChoiceType.Struct:
                    td.Name = ((CastXml.Record)element).name;
                    break;

                case CastXml.Items1ChoiceType.Enumeration:
                    td.Name = ((CastXml.ItemsEnumeration)element).name;
                    break;

                case CastXml.Items1ChoiceType.PointerType:
                    td.IsPointer = true;
                    std = _GetTypeDefinition(((CastXml.ItemsPointerType)element).type);
                    if (std == null)
                        return null;

                    td.Name = std.Name;
                    td.IsHandle = std.IsHandle;
                    td.IsConst = std.IsConst;
                    break;

                case CastXml.Items1ChoiceType.ReferenceType:
                    td.IsReference = true;
                    std = _GetTypeDefinition(((CastXml.ItemsReferenceType)element).type);
                    if (std == null)
                        return null;

                    td.Name = std.Name;
                    td.IsHandle = std.IsHandle;
                    td.IsConst = std.IsConst;
                    break;

                case CastXml.Items1ChoiceType.CvQualifiedType:
                    td.IsConst = true;
                    std = _GetTypeDefinition(((CastXml.ItemsCvQualifiedType)element).type);
                    if (std == null)
                        return null;

                    td.Name = std.Name;
                    td.IsPointer = std.IsPointer;
                    td.IsReference = std.IsReference;
                    td.IsHandle = std.IsHandle;
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

        void _AddInclude(string fileId)
        {
            string fileName = "";
            if (_CurrentFileSet.ContainsKey(fileId))
            {
                fileName = Path.GetFileName(_CurrentFileSet[fileId]);
            }
            else
            {
                var fileItem = _Db.Files.FirstOrDefault(e => e.id == fileId);
                if (fileItem != null)
                {
                    fileName = fileItem.name;
                }
            }

            if (string.IsNullOrEmpty(fileName))
                return;

            if (!Definitions.IncludeList.Contains(fileName)
                && !fileName.EndsWith(".cxx"))
            {
                Definitions.IncludeList.Add(fileName);
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}