## ADDED Requirements

### Requirement: Plugin can contribute Ribbon groups via IPluginRibbonContributor
A plugin that implements the optional sub-interface `IPluginRibbonContributor` SHALL be queried by the application shell after all plugins are initialized. The shell SHALL merge the contributed `RibbonGroupModel` instances into the appropriate Ribbon tabs before the main window is shown.

#### Scenario: Plugin Ribbon group appears in the UI
- **WHEN** a plugin implements `IPluginRibbonContributor` and returns one or more `RibbonGroupModel` instances for a named tab
- **THEN** those groups are visible in the Ribbon under the specified tab when the application starts

#### Scenario: Non-contributing plugin has no impact on Ribbon
- **WHEN** a plugin does not implement `IPluginRibbonContributor`
- **THEN** the Ribbon is unaffected by that plugin's presence

---

### Requirement: Plugin can supply WPF ResourceDictionary URIs for style injection
A plugin that implements `IPluginRibbonContributor` (or a separate `IPluginResourceContributor`) SHALL be able to return a list of `Uri` values pointing to WPF `ResourceDictionary` XAML files (pack URIs) that the host merges into `Application.Current.Resources` before the main window is shown.

#### Scenario: Plugin resources are available to the host
- **WHEN** a plugin returns a valid pack URI to a `ResourceDictionary` containing control styles or data templates
- **THEN** those resources are accessible from any WPF element in the main application window

#### Scenario: Invalid URI is gracefully skipped
- **WHEN** a plugin returns a URI that cannot be loaded as a `ResourceDictionary`
- **THEN** the error is logged via `Messages` and the remaining resources (from other plugins or the host) are merged normally

---

### Requirement: Plugin resource keys must not silently override host keys
The application SHALL log a warning (via `Messages`) when a plugin-contributed `ResourceDictionary` contains a key that already exists in `Application.Current.Resources` at merge time.

#### Scenario: Key collision is warned
- **WHEN** a plugin resource dictionary defines a key already present in the host's merged resources
- **THEN** a warning message is recorded naming the duplicate key and the contributing plugin
