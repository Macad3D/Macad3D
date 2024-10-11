using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core.Drawing;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Exchange;
using Macad.Exchange.Pdf;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class PdfExportDrawingTests
{
    const string _BasePath = @"Exchange\Pdf\ExportDrawing";

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _Projection = new Ax3(Pnt.Origin, new Vec(1, 1, 1).ToDir(), new Vec(-2, 0, -1).ToDir());
    readonly Ax3 _TopProjection = new Ax3(Pnt.Origin, Dir.DZ, Dir.DX);

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        PdfDomDocument.UseCompression = false;
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        PdfDomDocument.UseCompression = true;
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var pdf = RunExporter(false, _Projection, imprint.Body);
            
        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Simple.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleCompressed()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        PdfDomDocument.UseCompression = true;
        var pdf = RunExporter(false, _Projection, imprint.Body);
            
        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SimpleCompressed.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Circle()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var pdf = RunExporter(false, _TopProjection, imprint.Body );

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Circle.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CircleArc()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
        // Cut circle
        var box = TestGeomGenerator.CreateBox();
        Assert.IsTrue(box.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var pdf = RunExporter(false, _TopProjection, imprint.Body, box.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "CircleArc.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ellipse()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Ellipse);
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var pdf = RunExporter(false, _TopProjection, imprint.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Ellipse.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void EllipseArc()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Ellipse);
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Cut circle
        var box = TestGeomGenerator.CreateBox();
        Assert.IsTrue(box.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var pdf = RunExporter(false, _TopProjection, imprint.Body, box.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "EllipseArc.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Complex()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var pdf = RunExporter(false, _Projection, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void RudderBlade()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Rudder.brep");

        // Create Hlr Exporter
        var pdf = RunExporter(false, _Projection, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "RudderBlade.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void BoundaryIsClosed()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "BoundaryIsClosed_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var template = new SliceContourComponent()
        {
            Owner = source,
            LayerCount = 1,
        };
        Assert.IsTrue(template.Make());
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "BoundaryIsClosed_TestResult.pdf"));
        Assert.IsTrue(template.Export(path, new PdfExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BoundaryIsClosed.pdf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HolesInPaths()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "HolesInPaths_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var component = new EtchingMaskComponent()
        {
            Owner = source,
            LayerCount = 1
        };
        Assert.IsTrue(component.Make());

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "HolesInPaths_TestResult.pdf"));
        Assert.IsTrue(component.Export(path, new PdfExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "HolesInPaths.pdf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void Dimension()
    {
        // Create simple geometry
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, 5),
            SecondPoint = new Pnt2d(10, 10),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var pdf = PdfDrawingExporter.Export(drawing);
        Assert.IsNotNull(pdf);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Dimension.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MultipleDimensions()
    {
        var sketch = Sketch.Create();
        SketchBuilder sb = new SketchBuilder(sketch);
        sb.StartPath(0.0, -48.0);
        sb.LineTo(0.0, 5.0);
        sb.LineTo(-9.0, 4.0);
        sb.LineTo(-18.0, -7.0);
        var body = Body.Create(sketch);
        var pipe = Pipe.Create(body);
        Assert.That(pipe.Make(Shape.MakeFlags.None));

        var pipeDrawing = PipeDrawing.Create(pipe.Body);
        Drawing drawing = new();
        drawing.Add(pipeDrawing);

        var dxf = PdfDrawingExporter.Export(drawing);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleDimensions.pdf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void TextWithUmlauts()
    {
        Drawing drawing = new();
        drawing.Add(new TextElement("ö 23°", DrawingRenderHelper.GetDefaultFontStyle()));

        var pdf = PdfDrawingExporter.Export(drawing);
        Assert.IsNotNull(pdf);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TextWithUmlauts.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TextWithUnicode()
    {
        Drawing drawing = new();
        drawing.Add(new TextElement("κόσμε", DrawingRenderHelper.GetDefaultFontStyle()));

        var pdf = PdfDrawingExporter.Export(drawing);
        Assert.IsNotNull(pdf);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TextWithUnicode.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FontIsNonStandard()
    {
        Drawing drawing = new();
        drawing.Add(new TextElement("Hello World!", new FontStyle("Comic Sans MS", 3.0f)));

        var pdf = PdfDrawingExporter.Export(drawing);
        Assert.IsNotNull(pdf);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "FontIsNonStandard.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }
                
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void UnicodePath()
    {
        // Write
        Drawing drawing = new();
        drawing.Add(new TextElement("Hello World!", new FontStyle("Comic Sans MS", 3.0f)));
        var exchanger = new PdfExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Pdf_Unicode_{TestData.UnicodeTestString}.pdf");
        File.Delete(path);
        Assert.IsTrue((exchanger as IDrawingExporter).DoExport(path, drawing));
        Assert.That(File.Exists(path));
        File.Delete(path);
    }

    //--------------------------------------------------------------------------------------------------

    #region Helper

    MemoryStream RunExporter(bool useTriangulation, Ax3 projection, params Body[] bodies)
    {
        var hlrEdgeTypes = HlrEdgeTypes.VisibleSharp | HlrEdgeTypes.VisibleOutline | HlrEdgeTypes.VisibleSmooth 
                           | HlrEdgeTypes.HiddenSharp | HlrEdgeTypes.HiddenOutline;
        IBrepSource[] sources = bodies.Select(body => (IBrepSource)new BodyBrepSource(body)).ToArray();
        var hlrBrepDrawing = HlrDrawing.Create(projection, hlrEdgeTypes, sources);
        hlrBrepDrawing.UseTriangulation = useTriangulation;

        var drawing = new Drawing();
        drawing.Add(hlrBrepDrawing);

        return PdfDrawingExporter.Export(drawing);
    }

    //--------------------------------------------------------------------------------------------------

    class TextElement : DrawingElement
    {
        public string Text { get; set; }
        public FontStyle Style { get; set; }
            
        public TextElement(string text, FontStyle style)
        {
            Text = text;
            Style = style;
        }

        public override bool Render(IDrawingRenderer renderer)
        {
            renderer.BeginGroup("Text");
            renderer.SetStyle(null, new FillStyle(Color.Black), Style);
            renderer.Text(Text, Pnt2d.Origin, 0.0);
            renderer.EndGroup();
            return true;
        }

        protected override void CalculateExtents()
        {
            var aabb = new Bnd_Box2d();
            aabb.Add(Pnt2d.Origin);
            aabb.Add(DrawingRenderHelper.MeasureText(Text, Style).ToPnt());
            Extents = aabb;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}