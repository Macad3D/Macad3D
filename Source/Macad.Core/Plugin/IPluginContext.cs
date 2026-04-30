using System;
using System.Reflection;

namespace Macad.Core.Plugin;

/// <summary>
/// Provides host-side services to a plugin during its <see cref="IPlugin.Initialize"/> call.
/// </summary>
public interface IPluginContext
{
    /// <summary>Access to the current application context.</summary>
    CoreContext CoreContext { get; }

    /// <summary>
    /// Registers a serialization namespace alias so that types in the plugin assembly
    /// can be persisted to and restored from Macad model files.
    /// Throws <see cref="InvalidOperationException"/> if the alias is already registered
    /// for a different namespace.
    /// </summary>
    void RegisterNamespaceAlias(string alias, string namespaceName);

    /// <summary>
    /// Scans <paramref name="assembly"/> for types decorated with <c>[SerializeType]</c>
    /// and pre-registers their serializers with the host serialization system.
    /// Call this after <see cref="RegisterNamespaceAlias"/> so that aliases are resolved correctly.
    /// </summary>
    void RegisterSerializableAssembly(Assembly assembly);

    /// <summary>
    /// Registers a custom file-exchange handler (importer or exporter) with the host.
    /// The exchanger will appear in the application's file dialogs.
    /// </summary>
    void RegisterExchanger(IExchanger exchanger);

    /// <summary>
    /// Registers an <see cref="Macad.Interaction.Editor"/> subclass contributed by the plugin
    /// so that the interaction layer picks it up without compile-time knowledge.
    /// Throws <see cref="ArgumentException"/> if <paramref name="editorType"/> is invalid.
    /// </summary>
    void RegisterEditor(Type editorType);
}
