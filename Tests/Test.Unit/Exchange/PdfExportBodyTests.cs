using System.IO;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Exchange.Pdf;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class PdfExportBodyTests
{
    const string _BasePath = @"Exchange\Pdf\ExportBody";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void Setup()
    {
        // We need a view to get the zoom fit working
        Context.InitWithView(500);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleMesh()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        Context.Current.ViewportController.ZoomFitAll();

        var pdf = PdfBodyExporter.Export(bodies);
        Assert.IsNotNull(pdf);
        Assert.That(pdf.Length > 0);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SimpleMesh.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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

        var pdf = PdfBodyExporter.Export(bodies);
        Assert.IsNotNull(pdf);
        Assert.That(pdf.Length > 0);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultiLayer.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

}