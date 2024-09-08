using System.IO;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives;

[TestFixture]
public class BoxTests
{
    const string _BasePath = @"Modeling\Primitives\Box";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        var shape = new Box
        {
            DimensionX = 10,
            DimensionY = 5,
            DimensionZ = 2
        };

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Simple")));
    }
}