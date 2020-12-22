using System.IO;
using System.Linq;

namespace Macad.Occt.Generator
{
    public partial class CodeGen
    {
        void GenerateFunctionDeclaration(StringWriter w, Definitions.FunctionDefintion fd, int maxParameterCount)
        {
            StringWriter wf = new StringWriter();
            
            if(!GenerateFunctionDecl(wf, fd, true, maxParameterCount))
            {
                w.Write("/* Method skipped due to unknown mapping: {0} {1}(", fd.Type.Name, fd.Name);
                foreach (var pd in fd.Parameters)
                {
                    w.Write("{0} {1}, ", pd.Type.Name, pd.Name);
                }
                w.WriteLine(") */");
            }
            else
            {
                w.Write(wf.ToString());
            }
        }

        //--------------------------------------------------------------------------------------------------

        void GenerateFunctionSource(StringWriter w, Definitions.FunctionDefintion fd, int maxParameterCount)
        {
            StringWriter wfd = new StringWriter();
            if (!GenerateFunctionDecl(wfd, fd, false, maxParameterCount))
            {
                return;
            }
            w.Write(wfd.ToString());

            if (fd.IsConstructor)
            {
                w.WriteLine($"\t: {fd.Class.SuperClassFqn}(BaseClass::InitMode::Uninitialized)");
            }

            w.WriteLine("{");

            // Check if we have an unexported function
            var ft = string.Join(",", fd.Parameters.Select(pd => pd.Type.Name).ToArray());
            if (Configuration.MissingExports.Contains($"{fd.Class.Name}::{fd.Name}({ft})"))
            {
                w.WriteLine("\tthrow gcnew System::NotImplementedException(\"Unresolved external symbol\");");
                w.WriteLine("}");
                w.WriteLine();
                return;
            }

            // Check if we have a default constructor in an abstract class
            if ((fd.Class.IsAbstract || fd.Class.HasAbstractFunctions) && fd.IsConstructor)// && fd.Parameters.Count == 0)
            {
                // Write empty constructor
                w.WriteLine("\tthrow gcnew System::NotImplementedException(\"Native class is abstract\");");
                w.WriteLine("}");
                w.WriteLine();
                return;
            }

            // Check if we have a result which cannot be wrapped
            if (fd.Type.IsPointer && 
                (fd.Type.IsHandle || 
                fd.Type.IsKnownType && ((fd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Integer)||(fd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Double))))
            {
                w.WriteLine("\tthrow gcnew System::NotImplementedException(\"Native class returns pointer to integer/double/handle.\");");
                w.WriteLine("}");
                w.WriteLine();
                return;
            }

            bool valid = false;
            StringWriter wf = new StringWriter();

            if (GenerateFunctionPreNativeCall(wf, fd, maxParameterCount))
            {
                if (GenerateFunctionNativeCall(wf, fd, maxParameterCount))
                {
                    if (GenerateFunctionPostNativeCall(wf, fd, maxParameterCount))
                    {
                        valid = true;
                    }
                }
            }

            if (!valid)
            {
                w.WriteLine("\tthrow gcnew System::NotImplementedException();");
            }
            else
            {
                w.Write(wf.ToString());
            }
            w.WriteLine("}");
            w.WriteLine();
        }

        //--------------------------------------------------------------------------------------------------

        bool GenerateFunctionPreNativeCall(StringWriter wf, Definitions.FunctionDefintion fd, int maxParameterCount)
        {
            // Prepare parameter list
            int count = 0;
            foreach (var pd in fd.Parameters)
            {
                count++;
                if (count > maxParameterCount)
                    break;

                if (pd.Type.IsKnownType && pd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Standard_CString)
                {
                    wf.WriteLine($"\tconst char* sz_{pd.Name} = (char*)(void*)Marshal::StringToHGlobalAnsi({pd.Name});");
                }
                else if (pd.Type.IsKnownType && pd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Standard_ExtString)
                {
                    wf.WriteLine($"\tpin_ptr<const wchar_t> pp_{pd.Name} = PtrToStringChars({pd.Name});");
                }
                else if (pd.Type.IsValueType(fd.Class)
                    // For wrapped struct always, for other value types only if they are given as reference
                    &&(pd.Type.IsReference || pd.Type.IsPointer || (pd.Type.IsKnownType && pd.Type.KnownTypeDef.Type == Definitions.KnownTypes.WrappedStruct))
                    &&!pd.Type.IsVoid)
                {
                    wf.WriteLine("\tpin_ptr<{0}> pp_{1} = &{1};",
                        pd.Type.IsKnownType ? pd.Type.KnownTypeDef.Fqn : pd.Type.Fqn(fd.Class), pd.Name);
                }
                else if (pd.Type.IsHandle && pd.Type.IsReference)
                {
                    // References to handles may receive another encapsulated object.
                    wf.WriteLine($"\t{pd.Type.NativeHandle} h_{pd.Name} = {pd.Name}->NativeInstance;");
                }
            }

            // Prepare temp return class
            if (!fd.IsConstructor && !fd.Type.IsVoid)
            {
                if (!fd.Type.IsValueType(fd.Class))
                {
                    // If return value is class type, prepare new native pointer
                    if (fd.Type.IsKnownType)
                    {
                        switch (fd.Type.KnownTypeDef.Type)
                        {
                            case Definitions.KnownTypes.Standard_CString:
                                wf.WriteLine("\tStandard_CString _result;");
                                break;
                            case Definitions.KnownTypes.Standard_ExtString:
                                wf.WriteLine("\tStandard_ExtString _result;");
                                break;
                        }
                        return true;
                    }

                    // Standard class type
                    if (fd.Type.IsPointer)
                    {
                        wf.WriteLine($"\t{fd.Type.Native(fd.Class)}* _result;");// = new " + fd.Type.Native + "();");
                    }
                    else if (fd.Type.IsHandle)
                    {
                        wf.WriteLine($"\t{fd.Type.NativeHandle} _result;");
                    }
                    else
                    {
                        // Find class
                        var klass = Definitions.ClassItems.FirstOrDefault(cd => cd.Name.Equals(fd.Type.Name));
                        if(fd.IsConstructor)
                        {
                            wf.WriteLine($"\t{fd.Type.Native(fd.Class)}* _result;");
                            return true;
                        }

                        // Check if there has any constructors we can fill with value types
                        if ((klass == null)||(klass.HasAbstractFunctions)||(klass.IsAbstract))
                        {
                            return false;
                        }
                        var constructor = klass.Functions.FirstOrDefault(kfd => kfd.IsConstructor && kfd.Parameters.All(pd => pd.HasDefault || pd.Type.IsValueType(fd.Class)));
                        if (constructor == null)
                        {
                            return false;
                        }

                        // Write out initialization values for constructor
                        bool isFirst = true;
                        wf.Write($"\t{fd.Type.Native(fd.Class)}* _result = new {fd.Type.Native(fd.Class)}(");
                        foreach (var cpd in constructor.Parameters)
                        {
                            if (!isFirst)
                            {
                                wf.Write(", ");
                            }
                            isFirst = false;

                            var initValue = cpd.HasDefault ? cpd.NativeDefault : cpd.Type.GetInitValue();
                            if (string.IsNullOrEmpty(initValue))
                                return false;

                            wf.Write(initValue);
                        }
                        wf.WriteLine(");");
                    }
                }
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool GenerateFunctionNativeCall(StringWriter wf, Definitions.FunctionDefintion fd, int maxParameterCount)
        {
            if (Configuration.UnknownTypes.Contains(fd.Type.Name))
                return false;

            wf.Write("\t");

            string closing = ")";

            // If the return value is a value type: return xxx 
            if (!fd.IsConstructor && (!fd.Type.IsVoid || fd.Type.IsVoidPointer))
            {
                if (fd.Type.IsValueType(fd.Class))
                {
                    wf.Write("return ");
                    if (fd.Type.IsVoidPointer)
                    {
                        wf.Write("System::IntPtr("); //wf.Write("gcnew System::IntPtr(");
                        closing += ")";
                    }
                    else if ((fd.Type.IsEnum(fd.Class))
                            || (fd.Type.IsKnownType && (fd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Enum)))
                        {
                            // Typecast enum to managed type
                            wf.Write("(" + fd.Type.Fqn(fd.Class) + ")");
                        }
                    else if (fd.Type.IsKnownType && fd.Type.KnownTypeDef.Type == Definitions.KnownTypes.WrappedStruct)
                    {
                        // Crate new value type
                        wf.Write(fd.Type.KnownTypeDef.Fqn + "(");
                        closing += ")";
                    }
                }
                else
                {
                    // Is a class type, so use the prepared native pointer
                    if (fd.Type.IsHandle)
                    {
                        //  Handles
                        wf.Write("_result = ");
                    }
                    else
                    {
                        // Pointers
                        if (fd.Type.IsPointer) // (fd.Type.IsConst) && 
                        {
                            wf.Write($"_result = ({fd.Type.Native(fd.Class)}*)");
                        }
                        else
                        {
                            if (fd.Type.IsKnownType && ((fd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Standard_CString) || (fd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Standard_ExtString)))
                            {
                                wf.Write("_result = ");
                            }
                            else
                            {
                                // Create pointer to instance
                                wf.Write("*_result = ");
                                if (fd.Type.IsConst)
                                {
                                    // Get rid of 'const' qualifier
                                    wf.Write($" ({fd.Type.Native(fd.Class)})");
                                }
                            }
                        }
                    }
                }
            }

            // Call to static method
            if (fd.IsStatic)
            {
                wf.Write($"{fd.Class.Native}::{fd.Name}(");
            }
            else
            {
                // Call to constructor
                if (fd.IsConstructor)
                {
                    if (fd.Class.IsTransient)
                    {
                        wf.Write($"NativeInstance = new {fd.Class.Native}(");
                    }
                    else
                    {
                        wf.Write($"_NativeInstance = new {fd.Class.Native}(");
                    }
                }
                else if (fd.IsOperator)
                {
                    // Call to operator
                    wf.Write($"_NativeInstance->{fd.Name}(");
                }
                else
                {
                    // Call to non-static method
                    wf.Write($"(({fd.Class.Native}*)_NativeInstance)->{fd.Name}(");
                }
            }

            // Write parameter list
            if (!GenerateFunctionNativeCallParameters(wf, fd, maxParameterCount))
                return false;

            // Close function parameter list and close statement
            wf.Write(closing);

            wf.WriteLine(";");

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool GenerateFunctionNativeCallParameters(StringWriter wf, Definitions.FunctionDefintion fd, int maxParameterCount)
        {
            // Write parameter list
            bool isFirst = true;
            int count = 0;
            foreach (var pd in fd.Parameters)
            {
                if (isFirst)
                    isFirst = false;
                else
                    wf.Write(", ");

                count++;
                if (count > maxParameterCount)
                {
                    // Default parameter
                    wf.Write(pd.NativeDefault);
                    continue;
                }

                if (pd.Type.IsUnknown)
                {
                    return false;
                }

                if (pd.Type.IsValueType(fd.Class))
                {
                    if (pd.Type.IsVoidPointer)
                    {
                        wf.Write(pd.Name + ".ToPointer()");
                    }
                    else if (pd.Type.IsReference)
                    {
                        // Reference to values need temp variable
                        wf.Write("*({0}*)pp_{1}", pd.Type.IsKnownType ? pd.Type.KnownTypeDef.NativeFqn : pd.Type.Native(fd.Class), pd.Name);
                    }
                    else if (pd.Type.IsPointer)
                    {
                        // Pointer to values need temp variable
                        wf.Write("({0}*)pp_{1}", pd.Type.IsKnownType ? pd.Type.KnownTypeDef.NativeFqn : pd.Type.Native(fd.Class), pd.Name);
                    }
                    else
                    {
                        if (pd.Type.IsEnum(fd.Class))
                        {
                            // Typecast enum to native type
                            wf.Write($"({pd.Type.Native(fd.Class)}){pd.Name}");
                        }
                        else
                        {
                            // Known class
                            if (pd.Type.IsKnownType)
                            {
                                switch (pd.Type.KnownTypeDef.Type)
                                {
                                    case Definitions.KnownTypes.Enum:
                                        wf.Write($"({pd.Type.KnownTypeDef.NativeFqn})");
                                        break;
                                    case Definitions.KnownTypes.WrappedStruct:
                                        wf.Write($"*({pd.Type.KnownTypeDef.NativeFqn}*)pp_");
                                        break;
                                }
                            }

                            // Just write out name
                            wf.Write(pd.Name);
                        }
                    }
                }
                else // isValueType
                {
                    // Class types
                    var klass = Definitions.ClassItems.FirstOrDefault(cd => cd.Name.Equals(pd.Type.Name));
                    if (klass != null)
                    {
                        if (klass.IsTransient && pd.Type.IsHandle)
                        {
                            if (pd.Type.IsReference)
                            {
                                // prepared copy of the handle
                                wf.Write($"h_{pd.Name}");
                            }
                            else
                            {
                                // temp handle generated inplace
                                wf.Write($"{klass.NativeHandle}({pd.Name}->NativeInstance)");
                            }
                        }
                        else
                        {
                            // Wrapped class
                            wf.Write(pd.Type.IsPointer || pd.Type.IsHandle
                                         ? $"({klass.Native}*){pd.Name}->NativeInstance"
                                         : $"*({klass.Native}*){pd.Name}->NativeInstance");
                        }
                    }
                    else
                    {
                        // Known class
                        if (pd.Type.IsKnownType)
                        {
                            switch (pd.Type.KnownTypeDef.Type)
                            {
                                case Definitions.KnownTypes.Standard_CString:
                                    wf.Write($"sz_{pd.Name}");
                                    break;

                                case Definitions.KnownTypes.Standard_ExtString:
                                    wf.Write($"(Standard_ExtString)pp_{pd.Name}");
                                    break;

                                default:
                                    return false;
                            }
                        }
                        else
                        {
                            wf.Write(pd.Name);
                        }
                    }
                }
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool GenerateFunctionPostNativeCall(StringWriter wf, Definitions.FunctionDefintion fd, int maxParameterCount)
        {
            // Resolve parameter list
            int count = 0;
            foreach (var pd in fd.Parameters)
            {
                count++;
                if (count > maxParameterCount)
                    break;

                if (pd.Type.IsKnownType && pd.Type.KnownTypeDef.Type == Definitions.KnownTypes.Standard_CString)
                {
                    wf.WriteLine($"\tMarshal::FreeHGlobal((System::IntPtr)(void*)sz_{pd.Name});");
                }
                else if (pd.Type.IsHandle && pd.Type.IsReference)
                {
                    // References to handles may receive another encapsulated object.
                    wf.WriteLine($"\t{pd.Name}->NativeInstance = h_{pd.Name}.get();");
                }
            }

            // Return type
            if ((!fd.Type.IsVoid || fd.Type.IsVoidPointer) && !fd.IsConstructor && !fd.Type.IsValueType(fd.Class))
            {
                // Known type
                if (fd.Type.IsKnownType)
                {
                    switch (fd.Type.KnownTypeDef.Type)
                    {
                        case Definitions.KnownTypes.Standard_CString:
                            wf.WriteLine($"\treturn gcnew System::String(_result);");
                            break;
                        case Definitions.KnownTypes.Standard_ExtString:
                            wf.WriteLine($"\treturn gcnew System::String((const wchar_t *)_result);");
                            break;

                        default:
                            return false;
                    }
                }
                else
                {
                    // Generic class or handle type
                    wf.WriteLine(fd.Type.IsHandle
                                     ? $"\t return _result.IsNull() ? nullptr : {fd.Type.Fqn(fd.Class)}::CreateDowncasted( _result.get());"
                                     : $"\t return _result==nullptr ? nullptr : gcnew {fd.Type.Fqn(fd.Class)}(_result);");
                }
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool GenerateFunctionDecl(StringWriter w, Definitions.FunctionDefintion fd, bool isHeader, int maxParameterCount)
        {
            if (fd.IsTemplate)
            {
                w.Write($"generic <typename {fd.TemplateName}> ");
            }

            if (isHeader && ((fd.IsStatic) || (fd.IsOperator)))
                w.Write("static ");

            // Write return type, if not constructor
            if ((!fd.IsConstructor) && (!fd.IsDestructor))
                if (!GenerateTypeDecl(w, fd.Type, fd.Class, true))
                    return false;

            if (!isHeader)
            {
                w.Write($"{fd.Class.Fqn}::");
            }

            if (Configuration.NameReplacements.ContainsKey(fd.Name))
                w.Write(Configuration.NameReplacements[fd.Name]);
            else
                w.Write(fd.Name);

            w.Write("(");

            // Write all parameters
            bool isFirst = true;

            // Write this as operator param
            if (fd.IsOperator)
            {
                w.Write($"{fd.Class.Fqn}^ This");
                isFirst = false;
            }

            // Write all other params
            int count = 0;
            foreach (var pd in fd.Parameters)
            {
                count++;
                if (count > maxParameterCount)
                    break;

                if (isFirst)
                    isFirst = false;
                else
                    w.Write(", ");

                if (!GenerateTypeDecl(w, pd.Type, fd.Class, false))
                    return false;

                w.Write(pd.Name);
            }

            w.Write(")");

            if (isHeader)
            {
                w.Write(";");
            }
            w.WriteLine();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}