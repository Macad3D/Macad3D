using System.Collections.Generic;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Text;
using System.Collections.Immutable;
using System.Linq;
using System.Text;
using System.Threading;

namespace Macad.SourceGenerator;


[Generator]
public class ParameterSetGenerator : IIncrementalGenerator
{
    public void Initialize(IncrementalGeneratorInitializationContext context)
    {
        var classSymbols = context.SyntaxProvider.CreateSyntaxProvider(
                predicate: (node, _) => node is ClassDeclarationSyntax { AttributeLists.Count: > 0 },
                transform: _TryGetParameterSetClass)
            .Where(static cds => cds != null);

        var values = classSymbols.Collect();

        context.RegisterSourceOutput(values, _Execute);
    }

    //--------------------------------------------------------------------------------------------------

    static ITypeSymbol? _TryGetParameterSetClass(GeneratorSyntaxContext ctx, CancellationToken _)
    {
        var classSyntax = (ClassDeclarationSyntax)ctx.Node;
        foreach (var attributeListSyntax in classSyntax.AttributeLists)
        {
            foreach (var attributeSyntax in attributeListSyntax.Attributes)
            {
                if (attributeSyntax.Name.ToString() == "ParameterSet")
                {
                    var classSymbol = ctx.SemanticModel.GetDeclaredSymbol(classSyntax) as ITypeSymbol;
                    return classSymbol;
                }
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    record ParameterInfo(string Name, ITypeSymbol Type, IFieldSymbol FieldSymbol)
    {
        public string Name { get; } = Name;
        public ITypeSymbol Type { get; } = Type;
        public IFieldSymbol FieldSymbol { get; } = FieldSymbol;
    }

    //--------------------------------------------------------------------------------------------------

    void _Execute(SourceProductionContext spc, ImmutableArray<ITypeSymbol?> classSymbols)
    {
        foreach (var classSymbol in classSymbols)
        {
            if (classSymbol == null)
                continue;

            List<string> usedNamespaces = ["System", "System.Collections.Generic", "Macad.Common"];

            // Find all Parameter<T> fields
            List<ParameterInfo> parameters = new();
            foreach (var field in classSymbol.GetMembers()
                         .OfType<IFieldSymbol>()
                         .Where(field => field.Type.Name == "Parameter"))
            {
                string paramName = field.Name.TrimStart('_');
                var namedType = field.Type as INamedTypeSymbol;
                if (namedType is not { IsGenericType: true })
                {
                    continue;
                }

                var paramType = namedType.TypeArguments.First();
                parameters.Add(new(paramName, paramType, field));
                if (!paramType.ContainingNamespace.IsGlobalNamespace && 
                    !SymbolEqualityComparer.Default.Equals(paramType.ContainingNamespace, classSymbol.ContainingNamespace))
                {
                    usedNamespaces.Add(paramType.ContainingNamespace.ToDisplayString());
                }
            }

            // Introduce class
            StringBuilder source = new();
            foreach (var s in usedNamespaces.Distinct().Select(nspc => $"using {nspc};\r\n"))
            {
                source.Append(s);
            }
            source.Append(
                   $$"""

                   namespace {{classSymbol.ContainingNamespace.ToDisplayString()}};

                   public partial class {{classSymbol.Name}} : ParameterSet
                   {
                   
                   """);

            // Implement properties
            foreach (var parameter in parameters)
            {
                source.Append(
                   $$"""
                       public {{parameter.Type.Name}} {{parameter.Name}} 
                       { 
                           get { return {{parameter.FieldSymbol.Name}}.Value; }
                           set { {{parameter.FieldSymbol.Name}}.Value = value; }
                       }
                   
                   """);
            }


            // Implement c'tor
            source.Append(
                   $$"""
                    
                       public {{classSymbol.Name}}()
                       {
                   
                   """);

            foreach (var parameter in parameters)
            {
                source.Append(
                   $$"""
                           AddParameter({{parameter.FieldSymbol.Name}});
                  
                   """);
            }

            // Close class
            source.Append(
                   """
                       }
                   }
                   
                   """);

            spc.AddSource($"{classSymbol.Name}_ParameterSet.g.cs", SourceText.From(source.ToString(), Encoding.UTF8));
        }
    }
}