using System.IO;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Primitives;

[TestFixture]
public class CylinderTests
{
    const string _BasePath = @"Modeling\Primitives\Cylinder";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        var shape = new Cylinder()
        {
            Radius = 10,
            Height = 10
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Simple")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SegmentAngle()
    {
        var shape = new Cylinder()
        {
            Radius = 10,
            Height = 10,
            SegmentAngle = 120
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "SegmentAngle")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NegativeHeight()
    {
        var shape = new Cylinder()
        {
            Radius = 10,
            Height = -10
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "NegativeHeight")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TransformationUpdateOnNegativeHeight()
    {
        var body = Body.Create(Cylinder.Create(1, -10));
        body.Rotation = new(0, -45.0.ToRad(), 0);
        var loc = body.GetTransformedBRep().Location();
        body.Rotation = new(0, -44.0.ToRad(), 0);
        body.Rotation = new(0, -45.0.ToRad(), 0);
        Assert.That(body.GetTransformedBRep().Location().Transformation(), Is.EqualTo(loc.Transformation()));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences()
    {
        var shape = Cylinder.Create(10, 10);
        shape.Guid = TestData.CreateGuid(1);
        AssertHelper.HasValidSubshapeReferences(shape);
        AssertHelper.IsSameSubshapeReferences(shape, Path.Combine(_BasePath, "SubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences_Segment()
    {
        var shape = Cylinder.Create(10, 10);
        shape.SegmentAngle = 120;
        shape.Guid = TestData.CreateGuid(1);
        AssertHelper.HasValidSubshapeReferences(shape);
        AssertHelper.IsSameSubshapeReferences(shape, Path.Combine(_BasePath, "SubshapeReferences_Segment"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A primitive's face references must survive a change of its own dimensions")]
    public void SubshapeReferencesSurvivesHeightChange()
    {
        var shape = Cylinder.Create(10, 10);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        AssertHelper.AreSubshapeReferencesStableAfterChange(shape, () => shape.Height = 11);
    }

    //--------------------------------------------------------------------------------------------------

}