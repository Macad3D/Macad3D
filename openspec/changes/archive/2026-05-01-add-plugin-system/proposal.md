## Why

Macad|3D is currently a fully static, compile-time application with no runtime extensibility. Power users and third-party developers cannot add custom shapes, importers/exporters, tools, or UI panels without modifying and recompiling the source. A plugin system—similar to Rhino/Grasshopper—unlocks a community ecosystem and allows specialized workflows to be distributed independently.

## What Changes

- Introduce `IPlugin` and `IPluginContext` interfaces in `Macad.Core` as the plugin contract
- Add `PluginManager` responsible for discovering, loading, and initializing plugin assemblies at startup
- Add `PluginContext` implementation exposing host APIs (serialization registration, exchanger registration, CoreContext access) to plugins
- Extend the application entry point to invoke `PluginManager.LoadPlugins()` during startup and `PluginManager.ShutdownPlugins()` on exit
- Establish a plugin directory convention (`<AppDir>\Plugins\` and `%AppData%\Macad3D\Plugins\`)
- Provide a UI extension point so plugins can contribute Ribbon buttons / panels
- Provide a runtime Editor registration mechanism so plugins can contribute property-panel editors

## Capabilities

### New Capabilities

- `plugin-contract`: Core interfaces (`IPlugin`, `IPluginContext`) and the `PluginContext` host implementation that plugins program against
- `plugin-manager`: Runtime discovery and lifecycle management of plugin assemblies (`PluginManager.LoadPlugins`, error isolation, unload support)
- `plugin-ui-extension`: Mechanism for plugins to contribute Ribbon menu entries and WPF resource dictionaries to the main application shell
- `plugin-editor-extension`: Runtime registration of `Editor` classes contributed by plugins so the interaction layer picks them up without compile-time knowledge

### Modified Capabilities

<!-- No existing spec-level behavior is changing. -->

## Impact

- **Macad.Core**: new `Plugin/` folder with interfaces and `PluginContext`; serialization and exchanger registration APIs must be exposed through `IPluginContext`
- **Macad (app entry point)**: startup/shutdown hooks for `PluginManager`
- **Macad.Interaction**: `EditorRegistry` must support runtime (post-startup) registration
- **Macad.Presentation**: Ribbon and resource-dictionary merge point for plugin-contributed UI
- **Deployment**: `Plugins\` directory must be included in the installer/output layout; C++/CLI native DLLs (`Macad.Occt`, `Macad.Managed`) must be present for plugins that use geometry APIs
- **No breaking changes to existing public APIs**; all new surface is additive
