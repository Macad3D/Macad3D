using System;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Core.Modeling.Geom;

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

    [Test]
    public void HasCoincidentVertices_SameOrder()
    {
        var sketch = Macad.Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Line(0, 0, 1, 0);
        sb.Line(0, 0, 1, 0);
        var edges = sketch.GetBRep().Edges();
        Assert.That(EdgeAlgo.HasCoincidentVertices(edges[0], edges[1]), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HasCoincidentVertices_ReverseOrder()
    {
        var sketch = Macad.Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Line(0, 0, 1, 0);
        sb.Line(1, 0, 0, 0);
        var edges = sketch.GetBRep().Edges();
        Assert.That(EdgeAlgo.HasCoincidentVertices(edges[0], edges[1]), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HasCoincidentVertices_DifferentVertices()
    {
        var sketch = Macad.Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Line(0, 0, 1, 0);
        sb.Line(0, 1, 1, 1);
        var edges = sketch.GetBRep().Edges();
        Assert.That(EdgeAlgo.HasCoincidentVertices(edges[0], edges[1]), Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HasCoincidentVertices_Precision()
    {
        // default precision is 1e-4; points within that distance should be considered coincident
        var sketch = Macad.Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Line(0, 0, 0.002, 0);
        sb.Line(0, 0, 0.0022, 0);
        var edges = sketch.GetBRep().Edges();
        Assert.That(EdgeAlgo.HasCoincidentVertices(edges[0], edges[1]), Is.False); // default precision  < 1e-4
        Assert.That(EdgeAlgo.HasCoincidentVertices(edges[0], edges[1], 1e-3), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HasCoincidentVertices_ClosedCircle()
    {
        var sketch = Macad.Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Line(0, 0, 1, 0);
        sb.Circle(0, 0, 1);  // rim point at (1,0)
        sb.Circle(-1, 0, 2); // rim point at (1,0)
        var edges = sketch.GetBRep().Edges();
        Assert.Multiple(() =>
        {
            Assert.That(EdgeAlgo.HasCoincidentVertices(edges[0], edges[1]), Is.False, "Line - Circle");
            Assert.That(EdgeAlgo.HasCoincidentVertices(edges[1], edges[0]), Is.False, "Cicle - line");
            Assert.That(EdgeAlgo.HasCoincidentVertices(edges[1], edges[2]), Is.True, "Circle - Circle");
        });
    }

    //--------------------------------------------------------------------------------------------------

}