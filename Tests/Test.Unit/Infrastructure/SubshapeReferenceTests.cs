using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Subshapes;

[TestFixture]
public class SubshapeReferenceTests
{
    const string _BasePath = @"Infrastructure\SubshapeReference";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BooleanCutModifications()
    {
        // Make Box
        var box = new Box()
        {
            DimensionX = 10,
            DimensionY = 10,
            DimensionZ = 10,
        };
        var tsBox = box.GetTransformedBRep();
        var edgesBox = tsBox.Edges();
        var facesBox = tsBox.Faces();
        Assert.AreEqual(12, edgesBox.Count);

        // Make Cylinder
        var cyl = new Cylinder()
        {
            Height = 10,
            Radius = 2,
        };
        var cylBody = TestGeomGenerator.CreateBody(cyl, new Pnt(5, 5, 0));

        var tsCyl = cyl.GetTransformedBRep();
        var edgesCyl = tsCyl.Edges();
        var facesCyl = tsCyl.Faces();
        Assert.AreEqual(3, edgesCyl.Count);

        // Boolean Op
        var cut = new BRepAlgoAPI_Cut(tsBox, tsCyl);
        var tsBool = cut.Shape();
        var edgesBool = tsBool.Edges();
        var facesBool = tsBool.Faces();

        Assert.AreEqual(15, edgesBool.Count);
        Assert.False(cut.HasGenerated());
        Assert.True(cut.HasDeleted());
        Assert.True(cut.HasModified());

        // All edges of box and cyl are in boolop
        Assert.AreEqual(12, edgesBox.Count(e => edgesBool.Any(edgeBool => edgeBool.IsSame(e))));
        Assert.AreEqual(3, edgesCyl.Count(e => edgesBool.Any(edgeBool => edgeBool.IsSame(e))));

        // Deleted no edges
        Assert.AreEqual(0, edgesBox.Count(e => cut.IsDeleted(e)));
        Assert.AreEqual(0, edgesCyl.Count(e => cut.IsDeleted(e)));

        // 4 faces from box and none from cylinder are in boolop
        Assert.AreEqual(4, facesBox.Count(f => facesBool.Any(faceBool => faceBool.IsSame(f))));
        Assert.AreEqual(1, facesCyl.Count(f => facesBool.Any(faceBool => faceBool.IsSame(f))));

        // Deleted no faces from box, 2 faces from cylinder
        Assert.AreEqual(0, facesBox.Count(f => cut.IsDeleted(f)));
        Assert.AreEqual(2, facesCyl.Count(f => cut.IsDeleted(f)));

        // Modified 2 faces from box, 0 face from cylinder
        Assert.AreEqual(2, facesBox.Count(f => cut.Modified(f).Size() > 0));
        Assert.AreEqual(0, facesCyl.Count(f => cut.Modified(f).Size() > 0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEdgeReference()
    {
        // Create shapes
        var box = MakeBox();
        var cyl = MakeCylinder();
        var cut = MakeBooleanCut(box, cyl);

        // Sanity check
        Assert.AreEqual(12, box.OcShape.Edges().Count(edgeBox => cut.Edges.Any(edgeBool => edgeBool.IsPartner(edgeBox))));

        // Find reference, original edge
        var ref1 = cut.Shape.GetSubshapeReference(cut.Edges[1]);
        Assert.IsNotNull(ref1);
        Assert.AreEqual(box.Shape.Guid, ref1.ShapeId);

        // Find reference, unmodified edge
        var ref2 = cut.Shape.GetSubshapeReference(cut.Edges[2]);
        Assert.IsNotNull(ref2);
        Assert.AreEqual(box.Shape.Guid, ref2.ShapeId);

        // Find reference, modified edge
        // -- open --

        // Recalc
        InvalidateShape(ref box);
        InvalidateShape(ref cyl);
        InvalidateShape(ref cut);

        // Find refs again
        var edge1 = cut.Shape.FindSubshape(ref1, null);
        Assert.IsNotNull(edge1);
        Assert.That(edge1.Count, Is.EqualTo(1));
        Assert.That(edge1[0].IsSame(cut.Edges[1]));
        Assert.That(edge1[0].IsPartner(box.Edges[1]));

        var edge2 = cut.Shape.FindSubshape(ref2, null);
        Assert.IsNotNull(edge2);
        Assert.That(edge2.Count, Is.EqualTo(1));
        Assert.That(edge2[0].IsSame(cut.Edges[2]));
        Assert.That(edge2[0].IsPartner(cut.Edges[2]));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFaceReference()
    {
        // Create shapes
        var box = MakeBox();
        var cyl = MakeCylinder();
        var cut = MakeBooleanCut(box, cyl);

        // Sanity check
        Assert.AreEqual(4, box.Faces.Count(e => cut.Faces.Any(faceBool => faceBool.IsPartner(e))));

        // Find reference, original face
        var ref1 = cut.Shape.GetSubshapeReference(box.Faces[0]);
        Assert.IsNotNull(ref1);
        Assert.AreEqual(box.Shape.Guid, ref1.ShapeId);

        // Find reference, unmodified face
        var ref2 = cut.Shape.GetSubshapeReference(cut.Faces[1]);
        Assert.IsNotNull(ref2);
        Assert.AreEqual(box.Shape.Guid, ref2.ShapeId);

        // Find reference, modified face
        var ref3 = cut.Shape.GetSubshapeReference(cut.Faces[2]);
        Assert.IsNotNull(ref3);
        Assert.AreNotEqual(cut.Shape.Guid, ref3.ShapeId);
        Assert.AreEqual(box.Shape.Guid, ref3.ShapeId);

        //// Recalc
        InvalidateShape(ref box);
        InvalidateShape(ref cyl);
        InvalidateShape(ref cut);

        // Find refs again
        var face1 = cut.Shape.FindSubshape(ref1, null);
        Assert.IsNotNull(face1);
        Assert.That(face1[0].IsPartner(box.Faces[0]));
        Assert.That(face1[0].IsSame(cut.Faces[0]));

        var face2 = cut.Shape.FindSubshape(ref2, null);
        Assert.IsNotNull(face2);
        Assert.That(face2[0].IsSame(cut.Faces[1]));

        var face3 = cut.Shape.FindSubshape(ref3, null);
        Assert.IsNotNull(face3);
        Assert.That(face3[0].IsSame(cut.Faces[2]));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateVertexReference()
    {
        // Create shapes
        var box = MakeBox();
        var cyl = MakeCylinder();
        var cut = MakeBooleanCut(box, cyl);

        // Sanity check
        Assert.AreEqual(8, box.Vertices.Count(v => cut.Vertices.Any(vertexBool => vertexBool.IsPartner(v))));

        // Find reference, original vertex
        var ref1 = cut.Shape.GetSubshapeReference(box.Vertices[0]);
        Assert.IsNotNull(ref1);
        Assert.AreEqual(box.Shape.Guid, ref1.ShapeId);

        // Find reference, unmodified vertex
        var ref2 = cut.Shape.GetSubshapeReference(cut.Vertices[1]);
        Assert.IsNotNull(ref2);
        Assert.AreEqual(box.Shape.Guid, ref2.ShapeId);

        // Find reference, modified vertex
        var ref3 = cut.Shape.GetSubshapeReference(cut.Vertices[2]);
        Assert.IsNotNull(ref3);
        Assert.AreNotEqual(cut.Shape.Guid, ref3.ShapeId);
        Assert.AreEqual(box.Shape.Guid, ref3.ShapeId);

        //// Recalc
        InvalidateShape(ref box);
        InvalidateShape(ref cyl);
        InvalidateShape(ref cut);

        // Find refs again
        var vertex1 = cut.Shape.FindSubshape(ref1, null);
        Assert.IsNotNull(vertex1);
        Assert.That(vertex1[0].IsPartner(box.Vertices[0]));
        Assert.That(vertex1[0].IsSame(cut.Vertices[0]));

        var vertex2 = cut.Shape.FindSubshape(ref2, null);
        Assert.IsNotNull(vertex2);
        Assert.That(vertex2[0].IsSame(cut.Vertices[1]));

        var vertex3 = cut.Shape.FindSubshape(ref3, null);
        Assert.IsNotNull(vertex3);
        Assert.That(vertex3[0].IsSame(cut.Vertices[2]));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ChamferEdgeReference()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;
        //var body = Body.Create(imprint);
        Assert.That(imprint.Make(Shape.MakeFlags.None));

        var edges = imprint.GetBRep().Edges();
        Assert.That(edges.Count, Is.EqualTo(15));
        var edgeRefs = new[]
        {
            imprint.GetSubshapeReference(edges[1]),
            imprint.GetSubshapeReference(edges[6]),
            imprint.GetSubshapeReference(edges[7]),
            imprint.GetSubshapeReference(edges[8]),
        };

        Assert.That(edgeRefs[0].ShapeId, Is.Not.EqualTo(imprint.Guid));
        Assert.That(edgeRefs[1].ShapeId, Is.Not.EqualTo(imprint.Guid));
        Assert.That(edgeRefs[2].ShapeId, Is.Not.EqualTo(imprint.Guid));
        Assert.That(edgeRefs[3].ShapeId, Is.Not.EqualTo(imprint.Guid));

        var chamfer = Chamfer.Create(imprint.Body, edgeRefs);
        chamfer.Mode = Chamfer.ChamferModes.Symmetric;
        chamfer.Distance = 2;
        chamfer.SecondDistance = 2;

        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(chamfer, Path.Combine(_BasePath, "ChamferEdgeWithImprint")));

        imprint.IsSkipped = true;
        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(chamfer, Path.Combine(_BasePath, "ChamferEdgeWithoutImprint")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImprintCopiedEdgeReference()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        var edges = imprint.GetBRep().Edges();

        var chamfer = Chamfer.Create(imprint.Body);
        chamfer.Mode = Chamfer.ChamferModes.Symmetric;
        chamfer.Edges = new[]
        {
            imprint.GetSubshapeReference(edges[9]),
            imprint.GetSubshapeReference(edges[14])
        };
        chamfer.Distance = 1;
        chamfer.SecondDistance = 1;

        Assert.IsNotNull(chamfer.Edges[0]);
        Assert.IsNotNull(chamfer.Edges[1]);
        Assert.AreNotEqual(chamfer.Edges[0], chamfer.Edges[1], "Double edge references!");

        Assert.IsTrue(chamfer.Make(Shape.MakeFlags.None));
        Assert.IsTrue(ModelCompare.CompareShape(chamfer, Path.Combine(_BasePath, "ImprintCopiedEdge")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FlangeNamedSubshapes()
    {
        var box = Box.Create(10.0, 10.0, 1.0);
        var body = Body.Create(box);
        var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 5.0);
        Assert.That(ModelCompare.CompareShape(flangeSheet, Path.Combine(_BasePath, "FlangeNamedSubshapes")));

        var faces = flangeSheet.GetBRep().Faces();
        _TestSubshape(9, "Flange", 0);
        _TestSubshape(10, "Flange", 1);
        _TestSubshape(11, "Flange", 2);
        _TestSubshape(12, "Flange", 3);
        _TestSubshape(13, "Flange", 5);
        _TestSubshape(8, "Bend", 3);
        _TestSubshape(7, "Bend", 2);
        _TestSubshape(6, "Bend", 1);
        _TestSubshape(5, "Bend", 0);

        void _TestSubshape(int faceIndex, string expectedName, int expectedIndex)
        {
            var subshapeReference = flangeSheet.GetSubshapeReference(SubshapeType.Face, faceIndex);
            Assert.That(subshapeReference.Name, Is.EqualTo(expectedName));
            Assert.That(subshapeReference.Index, Is.EqualTo(expectedIndex));
            var foundFaces = flangeSheet.FindSubshape(subshapeReference, null);
            Assert.That(foundFaces.Count, Is.EqualTo(1));
            Assert.That(foundFaces[0].IsSame(faces[faceIndex]));
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReferenceAcrossBodies()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 2.5;
        imprint.Mode = Imprint.ImprintMode.Raise;
        imprint.Body.Position = Pnt.Origin;

        // Create another body and move imprint into
        var body = Body.Create(imprint);
        Assert.That(imprint.Make(Shape.MakeFlags.None));

        var edges = imprint.GetBRep().Edges();
        Assert.That(edges.Count, Is.EqualTo(15));
        var edgeRefs = new[]
        {
            imprint.GetSubshapeReference(edges[1]),
            imprint.GetSubshapeReference(edges[6]),
            imprint.GetSubshapeReference(edges[7]),
            imprint.GetSubshapeReference(edges[8]),
        };

        // References should be found even across body boundaries
        // for the same test without different bodies: ChamferEdgeReference
        Assert.That(edgeRefs[0].ShapeId, Is.Not.EqualTo(imprint.Guid));
        Assert.That(edgeRefs[1].ShapeId, Is.Not.EqualTo(imprint.Guid));
        Assert.That(edgeRefs[2].ShapeId, Is.Not.EqualTo(imprint.Guid));
        Assert.That(edgeRefs[3].ShapeId, Is.Not.EqualTo(imprint.Guid));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StackedBodyReferencesAfterLoading()
    {
        Context.InitWithDefault();
        TestData.LoadTestDataModel(Path.Combine(_BasePath, "StackedBodyReferences_Source.model"));
        var bodyPB3 = Context.Current.Document.FindInstance(new Guid("0d46eb2b29b64a16b28e6a0f499e22fa")) as Body;
        var faceRef = new SubshapeReference(SubshapeType.Face, new Guid("a1dc7f9a52674294a3234beb5de7599c"), 5);
            
        var subshapeFaces = bodyPB3.Shape.FindSubshape(faceRef, null);
        Assert.IsNotNull(subshapeFaces, "No faces found. Facelist is null.");
        Assert.IsTrue(subshapeFaces.Any(), "No faces found. Facelist is empty.");

        var shapeFaces = bodyPB3.Shape.GetBRep().Faces();
        Assert.IsTrue(shapeFaces.ContainsSame(subshapeFaces.First()));

        Assert.IsTrue(bodyPB3.Shape.Make(Shape.MakeFlags.None));
    }

    //--------------------------------------------------------------------------------------------------

    #region Utils

    struct ShapeDesc
    {
        public Body Body;
        public Shape Shape;
        public TopoDS_Shape OcShape;
        public List<TopoDS_Edge> Edges;
        public List<TopoDS_Face> Faces;
        public List<TopoDS_Vertex> Vertices;
    }

    //--------------------------------------------------------------------------------------------------

    ShapeDesc MakeBox()
    {
        var desc = new ShapeDesc
        {
            Shape = new Box()
            {
                DimensionX = 10,
                DimensionY = 10,
                DimensionZ = 10,
            }
        };
        desc.Body = TestGeomGenerator.CreateBody(desc.Shape);
        desc.OcShape = desc.Shape.GetBRep();
        desc.Vertices = desc.OcShape.Vertices();
        Assert.AreEqual(8, desc.Vertices.Count);
        desc.Edges = desc.OcShape.Edges();
        Assert.AreEqual(12, desc.Edges.Count);
        desc.Faces = desc.OcShape.Faces();
        Assert.AreEqual(6, desc.Faces.Count);

        return desc;
    }

    //--------------------------------------------------------------------------------------------------

    ShapeDesc MakeCylinder()
    {
        var desc = new ShapeDesc
        {
            Shape = new Cylinder()
            {
                Height = 10,
                Radius = 2,
            }
        };
        desc.Body = TestGeomGenerator.CreateBody(desc.Shape, new Pnt(5, 5, 0)); 
        desc.OcShape = desc.Shape.GetBRep();
        desc.Vertices = desc.OcShape.Vertices();
        Assert.AreEqual(2, desc.Vertices.Count);
        desc.Edges = desc.OcShape.Edges();
        Assert.AreEqual(3, desc.Edges.Count);
        desc.Faces = desc.OcShape.Faces();
        Assert.AreEqual(3, desc.Faces.Count);

        return desc;
    }

    //--------------------------------------------------------------------------------------------------
        
    ShapeDesc MakeBooleanCut(ShapeDesc op1, ShapeDesc op2)
    {
        var desc = new ShapeDesc
        {
            Shape = BooleanCut.Create(op1.Body, new BodyShapeOperand(op2.Body))
        };
        desc.OcShape = desc.Shape.GetBRep();
        desc.Vertices = desc.OcShape.Vertices();
        Assert.AreEqual(10, desc.Vertices.Count);
        desc.Edges = desc.OcShape.Edges();
        Assert.AreEqual(15, desc.Edges.Count);
        desc.Faces = desc.OcShape.Faces();
        Assert.AreEqual(7, desc.Faces.Count);

        return desc;
    }

    //--------------------------------------------------------------------------------------------------

    void InvalidateShape(ref ShapeDesc desc)
    {
        desc.Shape.Invalidate();
        desc.OcShape = desc.Shape.GetBRep();
        desc.Vertices = desc.OcShape.Vertices();
        desc.Edges = desc.OcShape.Edges();
        desc.Faces = desc.OcShape.Faces();
    }

    #endregion
}