using System.IO;
using Macad.Test.Utils;
using Macad.Exchange.Dxf;
using Macad.Core.Shapes;
using NUnit.Framework;
using Macad.Core;
using Macad.Exchange;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class DxfImportSketchTests
{
    const string _BasePath = @"Exchange\Dxf\ImportSketch";
    const string _ExportBasePath = @"Exchange\Dxf\ExportSketch";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SingleLine()
    {
        var bytes = TestData.GetTestData(Path.Combine(_ExportBasePath, "SingleLine.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(bytes, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "SingleLine"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MultipleLinesOpen()
    {
        var bytes = TestData.GetTestData(Path.Combine(_ExportBasePath, "MultipleLinesOpen.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(bytes, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "MultipleLinesOpen"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultipleLinesClosed()
    {
        var bytes = TestData.GetTestData(Path.Combine(_ExportBasePath, "MultipleLinesClosed.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(bytes, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "MultipleLinesClosed"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MultipleLinesClosedNoMerge()
    {
        var bytes = TestData.GetTestData(Path.Combine(_ExportBasePath, "MultipleLinesClosed.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(bytes, sketch, true, DxfFlags.ImportDoNotMergePoints);

        Assert.AreEqual(8, sketch.Points.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Circle()
    {
        var bytes = TestData.GetTestData(Path.Combine(_ExportBasePath, "Circle.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(bytes, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Circle"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void Arc()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "Arc.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Arc"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ellipse()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "Ellipse.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Ellipse"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EllipticalArc()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "EllipticalArc.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "EllipticalArc"));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LwPolyline()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "BezierAsPoly.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "LwPolyline"));
    }
              
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LwPolyline_Closed()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "LwPolyline_Closed_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "LwPolyline_Closed"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LwPolyline_Bulge()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "LwPolyline_Bulge_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "LwPolyline_Bulge"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Polyline_Lines()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "BezierAsPoly_AC1009.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Polyline_Lines"));
    }
                                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Spline_PointsKnots()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Spline_PointsKnots_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Spline_PointsKnots"));
    }
                                        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void Spline_PointsKnotsClosed()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Spline_PointsKnotsClosed_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Spline_PointsKnotsClosed"));
    }
                                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Spline_FitPoints()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Spline_FitPoints_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Spline_FitPoints"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Spline_FitPointsTangents()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Spline_FitPointsTangents_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Spline_FitPointsTangents"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadBinary()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "ReadBinary_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        Assert.AreEqual(1307, sketch.Segments.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImperialScale()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "ImperialScale_Source.dxf"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true, DxfFlags.None, 25.4);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "ImperialScale"));
    }

    //--------------------------------------------------------------------------------------------------

    void _ReadFromBytes(byte[] bytes, Sketch sketch, bool replace, DxfFlags flags=DxfFlags.None, double scale=1.0)
    {
        Assert.IsTrue(DxfSketchImporter.Import(new MemoryStream(bytes), out var points, out var segments, flags, 0.01, scale));
            
        if (replace && points?.Count > 0)
        {
            sketch.Clear();
        }
        sketch.AddElements(points, null, segments, null);
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void UnicodePath()
    {
        // Write
        var sketch = Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(1, 1, 5, 5);
        var exchanger = new DxfExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Dxf_Unicode_{TestData.UnicodeTestString}.dxf");
        File.Delete(path);
        Assert.IsTrue((exchanger as ISketchExporter).DoExport(path, sketch));
        Assert.That(File.Exists(path));

        // Read
        Assert.IsTrue((exchanger as ISketchImporter).DoImport(path, out var points, out var segments, out var constraints));
        Assert.IsNotNull(points);
        File.Delete(path);
    }
}