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
public class PipeLoftToolsTests
{
    FormTools _Tools;
    SketchTools _Sketch;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new FormTools();
        _Sketch = new SketchTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region Pipe

    [Test]
    public async Task Pipe_Circle_AlongBentPath()
    {
        var path = await CreatePath([0, 0], [50, 0], [50, 50]);

        var result = await _Tools.Pipe(path, sizeX: 4);

        Assert.That(result.Shape, Is.EqualTo(nameof(Pipe)));
        Assert.That(result.ShapeType, Is.EqualTo(nameof(ShapeType.Solid)));
        Assert.That(result.Volume, Is.InRange(Math.PI * 4 * 85, Math.PI * 4 * 100));
        Assert.That(result.BoundingBox.MinZ, Is.EqualTo(-2).Within(1e-3));
        Assert.That(result.BoundingBox.MaxZ, Is.EqualTo(2).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Pipe_HollowCircle()
    {
        var path = await CreatePath([0, 0], [50, 0]);

        var result = await _Tools.Pipe(path, "hollow_circle", 10, thickness: 1);

        Assert.That(result.Volume, Is.EqualTo(Math.PI * (25 - 16) * 50).Within(1e-2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Pipe_Rectangle()
    {
        var path = await CreatePath([0, 0], [50, 0]);

        var result = await _Tools.Pipe(path, "rectangle", 4, 2);

        Assert.That(result.Volume, Is.EqualTo(400).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Pipe_CustomProfile()
    {
        var path = await CreatePath([0, 0], [50, 0]);
        var profile = await _Sketch.CreateSketch(name: "Profile");
        await _Sketch.AddCircle(profile.Guid, 0, 0, 2);

        var result = await _Tools.Pipe(path, "custom", profileBody: "Profile");

        Assert.That(result.Volume, Is.EqualTo(Math.PI * 4 * 50).Within(1e-2));
        Assert.That(FindBody(profile.Guid).IsVisible, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Pipe_InvalidInput()
    {
        var path = await CreatePath([0, 0], [50, 0]);
        var open = await _Sketch.CreateSketch(name: "Open");
        await _Sketch.AddPath(open.Guid, [0, 0], [Line(1, 0)]);
        await new PrimitiveTools().CreateBox(1, 1, 1, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path, "triangle", 4));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path, "hollow_circle", 4));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path, "hollow_circle", 4, thickness: 2));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path, "circle", 4, thickness: 1));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path, "custom"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe(path, "custom", profileBody: "Open"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Pipe("Box", sizeX: 4));
        Assert.That(FindBody(path).Shape, Is.InstanceOf<Sketch>());
        Assert.That(FindBody(open.Guid).IsVisible, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Loft

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Loft_TwoSections()
    {
        var (bottom, top) = await CreateSections();

        var result = await _Tools.Loft(bottom, [top]);

        Assert.That(result.Shape, Is.EqualTo(nameof(Loft)));
        Assert.That(result.ShapeType, Is.EqualTo(nameof(ShapeType.Solid)));
        Assert.That(result.BoundingBox.MinZ, Is.EqualTo(0).Within(1e-3));
        Assert.That(result.BoundingBox.MaxZ, Is.EqualTo(20).Within(1e-3));
        Assert.That(result.Volume, Is.InRange(Math.PI * 9 * 20, 100 * 20));
        Assert.That(FindBody(top).IsVisible, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Loft_WithoutCaps_IsThickened()
    {
        // Thickening needs smooth sections, OCCT fails at the corners of a rectangle
        var bottom = (await _Sketch.CreateSketch(name: "Bottom")).Guid;
        await _Sketch.AddCircle(bottom, 0, 0, 5);
        var top = (await _Sketch.CreateSketch(offset: 20, name: "Top")).Guid;
        await _Sketch.AddCircle(top, 0, 0, 3);
        var capped = await _Tools.Loft(bottom, [top]);
        await new DocumentTools().Undo();

        // Macad's thickening currently produces invalid solids for open lofts. The tool must either
        // return a valid thin-walled solid, or reject the result with an explanation and roll back.
        ToolsBase.ShapeResult result = null;
        try
        {
            result = await _Tools.Loft(bottom, [top], capStart: false, capEnd: false, thickness: 0.5);
        }
        catch (McpException ex)
        {
            Assert.That(ex.Message, Does.Contain("capping both ends"));
            Assert.That(FindBody(bottom).Shape, Is.InstanceOf<Sketch>());
            Assert.That(FindBody(top).IsVisible, Is.True);
        }

        if (result != null)
        {
            Assert.That(result.ShapeType, Is.EqualTo(nameof(ShapeType.Solid)));
            Assert.That(result.Volume, Is.GreaterThan(0).And.LessThan(capped.Volume / 2));
            Assert.That(((Loft)FindBody(bottom).Shape).StartCapping, Is.EqualTo(Loft.CappingMode.None));
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Loft_InvalidInput()
    {
        var (bottom, top) = await CreateSections();
        await new PrimitiveTools().CreateBox(1, 1, 1, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Loft(bottom, []));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Loft(bottom, [bottom]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Loft(bottom, ["Box"]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Loft("Box", [top]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Loft(bottom, [top], thickness: 0));
        Assert.That(FindBody(bottom).Shape, Is.InstanceOf<Sketch>());
        Assert.That(FindBody(top).IsVisible, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    async Task<string> CreatePath(params double[][] points)
    {
        var sketch = await _Sketch.CreateSketch(name: "Path");
        var segments = new SketchTools.PathSegment[points.Length - 1];
        for (int i = 1; i < points.Length; i++)
        {
            segments[i - 1] = Line(points[i][0], points[i][1]);
        }
        await _Sketch.AddPath(sketch.Guid, points[0], segments);
        return sketch.Guid;
    }

    //--------------------------------------------------------------------------------------------------

    async Task<(string bottom, string top)> CreateSections()
    {
        var bottom = await _Sketch.CreateSketch(name: "Bottom");
        await _Sketch.AddRectangle(bottom.Guid, -5, -5, 5, 5);
        var top = await _Sketch.CreateSketch(offset: 20, name: "Top");
        await _Sketch.AddCircle(top.Guid, 0, 0, 3);
        return (bottom.Guid, top.Guid);
    }
}
