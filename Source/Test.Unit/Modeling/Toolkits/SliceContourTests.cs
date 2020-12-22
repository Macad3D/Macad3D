using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Toolkits
{
    public class SliceContourTests
    {
        const string _BasePath = @"Modeling\Toolkits\SliceContour";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SimpleCutout()
        {
            var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SheetWithOneLayer_Source.brep"));
            Assume.That(source?.GetBRep() != null);

            var template = new SliceContourComponent
            {
                Owner = source
            };
            Assert.IsTrue(template.Make());
            AssertHelper.IsSameModel2D(template.Layers[0].BRep, Path.Combine(_BasePath, "SimpleContour"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RotatedSheet()
        {
            var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "RotatedSheet_Source.brep"));
            Assume.That(source?.GetBRep() != null);

            Assert.IsTrue(SliceContourComponent.CanFindReferenceFace(source.Shape.GetBRep()));

            var template = new SliceContourComponent
            {
                Owner = source,
                ReferenceFace = source.Shape.GetSubshapeReference(SubshapeType.Face, 4)
            };
            Assert.IsTrue(template.Make());
            AssertHelper.IsSameModel2D(template.Layers[0].BRep, Path.Combine(_BasePath, "RotatedSheet"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void Reconstruction()
        {
            var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "RotatedSheet_Source.brep"));
            Assume.That(source?.GetBRep() != null);

            var template = new SliceContourComponent
            {
                Owner = source,
                ReferenceFace = source.Shape.GetSubshapeReference(SubshapeType.Face, 4)
            };
            Assert.IsTrue(template.Make());
            AssertHelper.IsSameModel(template.ReconstructedBRep, Path.Combine(_BasePath, "Reconstruction"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FindBiggestFace()
        {
            
            var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "FindBiggestFace_Source.brep"));
            Assume.That(source?.GetBRep() != null);

            var template = new SliceContourComponent
            {
                Owner = source
            };
            Assert.IsTrue(template.Make());
            AssertHelper.IsSameModel(template.Layers[0].BRep, Path.Combine(_BasePath, "FindBiggestFace"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FindCorrectHeight()
        {
            var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "FindCorrectHeight_Source.brep"));

            var template = new SliceContourComponent
            {
                Owner = body,
                LayerCount = 2,
                ReferenceFace = body.Shape.GetSubshapeReference(SubshapeType.Face, 4)
            };

            Assert.IsTrue(template.Make());
            AssertHelper.IsSameModel(template.Layers[0].BRep, Path.Combine(_BasePath, "FindCorrectHeight1"));
            AssertHelper.IsSameModel(template.Layers[1].BRep, Path.Combine(_BasePath, "FindCorrectHeight2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ShapeId()
        {
            Context.InitWithDefault();

            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            Assume.That(body?.GetBRep() != null);
            imprint.Depth = 10;

            var template = new SliceContourComponent
            {
                Owner = body,
                ShapeGuid = (imprint.Operands[0] as Shape).Guid
            };
            Assert.IsTrue(template.Make());
            AssertHelper.IsSameModel(template.Layers[0].BRep, Path.Combine(_BasePath, "ShapeId"));
        }

        //--------------------------------------------------------------------------------------------------

    }
}