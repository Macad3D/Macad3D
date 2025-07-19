using System.Collections.Immutable;
using System.Linq;
using System.Text;
using System.Threading;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Text;

namespace Macad.SourceGenerator;

[Generator]
public class AutoRegisterGenerator : IIncrementalGenerator
{
    public void Initialize(IncrementalGeneratorInitializationContext context)
    {
        var methodDeclarations = context.SyntaxProvider.CreateSyntaxProvider(
                (node, _) => node is MethodDeclarationSyntax { AttributeLists.Count: > 0 },
                _TransformAutoRegisterMethod)
            .Where(static m => m is not null);

        var hostDeclarations = context.SyntaxProvider.CreateSyntaxProvider(
                (node, _) => node is ClassDeclarationSyntax { AttributeLists.Count: > 0 }
                , _TryGetAutoRegisterHostClass)
            .Where(static c => c is not null);

        var values = methodDeclarations.Collect()
                                       .Combine(hostDeclarations.Collect());

        context.RegisterSourceOutput(values, static (spc, source) => Execute(source.Left, source.Right, spc));
    }

    //--------------------------------------------------------------------------------------------------

    static ITypeSymbol? _TryGetAutoRegisterHostClass(GeneratorSyntaxContext ctx, CancellationToken _)
    {
        var classSyntax = (ClassDeclarationSyntax)ctx.Node;
        foreach (var attributeListSyntax in classSyntax.AttributeLists)
        {
            foreach (var attributeSyntax in attributeListSyntax.Attributes)
            {
                if (attributeSyntax.Name.ToString() == "AutoRegisterHost")
                {
                    var classSymbol = ctx.SemanticModel.GetDeclaredSymbol(classSyntax) as ITypeSymbol;
                    return classSymbol;
                }
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    static IMethodSymbol? _TransformAutoRegisterMethod(GeneratorSyntaxContext ctx, CancellationToken _)
    {
        var methodSyntax = (MethodDeclarationSyntax)ctx.Node;
        foreach (var attributeListSyntax in methodSyntax.AttributeLists)
        {
            foreach (var attributeSyntax in attributeListSyntax.Attributes)
            {
                if (attributeSyntax.Name.ToString() == "AutoRegister")
                {
                    var methodSymbol = ctx.SemanticModel.GetDeclaredSymbol(methodSyntax) as IMethodSymbol;
                    return methodSymbol;
                }
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    static void Execute(ImmutableArray<IMethodSymbol?> methodSymbols, ImmutableArray<ITypeSymbol?> hostSymbols, SourceProductionContext spc)
    {
        var hostSymbol = hostSymbols.FirstOrDefault();
        if (hostSymbol == null) return;

        StringBuilder source = new($$"""
                                     using System;
                                     namespace {{hostSymbol.ContainingNamespace.ToDisplayString()}};

                                     {{_AttributeText}}

                                     public partial class {{hostSymbol.Name}}
                                     {
                                         static void _DoAutoRegister()
                                         {

                                     """);

        foreach (var methodSymbol in methodSymbols)
        {
            if (methodSymbol == null) 
                continue;

            source.AppendLine($"        {methodSymbol.ContainingType.ToDisplayString()}.{methodSymbol.Name}();");
        }

        source.Append("""
                          }
                      }
                      """);

        spc.AddSource($"{hostSymbol.Name}_AutoRegister.g.cs", SourceText.From(source.ToString(), Encoding.UTF8));
    }

    //--------------------------------------------------------------------------------------------------

    const string _AttributeText = """
                                  [AttributeUsage(AttributeTargets.Method, Inherited = false, AllowMultiple = false)]
                                  sealed class AutoRegisterAttribute : Attribute
                                  {
                                  }

                                  [AttributeUsage(AttributeTargets.Class, Inherited = false, AllowMultiple = false)]
                                  sealed class AutoRegisterHostAttribute : Attribute
                                  {
                                  }
                                  
                                  //--------------------------------------------------------------------------------------------------
                                  """;

    //--------------------------------------------------------------------------------------------------

}