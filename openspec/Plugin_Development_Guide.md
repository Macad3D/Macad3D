# Macad|3D Plugin Development Guide

## 1. Prerequisites

- Visual Studio 2026 (.NET 10 workload)
- Macad|3D source code and compiled Macad core libraries

## 2. Plugin Project Structure

Create a new .NET class library project (.NET 10):

```
MyPlugin.csproj
├── MyPlugin.cs                 (Main plugin class)
└── Properties/
    └── AssemblyInfo.cs
```

## 3. Basic Plugin Development Steps

### 3.1 Reference Required Assemblies

Add reference to `Macad.Core` in `.csproj`:

```xml
<ItemGroup>
    <ProjectReference Include="path/to/Macad.Core.csproj" />
</ItemGroup>
```

### 3.2 Implement IPlugin Interface

Create the main plugin class implementing `IPlugin`:

```csharp
using Macad.Core.Plugin;

public class MyPlugin : IPlugin
{
    public string Name => "My First Plugin";
    
    public string Description => "An example plugin";
    
    public Version Version => new Version(1, 0, 0);

    public void Initialize(IPluginContext context)
    {
        // Plugin initialization logic
        // Register extensions, editors, namespaces, etc. here
    }

    public void Shutdown()
    {
        // Cleanup resources
    }
}
```

## 4. Common Extension Points

### 4.1 Register Custom Serializable Types

```csharp
public void Initialize(IPluginContext context)
{
    // Register namespace alias (must be done first)
    context.RegisterNamespaceAlias("MyPlugin", "MyPlugin.Types");
    
    // Register serializable assembly
    context.RegisterSerializableAssembly(typeof(MyPlugin).Assembly);
}
```

### 4.2 Register Custom Exchangers (Import/Export)

```csharp
public void Initialize(IPluginContext context)
{
    context.RegisterExchanger(
        fileExtension: ".custom",
        importer: typeof(MyCustomImporter),
        exporter: typeof(MyCustomExporter)
    );
}
```

Implement exchangers:

```csharp
public class MyCustomImporter : IExchanger
{
    public bool Import(string filePath, Model model)
    {
        // Import logic
        return true;
    }
}

public class MyCustomExporter : IExchanger
{
    public bool Export(string filePath, Model model)
    {
        // Export logic
        return true;
    }
}
```

### 4.3 Register Custom Editors

```csharp
public class MyCustomShapeEditor : Editor<MyCustomShape>
{
    public MyCustomShapeEditor(Entity entity) : base(entity)
    {
    }

    protected override void UpdateProperties()
    {
        // Editor UI update logic
    }

    public override Entity GetEntity()
    {
        return Entity;
    }
}

// Register during initialization
public void Initialize(IPluginContext context)
{
    context.RegisterEditor(typeof(MyCustomShapeEditor));
}
```

### 4.4 Register UI Resources and Ribbon Controls

Implement `IPluginRibbonContributor`:

```csharp
public class MyPluginUI : IPluginRibbonContributor
{
    public IEnumerable<RibbonGroupModel> GetRibbonGroups(string tabName)
    {
        if (tabName == "MODEL")
        {
            // Return ribbon groups to add to MODEL tab
            yield return new RibbonGroupModel
            {
                Name = "MyPluginGroup",
                Control = CreateRibbonGroup()
            };
        }
    }

    public IEnumerable<Uri> GetResourceDictionaryUris()
    {
        // Return URIs to WPF resource dictionaries
        yield return new Uri("pack://application:,,,/MyPlugin;component/Resources/Themes.xaml");
    }

    private object CreateRibbonGroup()
    {
        // Create a Fluent.Ribbon RibbonGroupBox
        // Return as object (to avoid WPF dependency in core)
        return new object(); // Actually create real RibbonGroupBox in UI layer
    }
}

// Register UI provider during initialization
public class MyPlugin : IPlugin, IPluginRibbonContributor
{
    // ... IPlugin implementation ...
    
    // ... IPluginRibbonContributor implementation ...
}
```

## 5. Plugin Deployment

### 5.1 Build the Plugin

```bash
dotnet build MyPlugin.csproj -c Release
```

### 5.2 Place in Correct Directory

Plugins can be placed in one of two locations:

**Global Installation** (for all users):
```
%AppData%\Macad3D\Plugins\
```

**Local Installation** (application directory):
```
<ApplicationDir>\Plugins\
```

#### Supported Folder Structures

The Plugin Manager supports two ways to organize your plugin files:

1. **Single File Deployment**:
   If your plugin is just one DLL, you can place it directly in the `Plugins\` root.
   ```
   Plugins/
   └── MyPlugin.dll
   ```

2. **Isolated Folder Deployment (Recommended for large plugins)**:
   If your plugin has many third-party dependency DLLs, resources, or config files, **you should place it in an isolated subdirectory**.
   To ensure the Plugin Manager finds the correct entry point without mistakenly loading dependencies, **the subdirectory name MUST match the main plugin DLL name**:
   ```
   Plugins/
   └── MyBigPlugin/              <-- Folder name
       ├── MyBigPlugin.dll       <-- Must match the folder name exactly
       ├── Newtonsoft.Json.dll   <-- Other dependencies
       ├── CsvHelper.dll
       └── config.json
   ```

### 5.3 Dependency Management

- ✅ Safe to depend on `Macad.Core`, `Macad.Common`, `Macad.Exchange`, etc.
- ✅ Can include other custom assemblies in the plugin DLL
- ❌ Do NOT include copies of `Macad.*` assemblies (will be detected and skipped)
- ❌ Avoid depending on `Macad.Interaction` or `Macad.Presentation` (circular dependency risk)

## 6. Complete Example: Custom Shape and Editor

### 6.1 Custom Shape Class

```csharp
using Macad.Core;
using Macad.Core.Topology;

[SerializeType]
public class CylinderPlus : Shape
{
    [SerializeMember(SortKey = 10)]
    public double Radius
    {
        get { return _Radius; }
        set
        {
            if (_Radius != value)
            {
                SaveUndo();
                _Radius = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }
    private double _Radius = 5.0;

    [SerializeMember(SortKey = 20)]
    public double Height
    {
        get { return _Height; }
        set
        {
            if (_Height != value)
            {
                SaveUndo();
                _Height = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }
    private double _Height = 10.0;

    public override string CompatibilityId => "CylinderPlus";

    protected override bool MakeInternal(MakeFlags flags)
    {
        try
        {
            // Use OCCT to create cylinder
            var maker = new BRepPrimAPI_Cylinder(
                new gp_Ax2(new gp_Pnt(), new gp_Dir(0, 0, 1)),
                Radius, Height
            );
            BRep = maker.Shape();
            return true;
        }
        catch (Exception ex)
        {
            AddShapeBuildError($"Failed to create cylinder: {ex.Message}");
            return false;
        }
    }
}
```

### 6.2 Custom Editor

```csharp
using Macad.Interaction;
using System.Windows.Controls;

public class CylinderPlusEditor : Editor<CylinderPlus>
{
    public CylinderPlusEditor(Entity entity) : base(entity)
    {
    }

    public override Entity GetEntity()
    {
        return Entity;
    }

    protected override void UpdateProperties()
    {
        // Create editor UI
        var panel = new StackPanel();
        
        var radiusLabel = new Label { Content = "Radius:" };
        var radiusInput = new TextBox { Text = Entity.Radius.ToString() };
        radiusInput.TextChanged += (s, e) =>
        {
            if (double.TryParse(radiusInput.Text, out var r))
                Entity.Radius = r;
        };
        
        panel.Children.Add(radiusLabel);
        panel.Children.Add(radiusInput);
        
        // Add panel to editor UI
    }
}
```

### 6.3 Plugin Main Class

```csharp
using Macad.Core;
using Macad.Core.Plugin;

public class CylinderPlusPlugin : IPlugin
{
    public string Name => "Cylinder Plus";
    public string Description => "Adds an enhanced cylinder shape";
    public Version Version => new Version(1, 0, 0);

    public void Initialize(IPluginContext context)
    {
        // Register namespace
        context.RegisterNamespaceAlias("CylPlus", "CylinderPlus.Types");
        
        // Register serializable assembly
        context.RegisterSerializableAssembly(typeof(CylinderPlus).Assembly);
        
        // Register editor
        context.RegisterEditor(typeof(CylinderPlusEditor));
    }

    public void Shutdown()
    {
        // Cleanup
    }
}
```

## 7. Testing Your Plugin

### 7.1 Build the Plugin

```bash
dotnet build -c Release
```

### 7.2 Copy to Macad Plugin Directory

```bash
copy bin\Release\net10.0\CylinderPlus.dll "%appdata%\Macad3D\Plugins\"
```

### 7.3 Start Macad

Macad automatically:
- Scans `%AppData%\Macad3D\Plugins\`
- Loads all `.dll` files
- Calls each plugin's `Initialize` method
- Isolates errors and continues loading other plugins on failure

## 8. Best Practices

### ✅ Recommended

1. **Isolate errors** - Use try/catch in Initialize
2. **Use namespace aliases** - Helps with versioning and deserialization
3. **Minimize dependencies** - Only depend on core libraries
4. **Version your plugin** - Set Version property correctly
5. **Clear documentation** - Explain Description and features

### ❌ Avoid

1. **Don't bundle Macad.* assemblies** - Will be detected and skipped
2. **Don't throw from Initialize** - Causes plugin load failure
3. **Don't assume load order** - Plugin loading order is not guaranteed
4. **Don't modify global state** - May affect other plugins
5. **Don't use relative paths or `Environment.CurrentDirectory`** - The host application's working directory is usually the folder containing `Macad.exe`. If your plugin needs to load bundled configuration files (like `log4net.config`) or local resources, always construct an absolute path using your plugin assembly's location:
   ```csharp
   // Correct approach: Get the directory of the current plugin DLL
   string pluginDir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
   string configPath = Path.Combine(pluginDir, "log4net.config");
   ```

## 9. Debugging

### Debug in Visual Studio

1. Build the plugin
2. Copy `.dll` to Macad plugin directory
3. Attach to Macad process in Visual Studio
4. Set breakpoints in plugin code
5. Start or restart Macad

### View Load Logs

Macad logs plugin loading messages (visible in output window):
- ✅ Successfully loaded plugins
- ⚠️ Skipped or duplicate plugins
- ❌ Failed plugins and error details

## FAQ

**Q: Plugin is not being loaded. What should I do?**  
A: Check:
- Is DLL in correct directory (`%AppData%\Macad3D\Plugins\` or app `Plugins\` folder)?
- Are there error messages (check Macad output logs)?
- Are all dependencies present?

**Q: How do I uninstall a plugin?**  
A: Delete the `.dll` file and restart Macad

**Q: Can plugins call each other?**  
A: Yes, use `PluginManager.GetPlugins<T>()` to get other plugin instances

**Q: How do I update a plugin?**  
A: Replace the `.dll` file and restart Macad (manage versions manually)

## Architecture Notes

The plugin system provides:
- **Assembly Isolation**: Each plugin loads in its own `AssemblyLoadContext`
- **Error Isolation**: Plugin errors don't affect other plugins
- **Extension Points**:
  - Serialization (namespace aliases, types)
  - Exchange (import/export formats)
  - Editors (custom entity editors)
  - UI (ribbon groups, resource dictionaries)
- **Runtime Registration**: All extensions registered at startup
- **Lifecycle Management**: Initialize on load, Shutdown on exit
