using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify;

[TestFixture]
public class FilletTests
{
    const string _BasePath = @"Modeling\Modify\Fillet";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Box()
    {
        var baseshape = new Box()
        {
            DimensionX = 10,
            DimensionY = 10,
            DimensionZ = 10,
        };
        var body = Body.Create(baseshape);

        var shape = Fillet.Create(body);
        shape.AddAllEdges();
        shape.Radius = 3;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Box")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cylinder()
    {
        var baseshape = new Cylinder()
        {
            Radius = 10,
            Height = 10,
        };
        var body = Body.Create(baseshape);

        var shape = Fillet.Create(body);
        shape.AddAllEdges();
        shape.Radius = 3;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Cylinder")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EdgeSelectionFailure()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "EdgeSelectionFailure_Source.brep"));

        var edge1 = body.Shape.GetSubshapeReference(SubshapeType.Edge, 20);
        var edge2 = body.Shape.GetSubshapeReference(SubshapeType.Edge, 25);
        Assert.That(edge1, Is.Not.EqualTo(edge2));

        var shape = Fillet.Create(body);
        shape.Edges = new[] {edge1, edge2};
        Assert.That(shape.Make(Shape.MakeFlags.None));
        Assert.That(ModelCompare.CompareShape(shape.GetBRep(), Path.Combine(_BasePath, "EdgeSelectionFailure")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DoubleKeysInContourDict()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "DoubleKeysInContourDict_Source.brep"));

        var edge = body.Shape.GetSubshapeReference(SubshapeType.Edge, 40);
        Assert.That(edge, Is.Not.Null);

        var shape = Fillet.Create(body);
        shape.Edges = new[] {edge, edge};
        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LostEdge()
    {
        var extrude = TestGeomGenerator.CreateExtrude(TestSketchGenerator.SketchType.Rectangle);
        var fillet = Fillet.Create(extrude.Body);
        fillet.AddEdge(extrude.GetSubshapeReference(SubshapeType.Edge, 11));
        Assert.IsTrue(fillet.Make(Shape.MakeFlags.None));

        // Remove segment by merging points
        var sketch = extrude.Predecessor as Core.Shapes.Sketch;
        sketch.Constraints.Clear();
        sketch.DeleteSegment(sketch.Segments[1]);
        sketch.MergePoints(1, 2);
            
        // It is ok to fail, it just should not crash
        Assert.IsFalse(fillet.Make(Shape.MakeFlags.None)); 
    }
}