using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class TopologyToolsTests
{
    TopologyTools _Tools;
    PrimitiveTools _Primitives;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new TopologyTools();
        _Primitives = new PrimitiveTools();
    }

    //--------------------------------------------------------------------------------------------------

    const double _Big = 1e9;

    //--------------------------------------------------------------------------------------------------

    #region Faces

    [Test]
    public async Task ListFaces_Box()
    {
        await CreateBox();

        var faces = await _Tools.ListFaces("Box");

        Assert.That(faces, Has.Length.EqualTo(6));
        Assert.That(faces.Select(f => f.Index), Is.EqualTo(Enumerable.Range(0, 6)));
        Assert.That(faces.All(f => f.Type == "Plane" && f.Normal != null && f.Edges.Length == 4), Is.True);

        var top = faces.Single(f => f.Normal[2] > 0.5);
        Assert.That(top.Normal, Is.EqualTo(new double[] { 0, 0, 1 }).Within(1e-9));
        Assert.That(top.Center, Is.EqualTo(new double[] { 6, 12, 33 }).Within(1e-6));
        Assert.That(top.Area, Is.EqualTo(200).Within(1e-6));
        Assert.That(top.BoundingBox.MinZ, Is.EqualTo(33).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListFaces_Cylinder()
    {
        await _Primitives.CreateCylinder(5, 10, 0, 0, 0, "Cyl");

        var faces = await _Tools.ListFaces("Cyl");

        Assert.That(faces, Has.Length.EqualTo(3));
        var mantle = faces.Single(f => f.Type == "Cylinder");
        Assert.That(mantle.Radius, Is.EqualTo(5).Within(1e-9));
        Assert.That(mantle.AxisDirection, Is.EqualTo(new double[] { 0, 0, 1 }).Within(1e-9));
        Assert.That(mantle.Normal, Is.Null);
        Assert.That(faces.Count(f => f.Type == "Plane"), Is.EqualTo(2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListFaces_Filters()
    {
        await CreateBox();
        await _Primitives.CreateCylinder(5, 10, 0, 0, 0, "Cyl");

        Assert.That((await _Tools.ListFaces("Box", normal: [0, 0, -1])).Single().Center[2], Is.EqualTo(3).Within(1e-6));
        Assert.That(await _Tools.ListFaces("Box", normal: [1, 1, 0]), Is.Empty);
        Assert.That(await _Tools.ListFaces("Cyl", type: "cylinder"), Has.Length.EqualTo(1));
        Assert.That(await _Tools.ListFaces("Cyl", minRadius: 4, maxRadius: 6), Has.Length.EqualTo(1));
        Assert.That(await _Tools.ListFaces("Cyl", minRadius: 6), Is.Empty);
        Assert.That(await _Tools.ListFaces("Box", boxMin: [-_Big, -_Big, 30], boxMax: [_Big, _Big, _Big]), Has.Length.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Edges

    [Test]
    public async Task ListEdges_Box()
    {
        await CreateBox();

        var edges = await _Tools.ListEdges("Box");

        Assert.That(edges, Has.Length.EqualTo(12));
        Assert.That(edges.All(e => e.Type == "Line" && e.Faces.Length == 2), Is.True);
        Assert.That(edges.Count(e => e.Length > 29.9), Is.EqualTo(4));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListEdges_Cylinder()
    {
        await _Primitives.CreateCylinder(5, 10, 0, 0, 0, "Cyl");

        var circles = await _Tools.ListEdges("Cyl", type: "Circle");

        Assert.That(circles, Has.Length.EqualTo(2));
        Assert.That(circles.All(c => c.Radius > 4.999 && c.Radius < 5.001), Is.True);
        Assert.That(circles.Select(c => c.Center[2]).Order(), Is.EqualTo(new double[] { 0, 10 }).Within(1e-9));
        Assert.That(circles[0].Axis, Is.EqualTo(new double[] { 0, 0, 1 }).Or.EqualTo(new double[] { 0, 0, -1 }).Within(1e-9));
        Assert.That(circles[0].Length, Is.EqualTo(2 * System.Math.PI * 5).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListEdges_Filters()
    {
        await CreateBox();
        await _Primitives.CreateCylinder(5, 10, 0, 0, 0, "Cyl");

        Assert.That(await _Tools.ListEdges("Box", direction: [0, 0, -1]), Has.Length.EqualTo(4));
        var topEdges = await _Tools.ListEdges("Box", boxMin: [-_Big, -_Big, 33], boxMax: [_Big, _Big, _Big]);
        Assert.That(topEdges, Has.Length.EqualTo(4));

        var topFace = (await _Tools.ListFaces("Box", normal: [0, 0, 1])).Single();
        var faceEdges = await _Tools.ListEdges("Box", face: topFace.Index);
        Assert.That(faceEdges.Select(e => e.Index), Is.EquivalentTo(topEdges.Select(e => e.Index)));
        Assert.That(faceEdges.Select(e => e.Index), Is.EquivalentTo(topFace.Edges));

        Assert.That(await _Tools.ListEdges("Cyl", direction: [0, 0, 1]), Has.Length.EqualTo(3)); // two circles, one seam
        Assert.That(await _Tools.ListEdges("Cyl", maxRadius: 5), Has.Length.EqualTo(2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Indices_AreStable()
    {
        await CreateBox();

        var first = await _Tools.ListEdges("Box");
        var second = await _Tools.ListEdges("Box");

        Assert.That(second.Select(e => (e.Index, e.Midpoint[0], e.Midpoint[1], e.Midpoint[2])),
                    Is.EqualTo(first.Select(e => (e.Index, e.Midpoint[0], e.Midpoint[1], e.Midpoint[2]))));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task InvalidInput()
    {
        await CreateBox();

        Assert.ThrowsAsync<McpException>(async () => await _Tools.ListEdges("Box", face: 6));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ListEdges("Box", boxMin: [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ListEdges("Box", boxMin: [1, 0, 0], boxMax: [0, 1, 1]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ListFaces("Box", normal: [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ListFaces("Nope"));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Measure

    [Test]
    public async Task Measure_Box()
    {
        await CreateBox();

        var result = await _Tools.Measure("Box");

        Assert.That(result.Volume, Is.EqualTo(6000).Within(1e-6));
        Assert.That(result.Area, Is.EqualTo(2200).Within(1e-6));
        Assert.That(result.CenterOfMass, Is.EqualTo(new double[] { 6, 12, 18 }).Within(1e-6));
        Assert.That((result.Solids, result.Faces, result.Edges), Is.EqualTo((1, 6, 12)));
        Assert.That(result.BoundingBox.SizeZ, Is.EqualTo(30).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Task<ToolsBase.BodyInfo> CreateBox() => _Primitives.CreateBox(10, 20, 30, 1, 2, 3, "Box");
}
