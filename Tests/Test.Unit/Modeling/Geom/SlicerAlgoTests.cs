using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
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
        Assume.That(source?.GetBRep() != null);

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
        Assume.That(source?.GetBRep() != null);

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
        Assume.That(source?.GetBRep() != null);

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
        Assume.That(source?.GetBRep() != null);

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
        Assume.That(source?.GetBRep() != null);
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
        Assume.That(source?.GetBRep() != null);

        var slicer = new SliceByPlanes(source.GetBRep(), source.GetBRep().Faces()[0], 3, new []{ 0.2, 0.5, 0.15 });
        Assert.IsTrue(slicer.CreateSlices(true));
        Assert.AreEqual(3, slicer.Slices.Length);
        AssertHelper.IsSameModel(slicer.Reconstruct(), Path.Combine(_BasePath, "CustomInterval1"));
    }

    //--------------------------------------------------------------------------------------------------

}