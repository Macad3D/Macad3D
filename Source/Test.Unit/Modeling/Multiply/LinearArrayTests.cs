using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Multiply
{
    [TestFixture]
    public class LinearArrayTests
    {
        const string _BasePath = @"Modeling\Multiply\LinearArray";

        //--------------------------------------------------------------------------------------------------

        #region Sketch

        [Test]
        public void SketchDefault()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 10;
            array.Quantity2 = 3;
            array.Distance2 = 25;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchDefault"));

            // Ensure that original shape is still unmodified
            AssertHelper.IsSameModel(sketch, Path.Combine(_BasePath, "SketchDefaultUnmodified"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchExtent()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 30;
            array.DistanceMode1 = LinearArray.DistanceMode.Extent;
            array.Quantity2 = 3;
            array.Distance2 = 50;
            array.DistanceMode2 = LinearArray.DistanceMode.Extent;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchExtent"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchSpacing()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 5;
            array.DistanceMode1 = LinearArray.DistanceMode.Spacing;
            array.Quantity2 = 3;
            array.Distance2 = 5;
            array.DistanceMode2 = LinearArray.DistanceMode.Spacing;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchSpacing"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchOverallExtent()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 100;
            array.DistanceMode1 = LinearArray.DistanceMode.OverallExtent;
            array.Quantity2 = 3;
            array.Distance2 = 100;
            array.DistanceMode2 = LinearArray.DistanceMode.OverallExtent;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchOverallExtent"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchBorder()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 10;
            array.Quantity2 = 3;
            array.Distance2 = 25;
            array.Border = true;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchBorder"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchAlignCenter()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 10;
            array.Alignment1 = LinearArray.AlignmentMode.Center;
            array.Quantity2 = 3;
            array.Distance2 = 25;
            array.Alignment2 = LinearArray.AlignmentMode.Center;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchAlignCenter"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchAlignLast()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 10;
            array.Alignment1 = LinearArray.AlignmentMode.Last;
            array.Quantity2 = 3;
            array.Distance2 = 25;
            array.Alignment2 = LinearArray.AlignmentMode.Last;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchAlignLast"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SketchRotation()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 10;
            array.Quantity2 = 3;
            array.Distance2 = 25;
            array.Rotation = 45;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchRotation"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SketchRotationAlignCenter()
        {
            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.SimpleAsymmetric, true);

            var array = LinearArray.Create(sketch.Body);
            array.Quantity1 = 4;
            array.Distance1 = 10;
            array.Alignment1 = LinearArray.AlignmentMode.Center;
            array.Quantity2 = 3;
            array.Distance2 = 25;
            array.Alignment2 = LinearArray.AlignmentMode.Center;
            array.Rotation = 45;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SketchRotationAlignCenter"));
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Solid

        [Test]
        public void SolidDefault()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidDefault"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SolidPlaneZX()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Plane = LinearArray.PlaneType.ZX; 
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidPlaneZX"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidPlaneYZ()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Plane = LinearArray.PlaneType.YZ;
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidPlaneYZ"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidExtent()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 100;
            array.DistanceMode1 = LinearArray.DistanceMode.Extent;
            array.Quantity2 = 3;
            array.Distance2 = 100;
            array.DistanceMode2 = LinearArray.DistanceMode.Extent;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidExtent"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SolidSpacing()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 5;
            array.DistanceMode1 = LinearArray.DistanceMode.Spacing;
            array.Quantity2 = 3;
            array.Distance2 = 10;
            array.DistanceMode2 = LinearArray.DistanceMode.Spacing;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidSpacing"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidOverallExtent()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 100;
            array.DistanceMode1 = LinearArray.DistanceMode.OverallExtent;
            array.Quantity2 = 3;
            array.Distance2 = 100;
            array.DistanceMode2 = LinearArray.DistanceMode.OverallExtent;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidOverallExtent"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SolidSpacingYZandZX()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Plane = LinearArray.PlaneType.YZ;
            array.Quantity1 = 4;
            array.Distance1 = 5;
            array.DistanceMode1 = LinearArray.DistanceMode.Spacing;
            array.Quantity2 = 3;
            array.Distance2 = 10;
            array.DistanceMode2 = LinearArray.DistanceMode.Spacing;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidSpacingYZ"));

            array.Plane = LinearArray.PlaneType.ZX;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidSpacingZX"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SolidBorder()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            array.Border = true;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidBorder"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidAlignCenter()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Alignment1 = LinearArray.AlignmentMode.Center;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            array.Alignment2 = LinearArray.AlignmentMode.Center;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidAlignCenter"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidAlignLast()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Alignment1 = LinearArray.AlignmentMode.Last;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            array.Alignment2 = LinearArray.AlignmentMode.Last;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidAlignLast"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SolidRotation()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            array.Rotation = 45;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidRotation"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SolidRotationAlignCenter()
        {
            var solid = TestGeomGenerator.CreateImprint();

            var array = LinearArray.Create(solid.Body);
            array.Quantity1 = 4;
            array.Distance1 = 25;
            array.Alignment1 = LinearArray.AlignmentMode.Center;
            array.Quantity2 = 3;
            array.Distance2 = 30;
            array.Alignment2 = LinearArray.AlignmentMode.Center;
            array.Rotation = 45;
            Assert.IsTrue(array.Make(Shape.MakeFlags.None));
            Assert.AreEqual(ShapeType.Solid, array.ShapeType);
            AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidRotationAlignCenter"));
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}