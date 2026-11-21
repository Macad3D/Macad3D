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
public class ModifyToolsTests
{
    ModifyTools _Tools;
    PrimitiveTools _Primitives;
    DocumentTools _Documents;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new ModifyTools();
        _Primitives = new PrimitiveTools();
        _Documents = new DocumentTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region Booleans

    [Test]
    public async Task Cut_CylinderFromBox()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var bore = await _Primitives.CreateCylinder(3, 10, 10, 10, 0, "Bore");

        var result = await _Tools.BooleanCut(box.Name, [bore.Name]);

        Assert.That(result.Guid, Is.EqualTo(box.Guid));
        Assert.That(result.Shape, Is.EqualTo(nameof(BooleanCut)));
        Assert.That(result.Volume, Is.EqualTo(20 * 20 * 10 - Math.PI * 9 * 10).Within(1e-2));
        Assert.That(FindBody(bore.Guid).IsVisible, Is.False);
        Assert.That(FindBody(box.Guid).IsVisible, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Fuse_MultipleOperands()
    {
        var a = await _Primitives.CreateBox(10, 10, 10);
        var b = await _Primitives.CreateBox(10, 10, 10, 5, 0, 0);
        var c = await _Primitives.CreateBox(10, 10, 10, 10, 0, 0);

        var result = await _Tools.BooleanFuse(a.Guid, [b.Guid, c.Guid]);

        Assert.That(result.Shape, Is.EqualTo(nameof(BooleanFuse)));
        Assert.That(result.Volume, Is.EqualTo(2000).Within(1e-3));
        Assert.That(result.BoundingBox.SizeX, Is.EqualTo(20).Within(1e-3));
        Assert.That(FindBody(b.Guid).IsVisible, Is.False);
        Assert.That(FindBody(c.Guid).IsVisible, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Common()
    {
        var a = await _Primitives.CreateBox(10, 10, 10);
        var b = await _Primitives.CreateBox(10, 10, 10, 5, 5, 0);

        var result = await _Tools.BooleanCommon(a.Guid, [b.Guid]);

        Assert.That(result.Shape, Is.EqualTo(nameof(BooleanCommon)));
        Assert.That(result.Volume, Is.EqualTo(250).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("The common of more than two bodies keeps only the volume shared by all of them.")]
    public async Task Common_MultipleOperands()
    {
        var a = await _Primitives.CreateBox(10, 10, 10);
        var b = await _Primitives.CreateBox(10, 10, 10, 5, 0, 0);
        var c = await _Primitives.CreateBox(10, 10, 10, 0, 5, 0);

        var result = await _Tools.BooleanCommon(a.Guid, [b.Guid, c.Guid]);

        Assert.That(result.Shape, Is.EqualTo(nameof(BooleanCommon)));
        Assert.That(result.Volume, Is.EqualTo(250).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListBodies_ShowsUsingBody()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var bore = await _Primitives.CreateCylinder(3, 10, 10, 10, 0, "Bore");
        await _Tools.BooleanCut(box.Name, [bore.Name]);

        var bodies = await _Documents.ListBodies();

        var boreSummary = bodies.Single(b => b.Name == "Bore");
        Assert.That(boreSummary.UsedBy, Is.EqualTo(new[] { "Block" }));
        Assert.That(boreSummary.Visible, Is.False);
        Assert.That(bodies.Single(b => b.Name == "Block").Shape, Is.EqualTo(nameof(BooleanCut)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeleteOperand_KeepsUsingBodyIntact()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var bore = await _Primitives.CreateCylinder(3, 10, 10, 10, 0, "Bore");
        var cut = await _Tools.BooleanCut(box.Name, [bore.Name]);

        await _Documents.DeleteBody(bore.Name);

        var details = await _Documents.GetBody(box.Name);
        Assert.That(details.HasErrors, Is.False);
        Assert.That(details.Volume, Is.EqualTo(cut.Volume).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task EmptyResult_FailsAndRollsBack()
    {
        var a = await _Primitives.CreateBox(10, 10, 10);
        var b = await _Primitives.CreateBox(10, 10, 10, 50, 0, 0);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.BooleanCommon(a.Guid, [b.Guid]));

        Assert.That(ex.Message, Does.Contain("no volume"));
        Assert.That(FindBody(a.Guid).Shape, Is.InstanceOf<Box>());
        Assert.That(FindBody(b.Guid).IsVisible, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task InvalidOperands_Fail()
    {
        var a = await _Primitives.CreateBox(10, 10, 10);
        var b = await _Primitives.CreateBox(10, 10, 10, 5, 0, 0);
        var c = await _Primitives.CreateBox(10, 10, 10, 8, 0, 0);
        await _Tools.BooleanFuse(a.Guid, [b.Guid]);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.BooleanCut(c.Guid, []));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.BooleanCut(c.Guid, [c.Guid]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.BooleanCut(c.Guid, ["missing"]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.BooleanCut(c.Guid, [a.Guid, a.Guid]));
        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.BooleanCut(b.Guid, [a.Guid]));
        Assert.That(ex.Message, Does.Contain("cycle"));

        Assert.That(FindBody(c.Guid).Shape, Is.InstanceOf<Box>());
        Assert.That(FindBody(b.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Fillet and chamfer

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Fillet_TopEdgesOfBox()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var edges = await TopEdges("Block");
        Assert.That(edges, Has.Length.EqualTo(4));

        var result = await _Tools.Fillet("Block", edges, 2);

        Assert.That(result.Shape, Is.EqualTo(nameof(Fillet)));
        Assert.That(await FaceCount("Block"), Is.EqualTo(10));
        Assert.That(result.Volume, Is.LessThan(4000));
        Assert.That(result.BoundingBox.SizeZ, Is.EqualTo(10).Within(1e-6));
        Assert.That(((Fillet)FindBody(box.Guid).Shape).Edges, Has.Length.EqualTo(4));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Chamfer_Symmetric()
    {
        await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var edge = (await TopEdges("Block"))[0];

        var result = await _Tools.Chamfer("Block", [edge], 2);

        Assert.That(result.Shape, Is.EqualTo(nameof(Chamfer)));
        Assert.That(result.Volume, Is.EqualTo(4000 - 2 * 20).Within(1e-6));
        Assert.That(await FaceCount("Block"), Is.EqualTo(7));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Chamfer_TwoDistances()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var edge = (await TopEdges("Block"))[0];

        var result = await _Tools.Chamfer("Block", [edge], 2, secondDistance: 4);

        var chamfer = (Chamfer)FindBody(box.Guid).Shape;
        Assert.That(chamfer.Mode, Is.EqualTo(Chamfer.ChamferModes.TwoDistances));
        Assert.That(result.Volume, Is.EqualTo(4000 - 0.5 * 2 * 4 * 20).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Chamfer_DistanceAngle()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var edge = (await TopEdges("Block"))[0];

        var result = await _Tools.Chamfer("Block", [edge], 2, angle: 45, reverse: true);

        var chamfer = (Chamfer)FindBody(box.Guid).Shape;
        Assert.That(chamfer.Mode, Is.EqualTo(Chamfer.ChamferModes.DistanceAngle));
        Assert.That(chamfer.ReverseOrientation, Is.True);
        Assert.That(result.Volume, Is.EqualTo(4000 - 2 * 20).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Fillet_InvalidEdges_Fail()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Fillet("Block", [12], 1));
        Assert.That(ex.Message, Does.Contain("12 edges"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Fillet("Block", [], 1));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Fillet("Block", [0], 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Chamfer("Block", [0], 1, 2, 30));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Chamfer("Block", [0], 1, angle: 90));

        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Fillet_RadiusTooLarge_FailsAndRollsBack()
    {
        var box = await _Primitives.CreateBox(20, 20, 10, name: "Block");
        var edges = await TopEdges("Block");

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.Fillet("Block", edges, 15));

        Assert.That(ex.Message, Does.Contain("fillet could not be created").Or.Contain("invalid solid"));
        Assert.That(FindBody(box.Guid).Shape, Is.InstanceOf<Box>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    async Task<int[]> TopEdges(string body)
    {
        var edges = await new TopologyTools().ListEdges(body, boxMin: [-1e9, -1e9, 10], boxMax: [1e9, 1e9, 1e9]);
        return edges.Select(e => e.Index).ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    async Task<int> FaceCount(string body) => (await new TopologyTools().Measure(body)).Faces;
}
