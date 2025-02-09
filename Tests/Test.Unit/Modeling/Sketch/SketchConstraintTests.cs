using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Sketch;

[TestFixture]
public class SketchConstraintTests
{
    const double MaxLengthDelta = 0.0001;
    const double MaxAngleDelta = 0.01;

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HorizontalDistance()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintHorizontalDistance(p2, 30));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(30.0, sketch.Points[p2].X, MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void VerticalDistance()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintVerticalDistance(p2, 30));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(30.0, sketch.Points[p2].Y, MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Horizontal()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintHorizontal(s1));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(sketch.Points[p1].Y, sketch.Points[p2].Y, MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HorizontalRequireMinDistance()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new(10, 10));
        var p2 = sketch.AddPoint(new(10, -10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        Assert.IsFalse(SketchConstraintHorizontal.CanCreate(sketch, [], [s1]));
        sketch.Points[p1] = new(11, 10);
        Assert.IsTrue(SketchConstraintHorizontal.CanCreate(sketch, [], [s1]));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Vertical()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintVertical(s1));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(sketch.Points[p1].X, sketch.Points[p2].X, MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void VerticalRequireMinDistance()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new(10, 10));
        var p2 = sketch.AddPoint(new(-10, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        Assert.IsFalse(SketchConstraintVertical.CanCreate(sketch, [], [s1]));
        sketch.Points[p1] = new(10, 11);
        Assert.IsTrue(SketchConstraintVertical.CanCreate(sketch, [], [s1]));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Length()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintLength(s1, 10.0));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(10.0, sketch.Points[p1].Distance(sketch.Points[p2]), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                        
    [Test]
    public void RadiusCircle()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(0, -5));
        var p2 = sketch.AddPoint(new Pnt2d(0, 10));
        var s1 = sketch.AddSegment(new SketchSegmentCircle(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintRadius(s1, 10.0));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(10.0, sketch.Points[p1].Distance(sketch.Points[p2]), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                        
    [Test]
    public void RadiusArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(0, -10));
        var p2 = sketch.AddPoint(new Pnt2d(5, 0));
        var p3 = sketch.AddPoint(new Pnt2d(0, 10));
        var arc = new SketchSegmentArc(p1, p3, p2);
        var s1 = sketch.AddSegment(arc);
        var center = arc.Center(sketch.Points);
        var c1 = sketch.AddConstraint(new SketchConstraintRadius(s1, 10.0));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(10.0, arc.Radius(sketch.Points), MaxAngleDelta);
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void Concentric()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(0, -10));
        var p2 = sketch.AddPoint(new Pnt2d(0, 10));
        var s1 = sketch.AddSegment(new SketchSegmentCircle(p1, p2));
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var p4 = sketch.AddPoint(new Pnt2d(5, 5));
        var s2 = sketch.AddSegment(new SketchSegmentCircle(p3, p4));
        var c1 = sketch.AddConstraint(new SketchConstraintConcentric(s1, s2));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(sketch.Points[p1].X, sketch.Points[p3].X, MaxLengthDelta);
        Assert.AreEqual(sketch.Points[p1].Y, sketch.Points[p3].Y, MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                        
    [Test]
    public void Parallel()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(0, 10));
        var line1 = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line1);
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var p4 = sketch.AddPoint(new Pnt2d(5, 5));
        var line2 = new SketchSegmentLine(p3, p4);
        var s2 = sketch.AddSegment(line2);
        var c1 = sketch.AddConstraint(new SketchConstraintParallel(s1, s2));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(0, line1.GetLine(sketch.Points).Angle(line2.GetLine(sketch.Points)).ToDeg().Abs(), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                                
    [Test]
    public void Perpendicular()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(10, 10));
        var p2 = sketch.AddPoint(new Pnt2d(0, -5));
        var line1 = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line1);
        var p3 = sketch.AddPoint(new Pnt2d(5, 5));
        var line2 = new SketchSegmentLine(p2, p3);
        var s2 = sketch.AddSegment(line2);
        var c1 = sketch.AddConstraint(new SketchConstraintPerpendicular(s1, s2));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(90, line1.GetLine(sketch.Points).Angle(line2.GetLine(sketch.Points)).ToDeg().Abs(), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                                        
    [Test]
    public void Angle()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(10, 10));
        var p2 = sketch.AddPoint(new Pnt2d(0, -5));
        var line1 = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line1);
        var p3 = sketch.AddPoint(new Pnt2d(5, 5));
        var line2 = new SketchSegmentLine(p2, p3);
        var s2 = sketch.AddSegment(line2);
        var c1 = sketch.AddConstraint(new SketchConstraintAngle(s1, s2, 90.0));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(90, line1.GetLine(sketch.Points).Angle(line2.GetLine(sketch.Points)).ToDeg().Abs(), MaxAngleDelta);
    }

    //--------------------------------------------------------------------------------------------------
                                                
    [Test]
    public void PointOnSegmentLine()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(3, -10));
        var p2 = sketch.AddPoint(new Pnt2d(3, 10));
        var line = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line);
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var p4 = sketch.AddPoint(new Pnt2d(20, 20));
        var s2 = sketch.AddSegment(new SketchSegmentLine(p3, p4));
        var c1 = sketch.AddConstraint(new SketchConstraintPointOnSegment(p3, s1));

        Assert.IsTrue(sketch.SolveConstraints(true));
        var pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[p3], line.MakeCurve(sketch.Points));
        Assert.AreEqual(1, pointOnCurve.NbPoints());
        Assert.AreEqual(0.0, pointOnCurve.Distance(1), MaxLengthDelta);

        // Out of range
        sketch.Points[p3] = new Pnt2d(18, 18);
        Assert.IsTrue(sketch.SolveConstraints(true));
        pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[p3], new Geom2d_Line(line.GetLine(sketch.Points)));
        Assert.AreEqual(1, pointOnCurve.NbPoints());
        Assert.AreEqual(0.0, pointOnCurve.Distance(1), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                                                
    [Test]
    public void PointOnSegmentCircle()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(3, -10));
        var p2 = sketch.AddPoint(new Pnt2d(3, 10));
        var circle = new SketchSegmentCircle(p1, p2);
        var s1 = sketch.AddSegment(circle);
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var p4 = sketch.AddPoint(new Pnt2d(20, 20));
        var s2 = sketch.AddSegment(new SketchSegmentLine(p3, p4));
        var c1 = sketch.AddConstraint(new SketchConstraintPointOnSegment(p3, s1));

        Assert.IsTrue(sketch.SolveConstraints(true));
        var pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[p3], circle.MakeCurve(sketch.Points));
        Assert.AreEqual(2, pointOnCurve.NbPoints());
        Assert.AreEqual(0.0, pointOnCurve.Distance(2), MaxLengthDelta);

        // Out of range
        sketch.Points[p3] = new Pnt2d(18, 18);
        Assert.IsTrue(sketch.SolveConstraints(true));
        pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[p3], circle.MakeCurve(sketch.Points));
        Assert.AreEqual(2, pointOnCurve.NbPoints());
        Assert.AreEqual(0.0, pointOnCurve.Distance(2), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EqualCircles()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(0, -10));
        var p2 = sketch.AddPoint(new Pnt2d(0, 10));
        var circle1 = new SketchSegmentCircle(p1, p2);
        var s1 = sketch.AddSegment(circle1);
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var p4 = sketch.AddPoint(new Pnt2d(5, 5));
        var circle2 = new SketchSegmentCircle(p3, p4);
        var s2 = sketch.AddSegment(circle2);
        var c1 = sketch.AddConstraint(new SketchConstraintEqual(s1, s2));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(circle1.Radius(sketch.Points), circle2.Radius(sketch.Points), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------
                                        
    [Test]
    public void EqualLines()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(0, 10));
        var line1 = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line1);
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var line2 = new SketchSegmentLine(p2, p3);
        var s2 = sketch.AddSegment(line2);
        var c1 = sketch.AddConstraint(new SketchConstraintEqual(s1, s2));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(line1.Length(sketch.Points), line2.Length(sketch.Points), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FixPoint()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintFixed(SketchConstraintFixed.TargetType.Point, p1));
        var c2 = sketch.AddConstraint(new SketchConstraintLength(s1, 10.0));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(0.0, sketch.Points[p1].Distance(new Pnt2d(-10, -5)), MaxLengthDelta);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FixSegment()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-10, -5));
        var p2 = sketch.AddPoint(new Pnt2d(20, 10));
        var s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        var c1 = sketch.AddConstraint(new SketchConstraintFixed(SketchConstraintFixed.TargetType.Segment, s1));

        Assert.IsTrue(sketch.SolveConstraints(true));
        Assert.AreEqual(0.0, sketch.Points[p1].Distance(new Pnt2d(-10, -5)), MaxLengthDelta);
        Assert.AreEqual(0.0, sketch.Points[p2].Distance(new Pnt2d(20, 10)), MaxLengthDelta);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TangentLineToCircle()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-20, 0));
        var p2 = sketch.AddPoint(new Pnt2d(20, 30));
        var line = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line);
        var cp1 = sketch.AddPoint(new Pnt2d(0, 0));
        var cp2 = sketch.AddPoint(new Pnt2d(0, 10));
        var circ = new SketchSegmentCircle(cp1, cp2);
        var s2 = sketch.AddSegment(circ);
        var c1 = sketch.AddConstraint(new SketchConstraintTangent(s1, s2));
            
        Assert.IsTrue(sketch.SolveConstraints(true));
        var intersec = new IntAna2d_AnaIntersection(line.GetLine(sketch.Points), circ.GetCircle(sketch.Points));
        Assert.IsTrue(intersec.IsDone());
        if (intersec.NbPoints() > 1)
        {
            Assert.AreEqual(0.0, intersec.Point(1).Value().Distance(intersec.Point(2).Value()), MaxLengthDelta);
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TangentLineToArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(-20, 0));
        var p2 = sketch.AddPoint(new Pnt2d(20, 30));
        var line = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line);
        var ap1 = sketch.AddPoint(new Pnt2d(-10, 0));
        var ap2 = sketch.AddPoint(new Pnt2d(8, 8));
        var ap3 = sketch.AddPoint(new Pnt2d(0, -10));
        var circ = new SketchSegmentArc(ap1, ap3, ap2);
        var s2 = sketch.AddSegment(circ);
        var c1 = sketch.AddConstraint(new SketchConstraintTangent(s1, s2));
            
        Assert.IsTrue(sketch.SolveConstraints(true));
        var intersec = new IntAna2d_AnaIntersection(line.GetLine(sketch.Points), circ.GetCircle(sketch.Points));
        Assert.IsTrue(intersec.IsDone());
        if (intersec.NbPoints() > 1)
        {
            Assert.AreEqual(0.0, intersec.Point(1).Value().Distance(intersec.Point(2).Value()), MaxLengthDelta);
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PointOnLineMidpoint()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d(3, -10));
        var p2 = sketch.AddPoint(new Pnt2d(3, 10));
        var line = new SketchSegmentLine(p1, p2);
        var s1 = sketch.AddSegment(line);
        var p3 = sketch.AddPoint(new Pnt2d(-5, -5));
        var p4 = sketch.AddPoint(new Pnt2d(20, 20));
        var s2 = sketch.AddSegment(new SketchSegmentLine(p3, p4));
        var c1 = sketch.AddConstraint(new SketchConstraintPointOnMidpoint(p3, s1));

        Assert.IsTrue(sketch.SolveConstraints(true));
        var pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[p3], line.MakeCurve(sketch.Points));
        Assert.AreEqual(1, pointOnCurve.NbPoints());
        Assert.AreEqual(0.0, pointOnCurve.Distance(1), MaxLengthDelta);

        sketch.Points[p3] = new Pnt2d(18, 18);
        Assert.IsTrue(sketch.SolveConstraints(true));
        pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[p3], new Geom2d_Line(line.GetLine(sketch.Points)));
        Assert.AreEqual(1, pointOnCurve.NbPoints());
        Assert.AreEqual(0.0, pointOnCurve.Distance(1), MaxLengthDelta);
        Assert.AreEqual(pointOnCurve.Point(1).Distance(sketch.Points[p1]), pointOnCurve.Point(1).Distance(sketch.Points[p2]), MaxLengthDelta);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SmoothCorner_BezierBezier()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d( 0, 0));
        var p2 = sketch.AddPoint(new Pnt2d( 2, 9));
        var p3 = sketch.AddPoint(new Pnt2d(10, 10));
        var p4 = sketch.AddPoint(new Pnt2d(15, 9));
        var p5 = sketch.AddPoint(new Pnt2d(20, 7));
        var p6 = sketch.AddPoint(new Pnt2d(20, 0));
        var bezier1 = new SketchSegmentBezier(p1, p2, p3);
        var s1 = sketch.AddSegment(bezier1);
        var bezier2 = new SketchSegmentBezier(p3, p4, p5, p6);
        var s2 = sketch.AddSegment(bezier2);
        var constraint1 = new SketchConstraintSmoothCorner(p3, false);
        var c1 = sketch.AddConstraint(constraint1);

        Assert.IsTrue(sketch.SolveConstraints(true));

        var tan1 = new Vec2d(sketch.Points[p2], sketch.Points[p3]);
        var tan2 = new Vec2d(sketch.Points[p3], sketch.Points[p4]);
        Assert.IsTrue(tan1.IsParallel(tan2, 0.1));
        Assert.AreNotEqual(tan1.Magnitude(), tan2.Magnitude());
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SmoothCorner_BezierBezier_Symmetric()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d( 0, 0));
        var p2 = sketch.AddPoint(new Pnt2d( 2, 9));
        var p3 = sketch.AddPoint(new Pnt2d(10, 10));
        var p4 = sketch.AddPoint(new Pnt2d(15, 9));
        var p5 = sketch.AddPoint(new Pnt2d(20, 7));
        var p6 = sketch.AddPoint(new Pnt2d(20, 0));
        var bezier1 = new SketchSegmentBezier(p1, p2, p3);
        var s1 = sketch.AddSegment(bezier1);
        var bezier2 = new SketchSegmentBezier(p3, p4, p5, p6);
        var s2 = sketch.AddSegment(bezier2);
        var constraint1 = new SketchConstraintSmoothCorner(p3, true);
        var c1 = sketch.AddConstraint(constraint1);

        Assert.IsTrue(sketch.SolveConstraints(true));

        var tan1 = new Vec2d(sketch.Points[p2], sketch.Points[p3]);
        var tan2 = new Vec2d(sketch.Points[p3], sketch.Points[p4]);
        Assert.IsTrue(tan1.IsParallel(tan2, 0.1));
        Assert.AreEqual(tan1.Magnitude(), tan2.Magnitude(), 0.0001);
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SmoothCorner_BezierLine()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d( 0, 0));
        var p2 = sketch.AddPoint(new Pnt2d( 2, 9));
        var p3 = sketch.AddPoint(new Pnt2d(10, 10));
        var p4 = sketch.AddPoint(new Pnt2d(15, 0));
        var bezier1 = new SketchSegmentBezier(p1, p2, p3);
        var s1 = sketch.AddSegment(bezier1);
        var line = new SketchSegmentLine(p3, p4);
        var s2 = sketch.AddSegment(line);
        var constraint1 = new SketchConstraintSmoothCorner(p3, true);
        var c1 = sketch.AddConstraint(constraint1);

        Assert.IsTrue(sketch.SolveConstraints(true));

        var tan1 = new Vec2d(sketch.Points[p2], sketch.Points[p3]);
        var tan2 = new Vec2d(sketch.Points[p3], sketch.Points[p4]);
        Assert.IsTrue(tan1.IsParallel(tan2, 0.01));
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SmoothCorner_BezierArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var p1 = sketch.AddPoint(new Pnt2d( 0, 0));
        var p2 = sketch.AddPoint(new Pnt2d( 2, 9));
        var p3 = sketch.AddPoint(new Pnt2d(10, 10));
        var p4 = sketch.AddPoint(new Pnt2d(20, 0));
        var p5 = sketch.AddPoint(new Pnt2d(18, 7));
        var bezier1 = new SketchSegmentBezier(p1, p2, p3);
        var s1 = sketch.AddSegment(bezier1);
        var arc = new SketchSegmentArc(p3, p4, p5);
        var s2 = sketch.AddSegment(arc);
        var constraint1 = new SketchConstraintSmoothCorner(p3, true);
        var c1 = sketch.AddConstraint(constraint1);

        Assert.IsTrue(sketch.SolveConstraints(true));

        var tan1 = new Vec2d(sketch.Points[p2], sketch.Points[p3]);
        var parameter = new double[2];
        var circle = arc.GetCircle(sketch.Points, parameter);
        var pnt = new Pnt2d();
        var tan2 = new Vec2d();
        ElCLib.D1(parameter[0], circle, ref pnt, ref tan2);
        Assert.IsTrue(tan1.IsParallel(tan2, 0.01));
    }
}