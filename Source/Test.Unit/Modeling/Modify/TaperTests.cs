using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modify;

[TestFixture]
public class TaperTests
{
    const string _BasePath = @"Modeling\Modify\Taper";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByEdge()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(box.Body, face, edge, 22.5);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByEdge"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByReversedEdge()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 0);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 2);
        var taper = Taper.Create(box.Body, face, edge, 22.5);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByReversedEdge"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByVertex()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var vertex = box.GetSubshapeReference(SubshapeType.Vertex, 5);
        var taper = Taper.Create(box.Body, face, vertex, 22.5);

        // Edge orientation is Rev, Fwd
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertex1"));

        // Edge orientation is Rev, Rev
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 4);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertex2"));

        // Edge orientation is Rev, Fwd
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 6);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertex3"));

        // Edge orientation is Fwd, Fwd
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 7);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertex4"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByEdgeAdd()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(box.Body, face, edge, -22.5);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByEdgeAdd"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CurvedEdges()
    {
        var cylinder = Cylinder.Create(10, 10);
        cylinder.SegmentAngle = 270;
        Body.Create(cylinder);

        var face = cylinder.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 0);
        var taper = Taper.Create(cylinder.Body, face, edge, 22.5);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "CurvedEdges1"));

        edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 4);
        taper.BaseEdgeOrVertex = edge;
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "CurvedEdges2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CylinderCap()
    {
        var cylinder = Cylinder.Create(10, 10);
        Body.Create(cylinder);

        var face = cylinder.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 0);
        var taper = Taper.Create(cylinder.Body, face, edge, 22.5);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "CylinderCap"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CylinderSurface()
    {
        var cylinder = Cylinder.Create(10, 10);
        Body.Create(cylinder);

        var face = cylinder.GetSubshapeReference(SubshapeType.Face, 0);
        var edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 2);
        var taper = Taper.Create(cylinder.Body, face, edge, 22.5);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "CylinderSurface"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CylinderSurfaceOffset()
    {
        var cylinder = Cylinder.Create(10, 10);
        Body.Create(cylinder);

        var face = cylinder.GetSubshapeReference(SubshapeType.Face, 0);
        var edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 2);
        var taper = Taper.Create(cylinder.Body, face, edge, 22.5);
        taper.Offset = 2;

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "CylinderSurfaceOffset"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByEdgeOffset()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(box.Body, face, edge, 22.5);
        taper.Offset = 2;

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByEdgeOffset"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void BoxByEdgeOffsetReversed()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 5);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 9);
        var taper = Taper.Create(box.Body, face, edge, 22.5);
        taper.Offset = 2;

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByEdgeOffsetReversed"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByVertexOffset()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var vertex = box.GetSubshapeReference(SubshapeType.Vertex, 5);
        var taper = Taper.Create(box.Body, face, vertex, 22.5);
        taper.Offset = 2;

        // Edge orientation is Rev, Fwd
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertexOffset1"));

        // Edge orientation is Rev, Rev
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 4);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertexOffset2"));

        // Edge orientation is Rev, Fwd
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 6);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertexOffset3"));

        // Edge orientation is Fwd, Fwd
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 7);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertexOffset4"));

        // Face orientation is Rev
        taper.Face = box.GetSubshapeReference(SubshapeType.Face, 2);
        taper.BaseEdgeOrVertex = box.GetSubshapeReference(SubshapeType.Vertex, 0);
        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "BoxByVertexOffset5"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EdgeParameter()
    {
        var cylinder = Cylinder.Create(10, 10);
        Body.Create(cylinder);

        var face = cylinder.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 0);
        var taper = Taper.Create(cylinder.Body, face, edge, 22.5);
        taper.BaseParameter = 0.0;

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "EdgeParameter"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void ConcaveVertex()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "BoxJointShape_Source.brep"));

        var face = body.Shape.GetSubshapeReference(SubshapeType.Face, 13);
        var vertex = body.Shape.GetSubshapeReference(SubshapeType.Vertex, 16);
        var taper = Taper.Create(body, face, vertex, 3.0);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "ConcaveVertex"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BoxByEdgeOffsetTwice()
    {
        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(box.Body, face, edge, 22.5);
        taper.Offset = 2;

        face = taper.GetSubshapeReference(SubshapeType.Face, 6);
        Assert.IsNotNull(face);
        edge = taper.GetSubshapeReference(SubshapeType.Edge, 12);
        Assert.IsNotNull(edge);
        var taper2 = Taper.Create(box.Body, face, edge, 22.5);
        taper2.Offset = 3;

        Assert.IsTrue(taper2.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper2, Path.Combine(_BasePath, "BoxByEdgeOffsetTwice"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Propagate()
    {
        var body = TestGeomGenerator.CreateBox().Body;
        var extrude = Extrude.Create(body, body.Shape.GetSubshapeReference(SubshapeType.Face, 1));
        extrude.MergeFaces = false;
        var face = extrude.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = extrude.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(body, face, edge, 22.5);

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "Propagate"));   
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void PropagateWithOffset()
    {
        var body = TestGeomGenerator.CreateBox().Body;
        var extrude = Extrude.Create(body, body.Shape.GetSubshapeReference(SubshapeType.Face, 1));
        extrude.MergeFaces = false;
        var face = extrude.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = extrude.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(body, face, edge, 22.5);
        taper.Offset = 1.0;

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "PropagateWithOffset"));   
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PropagateComplex()
    {
        var body = TestGeomGenerator.CreateBox().Body;
        var cyl= TestGeomGenerator.CreateCylinder();
        cyl.Radius = 5.0;
        cyl.Body.Position = new Pnt(5.0, 0, 0);
        var fuse = BooleanFuse.Create(body, cyl);
        var face = fuse.GetSubshapeReference(SubshapeType.Face, 2);
        var edge = fuse.GetSubshapeReference(SubshapeType.Edge, 7);
        var taper = Taper.Create(body, face, edge, 22.5);
        taper.Offset = 1.0;

        Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
        AssertHelper.IsSameModel(taper, Path.Combine(_BasePath, "PropagateComplex"));   
    }

    //--------------------------------------------------------------------------------------------------
}