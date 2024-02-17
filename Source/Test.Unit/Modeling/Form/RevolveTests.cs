using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Form;

[TestFixture]
public class RevolveTests
{
    const string _BasePath = @"Modeling\Form\Revolve";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurveWorldX()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.WorldX;
        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));

        shape.Offset = new Vec(0, 0, 10);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CurveWorldX")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurveWorldY()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.WorldY;
        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));

        shape.Offset = new Vec(0, 0, 10);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CurveWorldY")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurveWorldZ()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.WorldZ;
        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));

        shape.Offset = new Vec(10, 0, 0);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CurveWorldZ")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurveLocalX()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalX;
        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));

        shape.Offset = new Vec(0, 0, 10);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CurveLocalX")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurveLocalY()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CurveLocalY")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurveLocalZ()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalZ;
        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));

        shape.Offset = new Vec(10, 0, 0);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "CurveLocalZ")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Offset()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;
        shape.Offset = new Vec(-10, 0, 0);

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Offset")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Segment()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;
        shape.SegmentAngle = 120;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Segment")));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void NegativeSegment()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;
        shape.SegmentAngle = -120;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "NegativeSegment")));
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void NullSegment()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;
        shape.SegmentAngle = 0;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "NullSegment")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SegmentOffset()
    {
        var shape = CreateRevolve(SketchType.Curve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;
        shape.SegmentAngle = 120;
        shape.Offset = new Vec(-10, 0, 0);

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "SegmentOffset")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiCurve()
    {
        var shape = CreateRevolve(SketchType.MultiCurve);
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.LocalY;
        shape.SegmentAngle = 120;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MultiCurve")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Bug: After switching between axes, the shape gets degenerated.")]
    public void AxisChange()
    {
        var sketch = new Core.Shapes.Sketch();
        sketch.Points.Add(0, new Pnt2d(-20, 20));
        sketch.Points.Add(1, new Pnt2d(20, 20));
        sketch.Points.Add(2, new Pnt2d(20, 10));
        sketch.Points.Add(3, new Pnt2d(-20, 10));
        sketch.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch.Segments.Add(1, new SketchSegmentLine(1, 2));
        sketch.Segments.Add(2, new SketchSegmentLine(2, 3));
        sketch.Segments.Add(3, new SketchSegmentLine(3, 0));

        var shape = Revolve.Create(Body.Create(sketch));
        Assert.IsNotNull(shape);

        shape.Axis = Revolve.RevolveAxis.WorldX;
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "AxisChange"));

        shape.Axis = Revolve.RevolveAxis.WorldY;
        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));
        shape.Axis = Revolve.RevolveAxis.WorldX;
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(shape, Path.Combine(_BasePath, "AxisChange"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OpenContour()
    {
        var sketch = new Core.Shapes.Sketch();
        sketch.Points.Add(0, new Pnt2d(-20, 20));
        sketch.Points.Add(1, new Pnt2d(20, 20));
        sketch.Points.Add(2, new Pnt2d(20, 10));
        sketch.Points.Add(3, new Pnt2d(-20, 10));
        sketch.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch.Segments.Add(1, new SketchSegmentLine(1, 2));
        sketch.Segments.Add(2, new SketchSegmentLine(2, 3));

        var shape = Revolve.Create(Body.Create(sketch));
        shape.Axis = Revolve.RevolveAxis.WorldX;

        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));
    }

    //--------------------------------------------------------------------------------------------------

    #region Support Functions

    enum SketchType
    {
        Curve,
        MultiCurve,
    }

    Revolve CreateRevolve(SketchType sketchType)
    {
        var sketch = new Core.Shapes.Sketch();
        var body = TestGeomGenerator.CreateBody(sketch, new Pnt(10, 0, 0), new XYZ(45, 0, 0));

        sketch.Points.Add(0, new Pnt2d(0, 30));
        sketch.Points.Add(1, new Pnt2d(20, 30));
        sketch.Segments.Add(0, new SketchSegmentLine(0, 1));

        sketch.Points.Add(2, new Pnt2d(30, 0));
        sketch.Points.Add(3, new Pnt2d(30, 20));
        sketch.Segments.Add(1, new SketchSegmentArc(1, 2, 3));

        sketch.Points.Add(4, new Pnt2d(10, 0));
        sketch.Points.Add(5, new Pnt2d(0, -20));
        sketch.Segments.Add(2, new SketchSegmentBezier(2, 4, 5));

        sketch.Segments.Add(3, new SketchSegmentLine(5, 0));

        if (sketchType == SketchType.MultiCurve)
        {
            sketch.Points.Add(6, new Pnt2d(5, 10));
            sketch.Points.Add(7, new Pnt2d(10, 0));
            sketch.Points.Add(8, new Pnt2d(5, -10));
            sketch.Segments.Add(4, new SketchSegmentLine(6, 7));
            sketch.Segments.Add(5, new SketchSegmentLine(7, 8));
            sketch.Segments.Add(6, new SketchSegmentLine(8, 6));
            AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "SketchMultiCurve"));
        }
        else
        {
            AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Sketch"));
        }

        return Revolve.Create(body);
    }

    #endregion
}