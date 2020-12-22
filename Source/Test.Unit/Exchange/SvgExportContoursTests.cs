using System.IO;
using System.Runtime.InteropServices;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Exchange;
using Macad.Core.Toolkits;
using Macad.Interop;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange
{
    [TestFixture]
    public class SvgExportContoursTests
    {
        const string _BasePath = @"Exchange\Svg\ExportContours";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SimpleContour()
        {
            var source = TestData.GetBodyFromBRep(@"SourceData\Brep\SheetWithOneLayer.brep");
            Assume.That(source?.GetBRep() != null);

            var template = new SliceContourComponent
            {
                Owner = source,
                LayerCount = 1,
            };
            Assert.IsTrue(template.Make());
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "SimpleContour_TestResult.svg"));
            Assert.IsTrue(template.Export(path, new SvgExchanger()));

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "SimpleContour.svg"), path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TwoLayerCutout()
        {
            var source = TestData.GetBodyFromBRep(@"SourceData\Brep\SheetWithTwoLayers.brep");
            Assume.That(source?.GetBRep() != null);

            var template = new SliceContourComponent
            {
                Owner = source,
                LayerCount = 2,
            };
            Assert.IsTrue(template.Make());
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerContour_TestResult.svg"));
            Assert.IsTrue(template.Export(path, new SvgExchanger()));

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "TwoLayerContour.svg"), path);
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
            //AssertHelper.IsSameModel2D(template.Layers[0], Path.Combine(_BasePath, "HolesInPaths"));
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "HolesInPaths_TestResult.svg"));
            Assert.IsTrue(component.Export(path, new SvgExchanger()));

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "HolesInPaths.svg"), path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TwoLayerEtchMask()
        {
            var source = TestData.GetBodyFromBRep(@"SourceData\Brep\SheetWithTwoLayers.brep");
            Assume.That(source?.GetBRep() != null);

            var component = new EtchingMaskComponent()
            {
                Owner = source,
                LayerCount = 2
            };
            Assert.IsTrue(component.Make());
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerEtchMask_TestResult.svg"));
            Assert.IsTrue(component.Export(path, new SvgExchanger()));

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "TwoLayerEtchMask.svg"), path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MultipleHoles()
        {
            var source = TestData.GetBodyFromBRep(@"SourceData\Brep\ContourMultipleHoles.brep");
            Assume.That(source?.GetBRep() != null);

            var template = new SliceContourComponent()
            {
                Owner = source,
                LayerCount = 2,
            };
            Assert.IsTrue(template.Make());
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "MultipleHoles_TestResult.svg"));
            Assert.IsTrue(template.Export(path, new SvgExchanger()));

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "MultipleHoles.svg"), path);
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
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "BoundaryIsClosed_TestResult.svg"));
            Assert.IsTrue(template.Export(path, new SvgExchanger()));

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "BoundaryIsClosed.svg"), path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LocatedWire()
        {
            var source = TestData.GetBodyFromBRep(@"SourceData\Brep\ContourLocatedWire.brep");
            Assume.That(source?.GetBRep() != null);

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
                var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionCode(), Marshal.GetExceptionPointers());
                TestContext.WriteLine(info.Message);
                throw;
            }

            AssertHelper.IsSameFile(Path.Combine(_BasePath, "LocatedWire.svg"), path);
        }

        //--------------------------------------------------------------------------------------------------

    }
}