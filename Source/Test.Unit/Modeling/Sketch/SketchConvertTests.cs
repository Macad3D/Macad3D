using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Sketch;

[TestFixture]
public class SketchConvertTests
{
    [Test]
    public void ConvertToLine()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(5, 3));
        int pr = sketch.AddPoint(new Pnt2d(2, 3));
        var s1 = new SketchSegmentArc(p1, p2, pr);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentLine)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentLine));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentLine>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p2, sketch.Segments[s2].EndPoint);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertArcToEllipticalArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(5, 3));
        int pr = sketch.AddPoint(new Pnt2d(2, 3));
        var s1 = new SketchSegmentArc(p1, p2, pr);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentEllipticalArc)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentEllipticalArc));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p2, sketch.Segments[s2].EndPoint);
        Assert.AreEqual(pr + 1, sketch.Segments[s2].Points[2]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertEllipticalArcToArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(2, 1));
        int p2 = sketch.AddPoint(new Pnt2d(-2, 5));
        int pc = sketch.AddPoint(new Pnt2d(0, 0));
        var s1 = new SketchSegmentEllipticalArc(p1, p2, pc);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentArc)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentArc));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p2, sketch.Segments[s2].EndPoint);
        Assert.AreEqual(pc + 1, sketch.Segments[s2].Points[2]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertBezierToArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
        int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
        int p3 = sketch.AddPoint(new Pnt2d(3, 2));
        var s1 = new SketchSegmentBezier(p1, p2, p3);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentArc)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentArc));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p3, sketch.Segments[s2].EndPoint);
        Assert.AreEqual(p3 + 1, sketch.Segments[s2].Points[2]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertLineToBezier()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(10, 0));
        var s1 = new SketchSegmentLine(p1, p2);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentBezier)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentBezier));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p2, sketch.Segments[s2].EndPoint);
        Assert.AreEqual(p2 + 1, sketch.Segments[s2].Points[1]);
        Assert.AreEqual(p2 + 2, sketch.Segments[s2].Points[2]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertBezier2ToBezier()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
        int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
        int p3 = sketch.AddPoint(new Pnt2d(3, 2));
        var s1 = new SketchSegmentBezier(p1, p2, p3);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentBezier)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentBezier));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p3, sketch.Segments[s2].EndPoint);
        Assert.AreEqual(p2, sketch.Segments[s2].Points[1]);
        Assert.AreEqual(p3 + 1, sketch.Segments[s2].Points[2]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertBezier3ToBezier()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
        int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
        int p3 = sketch.AddPoint(new Pnt2d(2, 3));
        int p4 = sketch.AddPoint(new Pnt2d(3, 2));
        var s1 = new SketchSegmentBezier(p1, p2, p3, p4);
        sketch.AddSegment(s1);

        Assert.IsFalse(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentBezier)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertArcToBezier()
    {
        var sketch = Core.Shapes.Sketch.Create();
        int p1 = sketch.AddPoint(new Pnt2d(0, 0));
        int p2 = sketch.AddPoint(new Pnt2d(5, 3));
        int pr = sketch.AddPoint(new Pnt2d(2, 3));
        var s1 = new SketchSegmentArc(p1, p2, pr);
        sketch.AddSegment(s1);

        Assert.IsTrue(SketchUtils.CanConvertSegment(sketch, s1, typeof(SketchSegmentBezier)));
        var s2 = SketchUtils.ConvertSegment(sketch, s1, typeof(SketchSegmentBezier));
        Assert.AreNotEqual(SketchUtils.ConvertSegmentFailed, s2);

        Assert.AreEqual(1, sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[1]);
        Assert.AreEqual(p1, sketch.Segments[s2].StartPoint);
        Assert.AreEqual(p2, sketch.Segments[s2].EndPoint);
        Assert.AreEqual(pr + 1, sketch.Segments[s2].Points[1]);
        Assert.AreEqual(pr + 2, sketch.Segments[s2].Points[2]);
    }

    //--------------------------------------------------------------------------------------------------

}