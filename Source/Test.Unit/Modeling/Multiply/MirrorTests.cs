using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Multiply
{
    [TestFixture]
    public class MirrorTests
    {
        const string _BasePath = @"Modeling\Multiply\Mirror";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Mirror2DOnEdge()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);
            var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(sketch.Body, subshape);
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
            AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "2DOnEdge"));

            // Ensure that original shape is still unmodified
            AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "2DOnEdge2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Mirror2DOnEdgeOffset()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);
            var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 0);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(sketch.Body, subshape);
            mirror.Offset = 10;
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
            AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "2DOnEdgeOffset"));
        }

        //--------------------------------------------------------------------------------------------------


        [Test]
        public void Mirror2DOnEdgeOffsetReversed()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);
            var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 1);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(sketch.Body, subshape);
            mirror.Offset = 10;
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
            AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "2DOnEdgeOffsetReversed"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Mirror2DOnCurvedEdge()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);
            var subshape = sketch.GetSubshapeReference(SubshapeType.Edge, 2);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(sketch.Body, subshape);
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, mirror.ShapeType);
            AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, "2DOnCurvedEdge"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MirrorOnFace()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 5);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(imprint.Body, subshape);
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
            AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "OnFace"));
        }


        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void MirrorOnFaceOffset()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 5);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(imprint.Body, subshape);
            mirror.Offset = 10;
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
            AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "OnFaceOffset"));
        }
        
        //--------------------------------------------------------------------------------------------------
                
        [Test]
        public void MirrorOnFaceOffsetReversed()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 0);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(imprint.Body, subshape);
            mirror.Offset = 5;
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
            AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "OnFaceOffsetReversed"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MirrorOnCurvedFace()
        {
            var imprint = TestGeomGenerator.CreateImprint();
            var subshape = imprint.GetSubshapeReference(SubshapeType.Face, 6);
            Assume.That(subshape != null);

            var mirror = Mirror.Create(imprint.Body, subshape);
            Assert.IsTrue(mirror.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, mirror.ShapeType);
            AssertHelper.IsSameModel(mirror, Path.Combine(_BasePath, "OnCurvedFace"));
        }

        //--------------------------------------------------------------------------------------------------

    }
}