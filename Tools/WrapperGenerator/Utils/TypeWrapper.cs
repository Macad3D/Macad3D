using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;

namespace Macad.Occt.Generator;

[AttributeUsage(AttributeTargets.Class)]
public class TypeListAttribute : Attribute
{
    public IEnumerable<string> Types { get; set; }

    public TypeListAttribute(params string[] list)
    {
        Types = list;
    }
}

//--------------------------------------------------------------------------------------------------

public abstract class TypeWrapper
{
    public abstract bool GetDeclaration(TypeDecl td, bool isMethodType, out string decl);
    public abstract bool GenerateParameter(ParameterDecl pd, out string param, SourceWriter writerPre, SourceWriter writerPost);
    public abstract bool GenerateResult(MethodDecl md, out string resultAssign, out string returnValue, SourceWriter writerPre, SourceWriter writerPost);

    //--------------------------------------------------------------------------------------------------

    public static void EnumerateTypeWrappers(IDictionary<string, TypeWrapper> dictionary)
    {
        var typeWrappers = Assembly.GetExecutingAssembly()
                                   .GetTypes()
                                   .Select(type => (type, type.GetCustomAttribute<TypeListAttribute>()?.Types))
                                   .Where(tuple => tuple.Item2 != null)
                                   .Select(tuple => ((TypeWrapper)Activator.CreateInstance(tuple.type), tuple.Item2));
        
        foreach (var tuple in typeWrappers)
        {
            Debug.Assert(tuple.Item1 != null);
            Debug.Assert(tuple.Item2 != null);
            foreach (var type in tuple.Item2)
            {
                dictionary.Add(type, tuple.Item1);
            }
        }
    }

}