using System.IO;
using Macad.Test.Utils;
using Macad.Exchange.Svg;
using Macad.Core.Shapes;
using NUnit.Framework;
using Macad.Core;
using Macad.Exchange;

namespace Macad.Test.Exchange;

[TestFixture]
public class SvgImportSketchTests
{
    const string _BasePath = @"Exchange\Svg\ImportSketch";
    const string _ExportBasePath = @"Exchange\Svg\ExportSketch";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PathSingleLine()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "SingleLine.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "PathSingleLine"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PathMultipleLinesOpen()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "MultipleLinesOpen.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "PathMultipleLinesOpen"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PathMultipleLinesClosed()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "MultipleLinesClosed.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "PathMultipleLinesClosed"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Line()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Line_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Line"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Polyline()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Polyline_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Polyline"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Polygon()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Polygon_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Polygon"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Circle()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "Circle.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Circle"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rectangle()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "Rectangle_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Rectangle"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RectangleRoundCorners()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "RectangleRoundCorners_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "RectangleRoundCorners"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RectangleRoundCornersAsym()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "RectangleRoundCornersAsym_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "RectangleRoundCornersAsym"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ellipse()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "Ellipse.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Ellipse"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Arc()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "Arc.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "Arc"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EllipticalArc()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "EllipticalArc.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "EllipticalArc"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EllipticalArcAllFlags()
    {
        var svg = TestData.GetTestData(Path.Combine(_BasePath, "EllipticalArcAllFlags_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "EllipticalArcAllFlags"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BezierQuadratic()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "BezierQuadratic.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "BezierQuadratic"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BezierCubic()
    {
        var svg = TestData.GetTestData(Path.Combine(_ExportBasePath, "BezierCubic.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg, sketch, true);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "BezierCubic"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MergeToSketch()
    {
        var svg1 = TestData.GetTestData(Path.Combine(_ExportBasePath, "EllipticalArc.svg"));
        var svg2 = TestData.GetTestData(Path.Combine(_ExportBasePath, "Circle.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg1, sketch, false);
        _ReadFromBytes(svg2, sketch, false);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "MergeToSketch"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexDrawing()
    {
        var svg1 = TestData.GetTestData(Path.Combine(_BasePath, "ComplexDrawing_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg1, sketch, false);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "ComplexDrawing"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InkscapeDrawing()
    {
        var svg1 = TestData.GetTestData(Path.Combine(_BasePath, "InkscapeDrawing_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg1, sketch, false);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "InkscapeDrawing"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MatrixTest()
    {
        var svg1 = TestData.GetTestData(Path.Combine(_BasePath, "MatrixTest_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg1, sketch, false);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "MatrixTest"));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SkewTest()
    {
        var svg1 = TestData.GetTestData(Path.Combine(_BasePath, "SkewTest_Source.svg"));

        var sketch = Sketch.Create();
        _ReadFromBytes(svg1, sketch, false);

        AssertHelper.IsSameModel2D(sketch, Path.Combine(_BasePath, "SkewTest"));
    }

    //--------------------------------------------------------------------------------------------------

    void _ReadFromBytes(byte[] bytes, Sketch sketch, bool replace)
    {
        Assert.IsTrue(SvgSketchImporter.Import(new MemoryStream(bytes), out var points, out var segments));
            
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
        var exchanger = new SvgExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Svg_Unicode_{TestData.UnicodeTestString}.svg");
        File.Delete(path);
        Assert.IsTrue((exchanger as ISketchExporter).DoExport(path, sketch));
        Assert.That(File.Exists(path));

        // Read
        Assert.IsTrue((exchanger as ISketchImporter).DoImport(path, out var points, out var segments, out var constraints));
        Assert.IsNotNull(points);
        File.Delete(path);
    }
}