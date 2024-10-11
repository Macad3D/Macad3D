using System.IO;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify;

[TestFixture]
public class ChamferTests
{
    const string _BasePath = @"Modeling\Modify\Chamfer";

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

        var shape = Chamfer.Create(body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.Symmetric;
        shape.Distance = 3;

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

        var shape = Chamfer.Create(body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.Symmetric;
        shape.Distance = 3;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "Cylinder")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DistanceAngle()
    {
        var baseshape = new Box()
        {
            DimensionX = 10,
            DimensionY = 10,
            DimensionZ = 10,
        };
        var body = Body.Create(baseshape);

        var shape = Chamfer.Create(body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.DistanceAngle;
        shape.Distance = 3;
        shape.Angle = 20;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "DistanceAngle")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DistanceAngleSwapped()
    {
        var baseshape = new Box()
        {
            DimensionX = 10,
            DimensionY = 10,
            DimensionZ = 10,
        };
        var body = Body.Create(baseshape);

        var shape = Chamfer.Create(body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.DistanceAngle;
        shape.Distance = 3;
        shape.Angle = 20;
        shape.ReverseOrientation = true;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "DistanceAngleSwapped")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TwoDistances()
    {
        var baseshape = new Box()
        {
            DimensionX = 10,
            DimensionY = 10,
            DimensionZ = 10,
        };
        var body = Body.Create(baseshape);

        var shape = Chamfer.Create(body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        shape.Distance = 3;
        shape.SecondDistance = 1;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "TwoDistances")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FaceSelection()
    {
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Circle);
        Assert.That(imprint, Is.Not.Null);
        imprint.Depth = 5.0;

        var shape = Chamfer.Create(imprint.Body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        shape.Distance = 0.2;
        shape.SecondDistance = 1;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "FaceSelection")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FaceSelectionSwapped()
    {
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Circle);
        Assert.That(imprint, Is.Not.Null);
        imprint.Depth = 5.0;

        var shape = Chamfer.Create(imprint.Body);
        shape.AddAllEdges();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        shape.Distance = 0.2;
        shape.SecondDistance = 1;
        shape.ReverseOrientation = true;

        Assert.IsTrue(shape.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(shape, Path.Combine(_BasePath, "FaceSelectionSwapped")));
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