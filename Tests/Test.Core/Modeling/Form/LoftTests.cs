using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Form;

[TestFixture]
public class LoftTests
{
    const string _BasePath = @"Modeling\Form\Loft";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleRect()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2)]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "SimpleRect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DifferentEdgeCount()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 5).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);
        var body3 = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true).Body;
        body3.Position = body2.Position.Translated(new(0, 0, 20.0));

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2), new BodyShapeOperand(body3)]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "DifferentEdgeCount"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleSorted()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2), new BodyShapeOperand(body3)]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleSorted"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnsorted()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body3), new BodyShapeOperand(body2)]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleUnsorted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnsorted2()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body2, [new BodyShapeOperand(body3), new BodyShapeOperand(body1)]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleUnsorted2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnsorted3()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var body4 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body4.Position = body4.Position.Translated(new(10, 0, 30.0));
        body4.Rotation = new(20.0.ToRad(), 60.0.ToRad(), 0.0);

        var body5 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body5.Position = body5.Position.Translated(new(20, 0.0, 40.0));
        body5.Rotation = new(20.0.ToRad(), 80.0.ToRad(), 0.0);

        var body6 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body6.Position = body6.Position.Translated(new(30, 0.0, 40.0));
        body6.Rotation = new(0.0.ToRad(), 110.0.ToRad(), 0.0);

        var loft = Loft.Create(body4, [
            new BodyShapeOperand(body2), new BodyShapeOperand(body6), 
                                   new BodyShapeOperand(body3), new BodyShapeOperand(body5), new BodyShapeOperand(body1)
        ]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleUnsorted3"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    [TestCase(Loft.Direction.Inwards, Loft.CornerType.Angular)]
    [TestCase(Loft.Direction.Inwards, Loft.CornerType.Round, Explicit = true, Description = "OCCT-bug")]
    [TestCase(Loft.Direction.Outwards, Loft.CornerType.Angular, Description = "OCCT_30054, fixed with 7.6.0")]
    [TestCase(Loft.Direction.Outwards, Loft.CornerType.Round)]
    public void OpenWiresRect(Loft.Direction direction, Loft.CornerType cornerType)
    {
        // Remove first segment to create open wires
        var sketch1 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch1.DeleteSegment(sketch1.Segments[0]);
        var body1 = sketch1.Body;

        var sketch2 = TestSketchGenerator.CreateRectangle(4.0, 4.0);
        sketch2.DeleteSegment(sketch2.Segments[0]);
        var body2 = sketch2.Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var sketch3 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch3.DeleteSegment(sketch3.Segments[0]);
        var body3 = sketch3.Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2), new BodyShapeOperand(body3)]);

        loft.ThickenDirection = direction;
        loft.ThickenCornerType = cornerType;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, $"OpenWiresRect_{direction}_{cornerType}"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MixedOpenClosedWires()
    {
        // Remove first segment to create open wires
        var sketch1 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch1.DeleteSegment(sketch1.Segments[0]);
        var body1 = sketch1.Body;

        var sketch2 = TestSketchGenerator.CreateRectangle(4.0, 4.0);
        sketch2.DeleteSegment(sketch2.Segments[0]);
        sketch2.MergePoints(0, 1);
        var body2 = sketch2.Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var sketch3 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch3.DeleteSegment(sketch3.Segments[0]);
        var body3 = sketch3.Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2), new BodyShapeOperand(body3)]);
        Assert.IsFalse(loft.Make(Shape.MakeFlags.None)); // Sections must be all closed or all open
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SkipAdditionalWiresInSections()
    {
        var sketch1 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        var body1 = sketch1.Body;
        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        sketch1.AddSegment(new SketchSegmentLine(sketch1.AddPoint(new(20, 20)), sketch1.AddPoint(new(22, 22))));

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2)]);
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "SimpleRect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNone()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body3)]);
            
        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneBoth"));
            
        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.Flat;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneStart"));

        loft.StartCapping = Loft.CappingMode.Flat;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneEnd"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNoneOut()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body3)]);
        loft.ThickenDirection = Loft.Direction.Outwards;

        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneBoth_Out"));
            
        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.Flat;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneStart_Out"));

        loft.StartCapping = Loft.CappingMode.Flat;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneEnd_Out"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNoneOutAngular()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body3)]);
        loft.ThickenDirection = Loft.Direction.Outwards;
        loft.ThickenCornerType = Loft.CornerType.Angular;
            
        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneBoth_OutAngular"));
            
        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.Flat;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneStart_OutAngular"));

        loft.StartCapping = Loft.CappingMode.Flat;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneEnd_OutAngular"));
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    [Description("Error case: Mixed connectivity.")]
    public void CappingModeNoneWithCircle()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new(0, 0, 10.0));
        body2.Rotation = new(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new(0, 5.0, 20.0));
        body3.Rotation = new(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2), new BodyShapeOperand(body3)]);

        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsFalse(loft.Make(Shape.MakeFlags.None));
        Assert.That(Context.Current.MessageHandler.GetEntityMessages(loft)[0].Explanation[0].Contains("geometric continuity"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNoneWithBezierSegments()
    {
        var sketch1 = Macad.Core.Shapes.Sketch.Create();
        sketch1.Points.Add(0, new(-59.051143806531094, 8.435877686647295));
        sketch1.Points.Add(1, new(-37.379664921868205, 11.053908692848184));
        sketch1.Points.Add(2, new(-51.924281622984239, 23.27138672178565));
        sketch1.Points.Add(3, new(-72.437392749422088, 25.059793263066492));
        sketch1.Segments.Add(0, new SketchSegmentBezier(0, 1, 2));
        sketch1.Segments.Add(1, new SketchSegmentBezier(0, 3, 2));
        Assert.That(sketch1.Make(Shape.MakeFlags.None));
        var body1 = Body.Create(sketch1);

        var sketch2 = Macad.Core.Shapes.Sketch.Create();
        sketch2.Points.Add(0, new(-51.131337703967631, 30.284053556015575));
        sketch2.Points.Add(1, new(-35.343442485191737, 8.4680528900707));
        sketch2.Points.Add(2, new(-58.881758993184889, 2.8705264034138014));
        sketch2.Points.Add(3, new(-78.401338536398725, 25.978263950894874));
        sketch2.Segments.Add(0, new SketchSegmentBezier(0, 1, 2));
        sketch2.Segments.Add(1, new SketchSegmentBezier(2, 3, 0));
        Assert.That(sketch2.Make(Shape.MakeFlags.None));
        var body2 = Body.Create(sketch2);
        TransformUtils.Translate(body2, new(0, 0, 23.0534323259767));

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2)]);
        loft.EndCapping = Loft.CappingMode.None;

        loft.ThickenDirection = Loft.Direction.Inwards;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneWithBezierSegmentsIn"));

        loft.ThickenDirection = Loft.Direction.Outwards;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneWithBezierSegmentsOut"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNoneWithConcaveSection()
    {
        var sketch1 = Macad.Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch1);
        sb.StartPath(-14, 14);
        sb.LineTo(0.0, 24);
        sb.LineTo(15, 21);
        sb.LineTo(22, 6);
        sb.LineTo(10, -9);
        sb.LineTo(-11, -5);
        sb.LineTo(-14, 14);
        sb.ClosePath();
        Assert.That(sketch1.Make(Shape.MakeFlags.None));
        var body1 = Body.Create(sketch1);

        var sketch2 = Macad.Core.Shapes.Sketch.Create();
        sb = new(sketch2);
        sb.StartPath(-14, 14);
        sb.LineTo(0.0, 18);
        sb.LineTo(13, 18);
        sb.LineTo(16, 6);
        sb.LineTo(10, -1);
        sb.LineTo(-8, -3);
        sb.LineTo(-14, 14);
        sb.ClosePath();
        Assert.That(sketch2.Make(Shape.MakeFlags.None));
        var body2 = Body.Create(sketch2);
        TransformUtils.Translate(body2, new(0, 0, 20.0));

        var sketch3 = Macad.Core.Shapes.Sketch.Create();
        sb = new(sketch3);
        sb.StartPath(-14, 14);
        sb.LineTo(0.0, 24);
        sb.LineTo(15, 21);
        sb.LineTo(22, 6);
        sb.LineTo(10, -9);
        sb.LineTo(-11, -5);
        sb.LineTo(-14, 14);
        sb.ClosePath();
        Assert.That(sketch3.Make(Shape.MakeFlags.None));
        var body3 = Body.Create(sketch3);
        TransformUtils.Translate(body3, new(0, 0, 40.0));

        var loft = Loft.Create(body1, [new BodyShapeOperand(body2), new BodyShapeOperand(body3)]);
        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.None;

        loft.ThickenDirection = Loft.Direction.Inwards;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneWithConcaveSectionIn"));

        loft.ThickenDirection = Loft.Direction.Outwards;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneWithConcaveSectionOut"));
    }

    //--------------------------------------------------------------------------------------------------

}