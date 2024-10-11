using System;
using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Geom;

[TestFixture]
public class FaceAlgoTests
{
    const string _BasePath = @"Modeling\Geom\FaceAlgo";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FindConnectedFaces()
    {
        var shape = TestData.GetTestDataBRep(Path.Combine(_BasePath, "FindConnectedFaces_Source.brep"));
        Assert.That(shape, Is.Not.Null);

        var faces = shape.Faces();
        var edges = shape.Edges();
        var connectedFaces = FaceAlgo.FindConnectedFaces(shape, faces[10]);

        Assert.That(connectedFaces.Count == 4);
        Assert.That(connectedFaces.ContainsKey(faces[11]));
        Assert.That(connectedFaces[faces[11]].IsSame(edges[24]));
        Assert.That(connectedFaces.ContainsKey(faces[13]));
        Assert.That(connectedFaces[faces[13]].IsSame(edges[23]));
        Assert.That(connectedFaces.ContainsKey(faces[9]));
        Assert.That(connectedFaces[faces[9]].IsSame(edges[21]));
        Assert.That(connectedFaces.ContainsKey(faces[6]));
        Assert.That(connectedFaces[faces[6]].IsSame(edges[16]));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PlaneFromFace_Direction()
    {
        var shape = Box.Create(10, 10, 2);
        Assert.That(shape, Is.Not.Null);

        Assert.IsTrue(FaceAlgo.GetCenteredPlaneFromFace(shape, 5, true, out var topFacePlane));
        Assert.IsTrue(topFacePlane.Axis.Direction.IsEqual(Dir.DZ, 0.1));

        Assert.IsTrue(FaceAlgo.GetCenteredPlaneFromFace(shape, 4, true, out var bottomFacePlane));
        Assert.IsTrue(bottomFacePlane.Axis.Direction.IsEqual(Dir.DZ.Reversed(), 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetPlaneFromFace()
    {
        var shape = new Box
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 1,
        };
        var body = TestGeomGenerator.CreateBody(shape, new Pnt(-10, -20, 0));

        // Local space
        Assert.IsTrue(FaceAlgo.GetCenteredPlaneFromFace(shape, 5, true, out var plane));
        TestContext.WriteLine(plane.Location.X + " " + plane.Location.Y + " " + plane.Location.Z);
        Assert.IsTrue(plane.Location.IsEqual(new Pnt(10, 10, 1), Double.Epsilon));
        Assert.IsTrue(plane.Rotation().IsEqual(Quaternion.Identity));

        // Transformed
        Assert.IsTrue(FaceAlgo.GetCenteredPlaneFromFace(shape, 5, false, out plane));
        Assert.IsNotNull(plane);
        TestContext.WriteLine(plane.Location.X + " " + plane.Location.Y + " " + plane.Location.Z);
        Assert.AreEqual(new Pnt(0, -10, 1), plane.Location);
        Assert.AreEqual(Quaternion.Identity, plane.Rotation());
        Assert.IsTrue(plane.Location.IsEqual(new Pnt(0, -10, 1), Double.Epsilon));
        Assert.IsTrue(plane.Rotation().IsEqual(Quaternion.Identity));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FindFaceNearestToPlane()
    {
        var source = TestData.GetTestDataBRep(Path.Combine(_BasePath, "FindFaceNearestToPlane_Source.brep"));
        Assert.That(source, Is.Not.Null);
        var faces = source.Faces();
        Assert.That(faces.Count == 112);

        Assert.Multiple(() =>
        {
            var result = FaceAlgo.FindFaceNearestToPlane(source, Pln.XOY);
            Assert.AreEqual(13, faces.IndexOf(result), "Face not found for XY");

            result = FaceAlgo.FindFaceNearestToPlane(source, Pln.ZOX);
            Assert.AreEqual(35, faces.IndexOf(result), "Face not found for ZX");

            result = FaceAlgo.FindFaceNearestToPlane(source, Pln.YOZ);
            Assert.AreEqual(1, faces.IndexOf(result), "Face not found for YZ");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FindOppositeFace()
    {
        var source = TestData.GetTestDataBRep(Path.Combine(_BasePath, "FindFaceNearestToPlane_Source.brep"));
        Assert.That(source, Is.Not.Null);
        var faces = source.Faces();
        Assert.That(faces.Count == 112);

        Assert.Multiple(() =>
        {
            var result = FaceAlgo.FindOppositeFace(source, faces[1]);
            Assert.AreEqual(2, faces.IndexOf(result));
            result = FaceAlgo.FindOppositeFace(source, faces[88]);
            Assert.AreEqual(96, faces.IndexOf(result));
        });
    }

    //--------------------------------------------------------------------------------------------------

}