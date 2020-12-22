using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Windows.Forms;
using System.Xml.Linq;

namespace Macad.Occt.Generator
{
    public class ClassBrowser
    {
        string _IncludePath;
        string _CachePath;
        string _CastXmlPath;
        XDocument _Db;
        Dictionary<string, Definitions.TypeDefinition> _TypeCache = new Dictionary<string, Definitions.TypeDefinition>();
        Definitions.TypeDefinition _VoidTypeDefinition = new Definitions.TypeDefinition() { Name = "void" };
        Dictionary<string, string> _CurrentFileSet = new Dictionary<string, string>();
        public static Dictionary<string, string> CollectionTypedefs = new Dictionary<string, string>();
        public string _CurrentTemplateTypedefSource = "";
        public string _CurrentTemplateTypedefTarget = "";

        static readonly char[] TrimChars = new[] { (char)0x1, (char)0x2, ' ', '=' };

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
                result = result && AddPackage(package);
            }

            // Remove all template classes
            Definitions.ClassItems.RemoveAll(cd => cd.IsTemplate);

            // Link and sort
            Logger.Context = "-Post-Classes-";
            result = result && PostProcessClasses();

            Logger.Context = "";
            return result;
        }

        bool PostProcessClasses()
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

        bool AddPackage(string package)
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
                writer.WriteLine(Configuration.SouceFileHeader);
                writer.WriteLine("");

                foreach (var headerFile in headerFiles)
                {
                    writer.WriteLine("#include \"{0}\"", Path.GetFileName(headerFile));
                }
                writer.Close();

                // Compile
                if (!CompilePackage(_CachePath + @"\" + package))
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

            _Db = XDocument.Load(cacheFilePath);
            _TypeCache.Clear();
            _CurrentFileSet.Clear();

            // Get file IDs
            var fileItems = from item in _Db.Descendants("File")
                where headerFiles.Contains(item.Attribute("name").Value)
                select item;

            foreach (var fileItem in fileItems)
            {
                _CurrentFileSet.Add(fileItem.Attribute("id").Value, fileItem.Attribute("name").Value);
            }

            // Process Type Definitions
            var typedefs = from item in _Db.Descendants("Typedef")
                where _CurrentFileSet.ContainsKey(item.Attribute("file").Value)
                      && item.Attribute("context").Value.Equals("_1")
                select item;

            foreach (var t in typedefs)
            {
                result = result && AddTypedef(t, package);
            }

            // Process Enums
            var enums = from item in _Db.Descendants("Enumeration")
                where _CurrentFileSet.ContainsKey(item.Attribute("file").Value)
                      && item.Attribute("context").Value.Equals("_1")
                select item;

            foreach (var e in enums)
            {
                if (!Definitions.EnumItems.Any(ed => ed.Name.Equals(e.Attribute("name").Value)))
                {
                    result = result && AddEnum(e, e.Attribute("id").Value, package);
                }
            }

            // Process Structs
            var structs = from item in _Db.Descendants("Struct")
                          where _CurrentFileSet.ContainsKey(item.Attribute("file").Value)
                                && !item.Attributes("incomplete").Any(attr => attr.Value.Equals("1"))
                                && item.Attribute("context").Value.Equals("_1") 
                          select item;

            foreach (var s in structs)
            {
                if (!Definitions.ClassItems.Any(cd => cd.Name.Equals(s.Attribute("name").Value)))
                {
                    AddClass(s, package, true);
                }
            }
            
            // Process Classes
            var classes = from item in _Db.Descendants("Class")
                          where _CurrentFileSet.ContainsKey(item.Attribute("file").Value)
                      && !item.Attributes("incomplete").Any(attr => attr.Value.Equals("1"))
                      && item.Attribute("context").Value.Equals("_1") 
                select item;

            foreach (var c in classes)
            {
                if (!Definitions.ClassItems.Any(cd => cd.Name.Equals(c.Attribute("name").Value)))
                {
                    AddClass(c, package, false);
                }
            }

            Logger.Context = "";
            return result;
        }

        bool CompilePackage(string cacheFilePath)
        {
            var options = new List<string>();

            options.Add(@"--castxml-gccxml"); 
            options.Add(@"--castxml-cc-msvc """ + Path.Combine(Configuration.VisualCppPath, @"bin\Hostx64\x64\cl.exe") + @"""");

            // Include paths
            options.Add(@"-I """ + _IncludePath + @""""); //
            options.Add(@"-I """ + _IncludePath + @"\..\..\freetype\include"""); //
            options.Add(@"-I """ + Path.Combine(Configuration.VisualCppPath, @"include") + @"""");
            options.Add(@"-I """ + Configuration.UcrtPath + @"""");
            options.Add(@"-I """ + Path.Combine(Configuration.WinSDKPath, @"um") + @"""");
            options.Add(@"-I """ + Path.Combine(Configuration.WinSDKPath, @"shared") + @"""");

            // Defines
            options.Add(@"-D WNT");
            options.Add(@"-D __STDCPP_DEFAULT_NEW_ALIGNMENT__=8U");
            options.Add(@"-D __WRAPPER_GENERATOR__");
            options.Add(@"-D __clang__");
            options.Add(@"-D _ALLOW_COMPILER_AND_STL_VERSION_MISMATCH");

            // Options for Clang
            options.Add("-fcxx-exceptions"); // Enable C++ exceptions

            // Output
            //options.Add(@"-o """ + cacheFilePath + @"""" );

            // Source file
            options.Add(cacheFilePath + @".cxx");

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

        bool AddEnum(XElement element, string enumId, string package, Definitions.ClassDefinition c = null)
        {
            var name = element.Attribute("name").Value;
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

            Logger.WriteLine(true, string.Format("Relevant enum: [{0}] [{1}] {2}", element.Attribute("id").Value, enumId, name));

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

            // Search for enumerators in enum
            var enumerators = element.Descendants("EnumValue");

            foreach (var enumerator in enumerators)
            {
                e.Enumerators.Add(enumerator.Attribute("name").Value, enumerator.Attribute("init").Value);
            }

            AddInclude(element);

            return true;
        }

        public Definitions.ClassDefinition AddClass(XElement element, string package, bool isStruct, string overrideName = null)
        {
            string className = string.IsNullOrEmpty(overrideName) ? element.Attribute("name").Value : overrideName;
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
                IsAbstract = element.Attributes("abstract").Any(attr => attr.Value.Equals("1"))
            };
            Definitions.ClassItems.Add(c);

            // Search for base class
            var baseClassToCopyIds = new List<string>();
            var baseElements = element.Descendants("Base");
            if (baseElements.Any())
            {
                foreach (var baseElement in baseElements)
                {
                    var baseTypeId = baseElement.Attribute("type").Value;
                    var baseClassElement = _Db.Descendants("Class").FirstOrDefault(e => e.Attribute("id").Value.Equals(baseTypeId));
                    if (baseClassElement != null)
                    {
                        var baseClassName = baseClassElement.Attribute("name").Value;
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

            var classId = element.Attribute("id").Value;

            Logger.WriteLine(true, string.Format("Relevant class: [{0}] {1} : {2}", classId, className, c.BaseClassName));

            // Search for constructors in class
            var constructors = from item in _Db.Descendants("Constructor")
                            where item.Attribute("context").Value.Equals(classId)
                            select item;

            foreach (var f in constructors)
            {
                if (!f.Attribute("access").Value.Equals("public"))
                {
                    c.HasUnaccessibleConstructor = true;
                    continue;
                }
                AddFunction(c, f, 1);
            }

            // Search for destructors in class
            var destructors = from item in _Db.Descendants("Destructor")
                where item.Attribute("context").Value.Equals(classId)
                select item;

            foreach (var f in destructors)
            {
                if (!f.Attribute("access").Value.Equals("public"))
                {
                    c.HasUnaccessibleDestructor = true;
                }
                else
                {
                    AddFunction(c, f, 2);
                }
            }

            // Search for functions in class
            var functions = from item in _Db.Descendants("Method")
                            where item.Attribute("context").Value.Equals(classId)
                                  && item.Attribute("access").Value.Equals("public")
                            select item;

            foreach (var f in functions)
            {
                AddFunction(c, f, 0);
            }

            // Search for functions in base class to copy
            // e.g. if the base class was templated
            foreach (var id in baseClassToCopyIds)
            {
                var baseFuncs = from item in _Db.Descendants("Method")
                                where item.Attribute("context").Value.Equals(id)
                                      && item.Attribute("access").Value.Equals("public")
                                select item;

                foreach (var f in baseFuncs)
                {
                    AddFunction(c, f, 0);
                }
            }

            // Search for inner enums
            var enums = from item in _Db.Descendants("Enumeration")
                        where item.Attribute("context").Value.Equals(classId)
                        select item;

            foreach (var e in enums)
            {
                var enumName = e.Attribute("name").Value;
                AddEnum(e, e.Attribute("id").Value, package, c);
            }

            AddInclude(element);
            return c;
        }

        public void AddFunction(Definitions.ClassDefinition klass, XElement element, int funcType)
        {
            var fName = funcType == 0 ? element.Attribute("name").Value : klass.Name;
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
                Type = (funcType == 0) ? GetTypeDefinition(element.Attribute("returns").Value) : _VoidTypeDefinition,
                IsStatic = element.Attributes("static").Any(attr => attr.Value.Equals("1")),
                IsPublic = true,
                IsConstructor = funcType == 1,
                IsDestructor = funcType == 2,
                IsOperator = false,
                IsTemplate = fName.Contains('<'),
                IsAbstract = element.Attributes("abstract").Any(attr => attr.Value.Equals("1")),
            };

            if (f.Type == null)
            {
                Logger.WriteLine(true, string.Format("\tFunction " + logName + " ignored because of an unknown return type (FunctionType?)."));
                return;
            }

            Logger.WriteLine(true, string.Format("\tRelevant function: [{0}] {1} type='{2}'", element.Attribute("id").Value, fName, f.Type.Name));

            // Get parameters
            var parameters = element.Descendants("Argument");

            int unnamedCount = 1;

            foreach (var p in parameters)
            {
                var fp = new Definitions.ParameterDefinition
                {
                    Type = GetTypeDefinition(p.Attribute("type").Value)
                };

                if (fp.Type == null)
                {
                    Logger.WriteLine(true, string.Format("\tFunction " + logName + " ignored because of an unknown parameter type (FunctionType?)."));
                    return;
                }

                var pNameAttr = p.Attribute("name");
                if (pNameAttr != null)
                {
                    fp.Name = pNameAttr.Value;
                }
                else
                {
                    fp.Name = string.Format("parameter{0}", unnamedCount);
                    unnamedCount++;
                }

                if (Configuration.NameReplacements.ContainsKey(fp.Name))
                    fp.Name = Configuration.NameReplacements[fp.Name];

                var defaultValue = p.Attribute("default");
                if (defaultValue != null)
                {
                    fp.Default = defaultValue.Value.Trim(TrimChars);

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

                Logger.WriteLine(true, string.Format("\t\tRelevant parameter: {0} type='{1}' default='{2}'", fp.Name, fp.Type.Name, fp.Default));

                f.Parameters.Add(fp);
            }

            if (f.Parameters.All(pd => pd.Type.IsVoid && !pd.Type.IsPointer))
            {
                // Only one void parameter, thats equivalent to no parameter
                Logger.WriteLine(true, "\t\tFunction " + logName + " cleared all parameters because it has only one of type void.");
                f.Parameters.Clear();
            }

            if (!klass.Functions.Any(other => f.IsEqual(other)))
            {
                klass.Functions.Add(f);
            }
        }

        bool AddTypedef(XElement element, string package)
        {
            // Check if we have a typedef to a NCollection
            var targetName = element.Attribute("name").Value;
            if (targetName.Contains("<"))
                return true;

            var sourceId = element.Attribute("type").Value;
            var sourceElement = _Db.Descendants("Class").FirstOrDefault(e => e.Attribute("id").Value.Equals(sourceId));
            if (sourceElement == null)
                return true;

            var sourceName = sourceElement.Attribute("name").Value;
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

            AddCollectionTemplateClass(targetName, sourceName, package);

            AddInclude(element);

            return true;
        }

        bool AddCollectionTemplateClass(string targetName, string sourceName, string package)
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
                var sourceElement = _Db.Descendants("Class").FirstOrDefault(e =>
                {
                    var attr = e.Attribute("name");
                    if (attr == null)
                        return false;
                    return attr.Value.Equals(refClassName);
                });
                if (sourceElement == null)
                {
                    Logger.WriteLine(true, "\t\t\tSource class not found: " + templateClassName + " for target " + targetName);
                    return false;
                }
                sourceClass = AddClass(sourceElement, "", false);
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

        public Definitions.TypeDefinition GetTypeDefinition(string id)
        {
            Definitions.TypeDefinition cached;
            if(_TypeCache.TryGetValue(id, out cached))
                return cached;

            var element = _Db.Descendants().FirstOrDefault(e => e.Attributes("id").Any( attr => attr.Value.Equals(id)));
            Debug.Assert(element != null, "element != null");

            var td = new Definitions.TypeDefinition();
            var elementType = element.Name.LocalName;

            // Check for fundamental type
            if (elementType.Equals("FundamentalType"))
            {
                td.Name = element.Attribute("name").Value;
            }
            else if (elementType.Equals("Typedef"))
            {
                var elementName = element.Attribute("name").Value;

                // Check for known types
                if (Configuration.KnownTypes.Any(kt => kt.NativeFqn == elementName))
                {
                    td.Name = elementName;
                }
                else
                {
                    var std = GetTypeDefinition(element.Attribute("type").Value);
                    if (std == null)
                        return null;

                    if (std.Name.Contains("<") && !elementName.Contains("<"))
                    {
                        // Only supress typedef resolve if the typedef resolves an template
                        td.Name = elementName;
                    }
                    else
                    {
                        td.Name = std.Name;
                        td.IsPointer = std.IsPointer;
                        td.IsReference = std.IsReference;
                        td.IsHandle = std.IsHandle;
                    }
                }
            }
            else if (elementType.Equals("Class"))
            {
                td.Name = element.Attribute("name").Value;
                //if (_CurrentTemplateTypedefSource.Equals(td.Name))
                    //td.Name = _CurrentTemplateTypedefTarget;
            }
            else if (elementType.Equals("Struct"))
            {
                td.Name = element.Attribute("name").Value;
            }
            else if (elementType.Equals("Enumeration"))
            {
                td.Name = element.Attribute("name").Value;
            }
            else if (elementType.Equals("PointerType"))
            {
                td.IsPointer = true;
                var std = GetTypeDefinition(element.Attribute("type").Value);
                if (std == null)
                    return null;

                td.Name = std.Name;
                td.IsHandle = std.IsHandle;
                td.IsConst = std.IsConst;
            }
            else if (elementType.Equals("ReferenceType"))
            {
                td.IsReference = true;
                var std = GetTypeDefinition(element.Attribute("type").Value);
                if (std == null)
                    return null;

                td.Name = std.Name;
                td.IsHandle = std.IsHandle;
                td.IsConst = std.IsConst;
            }
            else if (elementType.Equals("CvQualifiedType"))
            {
                td.IsConst = true;
                var std = GetTypeDefinition(element.Attribute("type").Value);
                if (std == null)
                    return null;

                td.Name = std.Name;
                td.IsPointer = std.IsPointer;
                td.IsReference = std.IsReference;
                td.IsHandle = std.IsHandle;
            }
            else
            {
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

        public void AddInclude(XElement element)
        {
            string fileName = "";
            var fileId = element.Attribute("file").Value;
            if (_CurrentFileSet.ContainsKey(fileId))
            {
                fileName = Path.GetFileName(_CurrentFileSet[fileId]);
            }
            else
            {
                var fileItem = _Db.Descendants("File").FirstOrDefault(e => e.Attribute("id").Value.Equals(fileId));
                if (fileItem != null)
                {
                    fileName = fileItem.Attribute("name").Value;
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

    }
}