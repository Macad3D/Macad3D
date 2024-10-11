using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Form;

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
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2)});
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "SimpleRect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DifferentEdgeCount()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 5).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2)});
        Assert.IsFalse(loft.Make(Shape.MakeFlags.None));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleSorted()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleSorted"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnsorted()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body3), new BodyShapeOperand(body2)});
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleUnsorted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnsorted2()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body2, new[] {new BodyShapeOperand(body3), new BodyShapeOperand(body1)});
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleUnsorted2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleUnsorted3()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var body4 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body4.Position = body4.Position.Translated(new Vec(10, 0, 30.0));
        body4.Rotation = new Quaternion(20.0.ToRad(), 60.0.ToRad(), 0.0);

        var body5 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body5.Position = body5.Position.Translated(new Vec(20, 0.0, 40.0));
        body5.Rotation = new Quaternion(20.0.ToRad(), 80.0.ToRad(), 0.0);

        var body6 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body6.Position = body6.Position.Translated(new Vec(30, 0.0, 40.0));
        body6.Rotation = new Quaternion(0.0.ToRad(), 110.0.ToRad(), 0.0);

        var loft = Loft.Create(body4, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body6), 
                                   new BodyShapeOperand(body3), new BodyShapeOperand(body5), new BodyShapeOperand(body1)});
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "MultipleUnsorted3"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(Loft.Direction.Inwards, Loft.CornerType.Angular, Explicit = true, Description = "OCCT_30055")]
    [TestCase(Loft.Direction.Inwards, Loft.CornerType.Round, Explicit = true, Description = "OCCT-bug")]
    [TestCase(Loft.Direction.Outwards, Loft.CornerType.Angular, Explicit = true, Description = "OCCT_30055")]
    [TestCase(Loft.Direction.Outwards, Loft.CornerType.Round, Explicit = true, Description = "OCCT-bug")]
    public void OpenWires(Loft.Direction direction, Loft.CornerType cornerType)
    {
        // For OCCT_30055, the join type must be Intersect.

        // Remove first segment to create open wires
        var sketch1 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch1.DeleteSegment(sketch1.Segments[0]);
        var body1 = sketch1.Body;

        var sketch2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4);
        sketch2.DeleteSegment(sketch2.Segments[0]);
        var body2 = sketch2.Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var sketch3 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch3.DeleteSegment(sketch3.Segments[0]);
        var body3 = sketch3.Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});
        loft.ThickenDirection = direction;
        loft.ThickenCornerType = cornerType;

        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, $"OpenWires_{direction}_{cornerType}"));
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
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var sketch3 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch3.DeleteSegment(sketch3.Segments[0]);
        var body3 = sketch3.Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});

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
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var sketch3 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        sketch3.DeleteSegment(sketch3.Segments[0]);
        var body3 = sketch3.Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});
        Assert.IsFalse(loft.Make(Shape.MakeFlags.None)); // Sections must be all closed or all open
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SkipAdditionalWiresInSections()
    {
        var sketch1 = TestSketchGenerator.CreateRectangle(5.0, 5.0);
        var body1 = sketch1.Body;
        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        sketch1.AddSegment(new SketchSegmentLine(sketch1.AddPoint(new Pnt2d(20, 20)), sketch1.AddPoint(new Pnt2d(22, 22))));

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2)});
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "SimpleRect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNone()
    {
        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body3)});
            
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
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body3)});
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
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body3)});
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
    [Explicit("OCCT Bug")]
    public void CappingModeNoneWithCircle()
    {
        // For OCCT_30055, the join type must be Intersect.

        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateCircleWithArcs(3.0, 4).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});

        loft.StartCapping = Loft.CappingMode.None;
        loft.EndCapping = Loft.CappingMode.None;
        Assert.IsTrue(loft.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(loft, Path.Combine(_BasePath, "CappingModeNoneWithCircle"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CappingModeNoneWithBezierSegments()
    {
        var sketch1 = Core.Shapes.Sketch.Create();
        sketch1.Points.Add(0, new Pnt2d(-59.051143806531094, 8.435877686647295));
        sketch1.Points.Add(1, new Pnt2d(-37.379664921868205, 11.053908692848184));
        sketch1.Points.Add(2, new Pnt2d(-51.924281622984239, 23.27138672178565));
        sketch1.Points.Add(3, new Pnt2d(-72.437392749422088, 25.059793263066492));
        sketch1.Segments.Add(0, new SketchSegmentBezier(0, 1, 2));
        sketch1.Segments.Add(1, new SketchSegmentBezier(0, 3, 2));
        Assert.That(sketch1.Make(Shape.MakeFlags.None));
        var body1 = Body.Create(sketch1);

        var sketch2 = Core.Shapes.Sketch.Create();
        sketch2.Points.Add(0, new Pnt2d(-51.131337703967631, 30.284053556015575));
        sketch2.Points.Add(1, new Pnt2d(-35.343442485191737, 8.4680528900707));
        sketch2.Points.Add(2, new Pnt2d(-58.881758993184889, 2.8705264034138014));
        sketch2.Points.Add(3, new Pnt2d(-78.401338536398725, 25.978263950894874));
        sketch2.Segments.Add(0, new SketchSegmentBezier(0, 1, 2));
        sketch2.Segments.Add(1, new SketchSegmentBezier(2, 3, 0));
        Assert.That(sketch2.Make(Shape.MakeFlags.None));
        var body2 = Body.Create(sketch2);
        TransformUtils.Translate(body2, new Vec(0, 0, 23.0534323259767));

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2)});
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
    [Explicit("OCCT bug")]
    public void CappingModeNoneWithConcaveSection()
    {
        var sketch1 = Core.Shapes.Sketch.Create();
        sketch1.Points.Add(0, new Pnt2d(-13.889948477751762, 14.273648711943792));
        sketch1.Points.Add(1, new Pnt2d(-0.076740046838405171, 23.6359344262295));
        sketch1.Points.Add(2, new Pnt2d(15.424749414519905, 21.180252927400467));
        sketch1.Points.Add(3, new Pnt2d(21.870913348946136, 6.1392037470725977));
        sketch1.Points.Add(4, new Pnt2d(9.8227259953161585, -8.978585480093674));
        sketch1.Points.Add(5, new Pnt2d(-10.513386416861826, -4.8346229508196732));
        sketch1.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch1.Segments.Add(1, new SketchSegmentLine(1, 2));
        sketch1.Segments.Add(2, new SketchSegmentLine(2, 3));
        sketch1.Segments.Add(3, new SketchSegmentLine(3, 4));
        sketch1.Segments.Add(4, new SketchSegmentLine(4, 5));
        sketch1.Segments.Add(5, new SketchSegmentLine(5, 0));
        Assert.That(sketch1.Make(Shape.MakeFlags.None));
        var body1 = Body.Create(sketch1);

        var sketch2 = Core.Shapes.Sketch.Create();
        sketch2.Points.Add(0, new Pnt2d(-9.8227259953161639, 20.627724590163936));
        sketch2.Points.Add(1, new Pnt2d(5.4024992974238826, 18.785963466042151));
        sketch2.Points.Add(2, new Pnt2d(19.154315690866518, 24.679599063231855));
        sketch2.Points.Add(3, new Pnt2d(26.766928337236532, 2.5784655737704947));
        sketch2.Points.Add(4, new Pnt2d(9.2088056206089064, -2.4556814988290427));
        sketch2.Points.Add(5, new Pnt2d(-14.12016861826698, -10.43664637002342));
        sketch2.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch2.Segments.Add(1, new SketchSegmentLine(1, 2));
        sketch2.Segments.Add(2, new SketchSegmentLine(2, 3));
        sketch2.Segments.Add(3, new SketchSegmentLine(3, 4));
        sketch2.Segments.Add(4, new SketchSegmentLine(4, 5));
        sketch2.Segments.Add(5, new SketchSegmentLine(5, 0));
        Assert.That(sketch2.Make(Shape.MakeFlags.None));
        var body2 = Body.Create(sketch2);
        TransformUtils.Translate(body2, new Vec(0, 0, 20.0));

        var sketch3 = Core.Shapes.Sketch.Create();
        sketch3.Points.Add(0, new Pnt2d(-17.803690866510539, 3.560738173302112));
        sketch3.Points.Add(1, new Pnt2d(-19.522667915690871, 23.574542388758786));
        sketch3.Points.Add(2, new Pnt2d(6.7531241217798614, 28.854257611241216));
        sketch3.Points.Add(3, new Pnt2d(30.573234660421541, 23.697326463700239));
        sketch3.Points.Add(4, new Pnt2d(33.642836533957841, 0.24556814988290426));
        sketch3.Points.Add(5, new Pnt2d(6.9986922716627582, 19.522667915690867));
        sketch3.Segments.Add(0, new SketchSegmentLine(0, 1));
        sketch3.Segments.Add(1, new SketchSegmentLine(1, 2));
        sketch3.Segments.Add(2, new SketchSegmentLine(2, 3));
        sketch3.Segments.Add(3, new SketchSegmentLine(3, 4));
        sketch3.Segments.Add(4, new SketchSegmentLine(4, 5));
        sketch3.Segments.Add(5, new SketchSegmentLine(5, 0));
        Assert.That(sketch3.Make(Shape.MakeFlags.None));
        var body3 = Body.Create(sketch3);
        TransformUtils.Translate(body3, new Vec(0, 0, 40.0));

        var loft = Loft.Create(body1, new[] {new BodyShapeOperand(body2), new BodyShapeOperand(body3)});
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