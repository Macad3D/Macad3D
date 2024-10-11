using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Drawing;
using Macad.Exchange.Dxf;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Interop;
using Macad.Occt;
using Macad.Occt.Helper;
using NUnit.Framework;
using Macad.Exchange;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class DxfExportDrawingTests
{
    const string _BasePath = @"Exchange\Dxf\ExportDrawing";

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _Projection = new Ax3(Pnt.Origin, new Vec(1, 1, 1).ToDir(), new Vec(-2, 0, -1).ToDir());
    readonly Ax3 _TopProjection = new Ax3(Pnt.Origin, Dir.DZ, Dir.DX);

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.Latest, DxfFlags.None, imprint.Body);
            
        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Simple.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("OCCT 28242")]
    public void PolySimple()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
        var ocShape = imprint.GetTransformedBRep();

        // Create Hlr Exporter
        var dxf = RunExporter(true, _Projection, DxfVersion.Latest, DxfFlags.None, imprint.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "PolySimple.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void RudderBlade()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Rudder.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.Latest, DxfFlags.None, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "RudderBlade.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Circle()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var dxf = RunExporter(false, _TopProjection, DxfVersion.Latest, DxfFlags.None, imprint.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Circle.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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

        // Create Hlr Exporter
        var dxf = RunExporter(false, _TopProjection, DxfVersion.Latest, DxfFlags.None, imprint.Body, box.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "CircleArc.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ellipse()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Ellipse);
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var dxf = RunExporter(false, _TopProjection, DxfVersion.Latest, DxfFlags.None, imprint.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Ellipse.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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

        // Create Hlr Exporter
        var dxf = RunExporter(false, _TopProjection, DxfVersion.Latest, DxfFlags.None, imprint.Body, box.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "EllipseArc.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexAC1015()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.AC1015, DxfFlags.None, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex_AC1015.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexAC1015Bin()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.AC1015, DxfFlags.ExportBinaryFile, body);

        // Write to file and compare
        TestData.FileCompare(dxf.ToArray(), Path.Combine(_BasePath, "Complex_AC1015_Bin.dxf"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexAC1012()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.AC1012, DxfFlags.None, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex_AC1012.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexAC1012Bin()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.AC1012, DxfFlags.ExportBinaryFile, body);

        // Write to file and compare
        TestData.FileCompare(dxf.ToArray(), Path.Combine(_BasePath, "Complex_AC1012_Bin.dxf"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexAC1009()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.AC1009, DxfFlags.None, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex_AC1009.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexAC1009Bin()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var dxf = RunExporter(false, _Projection, DxfVersion.AC1009, DxfFlags.ExportBinaryFile, body);

        // Write to file and compare
        TestData.FileCompare(dxf.ToArray(), Path.Combine(_BasePath, "Complex_AC1009_Bin.dxf"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SimpleContour()
    {
        var source = TestData.GetBodyFromBRep(@"SourceData\Brep\SheetWithOneLayer.brep");
        Assert.That(source?.GetBRep() != null);

        var template = new SliceContourComponent
        {
            Owner = source,
            LayerCount = 1,
        };
        Assert.IsTrue(template.Make());
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "SimpleContour_TestResult.dxf"));
        Assert.IsTrue(template.Export(path, new DxfExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SimpleContour.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TwoLayerCutout()
    {
        var source = TestData.GetBodyFromBRep(@"SourceData\Brep\SheetWithTwoLayers.brep");
        Assert.That(source?.GetBRep() != null);

        var template = new SliceContourComponent
        {
            Owner = source,
            LayerCount = 2,
        };
        Assert.IsTrue(template.Make());
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerContour_TestResult.dxf"));
        Assert.IsTrue(template.Export(path, new DxfExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TwoLayerContour.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TwoLayerEtchMask()
    {
        var source = TestData.GetBodyFromBRep(@"SourceData\Brep\SheetWithTwoLayers.brep");
        Assert.That(source?.GetBRep() != null);

        var component = new EtchingMaskComponent()
        {
            Owner = source,
            LayerCount = 2
        };
        Assert.IsTrue(component.Make());
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerEtchMask_TestResult.dxf"));
        Assert.IsTrue(component.Export(path, new DxfExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TwoLayerEtchMask.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleHoles()
    {
        var source = TestData.GetBodyFromBRep(@"SourceData\Brep\ContourMultipleHoles.brep");
        Assert.That(source?.GetBRep() != null);

        var template = new SliceContourComponent()
        {
            Owner = source,
            LayerCount = 2,
        };
        Assert.IsTrue(template.Make());
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "MultipleHoles_TestResult.dxf"));
        Assert.IsTrue(template.Export(path, new DxfExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleHoles.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LocatedWire()
    {
        var source = TestData.GetBodyFromBRep(@"SourceData\Brep\ContourLocatedWire.brep");
        Assert.That(source?.GetBRep() != null);

        var template = new SliceContourComponent()
        {
            Owner = source,
            LayerCount = 1,
            ReferenceFace = source.Shape.GetSubshapeReference(SubshapeType.Face, 2)
        };

        Assert.IsTrue(template.Make());
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "LocatedWire_TestResult.dxf"));

        try
        {
            Assert.IsTrue(template.Export(path, new DxfExchanger()));
        }
        catch (SEHException)
        {
            var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());
            TestContext.WriteLine(info.Message);
            throw;
        }

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LocatedWire.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LengthDimension()
    {
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, 5),
            SecondPoint = new Pnt2d(10, 10),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1009);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LengthDimension.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
            
        dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1012);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LengthDimension_AC1012.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
            
        dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1015);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LengthDimension_AC1015.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleDimension()
    {
        var dim = new AngleDimension()
        {
            FirstPoint = new Pnt2d(-8, 5),
            SecondPoint = new Pnt2d(10, 10),
            CenterPoint = new Pnt2d(0, 30),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1009);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "AngleDimension.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
            
        dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1012);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "AngleDimension_AC1012.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
            
        dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1015);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "AngleDimension_AC1015.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TextWithUmlauts()
    {
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, 5),
            SecondPoint = new Pnt2d(10, 10),
            AutoText = false,
            Text = "ö 23°"
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1009);
        Assert.IsNotNull(dxf);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TextWithUmlauts.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleDimensionEntities()
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

        var dxf = DxfDrawingExporter.Export(drawing, DxfVersion.AC1015);
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleDimensionEntities.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    #region Helper

    MemoryStream RunExporter(bool useTriangulation, Ax3 projection, DxfVersion version, DxfFlags flags, params Body[] bodies)
    {
        var hlrEdgeTypes = HlrEdgeTypes.VisibleSharp | HlrEdgeTypes.VisibleOutline | HlrEdgeTypes.VisibleSmooth 
                           | HlrEdgeTypes.HiddenSharp | HlrEdgeTypes.HiddenOutline;
        IBrepSource[] sources = bodies.Select(body => (IBrepSource)new BodyBrepSource(body)).ToArray();
        var hlrBrepDrawing = HlrDrawing.Create(projection, hlrEdgeTypes, sources);
        hlrBrepDrawing.UseTriangulation = useTriangulation;

        var drawing = new Drawing();
        drawing.Add(hlrBrepDrawing);

        return DxfDrawingExporter.Export(drawing, version, flags);
    }

    #endregion
}