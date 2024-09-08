using System.IO;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives;

[TestFixture]
public class SphereTests
{
    const string _BasePath = @"Modeling\Primitives\Sphere";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        var shape = new Sphere()
        {
            Radius = 10
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Simple")));
    }

    [Test]
    public void MaxLatitude()
    {
        var shape = new Sphere()
        {
            Radius = 10,
            MaxLatitude = 60
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MaxLatitude")));
    }

    [Test]
    public void MinLatitude()
    {
        var shape = new Sphere()
        {
            Radius = 10,
            MinLatitude = 30
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MinLatitude")));
    }

    [Test]
    public void MinMaxLatitude()
    {
        var shape = new Sphere()
        {
            Radius = 10,
            MinLatitude = 30,
            MaxLatitude = 60
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "MinMaxLatitude")));
    }

    [Test]
    public void SegmentAngle()
    {
        var shape = new Sphere()
        {
            Radius = 10,
            SegmentAngle = 120
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "SegmentAngle")));
    }

    [Test]
    public void SegmentMinMaxLat()
    {
        var shape = new Sphere()
        {
            Radius = 10,
            MinLatitude = 30,
            MaxLatitude = 60,
            SegmentAngle = 120
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "SegmentMinMaxLat")));
    }

    [Test]
    public void NegativeMinMaxLatitude()
    {
        // MinLatitude must be smaller than MaxLatitude
        var shape = new Sphere()
        {
            Radius = 10,
            MinLatitude = 60,
            MaxLatitude = 30
        };

        Assert.IsFalse(shape.Make(Shape.MakeFlags.None));
    }
}