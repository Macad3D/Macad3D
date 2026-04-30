## 1. Plugin Contract (Macad.Core)

- [x] 1.1 Create `Source/Core/Plugin/` directory and add `IPlugin.cs` with the `IPlugin` interface (`Name`, `Description`, `Version`, `Initialize`, `Shutdown`)
- [x] 1.2 Add `IPluginContext.cs` with the `IPluginContext` interface (`RegisterNamespaceAlias`, `RegisterExchanger`, `RegisterSerializableAssembly`, `RegisterEditor`, `CoreContext`)
- [x] 1.3 Add `PluginContext.cs` implementing `IPluginContext`; wire `RegisterNamespaceAlias` to `Serializer.RegisterNamespaceAlias`, `RegisterExchanger` to `ExchangeRegistry`, `RegisterSerializableAssembly` to the serialization system's reflection scan, and `CoreContext` to the ambient `CoreContext`
- [x] 1.4 Add duplicate-alias detection in `PluginContext.RegisterNamespaceAlias` — throw `InvalidOperationException` with conflicting alias details
- [x] 1.5 Add `IPluginRibbonContributor.cs` in `Source/Core/Plugin/` with `IEnumerable<RibbonGroupModel> GetRibbonGroups(string tabName)` and `IEnumerable<Uri> GetResourceDictionaryUris()`

## 2. Plugin Manager (Macad.Core)

- [x] 2.1 Add `PluginManager.cs` in `Source/Core/Plugin/` with `LoadPlugins()` and `ShutdownPlugins()` static methods
- [x] 2.2 Implement directory scanning: enumerate `<AppDir>\Plugins\` and `%AppData%\Macad3D\Plugins\`, create directories if missing, collect `*.dll` paths
- [x] 2.3 Implement per-plugin `AssemblyLoadContext` (non-collectible) with a resolver that forwards `Macad.*` assembly requests to the default context
- [x] 2.4 Implement duplicate `Macad.*` assembly detection in loaded plugin assemblies; log warning via `Messages` and skip the plugin
- [x] 2.5 Wrap each plugin's instantiation and `Initialize` call in try/catch; log failure to `Messages` and continue
- [x] 2.6 Implement `ShutdownPlugins()`: iterate loaded plugins in reverse order, call `Shutdown()` with per-plugin try/catch, log failures

## 3. EditorRegistry Runtime Registration (Macad.Interaction)

- [x] 3.1 Add `EditorRegistry.RegisterEditor(Type editorType)` static method; validate the type derives from `Editor` and has a target-type attribute, throw `ArgumentException` otherwise
- [x] 3.2 Implement most-specific-type-wins resolution: when multiple editors match, prefer the deepest derived type; log a warning when two editors have equal specificity for the same target type
- [x] 3.3 Expose `IPluginContext.RegisterEditor(Type)` in `PluginContext` delegating to `EditorRegistry.RegisterEditor`

## 4. UI Extension Point (Macad.Presentation / Macad)

- [x] 4.1 Add a `PluginResourceLoader` helper in the app entry project that iterates loaded `IPluginRibbonContributor` plugins, loads each `ResourceDictionary` URI with try/catch, checks for key collisions against `Application.Current.Resources`, logs warnings, and merges valid dictionaries
- [x] 4.2 Add Ribbon contribution logic in `MainWindowModel` (or equivalent): after `PluginManager.LoadPlugins()`, collect `RibbonGroupModel` instances from all `IPluginRibbonContributor` plugins and append them to the appropriate Ribbon tab collections
- [x] 4.3 Ensure resource dictionaries are merged before the main window's `Show()` call

## 5. Application Startup / Shutdown Wiring (Macad app entry)

- [x] 5.1 In `App.xaml.cs` (or equivalent startup path), call `PluginManager.LoadPlugins()` after all `Module.Initialize()` calls complete
- [x] 5.2 Call `PluginResourceLoader.MergePluginResources()` after `LoadPlugins()` and before the main window is shown
- [x] 5.3 Apply Ribbon contributions from plugins in `MainWindowModel` initialization, after plugin load
- [x] 5.4 In application exit handler, call `PluginManager.ShutdownPlugins()` before the process terminates

## 6. Output Layout

- [x] 6.1 Add an empty `Plugins\` directory (with a `.gitkeep` or README) to the build output layout so the directory exists in a fresh install
- [x] 6.2 Update the build/installer scripts (if any) to include `Plugins\` in the output package

## 7. Testing

- [x] 7.1 Write a unit test that creates a minimal in-memory plugin (class implementing `IPlugin`), calls `PluginManager` initialization logic, and verifies `Initialize` was called
- [x] 7.2 Write a test that a plugin throwing in `Initialize` is isolated and other plugins still initialize
- [x] 7.3 Write a test that `RegisterNamespaceAlias` duplicate detection throws with a descriptive message
- [x] 7.4 Write a test that `EditorRegistry.RegisterEditor` with an invalid type throws `ArgumentException`
- [x] 7.5 Write a test for most-specific-type-wins editor resolution when two editors are registered for related types
