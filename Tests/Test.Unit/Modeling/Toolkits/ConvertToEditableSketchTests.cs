using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Toolkits;

[TestFixture]
public class ConvertToEditableSketchTests
{
    const string _BasePath = @"Modeling\Toolkits\ConvertToEditableSketch";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SingleLine()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.Line(1, 1, 5, 5);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "SingleLine"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleLinesOpen()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.StartPath(0, 0);
        sb.LineTo(5, 0);
        sb.LineTo(5, 5);
        sb.LineTo(0, 5);
        sb.LineTo(1, 1);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "MultipleLinesOpen"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleLinesClosed()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.StartPath(0, 0);
        sb.LineTo(5, 0);
        sb.LineTo(5, 5);
        sb.LineTo(0, 5);
        sb.LineTo(0, 0);
        sb.ClosePath();

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "MultipleLinesClosed"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Circle()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.Line(0, 0, 5, 5);
        sb.Circle(2.5, 2, 2);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "Circle"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ellipse()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.Line(0, 0, 5, 5);
        sb.Ellipse(3, 2.5, 2, 3, -45);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "Ellipse"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Arc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.StartPath(0, 0);
        sb.ArcTo(5, 0, 2.5, 3);
        sb.ArcTo(10, 0, 7.5, -3);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "Arc"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EllipticalArc()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.StartPath(0, 0);
        sb.EllipticalArcTo(5, 0, 1.0, -2, true);
        sb.EllipticalArcTo(10, 0, 9.0, 2, false);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "EllipticalArc"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void BezierQuadratic()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.StartPath(0, 0);
        sb.BezierTo(5, 0, 4, 2);
        sb.BezierTo(10, 0, 6, -2);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "BezierQuadratic"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BezierCubic()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);

        sb.StartPath(0, 0);
        sb.BezierTo(5, 0, 1, 2, 2, -1);
        sb.BezierTo(10, 0, 7, 0, 8, -2);

        var newSketch = ConvertToEditableSketch.Convert(sketch.GetBRep());

        // Write to file and compare
        AssertHelper.IsSameModel2D(newSketch, Path.Combine(_BasePath, "BezierCubic"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CollapseBody()
    {
        var body = TestGeomGenerator.CreateHollowCylinder()?.Body;
        var section = CrossSection.Create(body, Pln.XOY.Translated(new Vec(0, 0, 5)).Rotated(Ax1.OY, 20.0.ToRad()));
        Assert.IsNotNull(section);
        //AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "CollapseBodyS"));

        Assert.IsTrue(ConvertToEditableSketch.CollapseShapeStack([body]));
        Assert.IsInstanceOf<Core.Shapes.Sketch>(body.RootShape);
        AssertHelper.IsSameModel2D(body.RootShape, Path.Combine(_BasePath, "CollapseBody"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossSectionEllipse()
    {
        var cylinder = new Cylinder()
        {
            Radius = 10,
            Height = 115
        };
        var body = Body.Create(cylinder);
        var cylinder2 = new Cylinder()
        {
            Radius = 3.5,
            Height = 116
        };
        BooleanCut.Create(body, cylinder2);
        body.Position = new Pnt(-140, 0, 26);
        Quaternion rotation = new Quaternion(0.0, -43.0.ToRad(), -34.0.ToRad());
        var plane = new Pln(rotation.ToAx3(new Pnt(0, 0, 22.5)));
        var section = CrossSection.Create(body, plane, true);
        Assert.IsNotNull(section);
        //AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "CrossSectionEllipseS"));

        Assert.IsTrue(ConvertToEditableSketch.CollapseShapeStack([body]));
        Assert.IsInstanceOf<Core.Shapes.Sketch>(body.RootShape);
        AssertHelper.IsSameModel2D(body.RootShape, Path.Combine(_BasePath, "CrossSectionEllipse"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossSectionEllipticalArc()
    {
        var cylinder = new Cylinder()
        {
            Radius = 10,
            Height = 115
        };
        var body = Body.Create(cylinder);
        var taper = Taper.Create(body, cylinder.GetSubshapeReference(SubshapeType.Face, 0),
                                 cylinder.GetSubshapeReference(SubshapeType.Edge, 2),
                                 5.0);
        taper.Offset = 50.0;
        var cylinder2 = new Cylinder()
        {
            Radius = 3.5,
            Height = 116
        };
        BooleanCut.Create(body, cylinder2);

        body.Position = new Pnt(-140, 0, 26);
        Quaternion rotation = new Quaternion(0.0, -43.0.ToRad(), -34.0.ToRad());
        var plane = new Pln(rotation.ToAx3(new Pnt(0, 0, 50)));
        var section = CrossSection.Create(body, plane, true);
        Assert.IsNotNull(section);
        //AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "CrossSectionEllipticalArcS"));

        Assert.IsTrue(ConvertToEditableSketch.CollapseShapeStack([body]));
        Assert.IsInstanceOf<Core.Shapes.Sketch>(body.RootShape);
        AssertHelper.IsSameModel2D(body.RootShape, Path.Combine(_BasePath, "CrossSectionEllipticalArc"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MultipleUnorderedPCurves()
    {
        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\WallWithWindows.brep");
        var crossSection = CrossSection.Create(body, new Pln(new Quaternion(0, 70.0.ToRad(), 0).ToAx3(new Pnt(-25, 0, 13.54))));
        Assert.IsTrue(ConvertToEditableSketch.CollapseShapeStack([body]));
        Assert.IsInstanceOf<Core.Shapes.Sketch>(body.RootShape);
        AssertHelper.IsSameModel2D(body.RootShape, Path.Combine(_BasePath, "MultipleUnorderedPCurves"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("This was a bug which crashed in geometric processing.")]
    public void ConvertOffsettedBeziers()
    {
        var body = TestData.GetTestDataSerialized<Body>(Path.Combine(_BasePath, "ConvertOffsettedBeziers_Source.txt"));
        Assert.IsTrue(ConvertToEditableSketch.CollapseShapeStack([body]));
        Assert.IsInstanceOf<Core.Shapes.Sketch>(body.RootShape);
        AssertHelper.IsSameModel2D(body.RootShape, Path.Combine(_BasePath, "ConvertOffsettedBeziers"));
    }

    //--------------------------------------------------------------------------------------------------

}