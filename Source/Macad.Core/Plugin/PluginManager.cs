using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Loader;

namespace Macad.Core.Plugin;

/// <summary>
/// Discovers, loads, initializes, and shuts down plugin assemblies.
/// Call <see cref="LoadPlugins"/> after all host <c>Module.Initialize()</c> calls complete.
/// Call <see cref="ShutdownPlugins"/> before the process terminates.
/// </summary>
public static class PluginManager
{
    #region Internal state

    static readonly List<(IPlugin Plugin, PluginLoadContext Context)> _LoadedPlugins = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Injected by <c>InteractionModule.Initialize()</c> so that Core does not need a reference
    /// to <c>Macad.Interaction</c>.
    /// </summary>
    public static Action<Type> RegisterEditorCallback { get; set; }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Public API

    /// <summary>
    /// Scans the system and user plugin directories, loads each <c>*.dll</c>, discovers
    /// <see cref="IPlugin"/> implementations, and calls <see cref="IPlugin.Initialize"/>.
    /// Failures are logged to <see cref="Messages"/> and do not abort loading of remaining plugins.
    /// </summary>
    public static void LoadPlugins()
    {
        var pluginDirs = _GetPluginDirectories();

        foreach (var dir in pluginDirs)
        {
            _EnsureDirectoryExists(dir);

            foreach (var dllPath in Directory.EnumerateFiles(dir, "*.dll", SearchOption.TopDirectoryOnly))
            {
                _LoadPlugin(dllPath);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Calls <see cref="IPlugin.Shutdown"/> on every successfully loaded plugin in reverse
    /// initialization order. Failures are caught and logged.
    /// </summary>
    public static void ShutdownPlugins()
    {
        for (int i = _LoadedPlugins.Count - 1; i >= 0; i--)
        {
            var (plugin, _) = _LoadedPlugins[i];
            try
            {
                plugin.Shutdown();
            }
            catch (Exception ex)
            {
                Messages.Exception($"PluginManager: Shutdown failed for plugin '{plugin.Name}'.", ex);
            }
        }

        _LoadedPlugins.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>Returns all successfully loaded plugins that implement <typeparamref name="T"/>.</summary>
    public static IEnumerable<T> GetPlugins<T>() where T : class
    {
        return _LoadedPlugins.Select(entry => entry.Plugin).OfType<T>();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Directory helpers

    static IEnumerable<string> _GetPluginDirectories()
    {
        // System plugin directory: <AppDir>\Plugins\
        var appDir = Path.GetDirectoryName(typeof(PluginManager).Assembly.Location) ?? AppContext.BaseDirectory;
        yield return Path.Combine(appDir, "Plugins");

        // User plugin directory: %AppData%\Macad3D\Plugins\
        var appData = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData, Environment.SpecialFolderOption.Create);
        yield return Path.Combine(appData, "Macad3D", "Plugins");
    }

    //--------------------------------------------------------------------------------------------------

    static void _EnsureDirectoryExists(string dir)
    {
        try
        {
            if (!Directory.Exists(dir))
                Directory.CreateDirectory(dir);
        }
        catch (Exception ex)
        {
            Messages.Warning($"PluginManager: Could not create plugin directory '{dir}': {ex.Message}");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Loading

    static void _LoadPlugin(string dllPath)
    {
        Assembly pluginAssembly;
        PluginLoadContext loadContext;

        try
        {
            loadContext = new PluginLoadContext(dllPath);
            pluginAssembly = loadContext.LoadFromAssemblyPath(dllPath);
        }
        catch (Exception ex)
        {
            Messages.Exception($"PluginManager: Could not load assembly '{dllPath}'.", ex);
            return;
        }

        // Detect bundled Macad.* assemblies that would cause type-identity issues.
        foreach (var referencedName in pluginAssembly.GetReferencedAssemblies())
        {
            if (referencedName.Name?.StartsWith("Macad.", StringComparison.OrdinalIgnoreCase) == true)
            {
                // Check whether the plugin itself CONTAINS this assembly (i.e., a file alongside the DLL)
                var siblingPath = Path.Combine(Path.GetDirectoryName(dllPath)!, referencedName.Name + ".dll");
                if (File.Exists(siblingPath))
                {
                    Messages.Warning(
                        $"PluginManager: Plugin '{Path.GetFileName(dllPath)}' bundles '{referencedName.Name}.dll' " +
                        $"which is a Macad host assembly. The plugin has been skipped to prevent type-identity conflicts. " +
                        $"Remove the bundled Macad assembly from the plugin package.");
                    return;
                }
            }
        }

        // Discover IPlugin implementations
        Type[] pluginTypes;
        try
        {
            pluginTypes = pluginAssembly.GetTypes()
                .Where(t => !t.IsAbstract && typeof(IPlugin).IsAssignableFrom(t))
                .ToArray();
        }
        catch (ReflectionTypeLoadException ex)
        {
            Messages.Exception($"PluginManager: Could not inspect assembly '{dllPath}'.", ex);
            return;
        }

        if (pluginTypes.Length == 0)
        {
            Messages.Warning($"PluginManager: No IPlugin implementation found in '{Path.GetFileName(dllPath)}'.");
            return;
        }

        foreach (var pluginType in pluginTypes)
        {
            _InitializePlugin(pluginType, loadContext, dllPath);
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _InitializePlugin(Type pluginType, PluginLoadContext loadContext, string dllPath)
    {
        IPlugin plugin;
        try
        {
            plugin = (IPlugin)Activator.CreateInstance(pluginType)!;
        }
        catch (Exception ex)
        {
            Messages.Exception(
                $"PluginManager: Could not instantiate plugin type '{pluginType.FullName}' in '{dllPath}'.", ex);
            return;
        }

        var context = new PluginContext();
        try
        {
            plugin.Initialize(context);
            _LoadedPlugins.Add((plugin, loadContext));
        }
        catch (Exception ex)
        {
            Messages.Exception(
                $"PluginManager: Initialization failed for plugin '{plugin.Name}' in '{dllPath}'.", ex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
