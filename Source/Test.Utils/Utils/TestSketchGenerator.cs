using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;

namespace Macad.Test.Utils
{
    public static class TestSketchGenerator
    {
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

    }
}