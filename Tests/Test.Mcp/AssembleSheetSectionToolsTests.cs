using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

// Tools for the joint, sheet, cross section and reference modifiers.
[TestFixture]
[Apartment(ApartmentState.STA)]
public class AssembleSheetSectionToolsTests
{
    AssembleTools _Assemble;
    SheetTools _Sheet;
    ModifyTools _Modify;
    DocumentTools _Document;
    PrimitiveTools _Primitives;
    TopologyTools _Topology;
    ShapeStackTools _Stack;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Assemble = new AssembleTools();
        _Sheet = new SheetTools();
        _Modify = new ModifyTools();
        _Document = new DocumentTools();
        _Primitives = new PrimitiveTools();
        _Topology = new TopologyTools();
        _Stack = new ShapeStackTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region Joints

    [Test]
    public async Task HalvedJoint()
    {
        await CreateCrossingBeams();

        var result = await _Assemble.HalvedJoint("A", "B");

        Assert.That(result.First.Shape, Is.EqualTo(nameof(Core.Shapes.HalvedJoint)));
        Assert.That(result.Second.Shape, Is.EqualTo(nameof(Core.Shapes.HalvedJoint)));
        Assert.That(result.First.Volume, Is.EqualTo(4500).Within(1e-3));
        Assert.That(result.Second.Volume, Is.EqualTo(4500).Within(1e-3));
        Assert.That(CoreContext.Current.UndoHandler.CanUndo, Is.True);

        // The ratio is shared by both sides, the bodies still fill the overlap together
        await Update("A", 1, new { ratio = 0.3 });
        Assert.That(Volume("A"), Is.Not.EqualTo(4500).Within(1));
        Assert.That(Volume("A") + Volume("B"), Is.EqualTo(9000).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task BoxJoint()
    {
        await _Primitives.CreateBox(50, 10, 10, 0, 0, 0, "A");
        await _Primitives.CreateBox(10, 50, 10, 0, 0, 0, "B");

        var result = await _Assemble.BoxJoint("A", "B", boxCount: 4);

        Assert.That(result.First.Volume + result.Second.Volume, Is.EqualTo(9000).Within(1e-3));
        Assert.That(result.First.Volume, Is.LessThan(5000));
        Assert.That(result.Second.Volume, Is.LessThan(5000));
        var stack = await _Stack.ListShapeStack("A");
        Assert.That(stack[1].Parameters["boxCount"], Is.EqualTo(4));

        await Update("A", 1, new { boxCount = 2 });
        Assert.That(Volume("A") + Volume("B"), Is.EqualTo(9000).Within(1e-3));
        Assert.ThrowsAsync<McpException>(async () => await Update("A", 1, new { boxCount = 1 }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Joints_InvalidInput()
    {
        await _Primitives.CreateBox(10, 10, 10, 0, 0, 0, "A");
        await _Primitives.CreateBox(10, 10, 10, 50, 0, 0, "Far");

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Assemble.HalvedJoint("A", "Far"));
        Assert.That(ex.Message, Does.Contain("do not overlap"));
        Assert.ThrowsAsync<McpException>(async () => await _Assemble.BoxJoint("A", "A"));
        Assert.ThrowsAsync<McpException>(async () => await _Assemble.BoxJoint("A", "Far", boxCount: 1));
        Assert.ThrowsAsync<McpException>(async () => await _Assemble.HalvedJoint("A", "Far", ratio: 1));
        Assert.That(FindBody("A").Shape, Is.InstanceOf<Box>());
        Assert.That(FindBody("Far").Shape, Is.InstanceOf<Box>());
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Sheet

    [Test]
    public async Task FlangeAndUnfold()
    {
        await _Primitives.CreateBox(20, 10, 1, 0, 0, 0, "Sheet");
        var end = (await _Topology.ListFaces("Sheet", normal: [1, 0, 0])).Single().Index;

        var flange = await _Sheet.FlangeSheet("Sheet", end, length: 10, radius: 1);

        Assert.That(flange.Shape, Is.EqualTo(nameof(FlangeSheet)));
        Assert.That(flange.BoundingBox.SizeZ, Is.GreaterThan(10));
        var flangedVolume = flange.Volume!.Value;

        var flat = await _Sheet.UnfoldSheet("Sheet");

        Assert.That(flat.Shape, Is.EqualTo(nameof(UnfoldSheet)));
        Assert.That(flat.BoundingBox.SizeZ, Is.EqualTo(1).Within(1e-3));
        Assert.That(flat.BoundingBox.SizeX, Is.GreaterThan(30));
        Assert.That(flat.Volume, Is.EqualTo(flangedVolume).Within(flangedVolume * 0.02));

        var update = await Update("Sheet", 1, new { length = 5 });
        Assert.That(update.Body.BoundingBox.SizeX, Is.LessThan(flat.BoundingBox.SizeX - 4));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Flange_InvalidInput()
    {
        await _Primitives.CreateBox(20, 10, 1, 0, 0, 0, "Sheet");
        await _Primitives.CreateCylinder(5, 10, name: "Round");
        var end = (await _Topology.ListFaces("Sheet", normal: [1, 0, 0])).Single().Index;
        var mantle = (await _Topology.ListFaces("Round", type: "Cylinder")).Single().Index;

        Assert.ThrowsAsync<McpException>(async () => await _Sheet.FlangeSheet("Sheet", end, angle: 0));
        Assert.ThrowsAsync<McpException>(async () => await _Sheet.FlangeSheet("Sheet", end, angle: 190));
        Assert.ThrowsAsync<McpException>(async () => await _Sheet.FlangeSheet("Sheet", end, relief: "round"));
        Assert.ThrowsAsync<McpException>(async () => await _Sheet.FlangeSheet("Sheet", 99));
        Assert.ThrowsAsync<McpException>(async () => await _Sheet.FlangeSheet("Round", mantle));
        Assert.That(FindBody("Sheet").Shape, Is.InstanceOf<Box>());
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Cross section

    [Test]
    public async Task CrossSection()
    {
        await _Primitives.CreateBox(10, 20, 30, 0, 0, 0, "Block");

        var section = await _Modify.CrossSection("Block", [0, 0, 1]);

        Assert.That(section.Shape, Is.EqualTo(nameof(Core.Shapes.CrossSection)));
        Assert.That(section.ShapeType, Is.EqualTo("Sketch"));
        Assert.That(section.BoundingBox.MinZ, Is.EqualTo(15).Within(1e-6));
        Assert.That(section.BoundingBox.MaxZ, Is.EqualTo(15).Within(1e-6));
        Assert.That(section.BoundingBox.SizeY, Is.EqualTo(20).Within(1e-6));

        var moved = await Update("Block", 1, new { planeOrigin = new[] { 0.0, 0, 5 } });
        Assert.That(moved.Body.BoundingBox.MinZ, Is.EqualTo(5).Within(1e-6));
        Assert.That(moved.Shape.Parameters["planeNormal"], Is.EqualTo(new[] { 0.0, 0, 1 }));

        // The section can be used like a sketch
        var extruded = await new FormTools().Extrude("Block", 2);
        Assert.That(extruded.Volume, Is.EqualTo(10 * 20 * 2).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CrossSection_InvalidInput()
    {
        await _Primitives.CreateBox(10, 20, 30, 0, 0, 0, "Block");

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Modify.CrossSection("Block", [0, 0, 1], [0, 0, 100]));
        Assert.That(ex.Message, Does.Contain("does not cut"));
        Assert.ThrowsAsync<McpException>(async () => await _Modify.CrossSection("Block", [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Modify.CrossSection("Block", [0, 0, 1], filter: "middle"));
        Assert.That(FindBody("Block").Shape, Is.InstanceOf<Box>());
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Reference

    [Test]
    public async Task CreateReference_FollowsSource()
    {
        await _Primitives.CreateBox(10, 10, 10, 0, 0, 0, "Part");

        var reference = await _Document.CreateReference("Part");

        Assert.That(reference.Name, Is.EqualTo("Part Reference"));
        await new TransformTools().MoveBody(reference.Guid, [20, 0, 0]);
        var edges = await _Topology.ListEdges("Part", direction: [0, 0, 1]);
        await _Modify.Chamfer("Part", edges.Select(e => e.Index).ToArray(), 1);

        Assert.That(Volume("Part Reference"), Is.EqualTo(Volume("Part")).Within(1e-6));
        Assert.That(Volume("Part"), Is.LessThan(1000));
        var measure = await _Topology.Measure("Part Reference");
        Assert.That(measure.BoundingBox.MinX, Is.EqualTo(20).Within(1e-6));
        Assert.That(FindBody("Part").IsVisible, Is.True);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Task<ShapeStackTools.ShapeUpdateResult> Update(string body, int index, object values)
        => _Stack.UpdateShape(body, index, ToParameters(values));

    //--------------------------------------------------------------------------------------------------

    // Two beams crossing each other, overlapping in a 10 x 10 x 10 cube.
    async Task CreateCrossingBeams()
    {
        await _Primitives.CreateBox(50, 10, 10, 0, 0, 0, "A");
        await _Primitives.CreateBox(10, 50, 10, 20, -20, 0, "B");
    }
}
