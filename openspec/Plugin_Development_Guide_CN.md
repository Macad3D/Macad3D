# Macad|3D 插件开发指南

## 1. 前置条件

- Visual Studio 2026（.NET 10 工作负载）
- Macad|3D 源代码和已编译的 Macad 核心库

## 2. 插件项目结构

创建一个新的 .NET 类库项目（.NET 10）：

```
MyPlugin.csproj
├── MyPlugin.cs                 (插件主类)
└── Properties/
    └── AssemblyInfo.cs
```

## 3. 基础插件开发步骤

### 3.1 引用必要的程序集

在 `.csproj` 中添加对 `Macad.Core` 的引用：

```xml
<ItemGroup>
    <ProjectReference Include="path/to/Macad.Core.csproj" />
</ItemGroup>
```

### 3.2 实现 IPlugin 接口

创建主插件类实现 `IPlugin`：

```csharp
using Macad.Core.Plugin;

public class MyPlugin : IPlugin
{
    public string Name => "My First Plugin";
    
    public string Description => "一个示例插件";
    
    public Version Version => new Version(1, 0, 0);

    public void Initialize(IPluginContext context)
    {
        // 插件初始化逻辑
        // 在此可以注册扩展器、编辑器、命名空间等
    }

    public void Shutdown()
    {
        // 清理资源
    }
}
```

## 4. 常见扩展点

### 4.1 注册自定义序列化类型

```csharp
public void Initialize(IPluginContext context)
{
    // 注册命名空间别名（必须先做）
    context.RegisterNamespaceAlias("MyPlugin", "MyPlugin.Types");
    
    // 注册可序列化的程序集
    context.RegisterSerializableAssembly(typeof(MyPlugin).Assembly);
}
```

### 4.2 注册自定义交换器（导入/导出）

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

实现交换器：

```csharp
public class MyCustomImporter : IExchanger
{
    public bool Import(string filePath, Model model)
    {
        // 导入逻辑
        return true;
    }
}

public class MyCustomExporter : IExchanger
{
    public bool Export(string filePath, Model model)
    {
        // 导出逻辑
        return true;
    }
}
```

### 4.3 注册自定义编辑器

```csharp
public class MyCustomShapeEditor : Editor<MyCustomShape>
{
    public MyCustomShapeEditor(Entity entity) : base(entity)
    {
    }

    protected override void UpdateProperties()
    {
        // 编辑器界面更新逻辑
    }

    public override Entity GetEntity()
    {
        return Entity;
    }
}

// 在初始化时注册
public void Initialize(IPluginContext context)
{
    context.RegisterEditor(typeof(MyCustomShapeEditor));
}
```

### 4.4 注册UI资源和Ribbon控件

实现 `IPluginRibbonContributor`：

```csharp
public class MyPluginUI : IPluginRibbonContributor
{
    public IEnumerable<RibbonGroupModel> GetRibbonGroups(string tabName)
    {
        // 插件 UI 应该被注入到专属的 PLUGINS 标签页中，以避免污染核心功能区
        if (tabName == "PLUGINS")
        {
            // 返回要添加到 PLUGINS 标签页的 Ribbon 组
            yield return new RibbonGroupModel(CreateRibbonGroup());
        }
    }

    public IEnumerable<Uri> GetResourceDictionaryUris()
    {
        // 返回WPF资源字典的URI
        yield return new Uri("pack://application:,,,/MyPlugin;component/Resources/Themes.xaml");
    }

    private object CreateRibbonGroup()
    {
        // 创建Fluent.Ribbon RibbonGroupBox
        // 返回as object（避免WPF依赖）
        return new object(); // 实际应创建真实的RibbonGroupBox
    }
}

// 在初始化时注册UI提供者
public class MyPlugin : IPlugin, IPluginRibbonContributor
{
    // ... IPlugin 实现 ...
    
    // ... IPluginRibbonContributor 实现 ...
}
```

## 5. 插件部署与 SDK 分发边界

### 5.1 分发边界设计原则

参考 Rhino3D 等成熟的工业软件，Macad|3D 采用了**“核心进程内加载 + 强契约隔离”**的插件边界策略：

- **深度暴露但不破坏内核**：插件与主程序在同一进程运行（In-Process）。通过 `Macad.Core` 和 `Macad.Occt` 等库，插件可以深度访问几何内核、文档数据和工作区。但这并不是无序暴露的——C++ 几何内核被 C++/CLI (`Macad.Managed`) 严格包装，保证了内存安全。
- **UI 的沙盒化管理**：为了防止插件弄乱主程序的 UI，Ribbon 扩展必须通过 `IPluginRibbonContributor` 接口进行。插件不能直接修改 `MainWindow` 的全局对象树，而是由主程序在启动时“拉取（Pull）”插件的 `RibbonGroupModel` 并注入到特定的沙盒化标签页（如专属的 `PLUGINS` Tab）。
- **独立资源管理**：插件必须将自身的图标（如 PNG/SVG）等资源**嵌入到自身的 DLL 中**（通过 `<Resource>` 标签或 `pack://` URI），主程序不负责为第三方插件托管零散的图片文件。

### 5.2 第三方开发者需要的 DLL (SDK)

如果你要将 SDK 分发给第三方开发者，请提供以下基础程序集（但不允许他们将这些库与最终的插件 DLL 一起打包分发）：

- **必需核心库：**
  - `Macad.Core.dll`：插件契约 (`IPlugin`)、拓扑模型 (`Shape`, `Body`)、上下文环境。
  - `Macad.Common.dll`：序列化、日志 (`Messages`) 等基础工具。
- **几何与图形处理库（按需）：**
  - `Macad.Occt.dll`：用于底层 BRep、曲线和曲面建模（OCCT C++ 的直接包装）。
  - `Macad.Managed.dll`：C++/CLI 互操作核心。
- **UI 与交互层（按需）：**
  - `Macad.Interaction.dll`：用于编写自定义编辑器 (`Editor<T>`) 和工具动作。
  - `Macad.Presentation.dll`：用于 WPF UI 开发支持。

**安全提示**：提供这些 DLL 是安全的，因为它们只是运行时契约。只要第三方开发者不修改和替换主程序安装目录下的原版核心 DLL，插件的行为就依然受主程序插件管理器和 C# 托管边界的约束。

### 5.3 编译与依赖配置

开发者在配置 `.csproj` 时必须遵守以下规则：

```xml
<!-- 目标框架必须与宿主程序一致 -->
<TargetFramework>net10.0-windows</TargetFramework>
<UseWPF>true</UseWPF>

<ItemGroup>
    <!-- 引用必须设置为 CopyLocal="False" (Private="False") -->
    <ProjectReference Include="path/to/Macad.Core.csproj" Private="False" />
</ItemGroup>
```

### 5.4 放置到正确的目录

插件（仅限你自己的 DLL 及第三方库，**绝不能**包含 Macad.*.dll 副本）可放在以下两个位置之一：

**全局安装**（对所有用户）：
```
%AppData%\Macad3D\Plugins\MyPlugin.dll
```

**本地安装**（应用程序目录）：
```
<ApplicationDir>\Plugins\MyPlugin.dll
```

### 5.3 依赖管理

- ✅ 可以安全地依赖 `Macad.Core`、`Macad.Common`、`Macad.Exchange` 等
- ✅ 可以在插件DLL中包含其他自定义程序集
- ❌ 不要在插件中包含 `Macad.*` 程序集的副本（会被检测并跳过）
- ❌ 避免依赖 `Macad.Interaction` 或 `Macad.Presentation`（会导致循环依赖）

## 6. 完整示例：自定义形状和编辑器

### 6.1 自定义形状类

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
            // 使用OCCT创建圆柱
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

### 6.2 自定义编辑器

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
        // 创建编辑界面
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
        
        // 将panel添加到编辑器UI
    }
}
```

### 6.3 插件主类

```csharp
using Macad.Core;
using Macad.Core.Plugin;

public class CylinderPlusPlugin : IPlugin
{
    public string Name => "Cylinder Plus";
    public string Description => "添加增强的圆柱体形状";
    public Version Version => new Version(1, 0, 0);

    public void Initialize(IPluginContext context)
    {
        // 注册命名空间
        context.RegisterNamespaceAlias("CylPlus", "CylinderPlus.Types");
        
        // 注册序列化程序集
        context.RegisterSerializableAssembly(typeof(CylinderPlus).Assembly);
        
        // 注册编辑器
        context.RegisterEditor(typeof(CylinderPlusEditor));
    }

    public void Shutdown()
    {
        // 清理
    }
}
```

## 7. 测试插件

### 7.1 构建插件

```bash
dotnet build -c Release
```

### 7.2 复制到Macad插件目录

```bash
copy bin\Release\net10.0\CylinderPlus.dll "%appdata%\Macad3D\Plugins\"
```

### 7.3 启动Macad

Macad在启动时会自动：
- 扫描 `%AppData%\Macad3D\Plugins\`
- 加载所有 `.dll` 文件
- 调用每个插件的 `Initialize` 方法
- 如果出错，隔离错误并继续加载其他插件

## 8. 最佳实践

### ✅ 推荐做法

1. **隔离错误** - 在 Initialize 中使用 try/catch
2. **使用命名空间别名** - 便于版本管理和反序列化
3. **最小化依赖** - 只依赖必要的核心库
4. **版本化** - 正确设置 Version 属性
5. **文档清晰** - 说明 Description 和功能

### ❌ 避免做法

1. **不要捆绑 Macad.* 程序集** - 会被检测并跳过
2. **不要在 Initialize 中抛异常** - 会导致插件加载失败
3. **不要依赖应用程序顺序** - 插件加载顺序不保证
4. **不要修改全局状态** - 可能影响其他插件
5. **不要使用硬编码路径** - 使用 CoreContext 获取应用程序信息

## 9. 调试

### 在Visual Studio中调试

1. 编译插件
2. 复制 `.dll` 到Macad插件目录
3. 在 Visual Studio 中附加到 Macad 进程
4. 在插件代码中设置断点
5. 启动或重启Macad

### 查看加载日志

Macad在加载插件时会记录消息（可以在输出窗口看到）：
- ✅ 成功加载的插件
- ⚠️ 重复或跳过的插件
- ❌ 加载失败的插件和错误原因

## 常见问题

**Q: 插件没有被加载怎么办？**  
A: 检查：
- DLL 是否在正确的目录（`%AppData%\Macad3D\Plugins\` 或应用程序 `Plugins\` 目录）
- 是否有错误消息（查看Macad输出日志）
- 是否依赖了其他未放置的程序集

**Q: 如何卸载插件？**  
A: 删除 `.dll` 文件并重启Macad

**Q: 插件间可以互相调用吗？**  
A: 可以，通过 `PluginManager.GetPlugins<T>()` 获取其他插件实例

**Q: 如何更新插件？**  
A: 替换 `.dll` 文件并重启Macad（需要手动管理版本）
