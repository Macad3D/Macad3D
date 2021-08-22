using System.IO;
using System.Linq;
using Macad.Core.Drawing;
using Macad.Core.Exchange;
using Macad.Core.Exchange.Pdf;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange
{
    [TestFixture]
    public class PdfExportDrawingTests
    {
        const string _BasePath = @"Exchange\Pdf\ExportDrawing";

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
            var pdf = RunExporter(false, _Projection, imprint.Body);
            
            // Write to file and compare
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "Simple.pdf"), pdf, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var imprint = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.Ellipse);
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
            var imprint = TestGeomGenerator.CreateImprint(TestGeomGenerator.SketchType.Ellipse);
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
            Assume.That(source?.GetBRep() != null);

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
            Assume.That(source?.GetBRep() != null);

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

        #region Helper

        MemoryStream RunExporter(bool useTriangulation, Ax3 projection, params Body[] bodies)
        {
            var hlrEdgeTypes = HlrEdgeTypes.VisibleSharp | HlrEdgeTypes.VisibleOutline | HlrEdgeTypes.VisibleSmooth 
                               | HlrEdgeTypes.HiddenSharp | HlrEdgeTypes.HiddenOutline;
            IBrepSource[] sources = bodies.Select(body => (IBrepSource)new BodyBrepSource(body)).ToArray();
            var hlrBrepDrawing = HlrView.Create(projection, hlrEdgeTypes, sources);
            hlrBrepDrawing.UseTriangulation = useTriangulation;

            var drawing = new Drawing();
            drawing.AddChild(hlrBrepDrawing);

            return PdfDrawingExporter.Export(drawing);
        }

        #endregion
    }
}