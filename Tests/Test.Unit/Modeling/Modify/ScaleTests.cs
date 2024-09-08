using System.IO;
using Macad.Core.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify;

[TestFixture]
public class ScaleTests
{
    const string _BasePath = @"Modeling\Modify\Scale";

    //--------------------------------------------------------------------------------------------------

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
    public void MeshUniform()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Mesh\\CompoundMesh.brep", ShapeType.Mesh);
        var scale = Scale.Create(body, 5.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(scale, Path.Combine(_BasePath, "MeshUniform01"), ModelCompare.CompareFlags.CompareText));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshNonUniform()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Mesh\\CompoundMesh.brep", ShapeType.Mesh);
        var scale = Scale.Create(body, 2.0, 4.0, 6.0);
        Assert.IsTrue(scale.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(scale, Path.Combine(_BasePath, "MeshNonUniform01"), ModelCompare.CompareFlags.CompareText));
    }

    //--------------------------------------------------------------------------------------------------

}