using System.IO;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Form
{
    [TestFixture]
    public class PipeTests
    {
        const string _BasePath = @"Modeling\Form\Pipe";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SingleLineSegment()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.Line(0, 0, 10, 0);

            var pipe = Pipe.Create(body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "SingleLineSegment")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Rectangle()
        {
            var sketch = TestSketchGenerator.CreateRectangle(10, 5);

            var pipe = Pipe.Create(sketch.Body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "Rectangle")));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CircleOfArcs()
        {
            var sketch = TestSketchGenerator.CreateCircleWithArcs(10, 4);

            var pipe = Pipe.Create(sketch.Body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "CircleOfArcs")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultipleSegments()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.Line(0, 0, 0, 10);
            sb.Arc(10, 0, 8, 10, 5, 3);
            sb.Circle(20, 0, 5);
            sb.EllipticalArc(30, 0, 25, 10, 30, 4);
            sb.Ellipse(45, 0, 48, 8, 42, 0);
            sb.Bezier(55, 0, 55, 10, 58, 6);

            var pipe = Pipe.Create(body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "MultipleSegments")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void PolyPathG0()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var pipe = Pipe.Create(body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "PolyPathG0")));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void VaryBendRadius()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var pipe = Pipe.Create(body);

            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "VaryBendRadius01")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.AutoBendRadius);
            pipe.BendRadius = 0.5;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "VaryBendRadius02")));

            pipe.SizeX = 1.5;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "VaryBendRadius03")));

            pipe.Flags = pipe.Flags.Added(Pipe.PipeFlags.AutoBendRadius);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "VaryBendRadius04")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ProfileCircle()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var pipe = Pipe.Create(body);

            pipe.SizeX = 1.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCircle01")));

            pipe.SizeX = 2.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCircle02")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.SymmetricProfile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCircle03")));

            pipe.SizeX = 1.0;
            pipe.SizeY = 2.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCircle04")));

            pipe.Flags = pipe.Flags.Added(Pipe.PipeFlags.SymmetricProfile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCircle05")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.SymmetricProfile);
            pipe.Rotation = 20;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCircle06")));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ProfileHollowCircle()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var pipe = Pipe.Create(body);
            pipe.Profile = Pipe.ProfileType.HollowCircle;

            pipe.SizeX = 0.5;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowCircle01")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.SymmetricProfile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowCircle02")));

            pipe.SizeX = 1.5;
            pipe.Thickness = 0.2;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowCircle03")));

            // Too thick
            pipe.SizeX = 1.5;
            pipe.Thickness = 1.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowCircle04")));
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ProfileRectangle()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var pipe = Pipe.Create(body);
            pipe.Profile = Pipe.ProfileType.Rectangle;

            pipe.SizeX = 0.5;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileRectangle01")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.SymmetricProfile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileRectangle02")));

            pipe.SizeX = 1.5;
            pipe.Flags = pipe.Flags.Added(Pipe.PipeFlags.SymmetricProfile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileRectangle03")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.SymmetricProfile);
            pipe.Rotation = 20;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileRectangle04")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ProfileHollowRectangle()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var pipe = Pipe.Create(body);
            pipe.Profile = Pipe.ProfileType.HollowRectangle;

            pipe.SizeX = 0.5;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowRectangle01")));

            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.SymmetricProfile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowRectangle02")));

            pipe.SizeX = 1.5;
            pipe.Thickness = 0.2;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowRectangle03")));

            // Too thick
            pipe.SizeX = 1.5;
            pipe.Thickness = 1.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileHollowRectangle04")));
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ProfileCustom()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(25, 10);
            sb.LineTo(20, 0);

            var profile = Sketch.Create();
            sb = new SketchBuilder(profile);
            sb.StartPath(-0.5, -0.5);
            sb.LineTo(0, 0.5);
            sb.LineTo(0.5, -0.5);
            sb.LineTo(-0.5, -0.5);
            sb.ClosePath();

            var pipe = Pipe.Create(body, profile);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "ProfileCustom01")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EdgeTooShortToBend()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.LineTo(10, 0);
            sb.LineTo(15, 5);
            sb.LineTo(16, 5);
            sb.LineTo(10, -1);

            var pipe = Pipe.Create(body);
            pipe.Flags = pipe.Flags.Removed(Pipe.PipeFlags.AutoBendRadius);
            pipe.BendRadius = 1.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "EdgeTooShortToBend01")));

            pipe.BendRadius = 3.0;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "EdgeTooShortToBend02")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void UnsortedSpineSegments()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.Line(15, 5, 25, 10); // 3 - 0-1
            sb.Line(10, 0, 15, 5);  // 2 - 2-3
            sb.Line(25, 10, 20, 0); // 4 - 4-5
            sb.Line(0, 0, 10, 0);   // 1 - 6-7
            sketch.MergePoints(2,7);
            sketch.MergePoints(0,3);
            sketch.MergePoints(4,1);

            var pipe = Pipe.Create(body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "UnsortedSpineSegments01")));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void NonLinePathG0()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(0, 0);
            sb.ArcTo(10, 0, 5, 2);
            sb.BezierTo(20, 0, 15, -10);
            sb.LineTo(30, 0);
            sb.LineTo(35, 5);

            var pipe = Pipe.Create(body);
            Assert.IsNotNull(pipe);
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "NonLinePathG0")));
        }
        
        //--------------------------------------------------------------------------------------------------
                        
        [Test]
        public void SpineStartOffset()
        {
            var sketch = Sketch.Create();
            var body = Body.Create(sketch);
            var sb = new SketchBuilder(sketch);
            sb.StartPath(40, -165);
            sb.LineTo(   48, -110);
            sb.LineTo(  105, -116);
            sb.LineTo(  160,  -80);
            sb.LineTo(  112,  -30);
            sb.LineTo(   73,  -25);

            var pipe = Pipe.Create(body);
            pipe.Profile = Pipe.ProfileType.Rectangle;
            pipe.SizeX = 3.0;

/*            pipe.Profile = Pipe.ProfileType.Circle;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "SpineStartOffset01")));*/

            pipe.Profile = Pipe.ProfileType.Rectangle;
            Assert.IsTrue(pipe.Make(Shape.MakeFlags.None));
            Assert.IsTrue(ModelCompare.CompareShape(pipe, Path.Combine(_BasePath, "SpineStartOffset02")));
        }

    }
}