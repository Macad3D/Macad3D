using System.IO;
using Macad.Common.Serialization;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
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

}