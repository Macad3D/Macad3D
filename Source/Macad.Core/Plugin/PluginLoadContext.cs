using System.IO;
using System.Reflection;
using System.Runtime.Loader;

namespace Macad.Core.Plugin;

/// <summary>
/// Isolated <see cref="AssemblyLoadContext"/> for a single plugin assembly.
/// Forwards resolution of <c>Macad.*</c> assemblies to the default context so that
/// host types share a single identity across the process.
/// </summary>
internal sealed class PluginLoadContext : AssemblyLoadContext
{
    readonly AssemblyDependencyResolver _Resolver;

    //--------------------------------------------------------------------------------------------------

    public PluginLoadContext(string pluginPath)
        : base(name: Path.GetFileNameWithoutExtension(pluginPath), isCollectible: false)
    {
        _Resolver = new AssemblyDependencyResolver(pluginPath);
    }

    //--------------------------------------------------------------------------------------------------

    protected override Assembly Load(AssemblyName assemblyName)
    {
        // Forward Macad.* assemblies to the default (host) context to prevent type duplication.
        if (assemblyName.Name?.StartsWith("Macad.", System.StringComparison.OrdinalIgnoreCase) == true)
        {
            return Default.LoadFromAssemblyName(assemblyName);
        }

        // Try the plugin's own directory first.
        var assemblyPath = _Resolver.ResolveAssemblyToPath(assemblyName);
        if (assemblyPath != null)
            return LoadFromAssemblyPath(assemblyPath);

        return null;
    }

    //--------------------------------------------------------------------------------------------------
}
