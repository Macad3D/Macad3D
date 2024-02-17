using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify;

[TestFixture]
public class BooleanTests
{
    const string _BasePath = @"Modeling\Modify\Boolean";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Fuse()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Fuse")));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void FuseNoMergeFaces()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanFuse.Create(shapes.target, shapes.operands);
        boolOp.MergeFaces = false;

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "FuseNoMergeFaces")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Common()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(true);

        var boolOp = BooleanCommon.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Common")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cut()
    {
        var shapes = TestGeomGenerator.CreateBooleanBodies(false);

        var boolOp = BooleanCut.Create(shapes.target, shapes.operands);

        Assert.IsTrue(boolOp.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(boolOp, Path.Combine(_BasePath, "Cut")));
    }

    //--------------------------------------------------------------------------------------------------

}