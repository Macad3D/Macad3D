using System;

namespace Macad.Core.Plugin;

/// <summary>
/// Defines the contract every Macad|3D plugin must implement.
/// </summary>
public interface IPlugin
{
    /// <summary>Plugin display name.</summary>
    string Name { get; }

    /// <summary>Short description of the plugin's purpose.</summary>
    string Description { get; }

    /// <summary>Plugin version.</summary>
    Version Version { get; }

    /// <summary>Called once after the plugin assembly is loaded and all host modules are initialized.</summary>
    void Initialize(IPluginContext context);

    /// <summary>Called during application shutdown, in reverse initialization order.</summary>
    void Shutdown();
}
