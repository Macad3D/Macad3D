using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Sketch;

[TestFixture]
public class SketchTests
{
    const string _BasePath = @"Modeling\Sketch";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Curve()
    {
        var shape = CreateSketch(SketchType.Curve);
        Assert.IsNotNull(shape);

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Curve"), ModelCompare.CompareFlags.CompareBytes));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiCurve()
    {
        var shape = CreateSketch(SketchType.MultiCurve);
        Assert.IsNotNull(shape);

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MultiCurve"), ModelCompare.CompareFlags.CompareBytes));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeleteAllElements()
    {
        var shape = CreateSketch(SketchType.MultiCurve);
        Assert.IsNotNull(shape);

        foreach (var sketchPointKey in shape.Points.Keys.ToList())
        {
            shape.DeletePoint(sketchPointKey);
        }
        Assert.AreEqual(0, shape.Points.Count);
            
        Assert.IsTrue(shape.SolveConstraints(false));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NamedSubmesh()
    {
        var shape = CreateSketch(SketchType.Curve);
        Assert.IsNotNull(shape);

        var subshape = shape.GetSubshapeReference(SubshapeType.Edge, 0);
        Assert.AreEqual("seg", subshape.Name);
        Assert.AreEqual(0, subshape.Index);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OneInvalidSegment()
    {
        // Create a sketch with one valid and one invalid line.
        // This should result in a valid brep with one edge, throwing 
        // a warning instead of an error.

        var sketch = new Core.Shapes.Sketch();
        Assert.IsNotNull(sketch);
        sketch.Points.Add(0, new Pnt2d(0, 30));
        sketch.Points.Add(1, new Pnt2d(20, 30));
        sketch.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch.Segments.Add(1, new SketchSegmentLine(1, 1));

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        Assert.IsNotNull(sketch.GetBRep());
        Assert.AreEqual(1, sketch.GetBRep().Edges().Count);

        var messages = Context.Current.MessageHandler.GetEntityMessages(sketch);
        Assert.AreEqual(1, messages.Count);
        Assert.AreEqual(MessageSeverity.Warning, messages[0].Severity);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnsortedSegments()
    {
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(15, 5, 25, 10); // 3 - 0-1
        sb.Line(10, 0, 15, 5);  // 2 - 2-3
        sb.Line(25, 10, 20, 0); // 4 - 4-5
        sb.Line(0, 0, 10, 0);   // 1 - 6-7
        sketch.MergePoints(2,7);
        sketch.MergePoints(0,3);
        sketch.MergePoints(4,1);

        Assert.IsTrue(sketch.Make(Shape.MakeFlags.None));
        Assert.AreEqual(1, sketch.GetBRep().Wires().Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Fix invalid references of sketch points or segments on load.")]
    public void CorrectInvalidReferencesOnLoad()
    {
        // The test file contains invalid references to both constraints and segments
        TestData.LoadTestDataModel(Path.Combine(_BasePath, "InvalidReferences_Source.model"));
        var sketch = Context.Current.Document.FindInstances<Core.Shapes.Sketch>().FirstOrDefault();
        Assert.That(sketch.Segments.Values.All(seg => sketch.Points.Keys.ContainsAll(seg.Points)));
        Assert.That(sketch.Constraints.All(con => con.Segments == null || sketch.Segments.Keys.ContainsAll(con.Segments)));
        Assert.That(sketch.Constraints.All(con => con.Points == null || sketch.Points.Keys.ContainsAll(con.Points)));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    #region Support Functions

    enum SketchType
    {
        Curve,
        MultiCurve
    }

    Core.Shapes.Sketch CreateSketch(SketchType sketchType)
    {
        var sketch = new Core.Shapes.Sketch();
        Assert.IsNotNull(sketch);

        var body = TestGeomGenerator.CreateBody(sketch);
        body.Rotation = new Quaternion(Dir.DZ.ToVec(), new Vec(0.4, 0.5, 0.1));

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
        }
        return sketch;
    }

    #endregion
}