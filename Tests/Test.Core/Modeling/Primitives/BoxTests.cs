using System.IO;
using Macad.Core.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Primitives;

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

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SubshapeReferences()
    {
        var shape = Box.Create(10, 10, 10);
        shape.Guid = TestData.CreateGuid(1);
        AssertHelper.HasValidSubshapeReferences(shape);
        AssertHelper.IsSameSubshapeReferences(shape, Path.Combine(_BasePath, "SubshapeReferences"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("A primitive's face references must survive a change of its own dimensions")]
    public void SubshapeReferencesSurvivesDimensionChange()
    {
        var shape = Box.Create(10, 10, 10);
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));

        AssertHelper.AreSubshapeReferencesStableAfterChange(shape, () => shape.DimensionZ = 14);
    }

    //--------------------------------------------------------------------------------------------------

}