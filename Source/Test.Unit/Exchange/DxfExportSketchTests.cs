using System.IO;
using Macad.Test.Utils;
using Macad.Core.Exchange.Dxf;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange
{
    [TestFixture]
    public class DxfExportSketchTests
    {
        const string _BasePath = @"Exchange\Dxf\ExportSketch";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SingleLine()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.Line(1, 1, 5, 5);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SingleLine.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultipleLinesOpen()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.LineTo(5, 0);
            sb.LineTo(5, 5);
            sb.LineTo(0, 5);
            sb.LineTo(1, 1);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleLinesOpen.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultipleLinesClosed()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.LineTo(5, 0);
            sb.LineTo(5, 5);
            sb.LineTo(0, 5);
            sb.LineTo(0, 0);
            sb.ClosePath();

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleLinesClosed.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Circle()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.Line(0, 0, 5, 5);
            sb.Circle(2.5, 2, 2);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Circle.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Ellipse()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.Line(0, 0, 5, 5);
            sb.Ellipse(3, 2.5, 2, 3, 45);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Ellipse.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EllipseAC1009()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.Line(0, 0, 5, 5);
            sb.Ellipse(3, 2.5, 2, 3, 45);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.AC1009, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Ellipse_AC1009.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Arc()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.ArcTo(5, 0, 2.5, 3);
            sb.ArcTo(10, 0, 7.5, -3);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Arc.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EllipticalArc()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.EllipticalArcTo(5, 0, 1.0, -2, true);
            sb.EllipticalArcTo(10, 0, 9.0, 2, false);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "EllipticalArc.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EllipticalArcAC1009()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.EllipticalArcTo(5, 0, 1.0, -2, true);
            sb.EllipticalArcTo(10, 0, 9.0, 2, false);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.AC1009, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "EllipticalArc_AC1009.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BezierQuadratic()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.BezierTo(5, 0, 4, 2);
            sb.BezierTo(10, 0, 6, -2);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BezierQuadratic.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BezierCubic()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.BezierTo(5, 0, 1, 2, 2, -1);
            sb.BezierTo(10, 0, 7, 0, 8, -2);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.None);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BezierCubic.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BezierAsPoly()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.BezierTo(5, 0, 1, 2, 2, -1);
            sb.BezierTo(10, 0, 7, 0, 8, -2);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.ExportSplineAsPolygon);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BezierAsPoly.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void BezierAsPolyAC1009()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.BezierTo(5, 0, 1, 2, 2, -1);
            sb.BezierTo(10, 0, 7, 0, 8, -2);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.AC1009, DxfFlags.ExportSplineAsPolygon);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BezierAsPoly_AC1009.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void BezierAsPolyBin()
        {
            var sketch = Sketch.Create();
            var sb = new SketchBuilder(sketch);

            sb.StartPath(0, 0);
            sb.BezierTo(5, 0, 1, 2, 2, -1);
            sb.BezierTo(10, 0, 7, 0, 8, -2);

            var svg = DxfSketchExporter.Export(sketch, DxfVersion.Latest, DxfFlags.ExportSplineAsPolygon | DxfFlags.ExportBinaryFile);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BezierAsPolyBin.dxf"), svg, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------
    }
}