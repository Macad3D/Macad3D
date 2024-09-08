using System.IO;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives;

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

}