using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Form
{
    [TestFixture]
    public class ExtrudeTests
    {
        const string _BasePath = @"Modeling\Form\Extrude";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Simple()
        {
            var shape = TestGeomGenerator.CreateExtrude();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "Simple"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void NoDepth()
        {
            var shape = TestGeomGenerator.CreateExtrude();
            Assert.IsNotNull(shape);

            shape.Depth = 0;

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "NoDepth"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Ring()
        {
            var shape = TestGeomGenerator.CreateExtrude(TestSketchGenerator.SketchType.Ring);
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "Ring"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultiCircle()
        {
            var shape = TestGeomGenerator.CreateExtrude(TestSketchGenerator.SketchType.MultiCircle);
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "MultiCircle"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TransformedSketch()
        {
            var shape = TestGeomGenerator.CreateExtrude();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Body.Position = new Pnt(10, 0, 0);
            shape.Body.Rotation = new Quaternion(0, 45.0.ToRad(), 0);

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "TransformedSketch"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidFace()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assume.That(shape != null);

            var subshapeRef = shape.GetSubshapeReference(SubshapeType.Face, 7);
            var extrude = Extrude.Create(shape.Body, subshapeRef);

            AssertHelper.IsMade(extrude);
            AssertHelper.IsSameModel(extrude, Path.Combine(_BasePath, "SolidFace"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidFaceCut()
        {
            var shape = TestGeomGenerator.CreateImprint();
            Assume.That(shape != null);

            var subshapeRef = shape.GetSubshapeReference(SubshapeType.Face, 7);
            var extrude = Extrude.Create(shape.Body, subshapeRef);
            extrude.Depth = -2;

            AssertHelper.IsMade(extrude);
            AssertHelper.IsSameModel(extrude, Path.Combine(_BasePath, "SolidFaceCut"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Symmetric()
        {
            var shape = TestGeomGenerator.CreateExtrude();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Symmetric = true;

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "Symmetric"));
        }

        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TransformedSketchSymmetric()
        {
            var shape = TestGeomGenerator.CreateExtrude();
            Assert.IsNotNull(shape);

            shape.Depth = 2.5;
            shape.Body.Position = new Pnt(10, 0, 0);
            shape.Body.Rotation = new Quaternion(0, 45.0.ToRad(), 0);
            shape.Symmetric = true;

            AssertHelper.IsMade(shape);
            AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "TransformedSketchSymmetric"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CheckForEmptyResult()
        {
            var cyl = TestGeomGenerator.CreateCylinder();
            var extrude = Extrude.Create(cyl.Body, cyl.GetSubshapeReference(SubshapeType.Face, 0));
            Assert.IsFalse(extrude.Make(Shape.MakeFlags.None));

            cyl.SegmentAngle = 160.0;
            Assert.IsTrue(extrude.Make(Shape.MakeFlags.None));
        }
    }
}