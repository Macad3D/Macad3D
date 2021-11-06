using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Occt.Helper;
using NUnit.Framework;

namespace Macad.Test.Unit.Drawings
{
    [TestFixture]
    public class HlrDrawingTests
    {
        const string _BasePath = @"Drawing\Hlr";

        //--------------------------------------------------------------------------------------------------

        readonly Ax3 _Projection = new Ax3(Pnt.Origin, new Vec(1, 1, 1).ToDir(), new Vec(-2, 0, -1).ToDir());

        [Test]
        public void HlrGeneration()
        {
            // Create simple geometry
            var imprint = TestGeomGenerator.CreateImprint();
            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            var ocShape = imprint.GetTransformedBRep();

            // Create HLR Algo
            var hlrAlgo = new HlrBRepAlgo(new[] {ocShape});
            hlrAlgo.SetProjection(_Projection);
            hlrAlgo.Update();

            // Get Hlr Shape
            var visibleSharp = hlrAlgo.GetResult(HlrEdgeTypes.VisibleSharp);
            Assert.IsNotNull(visibleSharp);
            Assert.IsTrue(ModelCompare.CompareShape(visibleSharp, Path.Combine(_BasePath, "VisSharp")));

            var hiddenSharp = hlrAlgo.GetResult(HlrEdgeTypes.HiddenSharp);
            Assert.IsNotNull(hiddenSharp);
            Assert.IsTrue(ModelCompare.CompareShape(hiddenSharp, Path.Combine(_BasePath, "HidSharp")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Description("OCCT 28242")]
        public void HlrPolyGeneration()
        {
            // Create simple geometry
            var imprint = TestGeomGenerator.CreateImprint();
            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            var ocShape = imprint.GetTransformedBRep();

            // Create HLR Algo
            var hlrAlgo = new HlrBRepAlgoPoly(new[] { ocShape });
            hlrAlgo.SetProjection(_Projection);
            hlrAlgo.Update();

            // Get Hlr Shape
            var visibleSharp = hlrAlgo.GetResult(HlrEdgeTypes.VisibleSharp);
            Assert.IsNotNull(visibleSharp);
            Assert.IsTrue(ModelCompare.CompareShape(visibleSharp, Path.Combine(_BasePath, "Poly_VisSharp")));

            var hiddenSharp = hlrAlgo.GetResult(HlrEdgeTypes.HiddenSharp);
            Assert.IsNotNull(hiddenSharp);
            Assert.IsTrue(ModelCompare.CompareShape(hiddenSharp, Path.Combine(_BasePath, "Poly_HidSharp")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void GenerateHlrMultiShape()
        {
            // Create simple geometry
            var imprint = TestGeomGenerator.CreateImprint();
            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            var ocShape = imprint.GetTransformedBRep();

            var box = new Box() { DimensionX = 10, DimensionY = 10, DimensionZ = 10 };
            Assert.IsTrue(box.Make(Shape.MakeFlags.None));
            var ocBoxShape = box.GetBRep();

            // Create HLR Algo
            var hlrAlgo = new HlrBRepAlgo(new[] { ocShape, ocBoxShape });
            hlrAlgo.SetProjection(_Projection);
            hlrAlgo.Update();

            // Get Hlr Shape
            var visibleSharp = hlrAlgo.GetResult(HlrEdgeTypes.VisibleSharp);
            Assert.IsNotNull(visibleSharp);
            Assert.IsTrue(ModelCompare.CompareShape(visibleSharp, Path.Combine(_BasePath, "MultiShape_VisSharp")));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Description("OCCT 28242")]
        public void GenerateHlrPolyMultiShape()
        {
            // Create simple geometry
            var imprint = TestGeomGenerator.CreateImprint();
            Assert.IsTrue(imprint.Make(Shape.MakeFlags.None));
            var ocShape = imprint.GetTransformedBRep();

            var box = new Box() { DimensionX = 10, DimensionY = 10, DimensionZ = 10 };
            Assert.IsTrue(box.Make(Shape.MakeFlags.None));
            var ocBoxShape = box.GetBRep();

            // Create HLR Algo
            var hlrAlgo = new HlrBRepAlgoPoly(new[] { ocShape, ocBoxShape });
            hlrAlgo.SetProjection(_Projection);
            hlrAlgo.Update();

            // Get Hlr Shape
            var visibleSharp = hlrAlgo.GetResult(HlrEdgeTypes.VisibleSharp);
            Assert.IsNotNull(visibleSharp);
            Assert.IsTrue(ModelCompare.CompareShape(visibleSharp, Path.Combine(_BasePath, "PolyMultiShape_VisSharp")));
        }

        //--------------------------------------------------------------------------------------------------

    }
}