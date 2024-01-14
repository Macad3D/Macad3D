using System.IO;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class DocumentTests
{
    [Test]
    public void UnsavedFlag()
    {
        var fileName = Path.Combine(TestData.TempDirectory, "Box.model");
        File.Delete(fileName);

        var ctx = Context.InitWithDefault();
        ctx.DocumentController.NewModel();
        Assert.IsFalse(ctx.Document.HasUnsavedChanges);

        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);
        Assert.IsTrue(ctx.Document.HasUnsavedChanges);
        ctx.Document.SaveToFile(fileName);

        ctx.DocumentController.NewModel();
        Assert.IsFalse(ctx.Document.HasUnsavedChanges);
        ctx.Document = Model.CreateFromFile(fileName, new SerializationContext());
        Assert.IsFalse(ctx.Document.HasUnsavedChanges);

        File.Delete(fileName);
    }

    //--------------------------------------------------------------------------------------------------

}