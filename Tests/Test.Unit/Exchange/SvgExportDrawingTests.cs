using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Drawing;
using Macad.Exchange.Svg;
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
public class SvgExportDrawingTests
{
    const string _BasePath = @"Exchange\Svg\ExportDrawing";

    //--------------------------------------------------------------------------------------------------

    readonly Ax3 _Projection = new Ax3(Pnt.Origin, new Vec(1, 1, 1).ToDir(), new Vec(-2, 0, -1).ToDir());
    readonly Ax3 _TopProjection = new Ax3(Pnt.Origin, Dir.DZ, Dir.DX);
        
    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void Setup()
    {
        Context.InitEmpty();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Simple()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var svg = RunExporter(false, _Projection, imprint.Body);
            
        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Simple.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("OCCT 28242")]
    public void PolySimple()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var svg = RunExporter(true, _Projection, imprint.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "PolySimple.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Complex()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var svg = RunExporter(false, _Projection, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void RudderBlade()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Rudder.brep");

        // Create Hlr Exporter
        var svg = RunExporter(false, _Projection, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "RudderBlade.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("OCCT 28242")]
    public void PolyComplex()
    {
        // Load geometry
        var body = TestData.GetBodyFromBRep(@"SourceData\Brep\Motor-c.brep");

        // Create Hlr Exporter
        var svg = RunExporter(true, _Projection, body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "PolyComplex.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Circle()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var svg = RunExporter(false, _TopProjection, imprint.Body );

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Circle.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var svg = RunExporter(false, _TopProjection, imprint.Body, box.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "CircleArc.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ellipse()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Ellipse);
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        var svg = RunExporter(false, _TopProjection, imprint.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Ellipse.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var svg = RunExporter(false, _TopProjection, imprint.Body, box.Body);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "EllipseArc.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "SimpleContour_TestResult.svg"));
        Assert.IsTrue(template.Export(path, new SvgExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SimpleContour.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerContour_TestResult.svg"));
        Assert.IsTrue(template.Export(path, new SvgExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TwoLayerContour.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        //AssertHelper.IsSameModel2D(template.Layers[0], Path.Combine(_BasePath, "HolesInPaths"));
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "HolesInPaths_TestResult.svg"));
        Assert.IsTrue(component.Export(path, new SvgExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "HolesInPaths.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerEtchMask_TestResult.svg"));
        Assert.IsTrue(component.Export(path, new SvgExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TwoLayerEtchMask.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "MultipleHoles_TestResult.svg"));
        Assert.IsTrue(template.Export(path, new SvgExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleHoles.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "BoundaryIsClosed_TestResult.svg"));
        Assert.IsTrue(template.Export(path, new SvgExchanger()));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BoundaryIsClosed.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "LocatedWire_TestResult.svg"));

        try
        {
            Assert.IsTrue(template.Export(path, new SvgExchanger()));
        }
        catch (SEHException)
        {
            var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());
            TestContext.WriteLine(info.Message);
            throw;
        }

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LocatedWire.svg"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void TagGroupsAsLayers()
    {
        // Create simple geometry
        var imprint = TestGeomGenerator.CreateImprint();
        Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));

        // Create Hlr Exporter
        SvgExporterBase.TagGroupsAsLayers = true;
        var svg = RunExporter(false, _Projection, imprint.Body);
        SvgExporterBase.TagGroupsAsLayers = false;
            
        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TagGroupsAsLayers.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LengthDimension()
    {
        // Create simple geometry
        var dim = new LengthDimension()
        {
            FirstPoint = new Pnt2d(-10, 5),
            SecondPoint = new Pnt2d(10, 10),
        };

        Drawing drawing = new();
        drawing.Add(dim);

        var svg = SvgDrawingExporter.Export(drawing);
        Assert.IsNotNull(svg);

        // Write to file and compare
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LengthDimension.svg"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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

        return SvgDrawingExporter.Export(drawing);
    }

    #endregion
}