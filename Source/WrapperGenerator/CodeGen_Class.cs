using System.IO;
using System.Linq;

namespace Macad.Occt.Generator
{
    public partial class CodeGen
    {
        void GenerateClassHeader(StringWriter w, Definitions.ClassDefinition cd, bool inner = false)
        {
            if (!inner)
            {
                w.WriteLine("//---------------------------------------------------------------------");
                w.WriteLine("//  Class  " + cd.Name);
                w.WriteLine("//---------------------------------------------------------------------");
            }

            GenerateComment(w, inner ? "\t" : "", cd.Comment);
            
            if(!inner)
                w.Write("public ");

            w.Write("ref class {0}", cd.Name);

            if (!(cd.IsBase || cd.IsAbstract || Configuration.Unseal.Contains(cd.Name)))
                w.Write(" sealed");

            // Has baseclass
            if (!cd.IsStatic)
            {
                w.Write( $" : public {cd.SuperClassFqn}");
            }
            w.WriteLine();
            w.WriteLine("{");

            // Write macro
            w.WriteLine();
            w.WriteLine("#ifdef Include_" + (inner ? (cd.OuterClass.Name + "_") : "") + cd.Name + "_h");
            w.WriteLine("public:");
            w.WriteLine("\tInclude_" + (inner ? (cd.OuterClass.Name + "_") : "") + cd.Name + "_h");
            w.WriteLine("#endif");
            w.WriteLine();

            // Write instance handling
            GenerateClassHeaderInstance(w, cd);

            w.WriteLine("public:");

            // write inner enums
            foreach (var ed in cd.InnerEnums)
            {
                GenerateEnumHeader(w, ed, true);
            }

            // write inner classes
            foreach (var icd in cd.InnerClasses)
            {
                GenerateClassHeader(w, icd, true);
            }

            // write methods
            foreach (var fd in cd.Functions)
            {
                if (fd.IsDestructor || !fd.IsPublic)
                    continue;

                for (int i = fd.Parameters.Count; i >= (fd.Parameters.Count - fd.DefaultParameterCount); i--)
                {
                    if (cd.Functions.Any(ffd => (ffd != fd) && ffd.IsEqual(fd, i)))
                        break;

                    GenerateFunctionDeclaration(w, fd, i);
                }
            }

            w.WriteLine("}}; // class {0}", cd.Name);
            w.WriteLine();
        }
        
        //--------------------------------------------------------------------------------------------------

        void GenerateClassHeaderInstance(StringWriter w, Definitions.ClassDefinition cd)
        {
            if (cd.IsStatic)
                return;

            // write default constructor, if the native class doesn't have one
            if (!cd.HasDefaultConstructor)
            {
                // Only create a default constructor, if the class does not have any constructor 
                // AND the class isn't abstract AND does not define the constructor inaccessible
                // AND any constructor was found bit ignored.
                if (!(cd.HasConstructor || cd.IsAbstract || cd.HasUnaccessibleConstructor || cd.HasAbstractFunctions || Configuration.Ignore.Contains(cd.Name + "::" + cd.Name)))
                {
                    // Create public default constructor
                    w.WriteLine("public:");
                    w.WriteLine("\t" + cd.Name + "()");
                    w.WriteLine($"\t\t: {cd.SuperClassFqn}(InitMode::Uninitialized)");
                    w.WriteLine("\t{");
                    w.WriteLine("\t\t_NativeInstance = new " + cd.Native + "();");
                    w.WriteLine("\t}");
                    w.WriteLine();
                }
            }

            if (cd.IsBase || Configuration.Unseal.Contains(cd.Name))
            {
                // Default constructor (uninitialized)
                w.WriteLine("protected:");
                w.WriteLine($"\t{cd.Name}(InitMode init)");
                w.WriteLine($"\t\t: {cd.SuperClassFqn}( init )");
                w.WriteLine("\t{}");
                w.WriteLine();
            }

            w.WriteLine("public:");

            // Constructor for instance pointer
            w.WriteLine("\t" + cd.Name + "(" + cd.Native + "* nativeInstance)");
            if(cd.BaseClass == null && !cd.IsTransient)
                w.WriteLine($"\t\t: {cd.SuperClassFqn}( nativeInstance, true )");
            else
                w.WriteLine($"\t\t: {cd.SuperClassFqn}( nativeInstance )");
            w.WriteLine("\t{}");
            w.WriteLine();

            // Constructor for instance reference
            w.WriteLine($"\t{cd.Name}({cd.Native}& nativeInstance)");
            if(cd.BaseClass == null && !cd.IsTransient)
                w.WriteLine($"\t\t: {cd.SuperClassFqn}( &nativeInstance, false )");
            else
                w.WriteLine($"\t\t: {cd.SuperClassFqn}( nativeInstance )");
            w.WriteLine("\t{}");
            w.WriteLine();

            // Create property for instance reference
            w.WriteLine($"\tproperty {cd.Native}* NativeInstance");
            w.WriteLine("\t{");
            w.WriteLine("\t\t" + cd.Native + "* get()");
            w.WriteLine("\t\t{");
            w.WriteLine($"\t\t\treturn static_cast<{cd.Native}*>(_NativeInstance);");
            w.WriteLine("\t\t}");
            w.WriteLine("\t}");
            w.WriteLine();

            // Create Downcast function
            if (cd.IsTransient)
            {
                w.WriteLine("\tstatic " + cd.Fqn + "^ CreateDowncasted(" + cd.Native + "* instance);");
                w.WriteLine();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void GenerateClassSource(StringWriter w, Definitions.ClassDefinition cd)
        {
            w.WriteLine();
            w.WriteLine("//---------------------------------------------------------------------");
            w.WriteLine($"//  Class  {cd.Name}");
            w.WriteLine("//---------------------------------------------------------------------");
            w.WriteLine();

            // write methods
            foreach (var fd in cd.Functions)
            {
                if (fd.IsDestructor || !fd.IsPublic)
                    continue;

                for (int i = fd.Parameters.Count; i >= (fd.Parameters.Count - fd.DefaultParameterCount); i--)
                {
                    if (cd.Functions.Any(ffd => (ffd != fd) && ffd.IsEqual(fd, i)))
                        break;

                    GenerateFunctionSource(w, fd, i);
                }
            }
            w.WriteLine();

            // Downcast method
            if (cd.IsTransient)
            {
                w.WriteLine($"{cd.Fqn}^ {cd.Fqn}::CreateDowncasted({cd.Native}* instance)");
                w.WriteLine("{");

                if (cd.DerivedClasses.Any())
                {
                    w.WriteLine("\tif( instance == nullptr )");
                    w.WriteLine("\t\treturn nullptr;");
                    w.WriteLine("");

                    foreach (var derivedClass in cd.DerivedClasses)
                    {
                        w.WriteLine($"\tif (instance->IsKind(STANDARD_TYPE({derivedClass.Native})))");
                        w.WriteLine($"\t\treturn {derivedClass.Fqn}::CreateDowncasted(({derivedClass.Native}*)instance);");
                    }
                    w.WriteLine("");
                }

                w.WriteLine($"\treturn gcnew {cd.Fqn}( instance );");
                w.WriteLine("}");
                w.WriteLine();
            }

            w.WriteLine();
        }

        //--------------------------------------------------------------------------------------------------
    }
}