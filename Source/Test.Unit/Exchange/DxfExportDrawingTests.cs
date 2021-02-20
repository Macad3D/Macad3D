using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Core.Exchange.Dxf;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Occt.Helper;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange
{
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
            var ocShape = imprint.GetTransformedBRep();

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape });
            
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
            var dxf = RunExporter(true, _Projection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "PolySimple.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void RudderBlade()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Rudder.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape });

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
            var ocShape = imprint.GetTransformedBRep();

            // Create Hlr Exporter
            var dxf = RunExporter(false, _TopProjection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Circle.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);

            // Cut circle
            var box = new Box() { DimensionX = 10, DimensionY = 10, DimensionZ = 10};
            Assert.IsTrue(box.Make(Shape.MakeFlags.None));
            var ocBoxShape = box.GetBRep();

            // Create Hlr Exporter
            dxf = RunExporter(false, _TopProjection, new[] { ocShape, ocBoxShape });

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "CircleArc.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var dxf = RunExporter(false, _TopProjection, new[] { ocShape });

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Ellipse.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);

            // Cut circle
            var box = new Box() { DimensionX = 10, DimensionY = 10, DimensionZ = 10 };
            Assert.IsTrue(box.Make(Shape.MakeFlags.None));
            var ocBoxShape = box.GetBRep();

            // Create Hlr Exporter
            dxf = RunExporter(false, _TopProjection, new[] { ocShape, ocBoxShape });

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "EllipseArc.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ComplexAC1015()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape }, DxfVersion.AC1015);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex_AC1015.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ComplexAC1015Bin()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape }, DxfVersion.AC1015, DxfFlags.ExportBinaryFile);

            // Write to file and compare
            TestData.FileCompare(dxf.ToArray(), Path.Combine(_BasePath, "Complex_AC1015_Bin.dxf"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ComplexAC1012()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape }, DxfVersion.AC1012);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex_AC1012.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ComplexAC1012Bin()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape }, DxfVersion.AC1012, DxfFlags.ExportBinaryFile);

            // Write to file and compare
            TestData.FileCompare(dxf.ToArray(), Path.Combine(_BasePath, "Complex_AC1012_Bin.dxf"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ComplexAC1009()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape }, DxfVersion.AC1009);

            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Complex_AC1009.dxf"), dxf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ComplexAC1009Bin()
        {
            // Load geometry
            var ocShape = TestData.GetTestDataBRep(@"SourceData\Brep\Motor-c.brep");

            // Create Hlr Exporter
            var dxf = RunExporter(false, _Projection, new[] { ocShape }, DxfVersion.AC1009, DxfFlags.ExportBinaryFile);

            // Write to file and compare
            TestData.FileCompare(dxf.ToArray(), Path.Combine(_BasePath, "Complex_AC1009_Bin.dxf"));
        }

        //--------------------------------------------------------------------------------------------------

        #region Helper

        MemoryStream RunExporter(bool useTriangulation, Ax3 projection, TopoDS_Shape[] shapes, 
            DxfVersion version = DxfVersion.Latest, DxfFlags flags = DxfFlags.None)
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

            return DxfVectorExporter.Export(VectorExportTemplate.Drawing, layers, version, flags);
        }

        #endregion
    }
}