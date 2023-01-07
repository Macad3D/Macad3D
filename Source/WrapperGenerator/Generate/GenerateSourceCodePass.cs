using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace Macad.Occt.Generator;

public class GenerateSourceCodePass : Pass
{
    //--------------------------------------------------------------------------------------------------

    string[] _NamespaceList;
    SourceWriter _Header;
    SourceWriter _Body;
    int _StatisticsClassCount;
    int _StatisticsFunctionCount;

    //--------------------------------------------------------------------------------------------------

    public override bool Process()
    {
        _NamespaceList = Context.Settings.Namespace.Split(new[] { "::" }, StringSplitOptions.RemoveEmptyEntries);

        bool result = true;
        for (var i = 0; i < Context.Packages.Count; i++)
        {
            var pd = Context.Packages[i];
            Logger.WriteProgress((float)i / Context.Packages.Count, $"Generating code for package {pd.Name}");
            result &= ProcessPackage(pd);
        }
        Logger.WriteProgress(1.0f, $"Generated wrapping code for {_StatisticsClassCount} classes with {_StatisticsFunctionCount} methods.");

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    #region Package

    protected override bool ProcessPackage(PackageDecl package)
    {
        var includePackageListHeader = new List<string>();
        var includePackageListSource = new List<string>();

        _Header = new SourceWriter();
        _Body = new SourceWriter();

        // Generate header
        _Header.WriteLine($"// Generated wrapper code for package {package}");
        _Header.WriteLine();
        _Header.WriteLine("#pragma once");
        _Header.WriteLine();

        _Body.WriteLine($"// Generated wrapper code for package {package}");
        _Body.WriteLine();
        _Body.WriteLine("#include \"OcctPCH.h\"");
        _Body.WriteLine($"#include \"{package}.h\"" );
        _Body.WriteLine();
        _Body.WriteLine("using namespace System::Runtime::InteropServices; // for class Marshal");
        _Body.WriteLine();

        // Write managed includes
        includePackageListHeader.Clear();
        includePackageListSource.Clear();
        foreach (var cd in package.Classes)
        {
            if (cd.Ignore)
                continue;

            // Define base class include in header
            if (cd.BaseClass != null) 
            {
                includePackageListHeader.Add(cd.BaseClass.Package.Name);
            }

            // Define derived class includes in header (for DownCast)
            foreach (var derivedClass in cd.DerivedClasses)
            {
                if(derivedClass.Ignore)
                    continue;
                
                includePackageListSource.Add(derivedClass.Package.Name);
            }

            // Define function referenced type includes in source
            foreach (var fd in cd.Methods)
            {
                var fdp = fd.Type?.Element?.Package;
                if (fdp != null)
                    includePackageListSource.Add(fdp.Name);

                foreach (var pd in fd.Parameters)
                {
                    var pdp = pd.Type?.Element?.Package;
                    if (pdp != null)
                        includePackageListSource.Add(pdp.Name);
                }
            }
        }

        foreach (var include in includePackageListHeader.Distinct())
        {
            if (Configuration.Packages.Contains(include) && include != package.Name)
                _Header.WriteLine("#include \"{0}.h\"", include);
        }
        _Header.WriteLine();

        foreach (var include in includePackageListSource.Distinct())
        {
            if (Configuration.Packages.Contains(include) && include != package.Name)
                _Body.WriteLine("#include \"{0}.h\"", include);
        }
        _Body.WriteLine();

        // Generate namespaces
        foreach (var ns in _NamespaceList)
        {
            _Header.WriteLine("namespace " + ns);
            _Header.WriteLine("{");
        }

        // Generate enum code
        foreach (var ed in package.Enums)
        {
            if (ed.Ignore || !ed.Generate || ed.OuterClass != null)
                continue;

            _GenerateEnum(ed, false);
        }

        // Generate class code
        foreach (var cd in package.Classes)
        {
            if (cd.Ignore || !cd.Generate)
                continue;

            _GenerateClassHeader(cd);
            _GenerateClassBody(cd);
        }

        // Tail code
        foreach (var ns in _NamespaceList.Reverse())
        {
            _Header.WriteLine("}; // namespace " + ns);
        }

        File.WriteAllText(Path.Combine(Context.Settings.OutputPath, package + @".h"), _Header.ToString());
        File.WriteAllText(Path.Combine(Context.Settings.OutputPath, package + @".cpp"), _Body.ToString());

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Class

    void _GenerateClassHeader(ClassDecl cd, bool inner = false)
    {
        _StatisticsClassCount++;

        if (!inner)
        {
            _Header.WriteLine("//---------------------------------------------------------------------");
            _Header.WriteLine($"//  Class  {cd.Name}");
            _Header.WriteLine("//---------------------------------------------------------------------");
        }

        _GenerateComment(_Header, cd.Comment);

        if (!inner)
            _Header.Write("public ");

        _Header.Write($"ref class {cd.Name}");
        
        if (!(cd.IsBase || cd.IsAbstract))
            _Header.Write(" sealed");
        
        _Header.WriteLine();

        // Has baseclass
        if (!cd.IsStatic)
        {
            _Header.Indent();
            _Header.WriteLine($": public {Context.Settings.Namespace}::{cd.BaseClassName}");
            foreach (var cdInterface in cd.Interfaces)
            {
                _Header.WriteLine($", public {cdInterface}");
            }
            _Header.Outdent();
        }

        _Header.WriteLine("{");
        _Header.Indent();

        // Write macro
        string includeMacro = $"Include_{(inner ? $"{cd.OuterClass.Name}_" : "")}{cd.Name}_h";
        _Header.WriteLine();
        _Header.WriteLine($"#ifdef {includeMacro}", indent: -1);
        _Header.WriteLine("public:", indent: -1);
        _Header.WriteLine(includeMacro);
        _Header.WriteLine("#endif", indent: -1);
        _Header.WriteLine();

        // Write instance handling
        _GenerateClassHeaderInstance(_Header, cd);

        _Header.WriteLine("public:", indent: -1);

        // write inner enums
        foreach (var ed in cd.InnerEnums.Where(ed => !ed.Ignore))
        {
            _GenerateEnum(ed, true);
        }

        // write inner classes
        foreach (var icd in cd.InnerClasses.Where(cd => !cd.Ignore))
        {
            _GenerateClassHeader(icd, true);
        }

        // write properties
        foreach (var pd in cd.Properties)
        {
            _GenerateProperty(_Header, pd);
        }

        // write methods
        foreach (var md in cd.Methods.Where(md => !md.Ignore))
        {
            for (int i = md.Parameters.Count; i >= (md.Parameters.Count - md.DefaultParameterCount); i--)
            {
                if (cd.Methods.Any(ffd => ffd != md && ffd.IsEqual(md, i)))
                    break;

                _GenerateMethodHeader(_Header, md, i);
            }
        }

        _Header.Outdent();
        _Header.WriteLine("}}; // class {0}", cd.Name);
        _Header.WriteLine();
    }

    //--------------------------------------------------------------------------------------------------

    void _GenerateClassHeaderInstance(SourceWriter w, ClassDecl cd)
    {
        if (cd.IsStatic)
            return;

        // write default constructor, if the native class doesn't have one
        if (!cd.HasDefaultConstructor)
        {
            // Only create a default constructor, if the class does not have any constructor 
            // AND the class isn't abstract AND does not define the constructor inaccessible
            // AND any constructor was found bit ignored.
            if (!(cd.HasExplicitConstructor || cd.IsAbstract || cd.HasInccessibleConstructor || cd.HasAbstractFunctions || Configuration.Ignore.Contains($"{cd.Name}::{cd.Name}")))
            {
                // Create public default constructor
                w.WriteLine("public:", indent: -1);
                w.WriteLine($"{cd.Name}()");
                w.WriteLine($": {Context.Settings.Namespace}::{cd.BaseClassName}(InitMode::Uninitialized)", indent: +1);
                w.WriteLine("{");
                w.WriteLine($"_NativeInstance = new ::{cd.FullName}();", indent: +1);
                w.WriteLine("}");
                w.WriteLine();
            }
        }

        if (cd.IsBase)
        {
            // Default constructor (uninitialized)
            w.WriteLine("protected:", indent: -1);
            w.WriteLine($"{cd.Name}(InitMode init)");
            w.WriteLine($": {Context.Settings.Namespace}::{cd.BaseClassName}( init )", indent: +1);
            w.WriteLine("{}");
            w.WriteLine();
        }

        w.WriteLine("public:", indent: -1);

        // Constructor for instance pointer
        w.WriteLine($"{cd.Name}(::{cd.FullNativeName}* nativeInstance)");
        if (cd.BaseClass == null && !cd.IsTransient)
            w.WriteLine($": {Context.Settings.Namespace}::{cd.BaseClassName}( nativeInstance, true )", indent: +1);
        else
            w.WriteLine($": {Context.Settings.Namespace}::{cd.BaseClassName}( nativeInstance )", indent: +1);
        w.WriteLine("{}");
        w.WriteLine();

        // Constructor for instance reference
        w.WriteLine($"{cd.Name}(::{cd.FullNativeName}& nativeInstance)");
        if (cd.BaseClass == null && !cd.IsTransient)
            w.WriteLine($": {Context.Settings.Namespace}::{cd.BaseClassName}( &nativeInstance, false )", indent: +1);
        else
            w.WriteLine($": {Context.Settings.Namespace}::{cd.BaseClassName}( nativeInstance )", indent: +1);
        w.WriteLine("{}");
        w.WriteLine();

        // Create property for instance reference
        w.WriteLine($"property ::{cd.FullNativeName}* NativeInstance");
        w.WriteLine("{");
        w.Indent();
        w.WriteLine($"::{cd.FullNativeName}* get()");
        w.WriteLine("{");
        w.Indent();
        w.WriteLine($"return static_cast<::{cd.FullNativeName}*>(_NativeInstance);");
        w.Outdent();
        w.WriteLine("}");
        w.Outdent();
        w.WriteLine("}");
        w.WriteLine();
    }

    //--------------------------------------------------------------------------------------------------

    void _GenerateClassBody(ClassDecl cd)
    {
        _Body.WriteLine();
        _Body.WriteLine("//---------------------------------------------------------------------");
        _Body.WriteLine($"//  Class  {cd.FullNativeName}");
        _Body.WriteLine("//---------------------------------------------------------------------");
        _Body.WriteLine();

        // write methods
        foreach (var md in cd.Methods)
        {
            if (md.Ignore)
                continue;

            if (md.IsDestructor || !md.IsPublic)
                continue;

            for (int i = md.Parameters.Count; i >= (md.Parameters.Count - md.DefaultParameterCount); i--)
            {
                if (cd.Methods.Any(ffd => ffd != md && ffd.IsEqual(md, i)))
                    break;

                _GenerateMethodBody(_Body, md, i);
            }
        }
        _Body.WriteLine();

        // write inner classes
        foreach (var icd in cd.InnerClasses.Where(cd => !cd.Ignore))
        {
            _GenerateClassBody(icd);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _GenerateProperty(SourceWriter w, PropertyDecl pd)
    {
        if (!_GenerateTypeDecl(pd.Type, true, out string mdecl))
            return;

        _GenerateComment(w, pd.Comment);
        w.WriteLine($"property {mdecl} {pd.Name} {{");
        w.Indent();
        w.WriteLine($"{mdecl} get() {{");
        w.Indent();
        pd.GetBodyGenerate(pd, w);
        w.Outdent();
        w.WriteLine("}");

        w.WriteLine($"void set({mdecl} value) {{");
        w.Indent();
        pd.SetBodyGenerate(pd, w);
        w.Outdent();
        w.WriteLine("}");
        w.Outdent();
        w.WriteLine("}");
        w.WriteLine();
    }

    //--------------------------------------------------------------------------------------------------

    void _GenerateMethodHeader(SourceWriter w, MethodDecl fd, int maxParameterCount)
    {
        SourceWriter wf = new();
        if (!_GenerateMethodDecl(wf, fd, true, maxParameterCount))
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
            _GenerateComment(w, fd.Comment);
            w.WriteLine(wf.ToString());
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _GenerateMethodBody(SourceWriter w, MethodDecl md, int maxParameterCount)
    {
        SourceWriter wfd = new();
        if (!_GenerateMethodDecl(wfd, md, false, maxParameterCount))
        {
            return;
        }
        w.WriteLine(wfd.ToString());

        if (md.IsConstructor)
        {
            w.WriteLine($": {Context.Settings.Namespace}::{md.Class.BaseClassName}(BaseClass::InitMode::Uninitialized)", indent: +1);
        }

        w.WriteLine("{");
        w.Indent();

        if (md.BodyGenerate != null)
        {
            md.BodyGenerate(md, w);
        }
        else
        {
            // Check if we have a default constructor in an abstract class
            if ((md.Class.IsAbstract || md.Class.HasAbstractFunctions) && md.IsConstructor)
            {
                // Write empty constructor
                w.WriteLine("\tthrow gcnew System::NotImplementedException(\"Native class is abstract\");");
            }
            else
            {
                SourceWriter writerPre = new();
                SourceWriter writerPost = new();
                SourceWriter writerCall = new();

                if (!_GenerateNativeCall(writerCall, writerPre, writerPost, md, maxParameterCount))
                {
                    w.WriteLine("throw gcnew System::NotImplementedException();");
                }
                else
                {
                    w.Write(writerPre);
                    w.Write(writerCall);
                    w.Write(writerPost);
                }
            }
        }

        w.Outdent();
        w.WriteLine("}");
        w.WriteLine();
    }

    //--------------------------------------------------------------------------------------------------

    bool _GenerateNativeCall(SourceWriter writer, SourceWriter writerPre, SourceWriter writerPost, MethodDecl md, int maxParameterCount)
    {
        if (md.Type.Wrapper == null)
            return false;

        if (!md.Type.Wrapper.GenerateResult(md, out string resultDecl, out string returnValue, writerPre, writerPost))
            return false;

        _StatisticsFunctionCount++;

        if (!string.IsNullOrEmpty(resultDecl))
        {
            writer.Write(resultDecl);
        }

        // Call to static method
        if (md.IsStatic)
        {
            writer.Write($"::{md.Class.FullName}::{md.NativeName}(");
        }
        else
        {
            // Call to constructor
            if (md.IsConstructor)
            {
                if (md.Class.IsTransient)
                {
                    writer.Write($"NativeInstance = new ::{md.Class.FullNativeName}(");
                }
                else
                {
                    writer.Write($"_NativeInstance = new ::{md.Class.FullNativeName}(");
                }
            }
            else if (md.IsOperator)
            {
                // Call to operator
                writer.Write($"_NativeInstance->{md.NativeName}(");
            }
            else
            {
                // Call to non-static method
                writer.Write($"((::{md.Class.FullNativeName}*)_NativeInstance)->{md.NativeName}(");
            }
        }

        // Write parameter list
        if (!_GenerateNativeCallParameters(writer, writerPre, writerPost, md, maxParameterCount))
            return false;

        writer.WriteLine(");");

        if (!string.IsNullOrEmpty(returnValue))
        {
            writerPost.WriteLine($"return {returnValue};");
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _GenerateNativeCallParameters(SourceWriter writer, SourceWriter writerPre, SourceWriter writerPost, MethodDecl fd, int maxParameterCount)
    {
        // Write parameter list
        bool isFirst = true;
        int count = 0;
        foreach (var pd in fd.Parameters)
        {
            if (isFirst)
                isFirst = false;
            else
                writer.Write(", ");

            count++;
            if (count > maxParameterCount)
            {
                // Default parameter
                if ((pd.Default.Contains("::") || pd.Default.Contains("(")) 
                    && !pd.Default.StartsWith("::"))
                {
                    writer.Write("::"); //  Seems to be an enum or object initializer, needs to be declared as explicit native type
                }
                writer.Write(pd.Default);
                continue;
            }

            if (pd.Type.Wrapper == null)
                return false;

            if (!pd.Type.Wrapper.GenerateParameter(pd, out string param, writerPre, writerPost))
                return false;
            writer.Write(param);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _GenerateMethodDecl(SourceWriter writer, MethodDecl md, bool isHeader, int maxParameterCount)
    {
        if (isHeader)
        {
            if (md.IsStatic || md.IsOperator)
                writer.Write("static ");
            if(md.IsVirtual && !md.IsOverride)
                writer.Write("virtual ");
        }

        // Write return type, if not constructor
        if ((!md.IsConstructor) && (!md.IsDestructor))
        {
            if (!_GenerateTypeDecl(md.Type, true, out string mdecl))
                return false;

            writer.Write($"{mdecl} ");
        }

        if (!isHeader)
        {
            writer.Write($"{Context.Settings.Namespace}::{md.Class.FullName}::");
        }

        writer.Write($"{md.Name}(");

        // Write all parameters
        bool isFirst = true;

        // Write this as operator param
        if (md.IsOperator)
        {
            writer.Write($"{Context.Settings.Namespace}::{md.Class.FullName}^ This");
            isFirst = false;
        }

        // Write all other params
        int count = 0;
        foreach (var pd in md.Parameters)
        {
            count++;
            if (count > maxParameterCount)
                break;

            if (!isFirst)
                writer.Write(", ");
            isFirst = false;

            if (!_GenerateTypeDecl(pd.Type, false, out string decl))
                return false;

            writer.Write($"{decl} {pd.Name}");
        }

        writer.Write(")");

        if (isHeader)
        {
            if (md.IsOverride)
            {
                writer.Write(" override");
            }

            if (!string.IsNullOrEmpty(md.ExplicitImplements))
            {
                writer.Write($" = {md.ExplicitImplements}");
            }
            writer.Write(";");
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _GenerateTypeDecl(TypeDecl type, bool isMethodType, out string decl)
    {
        decl = "";

        if (string.IsNullOrWhiteSpace(type.Name))
            return false;

        if (type.Wrapper == null)
            return false;

        if (!type.Wrapper.GetDeclaration(type, isMethodType, out decl))
            return false;

        return true;
            
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Enum

    void _GenerateEnum(EnumDecl ed, bool inner)
    {
        _Header.WriteLine("//---------------------------------------------------------------------");
        _Header.WriteLine($"//  Enum  {ed.Name}");
        _Header.WriteLine("//---------------------------------------------------------------------");

        _GenerateComment(_Header, ed.Comment);

        if (!inner)
        {
            _Header.Write("public ");
        }
        _Header.WriteLine($"enum class {ed.Name}");
        _Header.WriteLine($"{{");
        _Header.Indent();

        bool isFirst = true;
        foreach (var e in ed.Enumerators)
        {
            if (!isFirst)
                _Header.WriteLine(",");
            isFirst = false;

            _Header.Write($"{e.Key}");
            if (!string.IsNullOrEmpty(e.Value))
            {
                _Header.Write(" = " + e.Value);
            }
        }
        _Header.WriteLine();

        _Header.Outdent();
        _Header.WriteLine($"}}; // enum  class {ed.Name}");
        _Header.WriteLine();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Comment

    void _GenerateComment(SourceWriter w, Comment comment)
    {
        string inSubTag = null;

        var lines = _LoadCommentFromFile(comment);
        if (lines == null)
            return;

        w.WriteLine("/// <summary>");
        inSubTag = "summary";
        foreach (string rawline in lines)
        {
            var line = _TrimLine(rawline);

            // Check for params
            if (line.StartsWith("@"))
            {
                if (inSubTag != null)
                {
                    w.WriteLine("/// </" + inSubTag + ">");
                    inSubTag = null;
                }
                if (line.StartsWith("@param"))
                {
                    var paramEnd = line.IndexOf(' ', 7);
                    if (paramEnd == -1)
                        continue;
                    w.WriteLine("/// <param name=\"" + line.Substring(7, paramEnd - 7) + "\">");
                    inSubTag = "param";
                    line = line.Substring(paramEnd + 1);
                }
                else if (line.StartsWith("@return"))
                {
                    w.WriteLine("/// <returns>");
                    inSubTag = "returns";
                    line = line.Substring(8);
                }
            }
            w.WriteLine("/// " + line);
        }
        if (inSubTag != null)
        {
            w.WriteLine("/// </" + inSubTag + ">");
            inSubTag = null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    string[] _LoadCommentFromFile(Comment comment)
    {
        if (comment == null)
            return null;

        try
        {
            byte[] bytes = new byte[comment.EndOffset - comment.BeginOffset];
            using var fstream = File.Open(Path.Combine(Context.Settings.OcctIncludePath, comment.FileName), FileMode.Open, FileAccess.Read);
            fstream.Seek(comment.BeginOffset, SeekOrigin.Begin);
            fstream.Read(bytes);
            fstream.Close();

            string[] strings = Encoding.UTF8.GetString(bytes).Split('\n');
            if (strings.Length == 0)
                return null;

            return strings;
        }
        catch (Exception)
        {
            // Ignore if comment could not be loaded
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    string _TrimLine(string line)
    {
        // Trim
        line = line.Trim();
        if (line.StartsWith("//!"))
            return line.Substring(3).Trim();
        if (line.StartsWith("///"))
            return line.Substring(3).Trim();
        if (line.StartsWith("//"))
            return line.Substring(3).Trim();
        return line.Trim();
    }

    //--------------------------------------------------------------------------------------------------
        

    #endregion
}