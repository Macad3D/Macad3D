using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Macad.Occt.Generator
{
    public partial class CodeGen
    {
        public bool Generate()
        {
            var namespaceList = Configuration.Namespace.Split(new []{"::"}, StringSplitOptions.RemoveEmptyEntries);
            var includePackageListHeader = new List<string>();
            var includePackageListSource = new List<string>();

            foreach (var package in Configuration.PackageList)
            {
                string packageString = package;

                Logger.WriteLine(false, string.Format("Generating code for package {0}", package));

                var wh = new StringWriter();
                var wc = new StringWriter();

                // Generate header
                wh.WriteLine("// Generated wrapper code for package " + packageString);
                wh.WriteLine();
                wh.WriteLine("#pragma once");
                wh.WriteLine();

                wc.WriteLine("// Generated wrapper code for package " + packageString);
                wc.WriteLine();
                wc.WriteLine("#include \"OcctPCH.h\"");
                wc.WriteLine("#include \"{0}.h\"", packageString);
                wc.WriteLine();
                wc.WriteLine("using namespace System::Runtime::InteropServices; // for class Marshal");
                wc.WriteLine();

                var classList = Definitions.ClassItems.Where(cd => cd.Package.Equals(packageString)).ToArray();

                // Write managed includes
                includePackageListHeader.Clear();
                includePackageListSource.Clear();
                foreach (var cd in classList)
                {
                    // Define base class include in header
                    if (cd.BaseClass != null)
                    {
                        includePackageListHeader.Add(cd.BaseClass.Package);
                    }

                    // Define derived class includes in header (for DownCast)
                    foreach (var derivedClass in cd.DerivedClasses)
                    {
                        includePackageListSource.Add(derivedClass.Package);
                    }

                    // Define function referenced type includes in source
                    foreach (var fd in cd.Functions)
                    {
                        if (fd.Type != null)
                        {
                            var fdp = fd.Type.Package;
                            if (!string.IsNullOrEmpty(fdp))
                                includePackageListSource.Add(fdp);
                        }

                        foreach (var pd in fd.Parameters)
                        {
                            var pdp = pd.Type.Package;
                            if (!string.IsNullOrEmpty(pdp))
                                includePackageListSource.Add(pdp);
                        }
                    }
                }

                foreach (var include in includePackageListHeader.Distinct())
                {
                    if (Configuration.PackageList.Contains(include))
                        wh.WriteLine("#include \"{0}.h\"", include);
                }
                wh.WriteLine();

                foreach (var include in includePackageListSource.Distinct())
                {
                    if (Configuration.PackageList.Contains(include))
                        wc.WriteLine("#include \"{0}.h\"", include);
                }
                wc.WriteLine();

                // Generate namespaces
                foreach (var ns in namespaceList)
                {
                    wh.WriteLine("namespace " + ns);
                    wh.WriteLine("{");
                }

                // Generate enum code
                foreach (var cd in Definitions.EnumItems.Where(cd => cd.Package.Equals(packageString)))
                {
                    GenerateEnumHeader(wh, cd, false);
                }

                // Generate class code
                foreach (var cd in classList)
                {
                    GenerateClassHeader(wh, cd);
                    GenerateClassSource(wc, cd);
                }

                // Tail code
                foreach (var ns in namespaceList.Reverse())
                {
                    wh.WriteLine("}; // namespace " + ns);
                }

                File.WriteAllText(Path.Combine(Configuration.Output, package + @".h"), wh.ToString());
                File.WriteAllText(Path.Combine(Configuration.Output, package + @".cpp"), wc.ToString());
            }

            // Write include list
            var wd = new StringWriter();
            wd.WriteLine("// Generated include list");
            wd.WriteLine("#pragma once");
            wd.WriteLine();
            foreach (var include in Definitions.IncludeList)
            {
                if(include.EndsWith(".lxx"))
                    continue;
                
                wd.WriteLine("#include \"{0}\"", Path.GetFileName(include));
            }
            File.WriteAllText(Path.Combine(Configuration.Output, "native_includes.h"), wd.ToString());

            // Write forward decl list
            wd = new StringWriter();
            wd.WriteLine("// Generated forward declarations list");
            wd.WriteLine("#pragma once");
            wd.WriteLine();
            foreach (var ns in namespaceList)
            {
                wd.WriteLine("namespace " + ns);
                wd.WriteLine("{");
            }
            foreach (var cd in Definitions.ClassItems)
            {
                wd.WriteLine("\tref class " + cd.Name + ";");
            }
            foreach (var ed in Definitions.EnumItems)
            {
                wd.WriteLine("\tenum class " + ed.Name + ";");
            }

            foreach (var ns in namespaceList.Reverse())
            {
                wd.WriteLine("}; // namespace " + ns);
            }

            File.WriteAllText(Path.Combine(Configuration.Output, "forward_declarations.h"), wd.ToString());

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool GenerateTypeDecl(StringWriter w, Definitions.TypeDefinition type, Definitions.ClassDefinition klass, bool isReturnType)
        {
            if (string.IsNullOrWhiteSpace(type.Name))
                return false;

            if (type.IsKnownType)
            {
                // Known type
                if (type.KnownTypeDef.Type == Definitions.KnownTypes.Void)
                {
                    if(type.IsPointer)
                        w.Write("System::IntPtr");
                    else
                        w.Write("void");
                }
                else if (type.KnownTypeDef.Type == Definitions.KnownTypes.VoidPtr)
                {
                    w.Write("System::IntPtr");
                }
                else if (type.KnownTypeDef.IsValueType)
                {
                    w.Write(type.KnownTypeDef.Fqn);
                    if (!isReturnType && (type.IsPointer || type.IsReference) && !type.IsConst)
                    {
                            w.Write("%");
                    }
                }
                else
                {
                    w.Write(type.KnownTypeDef.Fqn + "^");
                }
            }
            else if(klass.HasInnerEnum(type.Name))
            {
                // Known enum
                w.Write(klass.InnerEnum(type.Name).Fqn);

                if (!isReturnType && type.IsReference)
                    w.Write("%");
            }
            else if (type.IsEnum(klass))
            {
                // Known enum
                w.Write(type.Fqn(klass));

                if (!isReturnType && type.IsReference)
                    w.Write("%");
            }
            else if (Definitions.ClassItems.Any(cd => cd.Name.Equals(type.Name)))
            {
                // Known class
                w.Write(Definitions.ClassItems.First(cd => cd.Name.Equals(type.Name)).Fqn + "^");
            }
            else if (klass.InnerClasses.Any(cd => cd.Name.Equals(type.Name)))
            {
                // Known inner class
                w.Write(klass.InnerClasses.First(cd => cd.Name.Equals(type.Name)).Fqn + "^");
            }
            else
            {
                // Unknown class, write as native
                if (!Configuration.UnknownTypes.Contains(type.Name))
                {
                    type.IsUnknown = true;
                    Configuration.UnknownTypes.Add(type.Name);
                    Logger.WriteLine(true, "Unknown type: " + type.Name);
                }
                return false;

            }
            w.Write(" ");
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void GenerateEnumHeader(StringWriter wh, Definitions.EnumDefinition ed, bool inner)
        {
            string prefix = inner ? "\t" : "";
            wh.WriteLine($"{prefix}//---------------------------------------------------------------------");
            wh.WriteLine($"{prefix}//  Enum  {ed.Name}");
            wh.WriteLine($"{prefix}//---------------------------------------------------------------------");

            if (!inner)
            {
                wh.Write("public ");
            }
            wh.WriteLine($"{prefix}enum class {ed.Name}");
            wh.WriteLine($"{prefix}{{");

            bool isFirst = true;
            // write enumerators
            foreach (var e in ed.Enumerators)
            {
                if (isFirst)
                    isFirst = false;
                else
                    wh.WriteLine(",");

                wh.Write($"{prefix}\t{e.Key}");
                if (!string.IsNullOrEmpty(e.Value))
                {
                    wh.Write(" = " + e.Value);
                }
            }
            wh.WriteLine();

            wh.WriteLine($"{prefix}}}; // enum  class {ed.Name}");
            wh.WriteLine();
        }

        //--------------------------------------------------------------------------------------------------

    }
}