using System.IO;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify;

[TestFixture]
public class OffsetTests
{
    const string _BasePath = @"Modeling\Modify\Offset";

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(TestSketchGenerator.SketchType.Circle)]
    [TestCase(TestSketchGenerator.SketchType.Rectangle)]
    [TestCase(TestSketchGenerator.SketchType.MultiCircle)]
    [TestCase(TestSketchGenerator.SketchType.SimpleAsymmetric)]
    public void SketchInflate(TestSketchGenerator.SketchType sketchType)
    {
        var sketch = TestSketchGenerator.CreateSketch(sketchType, true);
        var offset = Offset.Create(sketch.Body, 1.0);
        offset.KeepOriginal = true;

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, $"SketchInflate_{sketchType}"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(TestSketchGenerator.SketchType.Circle)]
    [TestCase(TestSketchGenerator.SketchType.Rectangle)]
    [TestCase(TestSketchGenerator.SketchType.MultiCircle)]
    [TestCase(TestSketchGenerator.SketchType.SimpleAsymmetric)]
    public void SketchDeflate(TestSketchGenerator.SketchType sketchType)
    {
        var sketch = TestSketchGenerator.CreateSketch(sketchType, true);
        var offset = Offset.Create(sketch.Body, -1.0);
        offset.KeepOriginal = true;

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, $"SketchDeflate_{sketchType}"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(Offset.CornerType.Round)]
    [TestCase(Offset.CornerType.Angular)]
    public void SketchCorner(Offset.CornerType corner)
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        var offset = Offset.Create(sketch.Body, 2.0);
        offset.KeepOriginal = true;
        offset.Corner = corner;

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, $"SketchCorner_{corner}"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchDiscardOriginal()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Circle, true);
        var offset = Offset.Create(sketch.Body, -4.0);
        offset.KeepOriginal = false;

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, $"SketchDiscardOriginal"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchOpenWire()
    {
        Core.Shapes.Sketch sketch = Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.StartPath(-5, -5);
        sb.LineTo(-2, 0);
        sb.ArcTo(2, 0, 0, 2);
        sb.LineTo(5, -5);
        Body body = Body.Create(sketch);
        var offset = Offset.Create(sketch.Body, 0.5);

        Assert.IsFalse(offset.Make(Shape.MakeFlags.None));
        Assert.That(Context.Current.MessageHandler.GetEntityMessages(offset).Any(msg => msg.Text.Contains("closed wires")));
    }

    //--------------------------------------------------------------------------------------------------

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidInflate()
    {
        var body = TestGeomGenerator.CreateImprint().Body;
        var offset = Offset.Create(body, 0.5);

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(body.Shape, Path.Combine(_BasePath, "SolidInflate"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidDeflate()
    {
        var body = TestGeomGenerator.CreateImprint().Body;
        var offset = Offset.Create(body, -0.5);

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, "SolidDeflate"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(Offset.CornerType.Round)]
    [TestCase(Offset.CornerType.Angular)]
    public void SolidCorner(Offset.CornerType corner)
    {
        var body = TestGeomGenerator.CreateBox().Body;
        var offset = Offset.Create(body, 1.0);
        offset.Corner = corner;

        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, $"SolidCorner_{corner}"));

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SolidCompound()
    {
        var body = TestGeomGenerator.CreateBox().Body;
        var linearArray = LinearArray.Create(body);
        linearArray.Quantity1 = 2;
        linearArray.Quantity2 = 2;
        linearArray.Distance1 = 2;
        linearArray.Distance2 = 2;
        linearArray.DistanceMode1 = LinearArray.DistanceMode.Spacing;
        linearArray.DistanceMode2 = LinearArray.DistanceMode.Spacing;

        var offset = Offset.Create(body, 0.5);
        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));

        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, "SolidCompound"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void SketchTransformedPlane()
    {
        var section = TestGeomGenerator.CreateCrossSection();
        var offset = Offset.Create(section.Body, 1.0);
        Assert.IsTrue(offset.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(offset, Path.Combine(_BasePath, "SketchTransformedPlane"));
    }

    //--------------------------------------------------------------------------------------------------

}