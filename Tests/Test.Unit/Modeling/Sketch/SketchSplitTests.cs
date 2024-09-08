using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Sketch;

[TestFixture]
public class SketchSplitTests
{
    const string _BasePath = @"Modeling\Sketch";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitLine()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(10, 0));
        int s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 5.0);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(3, sketch.Points.Count);
        Assert.That(new Pnt2d(5.0, 0).IsEqual(sketch.Points[p3], 0.01));

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentLine>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p1, p3 }));
        Assert.IsInstanceOf<SketchSegmentLine>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p3, p2 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitLine"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitLine_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(10, 0));
        int s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
        int s2 = sketch.AddSegment(new SketchSegmentLine(p2, p1));

        // U is out of bound
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], -1.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 10.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 11.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s2], -1.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s2], 11.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitCircle()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(10, 0));
        int s1 = sketch.AddSegment(new SketchSegmentCircle(p1, p2));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(4, sketch.Points.Count);
        Assert.That(new Pnt2d(-10.0, 0).IsEqual(sketch.Points[p3], 0.01));

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p2, p3, p3 + 1 }));
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p3, p2, p3 + 2 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitCircle"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitCircle_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(10, 0));
        int s1 = sketch.AddSegment(new SketchSegmentCircle(p1, p2));

        // U is on rim point
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.DoublePI));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], -Maths.DoublePI));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitCircleRimOffset()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(0, 10));
        int s1 = sketch.AddSegment(new SketchSegmentCircle(p1, p2));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI*0.75 );
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(4, sketch.Points.Count);
        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitCircleRimOffset"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(5, 3));
        int pr = sketch.AddPoint(new Pnt2d(2, 3));
        int s1 = sketch.AddSegment(new SketchSegmentArc(p1, p2, pr));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 0.25);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(5, sketch.Points.Count);

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p1, p3, p3 + 1 }));
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p3, p2, p3 + 2 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitArc"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitArcReverse()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(-5, 3));
        int pr = sketch.AddPoint(new Pnt2d(-2, 3));
        int s1 = sketch.AddSegment(new SketchSegmentArc(p1, p2, pr));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 0.25);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(5, sketch.Points.Count);

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p1, p3, p3 + 1 }));
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p3, p2, p3 + 2 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitArcReverse"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitArc_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(5, 3));
        int pr = sketch.AddPoint(new Pnt2d(2, 3));
        int s1 = sketch.AddSegment(new SketchSegmentArc(p1, p2, pr));

        // U is on rim point
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], -0.5));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 2.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitEllipse()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(2, 1));
        int p2 = sketch.AddPoint(new Pnt2d(1.5, 3));
        int pc = sketch.AddPoint(new Pnt2d(0, 0));
        int s1 = sketch.AddSegment(new SketchSegmentEllipse(pc, p1, p2));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.HalfPI);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(3, sketch.Points.Count);

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p2, p3, pc }));
        Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p3, p2, pc }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitEllipse"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitEllipse_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(2, 1));
        int p2 = sketch.AddPoint(new Pnt2d(1.5, 3));
        int pc = sketch.AddPoint(new Pnt2d(0, 0));
        int s1 = sketch.AddSegment(new SketchSegmentEllipse(pc, p1, p2));

        // U is on major x axis
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.DoublePI));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], -Maths.DoublePI));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitEllipticalArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(2, 1));
        int p2 = sketch.AddPoint(new Pnt2d(-2, 5));
        int pc = sketch.AddPoint(new Pnt2d(0, 0));
        int s1 = sketch.AddSegment(new SketchSegmentEllipticalArc(p1, p2, pc));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 1.75);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(6, sketch.Points.Count);

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p3, p2, pc }));
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p1, p3 + 1, p3 + 2, p3 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitEllipticalArc"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitEllipticalArcReversed()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 5));
        int p2 = sketch.AddPoint(new Pnt2d(2, 1));
        int pc = sketch.AddPoint(new Pnt2d(0, 0));
        int s1 = sketch.AddSegment(new SketchSegmentEllipticalArc(p1, p2, pc));

        (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 0.25);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

        Assert.AreEqual(12, sketch.Points.Count);

        Assert.AreEqual(4, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p1, p3, pc }));
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { p3, p3 + 1, p3 + 2, p3 + 3 }));
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[2]]);
        Assert.That(sketch.Segments[segs[2]].Points.SequenceEqual(new[] { p3 + 3, p3 + 4, p3 + 5, p3 + 6 }));
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[3]]);
        Assert.That(sketch.Segments[segs[3]].Points.SequenceEqual(new[] { p3 + 6, p3 + 7, p3 + 8, p2 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitEllipticalArcReversed"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitEllipticalArc_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 5));
        int p2 = sketch.AddPoint(new Pnt2d(2, 1));
        int pc = sketch.AddPoint(new Pnt2d(0, 0));
        int s1 = sketch.AddSegment(new SketchSegmentEllipticalArc(p1, p2, pc));

        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.DoublePI));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitBezier2()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
        int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
        int p3 = sketch.AddPoint(new Pnt2d(3, 2));
        int s1 = sketch.AddSegment(new SketchSegmentBezier(p1, p2, p3));

        (int ps, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.3);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (ps, segs));

        Assert.AreEqual(5, sketch.Points.Count);

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p1, ps + 1, ps }));
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { ps, ps + 2, p3 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitBezier2"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitBezier3()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
        int p2 = sketch.AddPoint(new Pnt2d(-0.5, 4));
        int p3 = sketch.AddPoint(new Pnt2d(1.5, 5));
        int p4 = sketch.AddPoint(new Pnt2d(3, 2));
        int s1 = sketch.AddSegment(new SketchSegmentBezier(p1, p2, p3, p4));

        (int ps, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.3);
        Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (ps, segs));

        Assert.AreEqual(7, sketch.Points.Count);

        Assert.AreEqual(2, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[0]]);
        Assert.That(sketch.Segments[segs[0]].Points.SequenceEqual(new[] { p1, ps + 1, ps + 2, ps }));
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
        Assert.That(sketch.Segments[segs[1]].Points.SequenceEqual(new[] { ps, ps + 3, ps + 4, p4 }));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitBezier3"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitBezier_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
        int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
        int p3 = sketch.AddPoint(new Pnt2d(3, 2));
        int s1 = sketch.AddSegment(new SketchSegmentBezier(p1, p2, p3));

        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.0));
        Assert.AreEqual(SketchUtils.SplitSegmentFailed, SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 1.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitPoint()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);

        Assert.IsTrue(SketchUtils.CanSplitPoint(sketch, 0));
        var newPoints = SketchUtils.SplitPoint(sketch, 0);
        Assert.That(newPoints.SequenceEqual(new[] { 4 }));
        Assert.AreEqual(5, sketch.Points.Count);

        Assert.AreEqual(4, sketch.Segments[0].StartPoint);
        Assert.AreEqual(0, sketch.Segments[3].EndPoint);
        Assert.IsFalse(SketchUtils.CanSplitPoint(sketch, 0));
    }

    //--------------------------------------------------------------------------------------------------

}