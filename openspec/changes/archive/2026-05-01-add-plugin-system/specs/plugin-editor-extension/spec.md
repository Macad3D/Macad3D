## ADDED Requirements

### Requirement: EditorRegistry supports runtime registration of Editor types
`EditorRegistry` SHALL expose a public static method `RegisterEditor(Type editorType)` that accepts a `Type` derived from `Editor` and adds it to the runtime lookup table. This method SHALL be callable after the application has fully started (i.e., post `Module.Initialize()`).

#### Scenario: Plugin editor is selected for a matching entity
- **WHEN** a plugin calls `IPluginContext.RegisterEditor(typeof(MyCustomEditor))` during `Initialize`
- **AND** the user selects an entity whose type matches `MyCustomEditor`'s target type
- **THEN** `MyCustomEditor` is instantiated and shown in the property panel

#### Scenario: Registering an invalid type is rejected
- **WHEN** `RegisterEditor` is called with a type that does not derive from `Editor` or lacks a required target-type attribute
- **THEN** an `ArgumentException` is thrown with a descriptive message

---

### Requirement: IPluginContext exposes RegisterEditor
`IPluginContext` SHALL expose `void RegisterEditor(Type editorType)` as a convenience wrapper over `EditorRegistry.RegisterEditor`, so plugins do not need a direct reference to `Macad.Interaction` internals.

#### Scenario: Plugin registers editor through context
- **WHEN** a plugin calls `context.RegisterEditor(typeof(MyEditor))` in its `Initialize` method
- **THEN** the editor is registered in `EditorRegistry` and becomes active for subsequent entity selections

---

### Requirement: Multiple plugin editors may target the same entity type
When more than one registered `Editor` (host or plugin) matches the selected entity, the system SHALL use the most-specific type match (deepest in the inheritance hierarchy). If specificity is equal, the last registered editor wins and a diagnostic warning is logged.

#### Scenario: More-specific plugin editor takes precedence
- **WHEN** a plugin registers an editor for `MySpecialBox` (which derives from `Box`)
- **AND** the host has an editor for `Box`
- **THEN** selecting a `MySpecialBox` entity shows `MyCustomEditor`, not the host `Box` editor

#### Scenario: Ambiguous registrations are warned
- **WHEN** two editors of equal specificity are registered for the same entity type
- **THEN** a warning is logged identifying both editor types and the entity type they target
