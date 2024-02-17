using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Test.Utils;

public static class TestSketchGenerator
{
    public enum SketchType
    {
        Circle,
        Ring,
        MultiCircle,
        Ellipse,
        Rectangle,
        SimpleAsymmetric
    }

    //--------------------------------------------------------------------------------------------------

    public static Sketch CreateRectangle(double sizeX, double sizeY)
    {
        var sketch = Sketch.Create();

        sketch.Points.Add(0, new Pnt2d(sizeX, sizeY));
        sketch.Points.Add(1, new Pnt2d(-sizeX, sizeY));
        sketch.Points.Add(2, new Pnt2d(-sizeX, -sizeY));
        sketch.Points.Add(3, new Pnt2d(sizeX, -sizeY));
        sketch.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch.Segments.Add(1, new SketchSegmentLine(1, 2));
        sketch.Segments.Add(2, new SketchSegmentLine(2, 3));
        sketch.Segments.Add(3, new SketchSegmentLine(3, 0));

        Body.Create(sketch);
        return sketch;
    }

    //--------------------------------------------------------------------------------------------------

    public static Sketch CreateCircleWithArcs(double radius, int arcCount)
    {
        var sketch = Sketch.Create();
        var circle = new Geom2d_Circle(Ax2d.OX, radius);
        var step = circle.Period() / (arcCount*2);

        int startIndex = sketch.AddPoint(circle.Value(0));
        for (int i = 0; i < arcCount; i++)
        {
            int rimIndex = sketch.AddPoint(circle.Value(i*step*2 + step));
            int endIndex = sketch.AddPoint(circle.Value((i + 1) * step * 2));
            sketch.AddSegment(new SketchSegmentArc(startIndex, endIndex, rimIndex));
            startIndex = endIndex;
        }
        sketch.MergePoints(startIndex, 0);
            
        Body.Create(sketch);
        return sketch;
    }

    //--------------------------------------------------------------------------------------------------

    public static Sketch CreateSketch(SketchType sketchType = SketchType.Circle, bool createBody = false)
    {
        var sketch = new Sketch();
        FillSketch(sketch, sketchType);
        if(createBody)
            TestGeomGenerator.CreateBody(sketch);
        return sketch;
    }

    //--------------------------------------------------------------------------------------------------

    public static void FillSketch(Sketch sketch, SketchType sketchType)
    {
        if (sketchType == SketchType.Ellipse)
        {
            sketch.Points.Add(0, new Pnt2d(0, 0));
            sketch.Points.Add(1, new Pnt2d(1.5, 5));
            sketch.Points.Add(2, new Pnt2d(2.5, 2.5));
            sketch.Segments.Add(0, new SketchSegmentEllipse(0, 1, 2));
        }
        else if (sketchType == SketchType.Rectangle)
        {
            sketch.Points.Add(0, new Pnt2d(5, 5));
            sketch.Points.Add(1, new Pnt2d(-5, 5));
            sketch.Points.Add(2, new Pnt2d(-5, -5));
            sketch.Points.Add(3, new Pnt2d(5, -5));
            sketch.Segments.Add(0, new SketchSegmentLine(0, 1));
            sketch.Segments.Add(1, new SketchSegmentLine(1, 2));
            sketch.Segments.Add(2, new SketchSegmentLine(2, 3));
            sketch.Segments.Add(3, new SketchSegmentLine(3, 0));
            sketch.Constraints.Add(new SketchConstraintPerpendicular(0, 1));
            sketch.Constraints.Add(new SketchConstraintPerpendicular(1, 2));
            sketch.Constraints.Add(new SketchConstraintPerpendicular(2, 3));
            sketch.Constraints.Add(new SketchConstraintPerpendicular(3, 0));
        }
        else if (sketchType == SketchType.SimpleAsymmetric)
        {
            sketch.Points.Add(0, new Pnt2d(0, 10));
            sketch.Points.Add(1, new Pnt2d(2, -10));
            sketch.Points.Add(2, new Pnt2d(7, 7));
            sketch.Points.Add(3, new Pnt2d(10, -2));

            sketch.Segments.Add(0, new SketchSegmentLine(0, 1));
            sketch.Segments.Add(1, new SketchSegmentLine(0, 2));
            sketch.Segments.Add(2, new SketchSegmentArc(1, 2, 3));
        }
        else
        {
            sketch.Points.Add(0, new Pnt2d(0, 0));
            sketch.Points.Add(1, new Pnt2d(5, 5));
            sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));

            if (sketchType == SketchType.Ring)
            {
                sketch.Points.Add(2, new Pnt2d(2.5, 2.5));
                sketch.Segments.Add(1, new SketchSegmentCircle(0, 2));
            }
            else if (sketchType == SketchType.MultiCircle)
            {
                sketch.Points.Add(2, new Pnt2d(8, 8));
                sketch.Points.Add(3, new Pnt2d(9.5, 9.5));
                sketch.Segments.Add(1, new SketchSegmentCircle(2, 3));
                sketch.Points.Add(4, new Pnt2d(-8, -8));
                sketch.Points.Add(5, new Pnt2d(-9.5, -9.5));
                sketch.Segments.Add(2, new SketchSegmentCircle(4, 5));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}