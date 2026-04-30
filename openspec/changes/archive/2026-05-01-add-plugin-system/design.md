## Context

Macad|3D is a fully static, compile-time application. Its layer stack (`Macad.Common` → `Macad.Core` → `Macad.Exchange` → `Macad.Interaction` → `Macad.Presentation` → `Macad`) is initialized via per-module `Initialize()` calls. The `[AutoRegister]` / `[AutoRegisterHost]` Roslyn Source Generator emits registration code at compile time, meaning new types and editors must be compiled into the host to be recognized. There is no runtime discovery, no plugin directory, and no extensibility surface for third parties.

The goal is to add a runtime plugin system without disrupting the existing static architecture.

## Goals / Non-Goals

**Goals:**
- Define a stable, versioned plugin contract (`IPlugin` / `IPluginContext`) in `Macad.Core`
- Implement `PluginManager` for directory scanning, assembly loading, lifecycle management, and error isolation per plugin
- Expose serialization namespace registration, exchanger registration, and `CoreContext` access through `IPluginContext`
- Allow plugins to register `Tool` and `Editor` subclasses at runtime (post-startup)
- Allow plugins to inject Ribbon entries and WPF resource dictionaries into the main shell
- Support two plugin directories: `<AppDir>\Plugins\` (system) and `%AppData%\Macad3D\Plugins\` (user)

**Non-Goals:**
- Hot-reload / unloading of already-initialized plugins (complex with native interop)
- A sandboxed or permission-restricted plugin API
- Plugin marketplace / package manager UI
- Scripting language support (Python, F#) as first iteration
- Automatic migration of plugins between Macad versions

## Decisions

### D1 — Where to define `IPlugin` / `IPluginContext`

**Decision**: Place in `Macad.Core`, inside a new `Plugin/` subfolder.

**Rationale**: Core is the lowest managed layer all other layers already depend on. Placing the contract here lets plugins depend on a single, minimal assembly (`Macad.Core.dll`) without pulling in WPF or interaction concerns. An alternative was a standalone `Macad.Plugin` project, but that would require every plugin to take on an extra dependency for little benefit.

---

### D2 — Assembly loading strategy

**Decision**: Use `Assembly.LoadFrom()` with an explicit `AssemblyLoadContext` per plugin (isolated context, `isCollectible: false`).

**Rationale**: Isolated `AssemblyLoadContext` prevents type-identity collisions when two plugins bring different versions of the same dependency. `isCollectible: false` avoids the complexity of teardown (see Non-Goals). A flat `Assembly.LoadFrom()` into the default context was considered but risks version conflicts at scale. Full isolation via `AssemblyLoadContext` is the .NET 5+ recommended pattern.

---

### D3 — `[AutoRegister]` is compile-time only

**Decision**: Plugins cannot use `[AutoRegister]`. Instead, `IPluginContext` exposes explicit registration methods, and the `PluginManager` calls `RegisterSerializableAssembly(assembly)` to scan for `[SerializeType]`-annotated types via reflection after load.

**Rationale**: The Roslyn source generator runs only at compile time against the host assemblies. Replicating this at runtime via reflection is straightforward for serialization (scan `[SerializeType]`) and for editors (scan `[AutoRegister]`-like attribute or require explicit registration). Alternatives: expose a code-generation template for plugin authors to run the generator themselves—rejected because it couples plugin toolchain to host build toolchain.

---

### D4 — UI extension point

**Decision**: Define a `IPluginRibbonContributor` sub-interface; `PluginManager` collects contributors and the Ribbon view model calls `GetRibbonGroups()` during shell initialization (after plugins are loaded). Plugins contribute WPF `ResourceDictionary` XAML by returning a `Uri` list; the application merges them into `Application.Current.Resources` before the main window is shown.

**Rationale**: The Ribbon is currently XAML-static. Exposing a simple collection-based protocol avoids hard coupling to the WPF control tree. An alternative (dynamic Ribbon commands via MEF-style composition) was considered but is over-engineered for the immediate need.

---

### D5 — Editor registration

**Decision**: Add `EditorRegistry.RegisterEditor(Type editorType)` (runtime counterpart of the compile-time `[AutoRegister]` path). `IPluginContext` exposes this as `RegisterEditor(Type)`. The interaction layer already queries `EditorRegistry` on selection-change events; no other changes are needed downstream.

**Rationale**: The existing `EditorRegistry` lookup is already a runtime dictionary—the only missing piece is a public write path.

---

### D6 — Error isolation

**Decision**: Each plugin's `Initialize()` is wrapped in a try/catch. Failures are logged to `Messages` and the plugin is skipped; the rest of the application starts normally.

**Rationale**: A single broken plugin must not crash the host. This matches the Rhino/Grasshopper model.

## Risks / Trade-offs

- **[Risk] C++/CLI native assembly deployment** → Plugins that call geometry APIs depend on `Macad.Occt.dll` and `Macad.Managed.dll` (mixed-mode assemblies). These must be present in the process before the plugin assembly is loaded. Mitigation: document requirement; installer already deploys these DLLs to `<AppDir>`; `AssemblyLoadContext` resolver falls back to the default context for already-loaded assemblies.

- **[Risk] Type identity across contexts** → A plugin that re-bundles `Macad.Core.dll` will create a second copy of core types, causing cast failures. Mitigation: document that `Macad.*` assemblies must not be bundled with plugins; `PluginManager` should warn if it detects duplicate assembly identity.

- **[Risk] WPF resource dictionary ordering** → Merged dictionaries are order-sensitive; a plugin that overrides a key can silently change host appearance. Mitigation: plugins should use unique key prefixes; document the convention.

- **[Risk] Serialization namespace collisions** → Two plugins registering the same alias will conflict. Mitigation: `RegisterNamespaceAlias` checks for duplicates and throws a descriptive exception caught by the error-isolation wrapper.

## Migration Plan

1. Add `IPlugin`, `IPluginContext`, `PluginContext`, `PluginManager` (no behavioral change for existing code—purely additive).
2. Expose `RegisterEditor` on `EditorRegistry` (additive).
3. Wire `PluginManager.LoadPlugins()` into `App.xaml.cs` startup, after all `Module.Initialize()` calls.
4. Add Ribbon extension hook in `MainWindowModel` (or equivalent), after plugins are loaded.
5. Create `Plugins\` directory in the output layout (initially empty).
6. No rollback needed—all additions are isolated behind new types; existing startup path is unchanged if `Plugins\` is empty.

## Open Questions

- Should plugins be allowed to declare dependencies on other plugins (load order)? Initial answer: no—keep it simple; add if requested.
- Should there be a plugin manifest file (`.json` alongside the DLL) for metadata / enable/disable without deleting the DLL? Deferred to a follow-up change.
- WPF designer impact: resource dictionaries merged at runtime won't be visible in the VS XAML designer—acceptable trade-off.
