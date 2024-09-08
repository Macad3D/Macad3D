using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Multiply;

[TestFixture]
public class CircularArrayTests
{
    const string _BasePath = @"Modeling\Multiply\CircularArray";

    //--------------------------------------------------------------------------------------------------

    #region Sketch

    [Test]
    public void SketchDefault()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchDefault"));

        // Ensure that original shape is still unmodified
        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "SketchDefaultUnmodified"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchKeepOrientation()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.KeepOrientation = true;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchKeepOrientation"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SketchOriginalAngle()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.OriginalAngle = 30;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchOriginalAngle"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchRange()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchRange"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchAlignFirst()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        array.Alignment = CircularArray.AlignmentMode.First;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchAlignFirst"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchAlignCenter()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        array.Alignment = CircularArray.AlignmentMode.Center;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchAlignCenter"));
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void SketchAlignLast()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        array.Alignment = CircularArray.AlignmentMode.Last;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Sketch, array.ShapeType);
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchAlignLast"));
    }

    //--------------------------------------------------------------------------------------------------
                    
    [Test]
    public void SketchTransformedPlane()
    {
        var section = TestGeomGenerator.CreateCrossSection();
        var array = CircularArray.Create(section.Body);
        array.Quantity = 4;
        array.Radius = 50;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel2D(array, Path.Combine(_BasePath, "SketchTransformedPlane"));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Solid

    [Test]
    public void SolidDefault()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidDefault"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidPlaneZX()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Plane = CircularArray.PlaneType.ZX;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidPlaneZX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidPlaneYZ()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Plane = CircularArray.PlaneType.YZ;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidPlaneYZ"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidKeepOrientation()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.KeepOrientation = true;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidKeepOrientation"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SolidOriginalAngle()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.OriginalAngle = 30;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidOriginalAngle"));

        array.Plane = CircularArray.PlaneType.ZX;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidOriginalAngleZX"));

        array.Plane = CircularArray.PlaneType.YZ;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidOriginalAngleYZ"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidRange()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidRange"));
    }
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SolidAlignFirst()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        array.Alignment = CircularArray.AlignmentMode.First;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidAlignFirst"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SolidAlignCenter()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        array.Alignment = CircularArray.AlignmentMode.Center;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidAlignCenter"));
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void SolidAlignLast()
    {
        var solid = TestGeomGenerator.CreateImprint();

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 4;
        array.Radius = 50;
        array.Range = 180;
        array.Alignment = CircularArray.AlignmentMode.Last;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));
        Assert.AreEqual(ShapeType.Solid, array.ShapeType);
        AssertHelper.IsSameModel(array, Path.Combine(_BasePath, "SolidAlignLast"));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}