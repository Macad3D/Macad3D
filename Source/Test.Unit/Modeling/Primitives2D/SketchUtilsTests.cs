using System.IO;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives2D
{
    [TestFixture]
    public class SketchUtilsTests
    {
        const string _BasePath = @"Modeling\Primitives2D\SketchUtils";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SplitLine()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 0));
            int p2 = sketch.AddPoint(new Pnt2d(10, 0));
            int s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));

            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 5.0);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

            Assert.AreEqual(3, sketch.Points.Count);
            Assert.That(new Pnt2d(5.0, 0).IsEqual(sketch.Points[p3], 0.01));

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentLine>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p1, p3}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentLine>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p3, p2}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitLine"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SplitLine_IncorrectParameters()
        {
            var sketch = Sketch.Create();
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
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 0));
            int p2 = sketch.AddPoint(new Pnt2d(10, 0));
            int s1 = sketch.AddSegment(new SketchSegmentCircle(p1, p2));

            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

            Assert.AreEqual(4, sketch.Points.Count);
            Assert.That(new Pnt2d(-10.0, 0).IsEqual(sketch.Points[p3], 0.01));

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p2, p3, p3 + 1}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p3, p2, p3 + 2}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitCircle"));

        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SplitCircle_IncorrectParameters()
        {
            var sketch = Sketch.Create();
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
        public void SplitArc()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 0));
            int p2 = sketch.AddPoint(new Pnt2d(5, 3));
            int pr = sketch.AddPoint(new Pnt2d(2, 3));
            int s1 = sketch.AddSegment(new SketchSegmentArc(p1, p2, pr));

            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 0.25);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

            Assert.AreEqual(5, sketch.Points.Count);

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p1, p3, p3 + 1}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p3, p2, p3 + 2}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitArc"));

        }
                
        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SplitArcReverse()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 0));
            int p2 = sketch.AddPoint(new Pnt2d(-5, 3));
            int pr = sketch.AddPoint(new Pnt2d(-2, 3));
            int s1 = sketch.AddSegment(new SketchSegmentArc(p1, p2, pr));

            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 0.25);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

            Assert.AreEqual(5, sketch.Points.Count);

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p1, p3, p3 + 1}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentArc>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p3, p2, p3 + 2}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitArcReverse"));

        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SplitArc_IncorrectParameters()
        {
            var sketch = Sketch.Create();
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
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(2, 1));
            int p2 = sketch.AddPoint(new Pnt2d(1.5, 3));
            int pc = sketch.AddPoint(new Pnt2d(0, 0));
            int s1 = sketch.AddSegment(new SketchSegmentEllipse(pc, p1, p2));
            
            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.HalfPI);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

            Assert.AreEqual(3, sketch.Points.Count);

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p2, p3, pc}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p3, p2, pc}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitEllipse"));

        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SplitEllipse_IncorrectParameters()
        {
            var sketch = Sketch.Create();
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
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(2, 1));
            int p2 = sketch.AddPoint(new Pnt2d(-2, 5));
            int pc = sketch.AddPoint(new Pnt2d(0, 0));
            int s1 = sketch.AddSegment(new SketchSegmentEllipticalArc(p1, p2, pc));

            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 1.75);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));

            Assert.AreEqual(6, sketch.Points.Count);

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p3, p2, pc}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p1, p3 + 1, p3 + 2, p3}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitEllipticalArc"));

        }
                
        //--------------------------------------------------------------------------------------------------
                
        [Test]
        public void SplitEllipticalArcReversed()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(-2, 5));
            int p2 = sketch.AddPoint(new Pnt2d(2, 1));
            int pc = sketch.AddPoint(new Pnt2d(0, 0));
            int s1 = sketch.AddSegment(new SketchSegmentEllipticalArc(p1, p2, pc));
            
            (int p3, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], Maths.PI * 0.25);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (p3, segs));
            
            Assert.AreEqual(12, sketch.Points.Count);

            Assert.AreEqual(4, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentEllipticalArc>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p1, p3, pc}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {p3, p3 + 1, p3 + 2, p3 + 3}, sketch.Segments[segs[1]].Points);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[2]]);
            CollectionAssert.AreEqual(new[] {p3 + 3, p3 + 4, p3 + 5, p3 + 6}, sketch.Segments[segs[2]].Points);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[3]]);
            CollectionAssert.AreEqual(new[] {p3 + 6, p3 + 7, p3 + 8, p2}, sketch.Segments[segs[3]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitEllipticalArcReversed"));

        }
                
        //--------------------------------------------------------------------------------------------------
                
        [Test]
        public void SplitEllipticalArc_IncorrectParameters()
        {
            var sketch = Sketch.Create();
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
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
            int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
            int p3 = sketch.AddPoint(new Pnt2d(3, 2));
            int s1 = sketch.AddSegment(new SketchSegmentBezier(p1, p2, p3));

            (int ps, int[] segs) = SketchUtils.SplitSegment(sketch, sketch.Segments[s1], 0.3);
            Assert.AreNotEqual(SketchUtils.SplitSegmentFailed, (ps, segs));

            Assert.AreEqual(5, sketch.Points.Count);

            Assert.AreEqual(2, sketch.Segments.Count);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[0]]);
            CollectionAssert.AreEqual(new[] {p1, ps + 1, ps}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {ps, ps + 2, p3}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitBezier2"));

        }
                
        //--------------------------------------------------------------------------------------------------
                        
        [Test]
        public void SplitBezier3()
        {
            var sketch = Sketch.Create();
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
            CollectionAssert.AreEqual(new[] {p1, ps + 1, ps + 2, ps}, sketch.Segments[segs[0]].Points);
            Assert.IsInstanceOf<SketchSegmentBezier>(sketch.Segments[segs[1]]);
            CollectionAssert.AreEqual(new[] {ps, ps + 3, ps + 4, p4}, sketch.Segments[segs[1]].Points);
            
            Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
            ModelCompare.CompareShape2D(sketch, Path.Combine(_BasePath, "SplitBezier3"));

        }
                
        //--------------------------------------------------------------------------------------------------
                        
        [Test]
        public void SplitBezier_IncorrectParameters()
        {
            var sketch = Sketch.Create();
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
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.Rectangle);

            Assert.IsTrue(SketchUtils.CanSplitPoint(sketch, 0));
            var newPoints = SketchUtils.SplitPoint(sketch, 0);
            CollectionAssert.AreEqual(new[] {4}, newPoints);
            Assert.AreEqual(5, sketch.Points.Count);

            Assert.AreEqual(4, sketch.Segments[0].StartPoint);
            Assert.AreEqual(0, sketch.Segments[3].EndPoint);
            Assert.IsFalse(SketchUtils.CanSplitPoint(sketch, 0));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointLineLine()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 0));
            int p2 = sketch.AddPoint(new Pnt2d(10, 0));
            int p3 = sketch.AddPoint(new Pnt2d(20, 0));
            int s1 = sketch.AddSegment(new SketchSegmentLine(p1, p2));
            int s2 = sketch.AddSegment(new SketchSegmentLine(p2, p3));

            SketchUtils.DeletePointTrySubstituteSegments(sketch, p2);
            Assert.AreEqual(2, sketch.Points.Count);
            Assert.AreEqual(1, sketch.Segments.Count);
            Assert.AreEqual(p1, sketch.Segments[s2+1].StartPoint);
            Assert.AreEqual(p3, sketch.Segments[s2+1].EndPoint);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointArcArc()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(0, 5));
            int p2 = sketch.AddPoint(new Pnt2d(4, 3));
            int p3 = sketch.AddPoint(new Pnt2d(3, 4));
            var arc1 = new SketchSegmentArc(p1, p2, p3);
            int s1 = sketch.AddSegment(arc1);
            int p4 = sketch.AddPoint(new Pnt2d(4, -3));
            int p5 = sketch.AddPoint(new Pnt2d(5, 0));
            var arc2 = new SketchSegmentArc(p2, p4, p5);
            int s2 = sketch.AddSegment(arc2);

            Assume.That(arc1.Center(sketch.Points).IsEqual(arc2.Center(sketch.Points), 0.001));

            SketchUtils.DeletePointTrySubstituteSegments(sketch, p2);
            Assert.AreEqual(3, sketch.Points.Count);
            Assert.AreEqual(1, sketch.Segments.Count);
            Assert.AreEqual(p1, sketch.Segments[s2+1].StartPoint);
            Assert.AreEqual(p4, sketch.Segments[s2+1].EndPoint);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointBezierBezier()
        {
            var sketch = Sketch.Create();
            int p1 = sketch.AddPoint(new Pnt2d(-2, 0));
            int p2 = sketch.AddPoint(new Pnt2d(0.5, 5));
            int p3 = sketch.AddPoint(new Pnt2d(3, 2));
            int s1 = sketch.AddSegment(new SketchSegmentBezier(p1, p2, p3));
            int p4 = sketch.AddPoint(new Pnt2d(5.5, 5));
            int p5 = sketch.AddPoint(new Pnt2d(8, 0));
            int s2 = sketch.AddSegment(new SketchSegmentBezier(p3, p4, p5));

            SketchUtils.DeletePointTrySubstituteSegments(sketch, p3);
            Assert.AreEqual(3, sketch.Points.Count);
            Assert.AreEqual(1, sketch.Segments.Count);
            Assert.AreEqual(p1, sketch.Segments[s2+1].StartPoint);
            Assert.AreEqual(p5, sketch.Segments[s2+1].EndPoint);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ConvertToLine()
        {
            var sketch = Sketch.Create();
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
            var sketch = Sketch.Create();
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
            Assert.AreEqual(pr+1, sketch.Segments[s2].Points[2]);
        }
        
        //--------------------------------------------------------------------------------------------------
                
        [Test]
        public void ConvertEllipticalArcToArc()
        {
            var sketch = Sketch.Create();
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
            Assert.AreEqual(pc+1, sketch.Segments[s2].Points[2]);
        }
        
        //--------------------------------------------------------------------------------------------------
                        
        [Test]
        public void ConvertBezierToArc()
        {
            var sketch = Sketch.Create();
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
            Assert.AreEqual(p3+1, sketch.Segments[s2].Points[2]);
        }
        
        //--------------------------------------------------------------------------------------------------
                                
        [Test]
        public void ConvertLineToBezier()
        {
            var sketch = Sketch.Create();
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
            Assert.AreEqual(p2+1, sketch.Segments[s2].Points[1]);
            Assert.AreEqual(p2+2, sketch.Segments[s2].Points[2]);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ConvertBezier2ToBezier()
        {
            var sketch = Sketch.Create();
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
            Assert.AreEqual(p3+1, sketch.Segments[s2].Points[2]);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ConvertBezier3ToBezier()
        {
            var sketch = Sketch.Create();
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
            var sketch = Sketch.Create();
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
            Assert.AreEqual(pr+1, sketch.Segments[s2].Points[1]);
            Assert.AreEqual(pr+2, sketch.Segments[s2].Points[2]);
        }
        
        //--------------------------------------------------------------------------------------------------

    }
}