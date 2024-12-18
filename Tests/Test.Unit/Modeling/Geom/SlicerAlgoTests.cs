using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Geom;

[TestFixture]
public class SlicerAlgoTests
{
    const string _BasePath = @"Modeling\Geom\SlicerAlgo";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SliceOneLayer()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SliceOneLayer_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[4], 1);
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(1, slicer.Slices.Length);
        AssertHelper.IsSameModel2D(slicer.Slices[0].BRep, Path.Combine(_BasePath, "SliceOneLayer"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SliceRotated()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SliceRotated_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[4], 1);
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(1, slicer.Slices.Length);
        AssertHelper.IsSameModel2D(slicer.Slices[0].BRep, Path.Combine(_BasePath, "SliceRotated"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TwoLayers()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "TwoLayers_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[0], 2);
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(2, slicer.Slices.Length);
        AssertHelper.IsSameModel2D(slicer.Slices[0].BRep, Path.Combine(_BasePath, "TwoLayers1"));
        AssertHelper.IsSameModel2D(slicer.Slices[1].BRep, Path.Combine(_BasePath, "TwoLayers2"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CorrectThickness()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "FindBiggestFace_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[0], 1);
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(1, slicer.Slices.Length);
        Assert.AreEqual(5.0, slicer.Slices[0].Interval, 1e-10);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void UseFarthestOpFace()
    {
        var source = TestGeomGenerator.CreateImprint().Body;
        Assert.That(source?.GetBRep() != null);
        (source.Shape as Imprint).Depth = 10;

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[4], 1);
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(1, slicer.Slices.Length);
        Assert.AreEqual(7.5, slicer.Slices[0].Interval, 1e-10);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomInterval()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "TwoLayers_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[0], 3, [0.2, 0.5, 0.15]);
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(3, slicer.Slices.Length);
        AssertHelper.IsSameModel(slicer.Reconstruct(), Path.Combine(_BasePath, "CustomInterval1"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NoOppositeFace()
    {
        var body = Body.Create(Box.Create(50, 82, 35));
        Taper.Create(body, body.Shape.GetSubshapeReference(SubshapeType.Face, 5), body.Shape.GetSubshapeReference(SubshapeType.Edge, 5), 28);
        Assert.That(body.Shape.GetBRep() != null);

        var slicer = new SliceByPlanes(body.Shape.GetBRep(), body.Shape.GetBRep().Faces()[4], 2, [10.0, 20.0]);
        Assert.That(slicer.CreateSlices(true), Is.True);
        Assert.That(slicer.Slices.Length, Is.EqualTo(2));
        AssertHelper.IsSameModel(slicer.Reconstruct(), Path.Combine(_BasePath, "NoOppositeFace01"));

    }
}