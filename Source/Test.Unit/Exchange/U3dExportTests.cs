using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Exchange;
using Macad.Exchange.U3d;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class U3dExportTests
{
    const string _BasePath = @"Exchange\U3d\";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void Setup()
    {
        // We need a view to get the zoom fit working
        Context.InitWithView(500);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshWrite()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        Context.Current.ViewportController.ZoomFitAll();

        var u3d = U3dBodyExporter.Export(bodies);
        Assert.IsNotNull(u3d);
        Assert.That(u3d.Length > 0);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MeshWrite.u3d"), u3d, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MultiLayer()
    {
        var layer1 = new Layer()
        {
            Color = new Color(0, 1, 0),
            Transparency = 0.5f,
            Name = "Layer Number One"
        };
        Context.Current.Layers.Add(layer1);

        var layer2 = new Layer()
        {
            Color = new Color(0, 0, 1),
            Name = "Layer Number Two"
        };
        Context.Current.Layers.Add(layer2);

        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        bodies[0].Layer = layer1;
        bodies[1].Layer = layer2;
        bodies[2].Layer = layer2;

        Context.Current.ViewportController.ZoomFitAll();

        var u3d = U3dBodyExporter.Export(bodies);
        Assert.IsNotNull(u3d);
        Assert.That(u3d.Length > 0);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultiLayer.u3d"), u3d, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OrientedNormals()
    {
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "OrientedNormals_Source.brep"));

        Context.Current.ViewportController.ZoomFitAll();

        var u3d = U3dBodyExporter.Export(new []{body});
        Assert.IsNotNull(u3d);
        Assert.That(u3d.Length > 0);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "OrientedNormals.u3d"), u3d, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void UnicodePath()
    {
        // Write
        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "OrientedNormals_Source.brep"));
        var exchanger = new PdfExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"U3d_Unicode_{TestData.UnicodeTestString}.u3d");
        File.Delete(path);
        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, new []{body}));
        Assert.That(File.Exists(path));
        File.Delete(path);
    }

    //--------------------------------------------------------------------------------------------------

}