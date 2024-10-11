using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Form;

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
        Assert.That(shape != null);

        var subshapeRef = shape.GetSubshapeReference(SubshapeType.Face, 7);
        var extrude = Extrude.Create(shape.Body, subshapeRef);

        AssertHelper.IsMade(extrude);
        AssertHelper.IsSameModel(extrude, Path.Combine(_BasePath, "SolidFace"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SolidFaceNoMergeFaces()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.That(shape != null);

        var subshapeRef = shape.GetSubshapeReference(SubshapeType.Face, 7);
        var extrude = Extrude.Create(shape.Body, subshapeRef);
        extrude.MergeFaces = false;

        AssertHelper.IsMade(extrude);
        AssertHelper.IsSameModel(extrude, Path.Combine(_BasePath, "SolidFaceNoMergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidFaceCut()
    {
        var shape = TestGeomGenerator.CreateImprint();
        Assert.That(shape != null);

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

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DoNotModifyEdges()
    {
        var sketch = new Core.Shapes.Sketch();
        var body = Body.Create(sketch);
        SketchBuilder sb = new(sketch);
        sb.StartPath(0, 0);
        sb.LineTo(0, 14);
        sb.LineTo(14, 14);
        sb.LineTo(24, 0);
        sb.LineTo(0, 0);
        sb.ClosePath();
        var mirror = Mirror.Create(body, sketch.GetSubshapeReference(SubshapeType.Edge, 0));
        var extrude = Extrude.Create(body);
        extrude.Depth = 10.0;
        var imprint = Imprint.Create(body, body.Shape.GetSubshapeReference(SubshapeType.Face, 7));
        imprint.Depth = 5.0;
        imprint.Mode = Imprint.ImprintMode.Lower;
        sb = new SketchBuilder(imprint.Sketch);
        sb.StartPath(12.0, 4.5);
        sb.LineTo(15.4, 7.0);
        sb.LineTo(20.0, 0.5);
        sb.LineTo(16.6, -2.0);
        sb.LineTo(12.0, 4.5);
        sb.ClosePath();

        Assert.IsTrue(body.Shape.Make(Shape.MakeFlags.None));
        mirror.Invalidate();
        Assert.IsTrue(body.Shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel2D(mirror, Path.Combine(_BasePath, $"DoNotModifyEdges"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TransformedPlane()
    {
        var section = TestGeomGenerator.CreateCrossSection();
        var extrude = Extrude.Create(section.Body);
        Assert.IsTrue(extrude.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(extrude, Path.Combine(_BasePath, "TransformedPlane"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnorderedPCurves()
    {
        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\WallWithWindows.brep");
        var crossSection = CrossSection.Create(body, new Pln(new Quaternion(0, 70.0.ToRad(), 0).ToAx3(new Pnt(-25, 0, 13.54))));
        var extrude = Extrude.Create(body);
        Assert.IsTrue(extrude.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(extrude, Path.Combine(_BasePath, "MultipleUnorderedPCurves"));
    }

    //--------------------------------------------------------------------------------------------------

}