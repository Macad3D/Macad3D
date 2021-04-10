using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Core.Exchange.Svg;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Occt.Helper;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange
{
    [TestFixture]
    public class SvgExportDrawingTests
    {
        const string _BasePath = @"Exchange\Svg\ExportDrawing";

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
            var ocShape = imprint.GetTransformedBRep();

            // Create Hlr Exporter
            var svg = RunExporter(false, _Projection, new[] { ocShape });
            
            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "Simple.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var svg = RunExporter(true, _Projection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "PolySimple.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Complex()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var svg = RunExporter(false, _Projection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "Complex.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void RudderBlade()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Rudder.brep");

            // Create Hlr Exporter
            var svg = RunExporter(false, _Projection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "RudderBlade.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Description("OCCT 28242")]
        public void PolyComplex()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var svg = RunExporter(true, _Projection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "PolyComplex.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Circle()
        {
            // Create simple geometry
            var imprint = TestGeomGenerator.CreateImprint();
            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            var ocShape = imprint.GetTransformedBRep();

            // Create Hlr Exporter
            var svg = RunExporter(false, _TopProjection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "Circle.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);

            // Cut circle
            var box = new Box() { DimensionX = 10, DimensionY = 10, DimensionZ = 10};
            Assert.IsTrue(box.Make(Shape.MakeFlags.None));
            var ocBoxShape = box.GetBRep();

            // Create Hlr Exporter
            svg = RunExporter(false, _TopProjection, new[] { ocShape, ocBoxShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "CircleArc.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Ellipse()
        {
            // Create simple geometry
            var imprint = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.Ellipse);
            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            var ocShape = imprint.GetTransformedBRep();

            // Create Hlr Exporter
            var svg = RunExporter(false, _TopProjection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "Ellipse.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);

            // Cut circle
            var box = new Box() { DimensionX = 10, DimensionY = 10, DimensionZ = 10 };
            Assert.IsTrue(box.Make(Shape.MakeFlags.None));
            var ocBoxShape = box.GetBRep();

            // Create Hlr Exporter
            svg = RunExporter(false, _TopProjection, new[] { ocShape, ocBoxShape });

            // Write to file and compare
            AssertHelper.IsSameText(svg.ToArray(), TestData.GetTestData(Path.Combine(_BasePath, "EllipseArc.svg")), AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        #region Helper

        MemoryStream RunExporter(bool useTriangulation, Ax3 projection, TopoDS_Shape[] shapes)
        {
            var helper = new DrawingExportHelper(useTriangulation, projection);
            helper.IncludeEdgeType(HlrEdgeType.VisibleSharp);
            helper.IncludeEdgeType(HlrEdgeType.VisibleOutline);
            helper.IncludeEdgeType(HlrEdgeType.VisibleSmooth);
            helper.IncludeEdgeType(HlrEdgeType.HiddenSharp);
            helper.IncludeEdgeType(HlrEdgeType.HiddenOutline);

            var layers = helper.PrepareExportLayers(shapes);
            if (layers == null || layers.Length == 0)
                return new MemoryStream("!HLRExporterError!".ToUtf8Bytes());

            return SvgVectorExporter.Export(VectorExportTemplate.Drawing, layers);
        }

        #endregion
    }
}