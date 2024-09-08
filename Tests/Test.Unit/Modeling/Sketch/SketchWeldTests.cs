using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Sketch;

public class SketchWeldTests
{
    [Test]
    public void WeldPoints()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(1.0, 1.0, 2.0, 2.0); // 0, 1
        sb.Line(1.0, 1.0, -2.0, -2.0); // 2, 3
        sb.Line(1.2, 1.2, -2.0, 2.0); // 4, 5

        Assert.IsTrue(SketchUtils.WeldPoints(sketch, new[] { 0, 2, 4 }));

        Assert.AreEqual(4, sketch.Points.Count);
        Assert.AreEqual(3, sketch.Segments.Count);
        Assert.AreEqual(6, sketch.Segments[0].StartPoint);
        Assert.AreEqual(1, sketch.Segments[0].EndPoint);
        Assert.AreEqual(6, sketch.Segments[1].StartPoint);
        Assert.AreEqual(3, sketch.Segments[1].EndPoint);
        Assert.AreEqual(6, sketch.Segments[2].StartPoint);
        Assert.AreEqual(5, sketch.Segments[2].EndPoint);
        Assert.That(new Pnt2d(3.2 / 3, 3.2 / 3).IsEqual(sketch.Points[6], 0.001));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointsRemoveSegments()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 0.0, 1.0); // 0, 1
        sb.Line(1.0, 0.0, 1.0, 1.0); // 2, 3
        sketch.AddSegment(new SketchSegmentLine(0, 2));
        sketch.AddSegment(new SketchSegmentLine(3, 1));

        Assert.IsTrue(SketchUtils.WeldPoints(sketch, new[] { 0, 1 }));

        Assert.AreEqual(3, sketch.Points.Count);
        Assert.AreEqual(3, sketch.Segments.Count);
    }
                                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointsRemoveCircleSegment()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Circle(0.0, 0.0, 0.0, 1.0); // 0, 1

        Assert.IsTrue(SketchUtils.WeldPoints(sketch, new[] { 1, 0 }));

        Assert.AreEqual(0, sketch.Points.Count);
        Assert.AreEqual(0, sketch.Segments.Count);
    }                     
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointsRemoveEllipseSegment()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Ellipse(0.0, 0.0, 1.0, 1.0, 0.0); // 0, 1, 2

        Assert.IsTrue(SketchUtils.WeldPoints(sketch, new[] { 2, 1, 0 }));

        Assert.AreEqual(0, sketch.Points.Count);
        Assert.AreEqual(0, sketch.Segments.Count);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPoints_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(1.0, 1.0, 2.0, 2.0); // 0, 1
        sb.Line(1.0, 1.0, -2.0, -2.0); // 2, 3
        sb.Line(1.2, 1.2, -2.0, 2.0); // 4, 5

        Assert.IsFalse(SketchUtils.WeldPoints(sketch, new[] { 0 }));
        Assert.AreEqual(6, sketch.Points.Count);

        Assert.IsTrue(SketchUtils.WeldPoints(sketch, new[] { 0, 2, 0 }));
        Assert.AreEqual(5, sketch.Points.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointWithLineSegment()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
        sb.Line(5.0, 0.0, 5.0, 5.0); // 2, 3, s1

        Assert.IsTrue(SketchUtils.WeldPointsWithSegments(sketch, new[] { sketch.Segments[0] }, new[] { 2 }));

        Assert.AreEqual(4, sketch.Points.Count);
        Assert.AreEqual(3, sketch.Segments.Count);
        Assert.AreEqual(0, sketch.Segments[2].StartPoint);
        Assert.AreEqual(4, sketch.Segments[2].EndPoint);
        Assert.AreEqual(4, sketch.Segments[3].StartPoint);
        Assert.AreEqual(1, sketch.Segments[3].EndPoint);
        Assert.AreEqual(4, sketch.Segments[1].StartPoint);
        Assert.AreEqual(3, sketch.Segments[1].EndPoint);
        Assert.IsTrue(sketch.Points[4].IsEqual(new Pnt2d(5.0, 0.0), 0.01));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointsWithLineSegment()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
        sb.Line(5.0, 0.0, 5.0, 5.0); // 2, 3, s1
        sb.Line(6.0, 0.0, 5.0, 5.0); // 4, 5, s2

        Assert.IsTrue(SketchUtils.WeldPointsWithSegments(sketch, new[] { sketch.Segments[0] }, new[] { 2, 4 }));

        Assert.AreEqual(6, sketch.Points.Count);
        Assert.AreEqual(5, sketch.Segments.Count);
        Assert.AreEqual(6, sketch.Segments[1].StartPoint);
        Assert.AreEqual(3, sketch.Segments[1].EndPoint);
        Assert.AreEqual(7, sketch.Segments[2].StartPoint);
        Assert.AreEqual(5, sketch.Segments[2].EndPoint);
        Assert.AreEqual(0, sketch.Segments[3].StartPoint);
        Assert.AreEqual(6, sketch.Segments[3].EndPoint);
        Assert.AreEqual(6, sketch.Segments[5].StartPoint);
        Assert.AreEqual(7, sketch.Segments[5].EndPoint);
        Assert.AreEqual(7, sketch.Segments[6].StartPoint);
        Assert.AreEqual(1, sketch.Segments[6].EndPoint);
        Assert.IsTrue(sketch.Points[6].IsEqual(new Pnt2d(5.0, 0.0), 0.01));
        Assert.IsTrue(sketch.Points[7].IsEqual(new Pnt2d(6.0, 0.0), 0.01));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointWithLineSegments()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
        sb.Line(5.0, 0.0, 5.0, 5.0); // 2, 3, s1
        sb.Line(0.0, 0.1, 10.0, 0.1); // 4, 5, s2 - Parallel line segment

        Assert.IsTrue(SketchUtils.WeldPointsWithSegments(sketch, new[] { sketch.Segments[0], sketch.Segments[2] }, new[] { 2 }));

        Assert.AreEqual(6, sketch.Points.Count);
        Assert.AreEqual(4, sketch.Segments.Count);
        Assert.IsFalse(sketch.Segments.ContainsKey(0));
        Assert.IsTrue(sketch.Segments.ContainsKey(1));

        Assert.IsTrue(sketch.Points[6].IsEqual(new Pnt2d(5.0, 0.0), 0.01));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPointWithSegment_IncorrectParameters()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
            
        Assert.IsFalse(SketchUtils.WeldPointsWithSegments(sketch, new[] { sketch.Segments[0] }, new[] { 0 }));
        Assert.AreEqual(2, sketch.Points.Count);
        Assert.AreEqual(1, sketch.Segments.Count);

        Assert.IsFalse(SketchUtils.WeldPointsWithSegments(sketch, new SketchSegment[] { }, new[] { 0 }));
        Assert.AreEqual(2, sketch.Points.Count);
        Assert.AreEqual(1, sketch.Segments.Count);

        Assert.IsFalse(SketchUtils.WeldPointsWithSegments(sketch, new[] { sketch.Segments[0] }, new int[] { }));
        Assert.AreEqual(2, sketch.Points.Count);
        Assert.AreEqual(1, sketch.Segments.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldLineSegments()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
        sb.Line(5.0, -5.0, 5.0, 5.0); // 2, 3, s1

        Assert.IsTrue(SketchUtils.WeldSegments(sketch, new[] { sketch.Segments[0], sketch.Segments[1] }));

        Assert.AreEqual(5, sketch.Points.Count);
        Assert.AreEqual(4, sketch.Segments.Count);
        Assert.AreEqual(0, sketch.Segments[2].StartPoint);
        Assert.AreEqual(4, sketch.Segments[2].EndPoint);
        Assert.AreEqual(4, sketch.Segments[3].StartPoint);
        Assert.AreEqual(1, sketch.Segments[3].EndPoint);
        Assert.AreEqual(2, sketch.Segments[4].StartPoint);
        Assert.AreEqual(4, sketch.Segments[4].EndPoint);
        Assert.AreEqual(4, sketch.Segments[5].StartPoint);
        Assert.AreEqual(3, sketch.Segments[5].EndPoint);
        Assert.IsTrue(sketch.Points[4].IsEqual(new Pnt2d(5.0, 0.0), 0.01));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldCurvedSegments()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Arc(0.0, 0.0, 10.0, 0.0, 5.0, 5.0); // 0, 1, 2 s0
        sb.Arc(0.0, 5.0, 10.0, 5.0, 5.0, 0.0); // 2, 3, 4 s1

        Assert.IsTrue(SketchUtils.WeldSegments(sketch, new[] { sketch.Segments[0], sketch.Segments[1] }));

        Assert.AreEqual(12, sketch.Points.Count);
        Assert.AreEqual(6, sketch.Segments.Count);
    }
              
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(0, TestName = "WeldLineSegmentsInOnePoint_Forward")]
    [TestCase(1, TestName = "WeldLineSegmentsInOnePoint_Reverse")]
    public void WeldLineSegmentsInOnePoint(int segOrder)
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
        sb.Line(5.0, 0.0, 5.0, 5.0); // 2, 3, s1

        Assert.IsTrue(SketchUtils.WeldSegments(sketch, new[] { sketch.Segments[0 + segOrder], sketch.Segments[1 - segOrder] }));

        Assert.AreEqual(4, sketch.Points.Count);
        Assert.AreEqual(3, sketch.Segments.Count);
        Assert.AreEqual(0, sketch.Segments[2].StartPoint);
        Assert.AreEqual(4, sketch.Segments[2].EndPoint);
        Assert.AreEqual(4, sketch.Segments[3].StartPoint);
        Assert.AreEqual(1, sketch.Segments[3].EndPoint);
        Assert.AreEqual(4, sketch.Segments[1].StartPoint);
        Assert.AreEqual(3, sketch.Segments[1].EndPoint);
        Assert.IsTrue(sketch.Points[4].IsEqual(new Pnt2d(5.0, 0.0), 0.01));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(0, TestName = "WeldOverlapSegments_LineLine_Forward")]
    [TestCase(1, TestName = "WeldOverlapSegments_LineLine_Reverse")]
    public void WeldOverlapSegments_LineLine(int segOrder)
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0.0, 0.0, 10.0, 0.0); // 0, 1, s0
        sb.Line(2.5, 0.0, 7.5, 0.0); // 2, 3, s1

        Assert.IsTrue(SketchUtils.WeldSegments(sketch, new[] { sketch.Segments[0 + segOrder], sketch.Segments[1 - segOrder] }));

        Assert.AreEqual(4, sketch.Points.Count);
        Assert.AreEqual(3, sketch.Segments.Count);
        Assert.AreEqual(0, sketch.Segments[2].StartPoint);
        Assert.AreEqual(4, sketch.Segments[2].EndPoint);
        Assert.AreEqual(4, sketch.Segments[4].StartPoint);
        Assert.AreEqual(5, sketch.Segments[4].EndPoint);
        Assert.AreEqual(5, sketch.Segments[5].StartPoint);
        Assert.AreEqual(1, sketch.Segments[5].EndPoint);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    [TestCase(0, TestName = "WeldOverlapSegments_LineCircle_Forward")]
    [TestCase(1, TestName = "WeldOverlapSegments_LineCircle_Reverse")]
    public void WeldOverlapSegments_LineCircle(int segOrder)
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(-10.0, 0.0, 0.0, 10.0); 
        sb.Circle(0.0, 0.0, 7.5, 0.0);

        Assert.IsTrue(SketchUtils.WeldSegments(sketch, new[] { sketch.Segments[0 + segOrder], sketch.Segments[1 - segOrder] }));

        Assert.AreEqual(8, sketch.Points.Count);
        Assert.AreEqual(6, sketch.Segments.Count);
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    [TestCase(0, TestName = "WeldOverlapSegments_CircleCircle_Forward")]
    [TestCase(1, TestName = "WeldOverlapSegments_CircleCircle_Reverse")]
    public void WeldOverlapSegments_CircleCircle(int segOrder)
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Circle(5.0, 5.0, 5.0, 15.0);
        sb.Circle(0.0, 0.0, 0.0, 10.0); 

        Assert.IsTrue(SketchUtils.WeldSegments(sketch, new[] { sketch.Segments[0 + segOrder], sketch.Segments[1 - segOrder] }));

        Assert.AreEqual(10, sketch.Points.Count);
        Assert.AreEqual(6, sketch.Segments.Count);
    }

    //--------------------------------------------------------------------------------------------------
}