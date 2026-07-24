using Macad.Core;
using Macad.Core.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;
using System.IO;

namespace Macad.Test.Core.Modeling.Modify;

[TestFixture]
public class ScaleTests
{
    const string _BasePath = @"Modeling\Modify\Scale";

    //--------------------------------------------------------------------------------------------------

    #region Solid

    [Test]
    public void SolidUniform()
    {
        var body = TestGeomGenerator.CreateImprint().Body;
        var scale = Scale.Create(body, 5.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(scale, Path.Combine(_BasePath, "SolidUniform01")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidNonUniform()
    {
        var body = TestGeomGenerator.CreateImprint().Body;
        var scale = Scale.Create(body, 2.0, 4.0, 6.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(scale, Path.Combine(_BasePath, "SolidNonUniform01")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidInvalid()
    {
        var body = TestGeomGenerator.CreateImprint().Body;
        var scale = Scale.Create(body, 0.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(scale, Path.Combine(_BasePath, "SolidInvalid01")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidSubshapeReferences()
    {
        var box = TestGeomGenerator.CreateBox();
        box.Guid = TestData.CreateGuid(1);
        var scale = Scale.Create(box.Body, 5.0);
        scale.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));

        AssertHelper.HasValidSubshapeReferences(scale);
        AssertHelper.IsSameSubshapeReferences(scale, Path.Combine(_BasePath, "SolidSubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Referencing a subshape of the original solid must return the same subshape for all instances")]
    public void SolidResultInInModifiedList()
    {
        var box = TestGeomGenerator.CreateBox();
        var scale = Scale.Create(box.Body, 5.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));

        var subshapes = scale.FindSubshape(new SubshapeReference(SubshapeType.Face, box.Guid, "ZMax", 0), null);
        Assert.IsNotNull(subshapes);
        Assert.That(subshapes, Has.Count.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------
    
    #endregion

    #region Sketch

    [Test]
    [TestCase(TestSketchGenerator.SketchType.Circle)]
    [TestCase(TestSketchGenerator.SketchType.Rectangle)]
    public void SketchUniform(TestSketchGenerator.SketchType type)
    {
        Context.InitWithDefault();
        var body = TestSketchGenerator.CreateSketch(type, true).Body;
        var scale = Scale.Create(body, 5.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsNull(Context.Current.MessageHandler.GetEntityMessages(scale));
        Assert.IsTrue(ModelCompare.CompareShape2D(scale, Path.Combine(_BasePath, "SketchUniform" + type)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(TestSketchGenerator.SketchType.Circle)]
    [TestCase(TestSketchGenerator.SketchType.Rectangle)]
    public void SketchNonUniform(TestSketchGenerator.SketchType type)
    {
        var body = TestSketchGenerator.CreateSketch(type, true).Body;
        var scale = Scale.Create(body, 2.0, 4.0, 6.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape2D(scale, Path.Combine(_BasePath, "SketchNonUniform" + type)));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SketchTransformedPlaneUniform()
    {
        var section = TestGeomGenerator.CreateCrossSection();
        var scale = Scale.Create(section.Body, 2.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel2D(scale, Path.Combine(_BasePath, "SketchTransformedPlaneUniform01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchSubshapeReferences()
    {
        Context.InitWithDefault();
        var body = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true).Body;
        body.Shape.Guid = TestData.CreateGuid(1);
        var scale = Scale.Create(body, 5.0);
        scale.Guid = TestData.CreateGuid(10);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        
        AssertHelper.HasValidSubshapeReferences(scale);
        AssertHelper.IsSameSubshapeReferences(scale, Path.Combine(_BasePath, "SketchSubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchResultInModifiedList()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle, true);
        var scale = Scale.Create(sketch.Body, 2.0, 4.0, 6.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));

        var subshapes = scale.FindSubshape(new SubshapeReference(SubshapeType.Edge, sketch.Guid, "seg", 1), null);
        Assert.IsNotNull(subshapes);
        Assert.That(subshapes, Has.Count.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Mesh

    [Test]
    public void MeshUniform()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Mesh\\CompoundMesh.brep", ShapeType.Mesh);
        var scale = Scale.Create(body, 5.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        var path = Path.Combine(_BasePath, "MeshUniform01");
        Assert.IsTrue(ModelCompare.CompareShape(scale, path, ModelCompare.CompareFlags.CompareText));
        TestData.DeleteTestResult(path);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshNonUniform()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Mesh\\CompoundMesh.brep", ShapeType.Mesh);
        var scale = Scale.Create(body, 2.0, 4.0, 6.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        var path = Path.Combine(_BasePath, "MeshNonUniform01");
        Assert.IsTrue(ModelCompare.CompareShape(scale, path, ModelCompare.CompareFlags.CompareText));
        TestData.DeleteTestResult(path);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}