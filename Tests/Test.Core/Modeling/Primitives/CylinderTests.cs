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
        var first = body.GetTransformedBRep().Location().Transformation();
        body.Rotation = new(0, -44.0.ToRad(), 0);
        body.Rotation = new(0, -45.0.ToRad(), 0);
        var second = body.GetTransformedBRep().Location().Transformation();
        Assert.That(second, Is.EqualTo(first));
    }

    //--------------------------------------------------------------------------------------------------

}