## ADDED Requirements

### Requirement: IPlugin interface defines the plugin entry contract
Every plugin assembly SHALL expose at least one concrete, non-abstract class that implements `IPlugin`. The interface SHALL declare: `string Name { get; }`, `string Description { get; }`, `Version Version { get; }`, `void Initialize(IPluginContext context)`, and `void Shutdown()`.

#### Scenario: Plugin class is discovered
- **WHEN** a plugin assembly is scanned
- **THEN** every non-abstract type implementing `IPlugin` is instantiated and its `Initialize` is called with a valid `IPluginContext`

#### Scenario: Plugin provides metadata
- **WHEN** `Name`, `Description`, and `Version` are read before `Initialize`
- **THEN** they return non-null, non-empty values without side effects

---

### Requirement: IPluginContext exposes serialization registration
`IPluginContext` SHALL expose `void RegisterNamespaceAlias(string alias, string namespaceName)` so plugins can register their serializable type namespaces with the host serialization system.

#### Scenario: Namespace alias registered
- **WHEN** a plugin calls `RegisterNamespaceAlias("MyPlugin", "MyCompany.MyPlugin.Shapes")`
- **THEN** the serialization system resolves types in that namespace from persisted files that use the alias

#### Scenario: Duplicate alias rejected
- **WHEN** two plugins (or a plugin and the host) register the same alias string for different namespaces
- **THEN** an `InvalidOperationException` is thrown with a descriptive message identifying the conflicting registrations

---

### Requirement: IPluginContext exposes exchanger registration
`IPluginContext` SHALL expose `void RegisterExchanger(IExchanger exchanger)` so plugins can add custom file import/export handlers that appear in the host's file dialogs.

#### Scenario: Custom importer is available
- **WHEN** a plugin registers an `IImporter` implementation via `RegisterExchanger`
- **THEN** the host's open-file dialog lists the plugin's supported file extensions and the importer is invoked when that format is selected

#### Scenario: Custom exporter is available
- **WHEN** a plugin registers an `IExporter` implementation via `RegisterExchanger`
- **THEN** the host's export dialog lists the plugin's target format and the exporter is invoked on export

---

### Requirement: IPluginContext exposes serializable assembly registration
`IPluginContext` SHALL expose `void RegisterSerializableAssembly(Assembly assembly)` which scans the given assembly for types decorated with `[SerializeType]` and registers them with the host serialization system.

#### Scenario: Plugin shape types become serializable
- **WHEN** a plugin calls `RegisterSerializableAssembly` with its own assembly during `Initialize`
- **THEN** shapes defined in that assembly can be persisted to and restored from Macad model files

---

### Requirement: IPluginContext provides access to CoreContext
`IPluginContext` SHALL expose a `CoreContext CoreContext { get; }` property giving plugins read access to the current application context (document model, settings, workspace).

#### Scenario: Plugin reads current document
- **WHEN** a plugin accesses `IPluginContext.CoreContext.CurrentModel`
- **THEN** it receives the active `Model` instance (or `null` if no document is open)
