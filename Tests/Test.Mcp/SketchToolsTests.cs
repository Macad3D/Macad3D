using System;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Mcp;
using Macad.Occt;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class SketchToolsTests
{
    SketchTools _Tools;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new SketchTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region create_sketch

    [Test]
    public async Task CreateSketch_DefaultIsXY()
    {
        var info = await _Tools.CreateSketch(name: "Profile");

        Assert.That(info.Name, Is.EqualTo("Profile"));
        Assert.That(GetSketch(info), Is.Not.Null);
        AssertVector(info.Plane.Origin, 0, 0, 0);
        AssertVector(info.Plane.Normal, 0, 0, 1);
        AssertVector(info.Plane.XDirection, 1, 0, 0);
        AssertVector(info.Plane.YDirection, 0, 1, 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateSketch_NullPlane_IsXY()
    {
        var info = await _Tools.CreateSketch(plane: null);

        AssertVector(info.Plane.Normal, 0, 0, 1);
        AssertVector(info.Plane.XDirection, 1, 0, 0);
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("XZ", 0, -1, 0, 1, 0, 0, 0, 0, 1)]
    [TestCase("xz", 0, -1, 0, 1, 0, 0, 0, 0, 1)]
    [TestCase("YZ", 1, 0, 0, 0, 1, 0, 0, 0, 1)]
    public async Task CreateSketch_StandardPlanes(string plane, double nx, double ny, double nz, 
                                                  double xx, double xy, double xz, double yx, double yy, double yz)
    {
        var info = await _Tools.CreateSketch(plane);

        AssertVector(info.Plane.Normal, nx, ny, nz);
        AssertVector(info.Plane.XDirection, xx, xy, xz);
        AssertVector(info.Plane.YDirection, yx, yy, yz);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateSketch_XZ_MapsSketchYToWorldZ()
    {
        var info = await _Tools.CreateSketch("XZ");

        var world = ToWorld(GetSketch(info), 3, 7);
        Assert.That(world.IsEqual(new Pnt(3, 0, 7), 1e-9), Is.True, world.ToString());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateSketch_OffsetAndOrigin()
    {
        var info = await _Tools.CreateSketch("YZ", 5, [1, 2, 3]);

        AssertVector(info.Plane.Origin, 6, 2, 3);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateSketch_Custom()
    {
        var info = await _Tools.CreateSketch("custom", 0, [0, 0, 10], [0, 0, -1], [0, 1, 0]);

        AssertVector(info.Plane.Origin, 0, 0, 10);
        AssertVector(info.Plane.Normal, 0, 0, -1);
        AssertVector(info.Plane.XDirection, 0, 1, 0);
        AssertVector(info.Plane.YDirection, 1, 0, 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateSketch_CustomWithoutXDirection()
    {
        var info = await _Tools.CreateSketch("custom", normal: [1, 1, 0]);

        var n = Math.Sqrt(0.5);
        AssertVector(info.Plane.Normal, n, n, 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSketch_InvalidInput()
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("AB"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("custom"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("custom", normal: [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("custom", normal: [0, 0, 1], xDirection: [0, 0, 2]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("XY", normal: [0, 0, 1]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("XY", origin: [0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSketch("XY", double.NaN));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Shapes

    [Test]
    public async Task AddCircle()
    {
        var info = await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddCircle("S", 1, 2, 5);

        var sketch = GetSketch(info);
        Assert.That(added.Segments, Has.Length.EqualTo(1));
        var circle = sketch.Segments[added.Segments[0]] as SketchSegmentCircle;
        Assert.That(circle, Is.Not.Null);
        Assert.That(circle.Radius(sketch.Points), Is.EqualTo(5).Within(1e-9));
        Assert.That(sketch.Points[circle.CenterPoint].IsEqual(new Pnt2d(1, 2), 1e-9), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddRectangle()
    {
        await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddRectangle("S", 0, 0, 10, 5);

        Assert.That(added.Segments, Has.Length.EqualTo(4));
        Assert.That(added.Points, Has.Length.EqualTo(4));
        var details = await _Tools.GetInfo("S");
        Assert.That(details.ClosedWires, Is.EqualTo(1));
        Assert.That(details.OpenWires, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(3)]
    [TestCase(6)]
    public async Task AddPolygon(int sides)
    {
        var info = await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddPolygon("S", 0, 0, 10, sides, 90);

        Assert.That(added.Segments, Has.Length.EqualTo(sides));
        Assert.That(added.Points, Has.Length.EqualTo(sides));
        var sketch = GetSketch(info);
        Assert.That(sketch.Points[added.Points[0]].IsEqual(new Pnt2d(0, 10), 1e-9), Is.True);
        Assert.That(added.Points.Select(i => sketch.Points[i].Distance(Pnt2d.Origin)), Has.All.EqualTo(10).Within(1e-9));
        Assert.That((await _Tools.GetInfo("S")).ClosedWires, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddEllipse()
    {
        await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddEllipse("S", 0, 0, 10, 5, 30);

        Assert.That(added.Segments, Has.Length.EqualTo(1));
        var details = await _Tools.GetInfo("S");
        Assert.That(details.Segments.Single().Type, Is.EqualTo("Ellipse"));
        Assert.That(details.ClosedWires, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddedIndicesAreIncremental()
    {
        await _Tools.CreateSketch(name: "S");

        var first = await _Tools.AddCircle("S", 0, 0, 1);
        var second = await _Tools.AddCircle("S", 5, 0, 1);

        Assert.That(second.Segments, Has.None.AnyOf(first.Segments));
        Assert.That((await _Tools.GetInfo("S")).ClosedWires, Is.EqualTo(2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Shapes_InvalidInput()
    {
        await _Tools.CreateSketch(name: "S");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddCircle("S", 0, 0, 0));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddCircle("S", double.NaN, 0, 1));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddRectangle("S", 0, 0, 0, 5));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddPolygon("S", 0, 0, 5, 2));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddEllipse("S", 0, 0, 5, -1));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddCircle("Unknown", 0, 0, 1));
        Assert.That((await _Tools.GetInfo("S")).Segments, Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddToBodyWithoutSketch()
    {
        await new PrimitiveTools().CreateBox(1, 1, 1, name: "Box");

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.AddCircle("Box", 0, 0, 1));
        Assert.That(ex.Message, Does.Contain("does not contain a sketch"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddIsUndoable()
    {
        await _Tools.CreateSketch(name: "S");
        await _Tools.AddRectangle("S", 0, 0, 1, 1);

        CoreContext.Current.UndoHandler.DoUndo(1);

        Assert.That((await _Tools.GetInfo("S")).Segments, Is.Empty);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region sketch_get_info

    [Test]
    public async Task GetInfo()
    {
        await _Tools.CreateSketch("XZ", name: "S");
        await _Tools.AddRectangle("S", 0, 0, 10, 5);

        var details = await _Tools.GetInfo("S");

        Assert.That(details.Name, Is.EqualTo("S"));
        AssertVector(details.Plane.Normal, 0, -1, 0);
        Assert.That(details.Points, Has.Length.EqualTo(4));
        Assert.That(details.Segments, Has.Length.EqualTo(4));
        Assert.That(details.Segments, Has.All.Matches<SketchTools.SegmentInfo>(s => s.Type == "Line" && s.Points.Length == 2));
        Assert.That(details.Constraints, Is.Empty);
        Assert.That(details.ConstraintSolverFailed, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task GetInfo_OpenWire()
    {
        var info = await _Tools.CreateSketch(name: "S");
        new SketchBuilder(GetSketch(info)).Line(0, 0, 10, 0);

        var details = await _Tools.GetInfo("S");

        Assert.That(details.ClosedWires, Is.Zero);
        Assert.That(details.OpenWires, Is.EqualTo(1));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region sketch_add_path

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_ClosedTriangle()
    {
        await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddPath("S", [0, 0], [Line(10, 0), Line(0, 10)], true);

        Assert.That(added.Segments, Has.Length.EqualTo(3));
        Assert.That(added.Points, Has.Length.EqualTo(3));
        var details = await _Tools.GetInfo("S");
        Assert.That(details.ClosedWires, Is.EqualTo(1));
        Assert.That(details.OpenWires, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_EndingAtStart_ClosesWithoutExtraLine()
    {
        await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddPath("S", [0, 0], [Line(10, 0), Line(10, 10), Line(0, 0)], true);

        Assert.That(added.Segments, Has.Length.EqualTo(3));
        Assert.That(added.Points, Has.Length.EqualTo(3));
        Assert.That((await _Tools.GetInfo("S")).ClosedWires, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_Open()
    {
        await _Tools.CreateSketch(name: "S");

        var added = await _Tools.AddPath("S", [0, 0], [Line(10, 0), Line(10, 10)]);

        Assert.That(added.Segments, Has.Length.EqualTo(2));
        var details = await _Tools.GetInfo("S");
        Assert.That(details.ClosedWires, Is.Zero);
        Assert.That(details.OpenWires, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_AllSegmentTypes()
    {
        await _Tools.CreateSketch(name: "S");

        await _Tools.AddPath("S", [0, 0], [
            Line(20, 0),
            new() { Type = "arc", To = [30, 10], Center = [20, 10] },
            new() { Type = "arc", To = [30, 30], Through = [32, 20] },
            new() { Type = "bezier", To = [20, 40], Control = [30, 40] },
            new() { Type = "bezier", To = [10, 40], Control = [17, 42], Control2 = [13, 38] },
            new() { Type = "elliptical_arc", To = [0, 30], Center = [0, 40] },
        ], true);

        var details = await _Tools.GetInfo("S");
        Assert.That(details.Segments.Select(seg => seg.Type), 
                    Is.EqualTo(new[] { "Line", "Arc", "Arc", "Bezier", "Bezier", "EllipticalArc", "Line" }));
        Assert.That(details.ClosedWires, Is.EqualTo(1));
        Assert.That(details.OpenWires, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_ArcWithCenter_Direction()
    {
        // Half circle from (10,0) to (-10,0) around the origin
        await _Tools.CreateSketch(name: "CCW");
        await _Tools.AddPath("CCW", [10, 0], [new() { Type = "arc", To = [-10, 0], Center = [0, 0] }]);
        await _Tools.CreateSketch(name: "CW");
        await _Tools.AddPath("CW", [10, 0], [new() { Type = "arc", To = [-10, 0], Center = [0, 0], Clockwise = true }]);

        var ccw = await GetSketchBounds("CCW");
        Assert.That(ccw.MaxY, Is.EqualTo(10).Within(1e-3));
        Assert.That(ccw.MinY, Is.EqualTo(0).Within(1e-3));
        var cw = await GetSketchBounds("CW");
        Assert.That(cw.MinY, Is.EqualTo(-10).Within(1e-3));
        Assert.That(cw.MaxY, Is.EqualTo(0).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_EllipticalArc_Direction()
    {
        // Quarter ellipse from (10,0) to (0,5) counter-clockwise, three quarters clockwise
        await _Tools.CreateSketch(name: "CCW");
        await _Tools.AddPath("CCW", [10, 0], [new() { Type = "elliptical_arc", To = [0, 5], Center = [0, 0] }]);
        await _Tools.CreateSketch(name: "CW");
        await _Tools.AddPath("CW", [10, 0], [new() { Type = "elliptical_arc", To = [0, 5], Center = [0, 0], Clockwise = true }]);

        var ccw = await GetSketchBounds("CCW");
        Assert.That(ccw.MinX, Is.EqualTo(0).Within(1e-3));
        Assert.That(ccw.MinY, Is.EqualTo(0).Within(1e-3));
        var cw = await GetSketchBounds("CW");
        Assert.That(cw.MinX, Is.EqualTo(-10).Within(1e-3));
        Assert.That(cw.MinY, Is.EqualTo(-5).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task AddPath_InvalidInput()
    {
        await _Tools.CreateSketch(name: "S");

        async Task<string> Fails(double[] start, SketchTools.PathSegment[] segments, bool closed = false)
        {
            var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.AddPath("S", start, segments, closed));
            return ex.Message;
        }

        Assert.That(await Fails([0], [Line(1, 1)]), Does.Contain("start"));
        Assert.That(await Fails([0, 0], []), Does.Contain("at least one segment"));
        Assert.That(await Fails([0, 0], [Line(1, 0), new() { Type = "spline", To = [2, 2] }]), Does.Contain("segments[1]").And.Contain("spline"));
        Assert.That(await Fails([0, 0], [Line(1, 0), new() { Type = "line" }]), Does.Contain("segments[1].to"));
        Assert.That(await Fails([0, 0], [Line(0, 0)]), Does.Contain("segments[0]"));
        Assert.That(await Fails([0, 0], [new() { Type = "arc", To = [10, 0] }]), Does.Contain("through"));
        Assert.That(await Fails([0, 0], [new() { Type = "arc", To = [10, 0], Through = [5, 0] }]), Does.Contain("through"));
        Assert.That(await Fails([0, 0], [new() { Type = "arc", To = [10, 0], Center = [2, 0] }]), Does.Contain("same distance"));
        Assert.That(await Fails([0, 0], [new() { Type = "bezier", To = [10, 0] }]), Does.Contain("control"));
        Assert.That(await Fails([0, 0], [Line(10, 0)], true), Does.Contain("more than one line"));
        Assert.That((await _Tools.GetInfo("S")).Segments, Is.Empty);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    static Sketch GetSketch(SketchTools.SketchInfo info)
    {
        var body = CoreContext.Current.Document.OfType<Body>().Single(b => b.Guid.ToString() == info.Guid);
        return (Sketch)body.Shape;
    }

    //--------------------------------------------------------------------------------------------------

    // Transforms a sketch point to world coordinates.
    static Pnt ToWorld(Sketch sketch, double x, double y)
    {
        return new Pnt(x, y, 0).Transformed(sketch.GetTransformation());
    }

    //--------------------------------------------------------------------------------------------------

    async Task<ToolsBase.BoundingBoxInfo> GetSketchBounds(string name)
    {
        var info = await _Tools.GetInfo(name);
        var body = CoreContext.Current.Document.OfType<Body>().Single(b => b.Guid.ToString() == info.Guid);
        return ToolsBase.BoundingBoxInfo.From(((Sketch)body.Shape).GetBRep());
    }
}
