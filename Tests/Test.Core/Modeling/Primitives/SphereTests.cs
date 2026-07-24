using System.IO;
using Macad.Core.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Primitives;

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

    //--------------------------------------------------------------------------------------------------

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

    //--------------------------------------------------------------------------------------------------

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

    //--------------------------------------------------------------------------------------------------

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

    //--------------------------------------------------------------------------------------------------

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

    //--------------------------------------------------------------------------------------------------

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

    //--------------------------------------------------------------------------------------------------

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

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences([Values(0, 120)] double segmentAngle, [Values(-90, -60)] double minLatitude, [Values(60, 90)] double maxLatitude)
    {
        var shape = Sphere.Create(10);
        shape.SegmentAngle = segmentAngle;
        shape.MinLatitude = minLatitude;
        shape.MaxLatitude = maxLatitude;
        shape.Guid = TestData.CreateGuid(1);
        AssertHelper.HasValidSubshapeReferences(shape);
        AssertHelper.IsSameSubshapeReferences(shape, Path.Combine(_BasePath, $"SubshapeReferences_{(int)segmentAngle}_{(int)minLatitude}_{(int)maxLatitude}"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A primitive's face references must survive a change of its own dimensions")]
    public void SubshapeReferencesSurvivesRadiusChange()
    {
        var shape = new Sphere()
        {
            Radius = 10
        };

        AssertHelper.AreSubshapeReferencesStableAfterChange(shape, () => shape.Radius = 11);
    }

    //--------------------------------------------------------------------------------------------------

}