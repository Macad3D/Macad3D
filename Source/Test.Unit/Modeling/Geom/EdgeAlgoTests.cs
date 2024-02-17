using System;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Geom;

[TestFixture]
public class EdgeAlgoTests
{
    [Test]
    public void FindLongestEdge()
    {
        var box = Box.Create(10.0, 10.0, 1.0);
        var face = box.GetBRep().Faces()[1];
        var edges = face.Edges();
        var result = EdgeAlgo.FindLongestEdge(face);

        Assert.NotNull(result.edge);
        Assert.NotNull(result.axis);
        Assert.NotNull(result.opEdge);
        Assert.NotNull(result.opAxis);

        Assert.AreEqual(edges[1], result.edge);
        Assert.AreEqual(edges[3], result.opEdge);

        Assert.IsTrue(result.axis.Value.IsParallel(result.opAxis.Value, Double.Epsilon));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FindAdjacentFaces()
    {
        var box = Box.Create(10.0, 10.0, 1.0);
        var edge = box.GetBRep().Edges()[1];
        var faces = box.GetBRep().Faces();
        var (face1, face2) = EdgeAlgo.FindAdjacentFaces(box.GetBRep(), edge);

        Assert.NotNull(face1);
        Assert.NotNull(face2);

        Assert.AreEqual(faces[0], face1);
        Assert.AreEqual(faces[5], face2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FindMinMaxAdjacentFaces()
    {
        var box = Box.Create(10.0, 10.0, 1.0);
        var edge = box.GetBRep().Edges()[1];
        var faces = box.GetBRep().Faces();
        var result = EdgeAlgo.FindSmallestAndLargestAdjacentFaces(box.GetBRep(), edge);

        Assert.NotNull(result.smallestFace);
        Assert.NotNull(result.largestFace);

        Assert.AreEqual(faces[0], result.smallestFace);
        Assert.AreEqual(faces[5], result.largestFace);
    }

    //--------------------------------------------------------------------------------------------------

}