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
    public class DxfExportContoursTests
    {
        const string _BasePath = @"Exchange\Dxf\ExportContours";

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
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "SimpleContour_TestResult.dxf"));
            Assert.IsTrue(template.Export(path, new DxfExchanger()));

            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "SimpleContour.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerContour_TestResult.dxf"));
            Assert.IsTrue(template.Export(path, new DxfExchanger()));

            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TwoLayerContour.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "TwoLayerEtchMask_TestResult.dxf"));
            Assert.IsTrue(component.Export(path, new DxfExchanger()));

            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "TwoLayerEtchMask.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "MultipleHoles_TestResult.dxf"));
            Assert.IsTrue(template.Export(path, new DxfExchanger()));

            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultipleHoles.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
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
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "LocatedWire_TestResult.dxf"));

            try
            {
                Assert.IsTrue(template.Export(path, new DxfExchanger()));
            }
            catch (SEHException)
            {
                var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionCode(), Marshal.GetExceptionPointers());
                TestContext.WriteLine(info.Message);
                throw;
            }

            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "LocatedWire.dxf"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
        }

        //--------------------------------------------------------------------------------------------------
        
    }
}