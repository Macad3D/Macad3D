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
public class SketchConstraintToolsTests
{
    SketchTools _Tools;
    string _Sketch;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public async Task SetUp()
    {
        Context.InitWithDefault();
        _Tools = new SketchTools();
        _Sketch = (await _Tools.CreateSketch(name: "Sketch")).Guid;
    }

    //--------------------------------------------------------------------------------------------------

    #region Constraint types

    [Test]
    public async Task Fixed()
    {
        await AddLines([0, 0], [10, 0]);
        int p0 = FindPoint(0, 0), p1 = FindPoint(10, 0);
        await _Tools.AddConstraint(_Sketch, "fixed", points: [p0]);
        await _Tools.AddConstraint(_Sketch, "length", segments: [0], value: 20);

        Assert.That(P(p0).Distance(new Pnt2d(0, 0)), Is.LessThan(1e-6));
        Assert.That(P(p1).Distance(P(p0)), Is.EqualTo(20).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Horizontal()
    {
        var seg = (await AddLines([0, 0], [10, 1]))[0];

        var result = await _Tools.AddConstraint(_Sketch, "horizontal", segments: [seg]);

        Assert.That(result.Constraints, Is.EqualTo(new[] { 0 }));
        Assert.That(LineVec(seg).Y, Is.EqualTo(0).Within(1e-6));
        Assert.That(result.Points[0].Y, Is.EqualTo(result.Points[1].Y).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Vertical()
    {
        var seg = (await AddLines([0, 0], [1, 10]))[0];

        await _Tools.AddConstraint(_Sketch, "vertical", segments: [seg]);

        Assert.That(LineVec(seg).X, Is.EqualTo(0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Length()
    {
        var seg = (await AddLines([0, 0], [10, 0]))[0];

        await _Tools.AddConstraint(_Sketch, "length", segments: [seg], value: 25);

        Assert.That(LineVec(seg).Magnitude(), Is.EqualTo(25).Within(1e-6));
        Assert.That(GetSketch().Constraints.Single().Parameter, Is.EqualTo(25));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Length_WithoutValue_KeepsCurrent()
    {
        var seg = (await AddLines([0, 0], [10, 0]))[0];

        await _Tools.AddConstraint(_Sketch, "length", segments: [seg]);

        Assert.That(GetSketch().Constraints.Single().Parameter, Is.EqualTo(10).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Radius()
    {
        var circle = await AddCircle(0, 0, 5);

        await _Tools.AddConstraint(_Sketch, "radius", segments: [circle], value: 8);

        Assert.That(Radius(circle), Is.EqualTo(8).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Angle()
    {
        var segs = await AddLines([0, 0], [10, 0], [12, 10]);

        await _Tools.AddConstraint(_Sketch, "angle", segments: [segs[0], segs[1]], value: 45);

        var angle = Math.Abs(LineVec(segs[0]).Angle(LineVec(segs[1])) * 180 / Math.PI);
        Assert.That(Math.Min(angle, 180 - angle), Is.EqualTo(45).Within(1e-4));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task HorizontalDistance()
    {
        await AddLines([0, 0], [10, 3]);
        int p = FindPoint(10, 3);

        await _Tools.AddConstraint(_Sketch, "horizontal_distance", points: [p], value: 7);

        Assert.That(P(p).X, Is.EqualTo(7).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task VerticalDistance()
    {
        await AddLines([0, 0], [10, 3]);
        int p = FindPoint(10, 3);

        await _Tools.AddConstraint(_Sketch, "VerticalDistance", points: [p], value: -4);

        Assert.That(P(p).Y, Is.EqualTo(-4).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Parallel()
    {
        var first = (await AddLines([0, 0], [10, 0]))[0];
        var second = (await AddLines([0, 5], [10, 8]))[0];

        await _Tools.AddConstraint(_Sketch, "parallel", segments: [first, second]);

        Assert.That(LineVec(first).Crossed(LineVec(second)), Is.EqualTo(0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Perpendicular()
    {
        var segs = await AddLines([0, 0], [10, 0], [12, 10]);

        await _Tools.AddConstraint(_Sketch, "perpendicular", segments: [segs[0], segs[1]]);

        Assert.That(LineVec(segs[0]).Dot(LineVec(segs[1])), Is.EqualTo(0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Tangent()
    {
        var line = (await AddLines([-10, 6], [10, 6]))[0];
        var circle = await AddCircle(0, 0, 5);

        await _Tools.AddConstraint(_Sketch, "tangent", segments: [line, circle]);

        var (start, _) = LineEnds(line);
        var dir = LineVec(line).Normalized();
        var distance = Math.Abs(dir.Crossed(new Vec2d(start, Center(circle))));
        Assert.That(distance, Is.EqualTo(Radius(circle)).Within(1e-4));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Equal()
    {
        var first = (await AddLines([0, 0], [10, 0]))[0];
        var second = (await AddLines([0, 5], [6, 5]))[0];

        await _Tools.AddConstraint(_Sketch, "equal", segments: [first, second]);

        Assert.That(LineVec(first).Magnitude(), Is.EqualTo(LineVec(second).Magnitude()).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Concentric()
    {
        var first = await AddCircle(0, 0, 5);
        var second = await AddCircle(1, 1, 2);

        await _Tools.AddConstraint(_Sketch, "concentric", segments: [first, second]);

        Assert.That(Center(first).Distance(Center(second)), Is.LessThan(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task PointOnSegment()
    {
        var line = (await AddLines([0, 0], [10, 0]))[0];
        await AddLines([3, 2], [3, 8]);
        int p = FindPoint(3, 2);

        await _Tools.AddConstraint(_Sketch, "point_on_segment", points: [p], segments: [line]);

        Assert.That(P(p).Y, Is.EqualTo(0).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task PointOnMidpoint()
    {
        var line = (await AddLines([0, 0], [10, 0]))[0];
        await AddLines([3, 2], [3, 8]);
        int p = FindPoint(3, 2);

        await _Tools.AddConstraint(_Sketch, "point_on_midpoint", points: [p], segments: [line]);

        var (start, end) = LineEnds(line);
        Assert.That(P(p).Distance(new Pnt2d((start.X + end.X) / 2, (start.Y + end.Y) / 2)), Is.LessThan(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task SmoothCorner()
    {
        await _Tools.AddPath(_Sketch, [0, 0], [new SketchTools.PathSegment { Type = "bezier", To = [10, 0], Control = [5, 5] }, Line(10, 10)]);
        int corner = FindPoint(10, 0);

        var result = await _Tools.AddConstraint(_Sketch, "smooth_corner", points: [corner]);

        Assert.That(result.Constraints, Has.Length.EqualTo(1));
        Assert.That(GetSketch().Constraints.Single(), Is.InstanceOf<SketchConstraintSmoothCorner>());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Failures

    [Test]
    public async Task OverConstrained_FailsAndRollsBack()
    {
        var seg = (await AddLines([0, 0], [10, 0]))[0];
        int p0 = FindPoint(0, 0), p1 = FindPoint(10, 0);
        await _Tools.AddConstraint(_Sketch, "fixed", points: [p0, p1]);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "length", segments: [seg], value: 20));

        Assert.That(ex.Message, Does.Contain("could not be solved"));
        Assert.That(GetSketch().Constraints, Has.Count.EqualTo(2));
        Assert.That(P(p1).Distance(new Pnt2d(10, 0)), Is.LessThan(1e-6));
        Assert.That(GetSketch().ConstraintSolverFailed, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task NotApplicable_Fails()
    {
        var circle = await AddCircle(0, 0, 5);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "horizontal", segments: [circle]));

        Assert.That(ex.Message, Does.Contain("line segments"));
        Assert.That(GetSketch().Constraints, Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task InvalidInput()
    {
        var seg = (await AddLines([0, 0], [10, 0]))[0];

        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "glue", segments: [seg]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "length", segments: [99]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "horizontal", segments: [seg], value: 3));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "length", segments: [seg], value: -1));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.AddConstraint(_Sketch, "angle", segments: [seg], value: 200));
        Assert.That(GetSketch().Constraints, Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Delete

    [Test]
    public async Task DeleteSegment_RemovesItsConstraints()
    {
        var segs = (await _Tools.AddPath(_Sketch, [0, 0], [Line(10, 0), Line(10, 5), Line(0, 5)], closed: true)).Segments;
        await _Tools.AddConstraint(_Sketch, "horizontal", segments: [segs[0]]);
        await _Tools.AddConstraint(_Sketch, "vertical", segments: [segs[1]]);

        var info = await _Tools.DeleteElements(_Sketch, segments: [segs[0]]);

        Assert.That(info.Segments.Select(s => s.Index), Is.EquivalentTo(segs.Skip(1)));
        Assert.That(info.Constraints.Select(c => c.Type), Is.EqualTo(new[] { "Vertical" }));
        Assert.That(info.ClosedWires, Is.EqualTo(0));
        Assert.That(info.OpenWires, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeletePoint_MergesSegments()
    {
        await _Tools.AddPath(_Sketch, [0, 0], [Line(10, 0), Line(10, 10), Line(0, 10)], closed: true);

        var info = await _Tools.DeleteElements(_Sketch, points: [FindPoint(10, 10)]);

        Assert.That(info.Segments, Has.Length.EqualTo(3));
        Assert.That(info.Points, Has.Length.EqualTo(3));
        Assert.That(info.ClosedWires, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeleteConstraint()
    {
        var seg = (await AddLines([0, 0], [10, 1]))[0];
        await _Tools.AddConstraint(_Sketch, "length", segments: [seg]);

        var info = await _Tools.DeleteElements(_Sketch, constraints: [0]);

        Assert.That(info.Constraints, Is.Empty);
        Assert.That(info.Segments, Has.Length.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Delete_InvalidInput()
    {
        await AddLines([0, 0], [10, 1]);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.DeleteElements(_Sketch));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.DeleteElements(_Sketch, constraints: [0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.DeleteElements(_Sketch, points: [42]));
        Assert.That(GetSketch().Segments, Has.Count.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Move

    [Test]
    public async Task MovePoint_Unconstrained()
    {
        await AddLines([0, 0], [10, 0]);
        int p1 = FindPoint(10, 0);

        var points = await _Tools.MovePoints(_Sketch, [new SketchTools.PointMove { Index = p1, X = 3, Y = 4 }]);

        Assert.That(P(p1).Distance(new Pnt2d(3, 4)), Is.LessThan(1e-9));
        Assert.That(points.Single(p => p.Index == p1).X, Is.EqualTo(3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task MovePoint_ConstrainedSketchIsResolved()
    {
        var seg = (await AddLines([0, 0], [10, 0]))[0];
        int p0 = FindPoint(0, 0), p1 = FindPoint(10, 0);
        await _Tools.AddConstraint(_Sketch, "horizontal", segments: [seg]);
        await _Tools.AddConstraint(_Sketch, "length", segments: [seg]);

        await _Tools.MovePoints(_Sketch, [new SketchTools.PointMove { Index = p1, X = 10, Y = 5 }]);

        Assert.That(P(p1).Distance(new Pnt2d(10, 5)), Is.LessThan(1e-6));
        Assert.That(P(p0).Y, Is.EqualTo(5).Within(1e-6));
        Assert.That(P(p0).Distance(P(p1)), Is.EqualTo(10).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task MovePoint_InvalidInput()
    {
        await AddLines([0, 0], [10, 0]);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.MovePoints(_Sketch, []));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.MovePoints(_Sketch, [new SketchTools.PointMove { Index = 42 }]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.MovePoints(_Sketch, [new SketchTools.PointMove { Index = 0, X = double.NaN }]));
        Assert.That(P(FindPoint(10, 0)), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Sketch GetSketch()
    {
        var body = (Body)CoreContext.Current.Document.FindInstance(Guid.Parse(_Sketch));
        return (Sketch)body.Shape;
    }

    //--------------------------------------------------------------------------------------------------

    Pnt2d P(int index) => GetSketch().Points[index];

    //--------------------------------------------------------------------------------------------------

    // Returns the index of the point at the given position.
    int FindPoint(double x, double y)
    {
        return GetSketch().Points.Single(kvp => kvp.Value.Distance(new Pnt2d(x, y)) < 1e-6).Key;
    }

    //--------------------------------------------------------------------------------------------------

    // Adds a polyline and returns its segment indices.
    async Task<int[]> AddLines(params double[][] points)
    {
        var added = await _Tools.AddPath(_Sketch, points[0], points.Skip(1).Select(p => Line(p[0], p[1])).ToArray());
        return added.Segments;
    }

    //--------------------------------------------------------------------------------------------------

    async Task<int> AddCircle(double x, double y, double radius)
    {
        return (await _Tools.AddCircle(_Sketch, x, y, radius)).Segments.Single();
    }

    //--------------------------------------------------------------------------------------------------

    (Pnt2d start, Pnt2d end) LineEnds(int segment)
    {
        var seg = GetSketch().Segments[segment];
        return (P(seg.StartPoint), P(seg.EndPoint));
    }

    //--------------------------------------------------------------------------------------------------

    Vec2d LineVec(int segment)
    {
        var (start, end) = LineEnds(segment);
        return new Vec2d(start, end);
    }

    //--------------------------------------------------------------------------------------------------

    double Radius(int segment)
    {
        return ((SketchSegmentCircle)GetSketch().Segments[segment]).Radius(GetSketch().Points);
    }

    //--------------------------------------------------------------------------------------------------

    Pnt2d Center(int segment)
    {
        return P(((SketchSegmentCircle)GetSketch().Segments[segment]).CenterPoint);
    }
}
