using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class LayerToolsTests
{
    LayerTools _Tools;
    PrimitiveTools _Primitives;
    DocumentTools _Document;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new LayerTools();
        _Primitives = new PrimitiveTools();
        _Document = new DocumentTools();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListLayers_DefaultLayer()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "Box");

        var result = await _Tools.ListLayers();

        Assert.That(result.Layers, Has.Length.EqualTo(1));
        var layer = result.Layers[0];
        Assert.That(layer.IsDefault, Is.True);
        Assert.That(layer.IsActive, Is.True);
        Assert.That(layer.Index, Is.Zero);
        Assert.That(layer.Bodies, Is.EqualTo(new[] { "Box" }));
        Assert.That(layer.Color, Does.StartWith("#").And.Length.EqualTo(7));
        Assert.That(result.IsolateActiveLayer, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateLayer_NewBodiesGoOnActiveLayer()
    {
        var layer = await _Tools.CreateLayer("Wheels", "#804020");
        await _Primitives.CreateCylinder(4, 1.5, name: "Wheel");

        Assert.That(layer.IsActive, Is.True);
        Assert.That(layer.Index, Is.EqualTo(1));
        Assert.That(layer.Color, Is.EqualTo("#804020"));
        Assert.That(FindBody("Wheel").Layer.Name, Is.EqualTo("Wheels"));
        Assert.That((await _Document.ListBodies()).Single().Layer, Is.EqualTo("Wheels"));

        // Names stay unique, the active layer is kept if asked
        var second = await _Tools.CreateLayer("Wheels", activate: false);
        Assert.That(second.Name, Is.Not.EqualTo("Wheels"));
        Assert.That(second.IsActive, Is.False);
        Assert.That(CoreContext.Current.Document.HasUnsavedChanges, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task MoveBodiesToLayer()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "Barrel");
        await _Primitives.CreateBox(1, 1, 1, name: "Cheek");
        await _Primitives.CreateBox(1, 1, 1, name: "Axle");
        await _Tools.CreateLayer("Carriage", activate: false);

        var result = await _Tools.MoveBodiesToLayer(["Cheek", "Axle", "Cheek"], "Carriage");

        Assert.That(result.Bodies, Is.EquivalentTo(new[] { "Cheek", "Axle" }));
        Assert.That(FindBody("Barrel").Layer, Is.SameAs(CoreContext.Current.Layers.Default));
        Assert.That((await _Document.GetBody("Axle")).Layer, Is.EqualTo("Carriage"));

        // Back to the default layer, one undo step
        await _Tools.MoveBodiesToLayer(["Axle"], CoreContext.Current.Layers.Default.Name);
        Assert.That(FindBody("Axle").LayerId, Is.EqualTo(System.Guid.Empty));
        await _Document.Undo();
        Assert.That(FindBody("Axle").Layer.Name, Is.EqualTo("Carriage"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task UpdateLayer()
    {
        var created = await _Tools.CreateLayer("Parts");

        var updated = await _Tools.UpdateLayer(created.Guid, name: "Hidden parts", visible: false, locked: true, color: "#ff0000",
                                               transparency: 0.5, presentation: "wireframe", lineStyle: "dot_dash", lineThickness: "thick");

        Assert.That(updated.Name, Is.EqualTo("Hidden parts"));
        Assert.That(updated.Visible, Is.False);
        Assert.That(updated.Locked, Is.True);
        Assert.That(updated.Color, Is.EqualTo("#ff0000"));
        Assert.That(updated.Transparency, Is.EqualTo(0.5).Within(1e-6));
        Assert.That(updated.Presentation, Is.EqualTo("wireframe"));
        Assert.That(updated.LineStyle, Is.EqualTo("dot_dash"));
        Assert.That(updated.LineThickness, Is.EqualTo("thick"));

        await _Document.Undo();
        var layer = CoreContext.Current.Layers.Single(l => l.Guid.ToString() == created.Guid);
        Assert.That(layer.Name, Is.EqualTo("Parts"));
        Assert.That(layer.IsVisible, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task UpdateLayer_InvalidInput_ChangesNothing()
    {
        await _Tools.CreateLayer("Parts");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateLayer("Parts"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateLayer("Parts", visible: false, color: "red"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateLayer("Parts", visible: false, transparency: 2));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateLayer("Parts", visible: false, presentation: "shaded"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateLayer("Missing", visible: false));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateLayer("Parts", name: " "));
        Assert.That(CoreContext.Current.Layers.Single(l => l.Name == "Parts").IsVisible, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeleteLayer_MovesBodiesToDefault()
    {
        await _Tools.CreateLayer("Temp");
        await _Primitives.CreateBox(1, 1, 1, name: "Box");

        var result = await _Tools.DeleteLayer("Temp");

        Assert.That(result.Layers.Select(l => l.Name), Is.EqualTo(new[] { CoreContext.Current.Layers.Default.Name }));
        Assert.That(result.Layers[0].IsActive, Is.True);
        Assert.That(FindBody("Box").Layer, Is.SameAs(CoreContext.Current.Layers.Default));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.DeleteLayer(CoreContext.Current.Layers.Default.Name));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task SetActiveLayer()
    {
        await _Tools.CreateLayer("A");
        await _Tools.CreateLayer("B");

        var result = await _Tools.SetActiveLayer("A", isolate: true);

        Assert.That(result.Layers.Single(l => l.IsActive).Name, Is.EqualTo("A"));
        Assert.That(result.IsolateActiveLayer, Is.True);
        await _Primitives.CreateBox(1, 1, 1, name: "Box");
        Assert.That(FindBody("Box").Layer.Name, Is.EqualTo("A"));

        result = await _Tools.SetActiveLayer("B");
        Assert.That(result.IsolateActiveLayer, Is.True, "unchanged without 'isolate'");
    }
}
