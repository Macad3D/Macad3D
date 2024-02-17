using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp.Syntax;
using Microsoft.CodeAnalysis.Text;

namespace Macad.SourceGenerator;

[Generator]
public class AutoRegisterGenerator : ISourceGenerator
{
    const string _AttributeText = @"
[AttributeUsage(AttributeTargets.Method, Inherited = false, AllowMultiple = false)]
sealed class AutoRegisterAttribute : Attribute
{
    public AutoRegisterAttribute()
    {

    }
}

[AttributeUsage(AttributeTargets.Class, Inherited = false, AllowMultiple = false)]
sealed class AutoRegisterHostAttribute : Attribute
{
    public AutoRegisterHostAttribute()
    {

    }
}
";

    //--------------------------------------------------------------------------------------------------

    public void Initialize(GeneratorInitializationContext context)
    {
        // Register a syntax receiver that will be created for each generation pass
        context.RegisterForSyntaxNotifications(() => new SyntaxReceiver());
    }

    //--------------------------------------------------------------------------------------------------

    public void Execute(GeneratorExecutionContext context)
    {
        if (context.SyntaxContextReceiver is not SyntaxReceiver receiver)
            return;

        if (receiver.HostSymbol == null)
            return;

        StringBuilder source = new($@"
using System;
namespace {receiver.HostSymbol.ContainingNamespace.ToDisplayString()};

{_AttributeText}

public partial class {receiver.HostSymbol.Name}
{{
    static void _DoAutoRegister()
    {{
");

        foreach (var methodSymbol in receiver.MethodSymbols)
        {
            source.AppendLine($"            {methodSymbol.ContainingType.ToDisplayString()}.{methodSymbol.Name}();");
        }

        source.Append(@"
    }
}
");

        context.AddSource($"{receiver.HostSymbol.Name}_AutoRegister.g.cs", SourceText.From(source.ToString(), Encoding.UTF8));

    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    class SyntaxReceiver : ISyntaxContextReceiver
    {
        public ITypeSymbol HostSymbol { get; private set; }
        public List<IMethodSymbol> MethodSymbols { get; } = new();

        /// Called for every syntax node in the compilation, we can inspect the nodes and save any information useful for generation
        public void OnVisitSyntaxNode(GeneratorSyntaxContext context)
        {
            // find auto register methods
            if (context.Node is MethodDeclarationSyntax methodDeclarationSyntax
                && methodDeclarationSyntax.AttributeLists.Any(atl => atl.Attributes.Any(ats => ats.Name.ToString() == "AutoRegister")))
            {
                IMethodSymbol methodSymbol = context.SemanticModel.GetDeclaredSymbol(methodDeclarationSyntax) as IMethodSymbol;
                MethodSymbols.Add(methodSymbol);
            }
                
            // find auto register host
            if (HostSymbol == null
                && context.Node is ClassDeclarationSyntax classDeclarationSyntax
                && classDeclarationSyntax.AttributeLists.Any(atl => atl.Attributes.Any(ats => ats.Name.ToString() == "AutoRegisterHost")))
            {
                HostSymbol = context.SemanticModel.GetDeclaredSymbol(classDeclarationSyntax) as ITypeSymbol;
            }
        }
    }
}