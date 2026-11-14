using System;
using System.Linq;
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
public class MultiplyToolsTests
{
    MultiplyTools _Tools;
    PrimitiveTools _Primitives;
    TopologyTools _Topology;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new MultiplyTools();
        _Primitives = new PrimitiveTools();
        _Topology = new TopologyTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region Mirror

    [Test]
    public async Task Mirror_ByPlane()
    {
        var box = await _Primitives.CreateBox(10, 10, 10, 5, 0, 0, "Box");

        var result = await _Tools.Mirror("Box", planeOrigin: [0, 0, 0], planeNormal: [1, 0, 0]);

        Assert.That(result.Shape, Is.EqualTo(nameof(Mirror)));
        AssertBox(result.BoundingBox, -15, 0, 0, 15, 10, 10);
        Assert.That(result.Volume, Is.EqualTo(2000).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Mirror_ByPlane_RotatedBody()
    {
        await _Primitives.CreateBox(10, 10, 10, 5, 0, 0, "Box");
        await new TransformTools().RotateBody("Box", [0, 0, 1], 90);

        var result = await _Tools.Mirror("Box", planeOrigin: [0, 0, 0], planeNormal: [1, 0, 0]);

        // Rotated around its position (5, 0, 0), the box covers x -5..5, which is symmetric to the plane
        AssertBox(result.BoundingBox, -5, 0, 0, 5, 10, 10);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Mirror_ByFace()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");
        var face = (await _Topology.ListFaces("Box", normal: [-1, 0, 0])).Single().Index;

        var result = await _Tools.Mirror("Box", face: face);

        AssertBox(result.BoundingBox, -10, 0, 0, 10, 10, 10);
        Assert.That(result.Volume, Is.EqualTo(2000).Within(1e-3));
        Assert.That(await Solids("Box"), Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Mirror_ByFace_WithOffset_WithoutOriginal()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");
        var face = (await _Topology.ListFaces("Box", normal: [-1, 0, 0])).Single().Index;

        var result = await _Tools.Mirror("Box", face: face, offset: 2, keepOriginal: false);

        AssertBox(result.BoundingBox, -14, 0, 0, -4, 10, 10);
        Assert.That(result.Volume, Is.EqualTo(1000).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Mirror_InvalidInput()
    {
        var box = await _Primitives.CreateBox(10, 10, 10, name: "Box");
        await _Primitives.CreateCylinder(5, 10, name: "Cyl");
        await new SketchTools().CreateSketch(name: "Sketch");
        var mantle = (await _Topology.ListFaces("Cyl", type: "Cylinder")).Single().Index;

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Box"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Box", face: 0, planeNormal: [1, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Box", face: 6));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Box", planeNormal: [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Box", planeNormal: [1, 0, 0], offset: 2));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Cyl", face: mantle));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Mirror("Sketch", planeNormal: [1, 0, 0]));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Linear array

    [Test]
    public async Task LinearArray_OneDirection()
    {
        await _Primitives.CreateBox(2, 2, 2, name: "Box");

        var result = await _Tools.LinearArray("Box", 3, 5);

        Assert.That(result.Shape, Is.EqualTo(nameof(LinearArray)));
        Assert.That(await Solids("Box"), Is.EqualTo(3));
        Assert.That(result.Volume, Is.EqualTo(24).Within(1e-6));
        AssertBox(result.BoundingBox, 0, 0, 0, 12, 2, 2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task LinearArray_TwoDirections()
    {
        await _Primitives.CreateBox(2, 2, 2, name: "Box");

        var result = await _Tools.LinearArray("Box", 3, 5, 2, 4, plane: "ZX");

        Assert.That(await Solids("Box"), Is.EqualTo(6));
        // ZX: direction 1 = Z, direction 2 = X
        AssertBox(result.BoundingBox, 0, 0, 0, 6, 2, 12);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task LinearArray_BorderAndCenter()
    {
        await _Primitives.CreateBox(2, 2, 2, name: "Box");

        var result = await _Tools.LinearArray("Box", 3, 5, 3, 5, alignment: "center", border: true);

        Assert.That(await Solids("Box"), Is.EqualTo(8));
        AssertBox(result.BoundingBox, -5, -5, 0, 7, 7, 2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task LinearArray_Extent()
    {
        await _Primitives.CreateBox(2, 2, 2, name: "Box");

        var result = await _Tools.LinearArray("Box", 5, 20, distanceMode: "extent");

        AssertBox(result.BoundingBox, 0, 0, 0, 22, 2, 2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task LinearArray_InvalidInput()
    {
        var box = await _Primitives.CreateBox(2, 2, 2, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.LinearArray("Box", 0, 5));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.LinearArray("Box", 1, 5));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.LinearArray("Box", 3, double.NaN));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.LinearArray("Box", 3, 5, plane: "XX"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.LinearArray("Box", 3, 5, distanceMode: "far"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.LinearArray("Box", 3, 5, alignment: "middle"));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Circular array

    [Test]
    public async Task CircularArray_AroundWorldAxis()
    {
        await _Primitives.CreateBox(2, 2, 2, 10, -1, 0, "Box");

        var result = await _Tools.CircularArray("Box", 4, [0, 0, 0]);

        Assert.That(result.Shape, Is.EqualTo(nameof(CircularArray)));
        Assert.That(await Solids("Box"), Is.EqualTo(4));
        Assert.That(result.Volume, Is.EqualTo(32).Within(1e-6));
        AssertBox(result.BoundingBox, -12, -12, 0, 12, 12, 2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CircularArray_AroundBodyOrigin_Spokes()
    {
        await _Primitives.CreateBox(10, 1, 1, 0, 0, 5, "Spoke");

        var result = await _Tools.CircularArray("Spoke", 4);

        AssertBox(result.BoundingBox, -10, -10, 5, 10, 10, 6);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CircularArray_PartialRange_OtherPlane()
    {
        await _Primitives.CreateBox(2, 2, 2, 0, 0, 10, "Box");

        // Around the world Y axis, from 0 to 90 degrees: original on top, last copy at +X
        var result = await _Tools.CircularArray("Box", 3, [0, 0, 0], "ZX", 90);

        Assert.That(await Solids("Box"), Is.EqualTo(3));
        Assert.That(result.BoundingBox.MaxX, Is.EqualTo(12).Within(1e-3));
        Assert.That(result.BoundingBox.MaxZ, Is.EqualTo(12).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CircularArray_Sketch_CanBeExtruded()
    {
        var sketchTools = new SketchTools();
        var sketch = await sketchTools.CreateSketch(name: "Holes");
        await sketchTools.AddCircle(sketch.Guid, 10, 0, 1);

        await _Tools.CircularArray("Holes", 6, [0, 0, 0]);
        var extruded = await new FormTools().Extrude("Holes", 2);

        Assert.That(await Solids("Holes"), Is.EqualTo(6));
        Assert.That(extruded.Volume, Is.EqualTo(6 * Math.PI * 2).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CircularArray_InvalidInput()
    {
        var box = await _Primitives.CreateBox(2, 2, 2, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.CircularArray("Box", 1));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CircularArray("Box", 4, range: 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CircularArray("Box", 4, range: 400));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CircularArray("Box", 4, [0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CircularArray("Box", 4, plane: "AB"));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    async Task<int> Solids(string body) => (await _Topology.Measure(body)).Solids;
}
