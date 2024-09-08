using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Toolkits;

[TestFixture]
public class ConvertToSolidTests
{
    const string _BasePath = @"Modeling\Toolkits\ConvertToSolid";

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CollapseBody()
    {
        var body = TestGeomGenerator.CreateImprint()?.Body;
        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body}));
        Assert.IsInstanceOf<Solid>(body.RootShape);
        AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "CollapseBody"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CollapseMultipleBodies()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 10), new Pnt(-5, -5, -5));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 10), new Pnt(-5, -5, -5));

        var (first, second) = BoxJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body1, body2}));
        Assert.IsInstanceOf<Solid>(body1.RootShape);
        Assert.IsInstanceOf<Solid>(body2.RootShape);

        Assert.IsTrue(body1.Shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(body1.Shape, Path.Combine(_BasePath, "CollapseMultipleBodies1"));
        Assert.IsTrue(body2.Shape.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(body2.Shape, Path.Combine(_BasePath, "CollapseMultipleBodies2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CollapseWithAssociated()
    {
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10,  2, 2), new Pnt(-5, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create( 2, 10, 2), new Pnt(-1, -5, 0));

        var (first, second) = HalvedJoint.Create(body1, body2);
        Assert.IsTrue(first.Make(Shape.MakeFlags.None));
        Assert.IsTrue(second.Make(Shape.MakeFlags.None));

        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body1}));
        Assert.IsInstanceOf<Solid>(body1.RootShape);
        Assert.IsInstanceOf<Box>(body2.RootShape);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertMesh()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Mesh\\CompoundMesh.brep", ShapeType.Mesh);

        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body}));
        Assert.IsInstanceOf<Solid>(body.RootShape);
        AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "ConvertMesh"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ConvertMeshWithModifier()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Mesh\\CompoundMesh.brep", ShapeType.Mesh);
        Scale.Create(body, 1.5);

        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body}));
        Assert.IsInstanceOf<Solid>(body.RootShape);
        AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "ConvertMeshWithModifier"));
    }
    
    //--------------------------------------------------------------------------------------------------

}
