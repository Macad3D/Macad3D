using Macad.Core;
using Macad.Core.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;
using System.IO;

namespace Macad.Test.Core.Modeling.Multiply;

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

    [Test]
    [Description("Every subshape of every array copy must get an order-independent composite reference")]
    public void SketchSubshapeReferences()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        sketch.Guid = TestData.CreateGuid(1);

        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 3;
        array.Radius = 50;
        array.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(array);
        AssertHelper.IsSameSubshapeReferences(array, Path.Combine(_BasePath, "SketchSubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Referencing a subshape of the original sketch must return the same subshape for all instances")]
    public void SketchAllInstancesInModifiedList()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 3;
        array.Radius = 50;
        array.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        var subshapes = array.FindSubshape(new SubshapeReference(SubshapeType.Edge, sketch.Guid, "seg", 0), null);
        Assert.IsNotNull(subshapes);
        Assert.That(subshapes, Has.Count.EqualTo(3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("An array's instance edges must not swap identity when the spacing changes")]
    public void SketchSubshapeReferencesSurvivesDistanceChange()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var array = CircularArray.Create(sketch.Body);
        array.Quantity = 3;
        array.Radius = 50;
        array.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        AssertHelper.AreSubshapeReferencesStableAfterChange(array, () => array.Radius = 51);
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

    [Test]
    [Description("Every subshape of every array copy must get an order-independent composite reference")]
    public void SolidSubshapeReferences()
    {
        var solid = TestGeomGenerator.CreateBox();
        solid.Guid = TestData.CreateGuid(1);

        var array = CircularArray.Create(solid.Body);
        array.Quantity = 3;
        array.Radius = 50;
        array.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(array);
        AssertHelper.IsSameSubshapeReferences(array, Path.Combine(_BasePath, "SolidSubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Referencing a subshape of the original solid must return the same subshape for all instances")]
    public void SolidAllInstancesInModifiedList()
    {
        var solid = TestGeomGenerator.CreateBox();
        var array = CircularArray.Create(solid.Body);
        array.Quantity = 3;
        array.Radius = 50;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        var subshapes = array.FindSubshape(new SubshapeReference(SubshapeType.Face, solid.Guid, "ZMax", 0), null);
        Assert.IsNotNull(subshapes);
        Assert.That(subshapes, Has.Count.EqualTo(3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("An array's instance faces must not swap identity when the spacing changes")]
    public void SolidSubshapeReferencesSurvivesDistanceChange()
    {
        var box = TestGeomGenerator.CreateBox();
        var array = CircularArray.Create(box.Body);
        array.Quantity = 3;
        array.Radius = 50;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        AssertHelper.AreSubshapeReferencesStableAfterChange(array, () => array.Radius = 51);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A reference to the untransformed array instance must still resolve after save/reload")]
    public void SolidSubshapeReferenceSurvivesSaveReload()
    {
        Context.InitWithDefault();
        var box = TestGeomGenerator.CreateBox();
        CoreContext.Current.Document.Add(box.Body);

        var array = CircularArray.Create(box.Body);
        array.Quantity = 3;
        array.Radius = 50;
        Assert.IsTrue(array.Make(Shape.MakeFlags.None));

        AssertHelper.CheckReferenceSurvivesReload(array.Body, [new SubshapeReference(SubshapeType.Edge, box.Guid, "ZMaxXMin", 0)]);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}