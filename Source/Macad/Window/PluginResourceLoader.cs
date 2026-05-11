using System;
using System.Collections.Generic;
using System.Windows;
using Macad.Core;
using Macad.Core.Plugin;

namespace Macad.Window;

/// <summary>
/// Merges WPF <see cref="ResourceDictionary"/> files contributed by plugins into
/// <see cref="Application.Current.Resources"/> before the main window is shown.
/// </summary>
public static class PluginResourceLoader
{
    /// <summary>
    /// Iterates all loaded plugins that implement <see cref="IPluginRibbonContributor"/>,
    /// loads each returned <see cref="Uri"/> as a <see cref="ResourceDictionary"/>,
    /// checks for key collisions, and merges valid dictionaries.
    /// Call this after <see cref="PluginManager.LoadPlugins"/> and before showing the main window.
    /// </summary>
    public static void MergePluginResources()
    {
        foreach (var contributor in PluginManager.GetPlugins<IPluginRibbonContributor>())
        {
            IEnumerable<Uri> uris;
            try
            {
                uris = contributor.GetResourceDictionaryUris();
            }
            catch (Exception ex)
            {
                Messages.Exception($"PluginResourceLoader: Could not get resource URIs from plugin '{contributor.GetType().Name}'.", ex);
                continue;
            }

            if (uris == null)
                continue;

            foreach (var uri in uris)
            {
                _MergeDictionary(contributor, uri);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _MergeDictionary(IPluginRibbonContributor contributor, Uri uri)
    {
        ResourceDictionary dict;
        try
        {
            dict = new ResourceDictionary { Source = uri };
        }
        catch (Exception ex)
        {
            Messages.Exception(
                $"PluginResourceLoader: Could not load ResourceDictionary from URI '{uri}' " +
                $"(plugin: '{contributor.GetType().Name}').", ex);
            return;
        }

        // Check for key collisions with existing application resources.
        var appResources = Application.Current.Resources;
        foreach (var key in dict.Keys)
        {
            if (appResources.Contains(key))
            {
                Messages.Warning(
                    $"PluginResourceLoader: Key collision for resource key '{key}' " +
                    $"contributed by plugin '{contributor.GetType().Name}'. " +
                    $"The plugin key will override the host key.");
            }
        }

        appResources.MergedDictionaries.Add(dict);
    }

    //--------------------------------------------------------------------------------------------------
}
