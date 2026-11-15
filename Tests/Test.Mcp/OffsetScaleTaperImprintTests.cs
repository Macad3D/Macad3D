using System;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

// Offset, scale, taper and imprint
[TestFixture]
[Apartment(ApartmentState.STA)]
public class OffsetScaleTaperImprintTests
{
    ModifyTools _Tools;
    PrimitiveTools _Primitives;
    TopologyTools _Topology;
    SketchTools _Sketch;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new ModifyTools();
        _Primitives = new PrimitiveTools();
        _Topology = new TopologyTools();
        _Sketch = new SketchTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region Offset

    [Test]
    public async Task Offset_Solid_Angular()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");

        var result = await _Tools.Offset("Box", 1, "angular");

        Assert.That(result.Shape, Is.EqualTo(nameof(Offset)));
        Assert.That(result.Volume, Is.EqualTo(1728).Within(1e-3));
        Assert.That(result.BoundingBox.MinX, Is.EqualTo(-1).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Offset_Solid_RoundAndShrink()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Grow");
        await _Primitives.CreateBox(10, 10, 10, name: "Shrink");

        var grown = await _Tools.Offset("Grow", 1);
        var shrunk = await _Tools.Offset("Shrink", -1);

        Assert.That(grown.Volume, Is.InRange(1000 + 600, 1728));
        Assert.That(shrunk.Volume, Is.EqualTo(512).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Offset_Sketch_KeepOriginal()
    {
        var sketch = await _Sketch.CreateSketch(name: "Profile");
        await _Sketch.AddRectangle(sketch.Guid, 0, 0, 10, 10);

        await _Tools.Offset("Profile", 1, "angular", keepOriginal: true);
        var ring = await new FormTools().Extrude("Profile", 1);

        Assert.That(ring.Volume, Is.EqualTo(144 - 100).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Offset_InvalidInput()
    {
        var box = await _Primitives.CreateBox(10, 10, 10, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Offset("Box", 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Offset("Box", 1, "sharp"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Offset("Box", 1, keepOriginal: true));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Offset("Box", -6));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Scale

    [Test]
    public async Task Scale_Uniform_AroundBodyPosition()
    {
        await _Primitives.CreateBox(10, 10, 10, 10, 0, 0, "Box");

        var result = await _Tools.Scale("Box", 0.5);

        Assert.That(result.Shape, Is.EqualTo(nameof(Scale)));
        Assert.That(result.Volume, Is.EqualTo(125).Within(1e-6));
        Assert.That(result.BoundingBox.MinX, Is.EqualTo(10).Within(1e-6));
        Assert.That(result.BoundingBox.MaxX, Is.EqualTo(15).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Scale_NonUniform()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");

        var result = await _Tools.Scale("Box", factorZ: 2);

        Assert.That(result.Volume, Is.EqualTo(2000).Within(1e-6));
        Assert.That(result.BoundingBox.SizeZ, Is.EqualTo(20).Within(1e-6));
        Assert.That(result.BoundingBox.SizeX, Is.EqualTo(10).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Scale_InvalidInput()
    {
        var box = await _Primitives.CreateBox(10, 10, 10, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Scale("Box"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Scale("Box", 2, factorX: 2));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Scale("Box", 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Scale("Box", factorY: double.PositiveInfinity));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Taper

    [Test]
    public async Task Taper_AroundEdge()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");
        var face = await FaceWithNormal("Box", 1, 0, 0);
        var bottomEdge = (await _Topology.ListEdges("Box", face: face, boxMin: [-1e9, -1e9, -1e9], boxMax: [1e9, 1e9, 0])).Single().Index;

        var result = await _Tools.Taper("Box", face, 10, baseEdge: bottomEdge);

        Assert.That(result.Shape, Is.EqualTo(nameof(Taper)));
        double wedge = 0.5 * 10 * 10 * Math.Tan(10 * Math.PI / 180) * 10;
        Assert.That(result.Volume, Is.EqualTo(1000 - wedge).Within(1e-2));
        Assert.That(result.BoundingBox.MaxZ, Is.EqualTo(10).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Taper_AroundVertex()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");
        var face = await FaceWithNormal("Box", 1, 0, 0);

        var result = await _Tools.Taper("Box", face, 10, baseVertex: [10, 0, 0]);

        Assert.That(result.Volume, Is.Not.EqualTo(1000).Within(1));
        var taper = (Taper)FindBody((await new DocumentTools().GetBody("Box")).Guid).Shape;
        Assert.That(taper.BaseEdgeOrVertex.Type, Is.EqualTo(SubshapeType.Vertex));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Taper_InvalidInput()
    {
        var box = await _Primitives.CreateBox(10, 10, 10, name: "Box");
        await _Primitives.CreateCylinder(5, 10, name: "Cyl");
        var face = await FaceWithNormal("Box", 1, 0, 0);
        var otherEdge = (await _Topology.ListEdges("Box", face: await FaceWithNormal("Box", -1, 0, 0)))[0].Index;
        var mantle = (await _Topology.ListFaces("Cyl", type: "Cylinder")).Single().Index;

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Taper("Box", face, 10));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Taper("Box", face, 10, otherEdge, [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Taper("Box", face, 0, otherEdge));
        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Taper("Box", face, 10, otherEdge));
        Assert.That(ex.Message, Does.Contain("does not bound"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Taper("Box", 6, 10, 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Taper("Cyl", mantle, 10, baseVertex: [0, 0, 0]));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Imprint

    //--------------------------------------------------------------------------------------------------

    [TestCase("raise", 4000 + 18 * Math.PI, 12)]
    [TestCase("lower", 4000 - 18 * Math.PI, 10)]
    [TestCase("cutout", 4000 - 90 * Math.PI, 10)]
    public async Task Imprint_Modes(string mode, double volume, double maxZ)
    {
        var (face, sketch) = await CreateBlockWithSketchOnTop();

        var result = await _Tools.Imprint("Block", face, sketch, mode, 2);

        Assert.That(result.Shape, Is.EqualTo(nameof(Imprint)));
        Assert.That(result.Volume, Is.EqualTo(volume).Within(1e-2));
        Assert.That(result.BoundingBox.MaxZ, Is.EqualTo(maxZ).Within(1e-3));
        Assert.That(FindBody(sketch).IsVisible, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    // A parallel sketch which is not on the face (here on XY below the top face, off-center) is projected onto it
    [Test]
    public async Task Imprint_ParallelSketch_ProjectedOntoFace()
    {
        var (face, _) = await CreateBlockWithSketchOnTop();
        var below = await _Sketch.CreateSketch(name: "Below");
        await _Sketch.AddCircle(below.Guid, 5, 15, 3);

        var result = await _Tools.Imprint("Block", face, "Below", depth: 2);

        Assert.That(result.Volume, Is.EqualTo(4000 + 18 * Math.PI).Within(1e-2));
        Assert.That(result.BoundingBox.MaxZ, Is.EqualTo(12).Within(1e-3));
        var bossTop = FindBody("Block").Shape.GetTransformedBRep().Faces()
                                       .Select(f => f.BoundingBox().MinMax())
                                       .Single(b => Math.Abs(b.minZ - 12) < 1e-3 && Math.Abs(b.maxZ - 12) < 1e-3);
        Assert.That(bossTop.minX, Is.EqualTo(2).Within(1e-3));
        Assert.That(bossTop.maxX, Is.EqualTo(8).Within(1e-3));
        Assert.That(bossTop.minY, Is.EqualTo(12).Within(1e-3));
        Assert.That(bossTop.maxY, Is.EqualTo(18).Within(1e-3));
        Assert.That(FindBody(below.Guid).Shape.GetTransformedBRep().BoundingBox().MinMax().maxZ, Is.EqualTo(0).Within(1e-6),
                    "The sketch body must not be moved.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Imprint_SketchNotParallel_Fails()
    {
        var (face, _) = await CreateBlockWithSketchOnTop();
        var side = await _Sketch.CreateSketch("XZ", name: "Side");
        await _Sketch.AddCircle(side.Guid, 10, 5, 3);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Imprint("Block", face, "Side"));

        Assert.That(ex.Message, Does.Contain("not parallel"));
        Assert.That(FindBody(side.Guid).IsVisible, Is.True);
        Assert.That((await new DocumentTools().GetBody("Block")).ShapeStack, Is.EqualTo(new[] { nameof(Box) }));
    }

    //--------------------------------------------------------------------------------------------------

    // The sketch body is linked, not copied: a changed sketch changes the imprint
    [Test]
    public async Task Imprint_SketchStaysLinked()
    {
        var (face, sketch) = await CreateBlockWithSketchOnTop();
        await _Tools.Imprint("Block", face, sketch, depth: 2);

        var imprint = (Imprint)FindBody("Block").Shape;
        Assert.That((imprint.Operands[1] as BodyShapeOperand)?.Body, Is.SameAs(FindBody(sketch)));

        await _Sketch.AddCircle(sketch, 5, 5, 1);

        Assert.That(FindBody("Block").Shape.GetBRep().Volume(), Is.EqualTo(4000 + 20 * Math.PI).Within(1e-2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Imprint_UpdateSketch()
    {
        var (face, sketch) = await CreateBlockWithSketchOnTop();
        // Created before the imprint, which renumbers the faces
        var other = await _Sketch.CreateSketch("face", body: "Block", face: face, name: "Small");
        await _Sketch.AddCircle(other.Guid, 0, 0, 1);
        await _Tools.Imprint("Block", face, sketch, depth: 2);

        var shapeStack = new ShapeStackTools();
        var result = await shapeStack.UpdateShape("Block", 1, ToParameters(new { sketch = "Small" }));

        Assert.That(result.Body.Volume, Is.EqualTo(4000 + 2 * Math.PI).Within(1e-2));
        Assert.That(result.Shape.Parameters["sketch"], Is.EqualTo("Small"));
        Assert.That(FindBody(other.Guid).IsVisible, Is.False);
        Assert.That(FindBody(sketch).IsVisible, Is.True, "The no longer used sketch is shown again.");
        Assert.ThrowsAsync<McpException>(async () => await shapeStack.UpdateShape("Block", 1, ToParameters(new { sketch = "Block" })));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Imprint_InvalidInput()
    {
        var (face, sketch) = await CreateBlockWithSketchOnTop();

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Imprint("Block", face, sketch, "emboss"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Imprint("Block", face, sketch, depth: 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Imprint("Block", face, sketch, draftAngle: 95));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Imprint("Block", face, "Block"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Imprint("Block", 6, sketch));
        Assert.That((await new DocumentTools().GetBody("Block")).ShapeStack, Is.EqualTo(new[] { nameof(Box) }));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    async Task<(int face, string sketch)> CreateBlockWithSketchOnTop()
    {
        await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var face = await FaceWithNormal("Block", 0, 0, 1);
        var sketch = await _Sketch.CreateSketch("face", body: "Block", face: face, name: "Boss");
        await _Sketch.AddCircle(sketch.Guid, 0, 0, 3);
        return (face, sketch.Guid);
    }
}
