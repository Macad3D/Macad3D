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

[TestFixture]
[Apartment(ApartmentState.STA)]
public class ShapeStackToolsTests
{
    ShapeStackTools _Tools;
    PrimitiveTools _Primitives;
    SketchTools _Sketch;
    FormTools _Form;
    ModifyTools _Modify;
    MultiplyTools _Multiply;
    TopologyTools _Topology;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new ShapeStackTools();
        _Primitives = new PrimitiveTools();
        _Sketch = new SketchTools();
        _Form = new FormTools();
        _Modify = new ModifyTools();
        _Multiply = new MultiplyTools();
        _Topology = new TopologyTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region list_shape_stack, remove_shape

    [Test]
    public async Task ListShapeStack()
    {
        await CreateExtrudedRectangle();
        var edges = await _Topology.ListEdges("Part", direction: [0, 0, 1]);
        await _Modify.Fillet("Part", edges.Select(e => e.Index).ToArray(), 1);

        var stack = await _Tools.ListShapeStack("Part");

        Assert.That(stack.Select(s => s.Type), Is.EqualTo(new[] { "Sketch", "Extrude", "Fillet" }));
        Assert.That(stack.Select(s => s.Index), Is.EqualTo(new[] { 0, 1, 2 }));
        Assert.That(stack[2].IsCurrent, Is.True);
        Assert.That(stack[0].Parameters, Is.Empty);
        Assert.That(stack[1].Parameters["depth"], Is.EqualTo(5));
        Assert.That(stack[1].Parameters["symmetric"], Is.EqualTo(false));
        Assert.That(stack[2].Parameters["radius"], Is.EqualTo(1));
        Assert.That(stack.All(s => !s.HasErrors), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListShapeStack_ShowsOperandBodies()
    {
        await _Primitives.CreateBox(20, 20, 10, name: "Block");
        await _Primitives.CreateCylinder(3, 10, 10, 10, 0, "Bore");
        await _Modify.BooleanCut("Block", ["Bore"]);

        var stack = await _Tools.ListShapeStack("Block");

        Assert.That(stack[1].OperandBodies, Is.EqualTo(new[] { "Bore" }));
        Assert.That(stack[1].Parameters["operands"], Is.EqualTo(new[] { "Bore" }));
        Assert.That(stack[0].Parameters, Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RemoveShape()
    {
        await CreateExtrudedRectangle();
        var edges = await _Topology.ListEdges("Part", direction: [0, 0, 1]);
        await _Modify.Fillet("Part", edges.Select(e => e.Index).ToArray(), 1);

        var result = await _Tools.RemoveShape("Part", 2);

        Assert.That(result.Shape, Is.EqualTo(nameof(Extrude)));
        Assert.That(result.Volume, Is.EqualTo(1000).Within(1e-6));
        Assert.That(CoreContext.Current.UndoHandler.CanUndo, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RemoveShape_ShowsUnusedOperands()
    {
        await _Primitives.CreateBox(20, 20, 10, name: "Block");
        await _Primitives.CreateBox(20, 20, 10, name: "Other");
        await _Primitives.CreateCylinder(3, 10, 10, 10, 0, "Bore");
        await _Primitives.CreateCylinder(2, 10, 5, 5, 0, "Shared");
        await _Modify.BooleanCut("Block", ["Bore", "Shared"]);
        await _Modify.BooleanCut("Other", ["Shared"]);

        await _Tools.RemoveShape("Block", 1);

        Assert.That(FindBody("Bore").IsVisible, Is.True);
        Assert.That(FindBody("Shared").IsVisible, Is.False, "still used by 'Other'");

        CoreContext.Current.UndoHandler.DoUndo(1);
        Assert.That(FindBody("Bore").IsVisible, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RemoveShape_InvalidIndex()
    {
        await CreateExtrudedRectangle();

        Assert.ThrowsAsync<McpException>(async () => await _Tools.RemoveShape("Part", 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.RemoveShape("Part", 2));
        Assert.That(FindBody("Part").Shape, Is.InstanceOf<Extrude>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Forms (ticket 17)

    [Test]
    public async Task Update_ExtrudeDepth_BelowFillet()
    {
        await CreateExtrudedRectangle();
        var edges = await _Topology.ListEdges("Part", direction: [0, 0, 1]);
        await _Modify.Fillet("Part", edges.Select(e => e.Index).ToArray(), 1);

        var result = await Update("Part", 1, new { depth = 12, symmetric = true });

        Assert.That(result.Shape.Parameters["depth"], Is.EqualTo(12));
        Assert.That(result.Body.Shape, Is.EqualTo(nameof(Fillet)));
        Assert.That(result.Body.BoundingBox.MinZ, Is.EqualTo(-6).Within(1e-3));
        Assert.That(result.Body.BoundingBox.MaxZ, Is.EqualTo(6).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_RevolveAngleAndOffset()
    {
        await CreateBarrel();
        var full = FindBody("Barrel").Shape.GetBRep().Volume();

        var half = await Update("Barrel", 1, new { angle = 180 });
        Assert.That(half.Body.Volume, Is.EqualTo(full / 2).Within(full * 1e-3));

        var ring = await Update("Barrel", 1, new { angle = 360, offset = new[] { -2.0, 0 } });
        Assert.That(ring.Body.BoundingBox.SizeX, Is.EqualTo(2 * 8).Within(1e-3));
        Assert.That(ring.Shape.Parameters["offset"], Is.EqualTo(new[] { -2.0, 0 }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task EditSketchBelowRevolve_UpdatesSolid()
    {
        await CreateBarrel();
        var info = await _Sketch.GetInfo("Barrel");
        var muzzle = info.Points.Single(p => Math.Abs(p.X - 4) < 1e-6 && Math.Abs(p.Y - 50) < 1e-6);
        var top = info.Points.Single(p => Math.Abs(p.X) < 1e-6 && Math.Abs(p.Y - 50) < 1e-6);

        await _Sketch.MovePoints("Barrel", [new SketchTools.PointMove { Index = muzzle.Index, X = 4, Y = 60 },
                                            new SketchTools.PointMove { Index = top.Index, X = 0, Y = 60 }]);

        var measure = await _Topology.Measure("Barrel");
        Assert.That(measure.Shape, Is.EqualTo(nameof(Revolve)));
        Assert.That(measure.BoundingBox.MaxZ, Is.EqualTo(60).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_RevolveAxis_RoundTrips()
    {
        await CreateBarrel();
        var revolve = (Revolve)FindBody("Barrel").Shape;

        foreach (var axis in Enum.GetValues<Revolve.RevolveAxis>())
        {
            revolve.Axis = axis;
            var listed = (string)(await _Tools.ListShapeStack("Barrel"))[1].Parameters["axis"];
            revolve.Axis = Revolve.RevolveAxis.LocalY;
            CoreContext.Current.UndoHandler.Commit();

            // Every listed axis is accepted, an unusable one is rejected with the reason
            try
            {
                await Update("Barrel", 1, new { axis = listed });
                Assert.That(revolve.Axis, Is.EqualTo(axis), listed);
            }
            catch (McpException ex)
            {
                Assert.That(ex.Message, Does.Not.Contain("Unknown"), listed);
                Assert.That(revolve.Axis, Is.EqualTo(Revolve.RevolveAxis.LocalY), listed);
            }
            revolve.Axis = Revolve.RevolveAxis.LocalY;
            CoreContext.Current.UndoHandler.Commit();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_RevolveOffsetCrossingProfile_IsReverted()
    {
        await CreateBarrel();
        var volume = FindBody("Barrel").Shape.GetBRep().Volume();

        var ex = Assert.ThrowsAsync<McpException>(async () => await Update("Barrel", 1, new { offset = new[] { 3.0, 0 } }));

        Assert.That(ex.Message, Does.Contain("crosses the revolve axis"));
        Assert.That(((Revolve)FindBody("Barrel").Shape).Offset.X, Is.EqualTo(0));
        AssertUnchanged("Barrel", volume);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_PipeAndLoft()
    {
        var path = await _Sketch.CreateSketch(name: "Path");
        await _Sketch.AddPath(path.Guid, [0, 0], [new SketchTools.PathSegment { Type = "line", To = [50, 0] }]);
        await _Form.Pipe("Path", sizeX: 4);

        var pipe = await Update("Path", 1, new { sizeX = 6 });
        Assert.That(pipe.Body.Volume, Is.EqualTo(Math.PI * 9 * 50).Within(1e-2));
        var ellipse = await Update("Path", 1, new { sizeY = 2 });
        Assert.That(ellipse.Body.Volume, Is.EqualTo(Math.PI * 3 * 1 * 50).Within(1e-2));
        Assert.That(ellipse.Shape.Parameters["sizeY"], Is.EqualTo(2));

        var bottom = await _Sketch.CreateSketch(name: "Bottom");
        await _Sketch.AddRectangle(bottom.Guid, -5, -5, 5, 5);
        var topSketch = await _Sketch.CreateSketch(offset: 20, name: "Top");
        await _Sketch.AddRectangle(topSketch.Guid, -3, -3, 3, 3);
        await _Form.Loft("Bottom", ["Top"]);
        var loft = await Update("Bottom", 1, new { thickness = 2 });
        Assert.That(loft.Shape.Parameters["thickness"], Is.EqualTo(2));
        Assert.That(loft.Shape.Parameters["capEnd"], Is.EqualTo(true));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_PipeProfile()
    {
        var path = await _Sketch.CreateSketch(name: "Path");
        await _Sketch.AddPath(path.Guid, [0, 0], [new SketchTools.PathSegment { Type = "line", To = [50, 0] }]);
        await _Form.Pipe("Path", sizeX: 4);
        var profile = await _Sketch.CreateSketch(name: "Profile");
        await _Sketch.AddCircle(profile.Guid, 0, 0, 1);

        var hollow = await Update("Path", 1, new { profile = "hollow_circle", thickness = 1 });
        Assert.That(hollow.Body.Volume, Is.EqualTo(Math.PI * (4 - 1) * 50).Within(1e-2));
        Assert.That(hollow.Shape.Parameters["profile"], Is.EqualTo("hollow_circle"));
        Assert.ThrowsAsync<McpException>(async () => await Update("Path", 1, new { thickness = 2 }));

        var custom = await Update("Path", 1, new { profile = "custom", profileBody = "Profile" });
        Assert.That(custom.Body.Volume, Is.EqualTo(Math.PI * 1 * 50).Within(1e-2));
        Assert.That(custom.Shape.Parameters["profileBody"], Is.EqualTo("Profile"));
        Assert.That(custom.Shape.OperandBodies, Is.EqualTo(new[] { "Profile" }));
        Assert.That(FindBody("Profile").IsVisible, Is.False);

        // Back to a built-in profile, the profile body is no longer used
        var circle = await Update("Path", 1, new { profile = "circle", sizeX = 4 });
        Assert.That(circle.Body.Volume, Is.EqualTo(Math.PI * 4 * 50).Within(1e-2));
        Assert.That(circle.Shape.OperandBodies, Is.Empty);
        Assert.That(FindBody("Profile").IsVisible, Is.True);

        Assert.ThrowsAsync<McpException>(async () => await Update("Path", 1, new { profile = "custom" }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Path", 1, new { profile = "circle", profileBody = "Profile" }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Path", 1, new { profileBody = "Path" }));
        Assert.That(((Pipe)FindBody("Path").Shape).Profile, Is.EqualTo(Pipe.ProfileType.Circle));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_LoftSections()
    {
        var bottom = await _Sketch.CreateSketch(name: "Bottom");
        await _Sketch.AddRectangle(bottom.Guid, -5, -5, 5, 5);
        var top = await _Sketch.CreateSketch(offset: 20, name: "Top");
        await _Sketch.AddRectangle(top.Guid, -3, -3, 3, 3);
        var higher = await _Sketch.CreateSketch(offset: 30, name: "Higher");
        await _Sketch.AddRectangle(higher.Guid, -3, -3, 3, 3);
        await _Form.Loft("Bottom", ["Top"]);

        var result = await Update("Bottom", 1, new { sections = new[] { "Higher" } });

        Assert.That(result.Body.BoundingBox.MaxZ, Is.EqualTo(30).Within(1e-3));
        Assert.That(result.Shape.Parameters["sections"], Is.EqualTo(new[] { "Higher" }));
        Assert.That(FindBody("Top").IsVisible, Is.True);
        Assert.That(FindBody("Higher").IsVisible, Is.False);

        Assert.ThrowsAsync<McpException>(async () => await Update("Bottom", 1, new { sections = Array.Empty<string>() }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Bottom", 1, new { sections = new[] { "Bottom" } }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Bottom", 1, new { sections = new[] { "Top", "Top" } }));
        Assert.That(GetOperandNames("Bottom"), Is.EqualTo(new[] { "Higher" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_InvalidValues_AreReported()
    {
        await CreateExtrudedRectangle();

        Assert.ThrowsAsync<McpException>(async () => await Update("Part", 1, new { depth = 0 }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Part", 1, new { depth = "deep" }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Part", 1, new { height = 3 }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Part", 0, new { depth = 3 }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Part", 5, new { depth = 3 }));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.UpdateShape("Part", 1, []));
        Assert.That(((Extrude)FindBody("Part").Shape).Depth, Is.EqualTo(5));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Modifiers (ticket 18)

    [Test]
    public async Task Update_Primitive_IsRefused()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "Box");

        Assert.ThrowsAsync<McpException>(async () => await Update("Box", 0, new { height = 20 }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_BooleanOperands()
    {
        await _Primitives.CreateBox(20, 20, 10, name: "Block");
        await _Primitives.CreateCylinder(3, 10, 10, 10, 0, "Bore");
        await _Primitives.CreateCylinder(2, 10, 5, 5, 0, "Small");
        await _Modify.BooleanCut("Block", ["Bore"]);

        var result = await Update("Block", 1, new { operands = new[] { "Bore", "Small" } });

        Assert.That(result.Body.Volume, Is.EqualTo(4000 - Math.PI * 9 * 10 - Math.PI * 4 * 10).Within(1e-2));
        Assert.That(FindBody("Small").IsVisible, Is.False);

        // A replaced operand is no longer used and shown again
        await Update("Block", 1, new { operands = new[] { "Small" } });
        Assert.That(FindBody("Bore").IsVisible, Is.True);
        Assert.That(FindBody("Small").IsVisible, Is.False);
        Assert.ThrowsAsync<McpException>(async () => await Update("Block", 1, new { operands = new[] { "Block" } }));
        Assert.ThrowsAsync<McpException>(async () => await Update("Block", 1, new { operands = Array.Empty<string>() }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_FilletAndChamfer()
    {
        await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var top = await _Topology.ListEdges("Block", boxMin: [-1e9, -1e9, 10], boxMax: [1e9, 1e9, 1e9]);
        await _Modify.Chamfer("Block", [top[0].Index], 2);

        var twoDistances = await Update("Block", 1, new { secondDistance = 4 });
        Assert.That(twoDistances.Body.Volume, Is.EqualTo(4000 - 0.5 * 2 * 4 * 20).Within(1e-6));
        var symmetric = await Update("Block", 1, new { secondDistance = (double?)null, distance = 1 });
        Assert.That(symmetric.Body.Volume, Is.EqualTo(4000 - 0.5 * 20).Within(1e-6));
        var angled = await Update("Block", 1, new { angle = 45 });
        Assert.That(angled.Shape.Parameters["angle"], Is.EqualTo(45));

        await _Tools.RemoveShape("Block", 1);
        await _Modify.Fillet("Block", [top[0].Index], 1);
        var fillet = await Update("Block", 1, new { radius = 2 });
        Assert.That(fillet.Shape.Parameters["radius"], Is.EqualTo(2));

        var volume = FindBody("Block").Shape.GetBRep().Volume();
        Assert.ThrowsAsync<McpException>(async () => await Update("Block", 1, new { radius = 15 }));
        AssertUnchanged("Block", volume);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_MirrorPlane()
    {
        await _Primitives.CreateBox(10, 10, 10, 0, 0, 0, "M");
        await new TransformTools().MoveBody("M", [100, 0, 0]);
        var face = (await _Topology.ListFaces("M", normal: [-1, 0, 0])).Single().Index;
        await _Multiply.Mirror("M", face: face);

        // The face plane is listed in world coordinates
        var stack = await _Tools.ListShapeStack("M");
        Assert.That(((double[])stack[1].Parameters["planeOrigin"])[0], Is.EqualTo(100).Within(1e-6));
        Assert.That(Math.Abs(((double[])stack[1].Parameters["planeNormal"])[0]), Is.EqualTo(1).Within(1e-9));

        // Moving the plane turns the face mirror into a plane mirror
        var moved = await Update("M", 1, new { planeOrigin = new[] { 95.0, 0, 0 } });
        Assert.That(moved.Body.BoundingBox.MinX, Is.EqualTo(80).Within(1e-3));
        Assert.That(moved.Shape.Parameters["offset"], Is.Null);
        Assert.ThrowsAsync<McpException>(async () => await Update("M", 1, new { offset = 1 }));

        var below = await Update("M", 1, new { planeOrigin = new[] { 0.0, 0, 0 }, planeNormal = new[] { 0.0, 0, 1 } });
        Assert.That(below.Body.BoundingBox.MinZ, Is.EqualTo(-10).Within(1e-3));
        Assert.That(below.Body.BoundingBox.MinX, Is.EqualTo(100).Within(1e-3));
        Assert.That(below.Shape.Parameters["planeNormal"], Is.EqualTo(new[] { 0.0, 0, 1 }));
        Assert.ThrowsAsync<McpException>(async () => await Update("M", 1, new { planeNormal = new[] { 0.0, 0, 0 } }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_MirrorAndArrays()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "M");
        var face = (await _Topology.ListFaces("M", normal: [-1, 0, 0])).Single().Index;
        await _Multiply.Mirror("M", face: face);
        var mirror = await Update("M", 1, new { offset = 2, keepOriginal = false });
        Assert.That(mirror.Body.BoundingBox.MinX, Is.EqualTo(-14).Within(1e-3));

        await _Primitives.CreateBox(2, 2, 2, name: "L");
        await _Multiply.LinearArray("L", 3, 5);
        var linear = await Update("L", 1, new { quantity1 = 4, distanceMode = "spacing", distance1 = 1 });
        Assert.That(linear.Body.BoundingBox.MaxX, Is.EqualTo(4 * 2 + 3 * 1).Within(1e-3));
        Assert.That(linear.Shape.Parameters["distanceMode"], Is.EqualTo("spacing"));
        Assert.ThrowsAsync<McpException>(async () => await Update("L", 1, new { quantity1 = 0 }));
        Assert.ThrowsAsync<McpException>(async () => await Update("L", 1, new { quantity1 = 1 }));

        await _Primitives.CreateBox(2, 2, 2, 10, -1, 0, "C");
        await _Multiply.CircularArray("C", 4, [0, 0, 0]);
        var circular = await Update("C", 1, new { quantity = 3, range = 90 });
        Assert.That(circular.Body.BoundingBox.MinX, Is.EqualTo(-1).Within(1e-3));
        Assert.That(circular.Shape.Parameters["center"], Is.EqualTo(new[] { 0.0, 0, 0 }).Within(1e-9));
        var moved = await Update("C", 1, new { center = new[] { 5.0, 0, 0 }, range = 360, quantity = 2 });
        Assert.That(moved.Body.BoundingBox.MinX, Is.EqualTo(-2).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Update_OffsetScaleTaperImprint()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "O");
        await _Modify.Offset("O", 1, "angular");
        var offset = await Update("O", 1, new { distance = 2 });
        Assert.That(offset.Body.Volume, Is.EqualTo(14 * 14 * 14).Within(1e-3));
        Assert.That(offset.Shape.Parameters["corner"], Is.EqualTo("angular"));

        await _Primitives.CreateBox(10, 10, 10, name: "S");
        await _Modify.Scale("S", 2);
        var scale = await Update("S", 1, new { factorZ = 3 });
        Assert.That(scale.Body.BoundingBox.SizeZ, Is.EqualTo(30).Within(1e-6));
        Assert.That(scale.Body.BoundingBox.SizeX, Is.EqualTo(20).Within(1e-6));
        Assert.That(scale.Shape.Parameters["factor"], Is.Null);
        Assert.ThrowsAsync<McpException>(async () => await Update("S", 1, new { factor = 0 }));

        await _Primitives.CreateBox(10, 10, 10, name: "T");
        var face = (await _Topology.ListFaces("T", normal: [1, 0, 0])).Single().Index;
        await _Modify.Taper("T", face, 10, baseVertex: [10, 0, 0]);
        var taper = await Update("T", 1, new { angle = 5 });
        Assert.That(taper.Shape.Parameters["angle"], Is.EqualTo(5));
        Assert.ThrowsAsync<McpException>(async () => await Update("T", 1, new { angle = 95 }));

        await _Primitives.CreateBox(20, 20, 10, name: "I");
        var top = (await _Topology.ListFaces("I", normal: [0, 0, 1])).Single().Index;
        var sketch = await _Sketch.CreateSketch("face", body: "I", face: top, name: "ISketch");
        await _Sketch.AddCircle(sketch.Guid, 0, 0, 3);
        await _Modify.Imprint("I", top, "ISketch", depth: 2);
        var imprint = await Update("I", 1, new { mode = "lower", depth = 3 });
        Assert.That(imprint.Body.Volume, Is.EqualTo(4000 - Math.PI * 9 * 3).Within(1e-2));
        Assert.ThrowsAsync<McpException>(async () => await Update("I", 1, new { mode = "default" }));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Task<ShapeStackTools.ShapeUpdateResult> Update(string body, int index, object values)
        => _Tools.UpdateShape(body, index, ToParameters(values));

    //--------------------------------------------------------------------------------------------------

    async Task CreateExtrudedRectangle(string name = "Part")
    {
        var sketch = await _Sketch.CreateSketch(name: name);
        await _Sketch.AddRectangle(sketch.Guid, 0, 0, 10, 20);
        await _Form.Extrude(name, 5);
    }

    //--------------------------------------------------------------------------------------------------

    async Task CreateBarrel()
    {
        var sketch = await _Sketch.CreateSketch("XZ", name: "Barrel");
        await _Sketch.AddPath(sketch.Guid, [0, 0], [
            new SketchTools.PathSegment { Type = "line", To = [6, 0] },
            new SketchTools.PathSegment { Type = "line", To = [4, 50] },
            new SketchTools.PathSegment { Type = "line", To = [0, 50] }], closed: true);
        await _Form.Revolve("Barrel", "y");
    }

    //--------------------------------------------------------------------------------------------------

    void AssertUnchanged(string body, double volume)
    {
        Assert.That(FindBody(body).Shape.GetBRep().Volume(), Is.EqualTo(volume).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    string[] GetOperandNames(string body)
        => ((ModifierBase)FindBody(body).Shape).Operands.OfType<BodyShapeOperand>().Select(op => op.Body.Name).ToArray();
}
