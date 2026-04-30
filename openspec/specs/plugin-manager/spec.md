## ADDED Requirements

### Requirement: PluginManager scans configured directories for plugin assemblies
`PluginManager` SHALL scan two directories in order: `<AppDir>\Plugins\` (system plugins) and `%AppData%\Macad3D\Plugins\` (user plugins). Both directories SHALL be created if they do not exist. Only `*.dll` files at the top level of each directory are candidates.

#### Scenario: System plugins directory is scanned
- **WHEN** `PluginManager.LoadPlugins()` is called at application startup
- **THEN** all `*.dll` files under `<AppDir>\Plugins\` are inspected for `IPlugin` implementations

#### Scenario: User plugins directory is scanned
- **WHEN** `PluginManager.LoadPlugins()` is called at application startup
- **THEN** all `*.dll` files under `%AppData%\Macad3D\Plugins\` are inspected for `IPlugin` implementations

#### Scenario: Missing directories are created silently
- **WHEN** a plugin directory does not exist
- **THEN** `PluginManager` creates it and continues without error

---

### Requirement: Each plugin assembly is loaded in an isolated AssemblyLoadContext
`PluginManager` SHALL load each plugin DLL into a dedicated `AssemblyLoadContext` (non-collectible). The context SHALL forward resolution of `Macad.*` assemblies to the default (host) context to prevent type-identity duplication.

#### Scenario: Plugin uses Macad.Core types without duplication
- **WHEN** a plugin assembly references `Macad.Core` and is loaded
- **THEN** the `IPlugin` instance's `Initialize` receives an `IPluginContext` that shares type identity with the host's `Macad.Core` types

#### Scenario: Duplicate Macad assembly detected
- **WHEN** a plugin DLL bundles a copy of any `Macad.*` assembly
- **THEN** `PluginManager` logs a warning via `Messages` identifying the duplicate and skips loading that plugin

---

### Requirement: Plugin initialization errors are isolated
If a plugin's `Initialize` method throws an exception, `PluginManager` SHALL catch it, log the error to `Messages` with the plugin name and exception details, and continue loading remaining plugins. The host application SHALL start normally.

#### Scenario: Broken plugin does not crash the host
- **WHEN** one plugin's `Initialize` throws an unhandled exception
- **THEN** the exception is caught, an error message is recorded, and all other plugins finish initializing

---

### Requirement: PluginManager invokes Shutdown on all loaded plugins at application exit
`PluginManager.ShutdownPlugins()` SHALL call `IPlugin.Shutdown()` on every successfully initialized plugin in reverse initialization order. Exceptions during shutdown are caught and logged.

#### Scenario: Plugins are shut down on exit
- **WHEN** the application exits normally
- **THEN** `IPlugin.Shutdown()` is called on every loaded plugin before the process terminates

#### Scenario: Shutdown exception does not abort remaining shutdowns
- **WHEN** one plugin's `Shutdown` throws an exception
- **THEN** the exception is logged and `Shutdown` continues for the remaining plugins

---

### Requirement: LoadPlugins is called after all Module.Initialize() calls complete
`PluginManager.LoadPlugins()` SHALL be invoked by the application entry point only after `CoreModule.Initialize()`, `InteractionModule.Initialize()`, and all other host module initializers have completed.

#### Scenario: Plugins can rely on host modules being initialized
- **WHEN** `IPlugin.Initialize` is called
- **THEN** all host modules are fully initialized and all host serialization aliases are already registered
