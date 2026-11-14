using System;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core.Shapes;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class FormToolsTests
{
    FormTools _Tools;
    SketchTools _SketchTools;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new FormTools();
        _SketchTools = new SketchTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region extrude

    [Test]
    public async Task Extrude_Rectangle()
    {
        var sketch = await CreateRectangleSketch("XY", 0, 0, 10, 20);

        var result = await _Tools.Extrude(sketch.Name, 5);

        Assert.That(result.Guid, Is.EqualTo(sketch.Guid));
        Assert.That(result.Shape, Is.EqualTo(nameof(Extrude)));
        Assert.That(result.ShapeType, Is.EqualTo(nameof(ShapeType.Solid)));
        Assert.That(result.Volume, Is.EqualTo(1000).Within(1e-3));
        AssertBox(result.BoundingBox, 0, 0, 0, 10, 20, 5);
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Extrude>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Extrude_Symmetric()
    {
        var sketch = await CreateRectangleSketch("XY", 0, 0, 10, 20);

        var result = await _Tools.Extrude(sketch.Guid, 6, true);

        Assert.That(result.Volume, Is.EqualTo(1200).Within(1e-3));
        AssertBox(result.BoundingBox, 0, 0, -3, 10, 20, 3);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Extrude_NegativeDepth()
    {
        var sketch = await CreateRectangleSketch("XY", 0, 0, 10, 20);

        var result = await _Tools.Extrude(sketch.Guid, -5);

        AssertBox(result.BoundingBox, 0, 0, -5, 10, 20, 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Extrude_FollowsSketchNormal()
    {
        var sketch = await CreateRectangleSketch("XZ", 0, 0, 10, 20);

        var result = await _Tools.Extrude(sketch.Guid, 5);

        // XZ plane has normal -Y
        AssertBox(result.BoundingBox, 0, -5, 0, 10, 0, 20);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Extrude_OpenSketch_FailsAndRollsBack()
    {
        var sketch = await _SketchTools.CreateSketch();
        await _SketchTools.AddPath(sketch.Guid, [0, 0], [Line(10, 0), Line(10, 10)]);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Extrude(sketch.Guid, 5));

        Assert.That(ex.Message, Does.Contain("no closed contour"));
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Sketch>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Extrude_NotASketch_Fails()
    {
        var sketch = await CreateRectangleSketch("XY", 0, 0, 10, 20);
        await _Tools.Extrude(sketch.Guid, 5);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Extrude(sketch.Guid, 5));

        Assert.That(ex.Message, Does.Contain("not a sketch"));
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Extrude>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Extrude_InvalidDepth()
    {
        var sketch = await CreateRectangleSketch("XY", 0, 0, 10, 20);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Extrude(sketch.Guid, 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Extrude(sketch.Guid, double.NaN));
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Sketch>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region revolve

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_BarrelProfile_FullTurn()
    {
        var sketch = await CreateBarrelProfile();

        var result = await _Tools.Revolve(sketch.Guid, "y");

        Assert.That(result.Shape, Is.EqualTo(nameof(Revolve)));
        Assert.That(result.ShapeType, Is.EqualTo(nameof(ShapeType.Solid)));
        AssertBox(result.BoundingBox, -6, -6, 0, 6, 6, 50);
        // Cylinder r=6 h=10 plus frustum R=6 r=4 h=40
        double expected = Math.PI * 36 * 10 + Math.PI * 40 / 3 * (36 + 24 + 16);
        Assert.That(result.Volume, Is.EqualTo(expected).Within(expected * 1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_PartialAngle()
    {
        var full = await _Tools.Revolve((await CreateBarrelProfile()).Guid, "y");
        var half = await _Tools.Revolve((await CreateBarrelProfile()).Guid, "y", angle: 180);

        Assert.That(half.Volume, Is.EqualTo(full.Volume / 2).Within(full.Volume.Value * 1e-3));
        Assert.That(half.BoundingBox.SizeX, Is.EqualTo(12).Within(1e-3));
        Assert.That(half.BoundingBox.SizeY, Is.EqualTo(6).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_WithOffset()
    {
        // Ring with inner radius 5, outer radius 10 around an axis parallel to world Z at x=5
        var sketch = await CreateRectangleSketch("XZ", 10, 0, 15, 10);

        var result = await _Tools.Revolve(sketch.Guid, "y", [5, 0]);

        AssertBox(result.BoundingBox, -5, -10, 0, 15, 10, 10);
        double expected = Math.PI * (100 - 25) * 10;
        Assert.That(result.Volume, Is.EqualTo(expected).Within(expected * 1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_WorldAxis()
    {
        var sketch = await CreateRectangleSketch("XY", 0, 5, 10, 10);

        var result = await _Tools.Revolve(sketch.Guid, "world_x");

        AssertBox(result.BoundingBox, 0, -10, -10, 10, 10, 10);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_ProfileCrossingAxis_FailsAndRollsBack()
    {
        var sketch = await CreateRectangleSketch("XZ", -2, 0, 3, 10);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Revolve(sketch.Guid, "y"));

        Assert.That(ex.Message, Does.Contain("crosses the revolve axis"));
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Sketch>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_OpenSketch_Fails()
    {
        var sketch = await _SketchTools.CreateSketch("XZ");
        await _SketchTools.AddPath(sketch.Guid, [1, 0], [Line(5, 0), Line(5, 10)]);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Revolve(sketch.Guid, "y"));

        Assert.That(ex.Message, Does.Contain("no closed contour"));
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Sketch>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Revolve_InvalidInput()
    {
        var sketch = await CreateBarrelProfile();

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Revolve(sketch.Guid, "z"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Revolve(sketch.Guid, "y", angle: 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Revolve(sketch.Guid, "y", angle: 400));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Revolve(sketch.Guid, "y", [1, 2, 3]));
        Assert.That(FindBody(sketch.Guid).Shape, Is.InstanceOf<Sketch>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    // Barrel-like half profile on the XZ plane: x is the radius, y the height (world Z).
    async Task<SketchTools.SketchInfo> CreateBarrelProfile()
    {
        var sketch = await _SketchTools.CreateSketch("XZ", name: "Barrel");
        await _SketchTools.AddPath(sketch.Guid, [0, 0], [Line(6, 0), Line(6, 10), Line(4, 50), Line(0, 50)], closed: true);
        return sketch;
    }
}
