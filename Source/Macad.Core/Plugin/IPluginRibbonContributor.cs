using System;
using System.Collections.Generic;

namespace Macad.Core.Plugin;

/// <summary>
/// Optional sub-interface for plugins that wish to contribute Ribbon groups and
/// WPF resource dictionaries to the main application shell.
/// </summary>
public interface IPluginRibbonContributor
{
    /// <summary>
    /// Returns the Ribbon groups this plugin contributes to the tab identified by <paramref name="tabName"/>.
    /// Each <see cref="RibbonGroupModel"/> wraps a <c>Fluent.RibbonGroupBox</c> WPF control.
    /// Return an empty enumerable if this plugin has nothing to contribute to the requested tab.
    /// </summary>
    IEnumerable<RibbonGroupModel> GetRibbonGroups(string tabName);

    /// <summary>
    /// Returns pack URIs pointing to WPF <c>ResourceDictionary</c> XAML files that the host
    /// merges into <c>Application.Current.Resources</c> before the main window is shown.
    /// Return an empty enumerable if no resource dictionaries are provided.
    /// </summary>
    IEnumerable<Uri> GetResourceDictionaryUris();
}
