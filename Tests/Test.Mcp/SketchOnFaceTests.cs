using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class SketchOnFaceTests
{
    SketchTools _Tools;
    TopologyTools _Topology;
    PrimitiveTools _Primitives;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public async Task SetUp()
    {
        Context.InitWithDefault();
        _Tools = new SketchTools();
        _Topology = new TopologyTools();
        _Primitives = new PrimitiveTools();
        await _Primitives.CreateBox(10, 20, 30, 1, 2, 3, "Box");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task OnTopFace()
    {
        var face = await FaceWithNormal("Box", 0, 0, 1);

        var info = await _Tools.CreateSketch("face", body: "Box", face: face, name: "OnTop");

        Assert.That(info.Name, Is.EqualTo("OnTop"));
        Assert.That(info.Plane.Normal, Is.EqualTo(new double[] { 0, 0, 1 }).Within(1e-9));
        Assert.That(info.Plane.Origin, Is.EqualTo(new double[] { 6, 12, 33 }).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task OnSideFace_NormalPointsOutward()
    {
        var face = await FaceWithNormal("Box", -1, 0, 0);

        var info = await _Tools.CreateSketch("face", body: "Box", face: face);

        Assert.That(info.Plane.Normal, Is.EqualTo(new double[] { -1, 0, 0 }).Within(1e-9));
        Assert.That(info.Plane.Origin[0], Is.EqualTo(1).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task OnFace_WithOriginXDirectionAndOffset()
    {
        var face = await FaceWithNormal("Box", 0, 0, 1);

        var info = await _Tools.CreateSketch("face", 2, [0, 0, 0], xDirection: [0, 1, 1], body: "Box", face: face);

        Assert.That(info.Plane.Origin, Is.EqualTo(new double[] { 0, 0, 35 }).Within(1e-6));
        Assert.That(info.Plane.XDirection, Is.EqualTo(new double[] { 0, 1, 0 }).Within(1e-9));
        Assert.That(info.Plane.YDirection, Is.EqualTo(new double[] { -1, 0, 0 }).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task OnRotatedBody_UsesWorldPlane()
    {
        await new TransformTools().RotateBody("Box", [1, 0, 0], 90, [0, 0, 0]);
        var face = await FaceWithNormal("Box", 0, -1, 0); // former top face

        var info = await _Tools.CreateSketch("face", body: "Box", face: face);

        Assert.That(info.Plane.Origin[1], Is.EqualTo(-33).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task NonPlanarFace_IsRejected()
    {
        await _Primitives.CreateCylinder(5, 10, name: "Cyl");
        var face = (await _Topology.ListFaces("Cyl", type: "Cylinder")).Single().Index;

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("face", body: "Cyl", face: face));

        Assert.That(ex.Message, Does.Contain("planar face"));
        Assert.That((await new DocumentTools().ListBodies()).Count, Is.EqualTo(2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InvalidInput()
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("face"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("face", body: "Box"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("face", body: "Box", face: 6));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("face", normal: [0, 0, 1], body: "Box", face: 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("XY", body: "Box", face: 0));
    }
}
