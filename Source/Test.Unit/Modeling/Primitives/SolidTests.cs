using System.IO;
using Macad.Common.Serialization;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Primitives;

[TestFixture]
public class SolidTests
{
    [Test]
    public void UnsavedFlagAfterLoad()
    {
        var fileName = Path.Combine(TestData.TempDirectory, "Solid.model");
        File.Delete(fileName);

        var ctx = Context.InitWithDefault();
        ctx.DocumentController.NewModel();
        Assert.IsFalse(ctx.Document.HasUnsavedChanges);

        var body = TestData.GetBodyFromBRep("SourceData\\Brep\\ImprintRingFace.brep");
        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body})); // This creates a solid
        ctx.Document.Add(body);
        Assert.IsTrue(ctx.Document.HasUnsavedChanges);
        ctx.Document.SaveToFile(fileName);

        ctx.DocumentController.NewModel();
        Assert.IsFalse(ctx.Document.HasUnsavedChanges);
        ctx.Document = Model.CreateFromFile(fileName, new SerializationContext());
        var newBody = ctx.Document.FindInstance(body.Guid) as Body;
        Assert.IsNotNull(newBody?.Shape.GetBRep());
        Assert.IsFalse(ctx.Document.HasUnsavedChanges);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void KeepLocation()
    {
        var body = TestData.GetBodyFromBRep("SourceData\\Brep\\ImprintRingFace.brep");
        body.Position = new Pnt(0, 10, 0);
        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(new []{body})); // This creates a solid
        Solid solid = body.Shape as Solid;
        Assert.IsNotNull(solid);

        TopLoc_Location location = new(new Trsf(Pnt.Origin, new Pnt(10, 0, 0)));
        var brep = solid.GetBRep().Located(location);
        solid.UpdateShape(brep);

        Assert.AreEqual(location, solid.GetBRep().Location());
        Assert.AreEqual(new XYZ(10, 10, 0), solid.GetTransformedBRep().Location().Transformation().TranslationPart());

        // Don't overwrite if only transformation is updated
        solid.InvalidateTransformation();
        Assert.AreEqual(new XYZ(10, 10, 0), solid.GetTransformedBRep().Location().Transformation().TranslationPart());
    }
}