using System;
using System.Reflection;
using Macad.Common.Serialization;

namespace Macad.Core.Plugin;

/// <summary>
/// Concrete implementation of <see cref="IPluginContext"/> passed to each plugin during
/// <see cref="IPlugin.Initialize"/>. Delegates to the host's subsystems.
/// </summary>
public sealed class PluginContext : IPluginContext
{
    #region IPluginContext

    /// <inheritdoc/>
    public CoreContext CoreContext => CoreContext.Current;

    //--------------------------------------------------------------------------------------------------

    /// <inheritdoc/>
    /// <exception cref="InvalidOperationException">
    /// Thrown when <paramref name="alias"/> is already registered for a <em>different</em> namespace.
    /// </exception>
    public void RegisterNamespaceAlias(string alias, string namespaceName)
    {
        // Use a probe string to test whether the alias is already known to the serializer.
        // ResolveNamespaceAlias returns the input unchanged when no matching alias is found.
        const string probe = ".X";
        var resolved = Serializer.ResolveNamespaceAlias(alias + probe);
        bool isRegistered = !resolved.Equals(alias + probe, StringComparison.Ordinal);

        if (isRegistered)
        {
            // Derive the currently registered namespace by stripping the probe suffix.
            string existingNamespace = resolved.Substring(0, resolved.Length - probe.Length);
            if (!existingNamespace.Equals(namespaceName, StringComparison.Ordinal))
            {
                throw new InvalidOperationException(
                    $"Namespace alias '{alias}' is already registered for namespace '{existingNamespace}'. " +
                    $"Cannot re-register it for '{namespaceName}'.");
            }
            // Same alias → same namespace: idempotent, nothing to do.
            return;
        }

        Serializer.RegisterNamespaceAlias(alias, namespaceName);
    }

    //--------------------------------------------------------------------------------------------------

    /// <inheritdoc/>
    public void RegisterSerializableAssembly(Assembly assembly)
    {
        foreach (var type in assembly.GetTypes())
        {
            if (!type.IsAbstract && type.IsDefined(typeof(SerializeTypeAttribute), false))
            {
                // Force lazy serializer creation so the alias is stored in the alias dictionary
                try
                {
                    Serializer.GetSerializer(type);
                }
                catch (Exception ex)
                {
                    Messages.Warning($"PluginContext: Could not register serializer for type '{type.FullName}': {ex.Message}");
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <inheritdoc/>
    public void RegisterExchanger(IExchanger exchanger)
    {
        ExchangeRegistry.Register(exchanger);
    }

    //--------------------------------------------------------------------------------------------------

    /// <inheritdoc/>
    public void RegisterEditor(Type editorType)
    {
        PluginManager.RegisterEditorCallback?.Invoke(editorType);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
