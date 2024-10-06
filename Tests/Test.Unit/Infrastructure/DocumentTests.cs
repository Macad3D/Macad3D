using System.IO;
using Macad.Common.Serialization;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
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

    [Test]
    public void NewDocumentHasNoOldVisualEntities()
    {
        var ctx = Context.InitWithDefault();
        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);

        ctx.DocumentController.NewModel();
        ctx.WorkspaceController.Invalidate(forceRedraw: true);
        Assert.That(ctx.Document.Instances, Has.Count.EqualTo(2));
        Assert.That(ctx.Document, Is.Empty);
        Assert.That(ctx.WorkspaceController.VisualObjects.GetVisibleEntities(), Is.Empty);
        Assert.That(ctx.WorkspaceController.VisualObjects.GetAll(), Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    [Description("VisualChanged events can be fired from old entities if e.g. the cleanup process restores properties.")]
    public void NewDocumentDoesNotTakeOldVisualChangedEvents()
    {
        var ctx = Context.InitWithDefault();
        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);

        // Instantiate any tool which restores stack shape, which fires VisualChanged event
        var tool = new CreateLinearArrayTool(body);
        ctx.WorkspaceController.StartTool(tool);

        ctx.DocumentController.NewModel();
        ctx.WorkspaceController.Invalidate(forceRedraw: true);
        Assert.That(ctx.Document.Instances, Has.Count.EqualTo(2));
        Assert.That(ctx.Document, Is.Empty);
        Assert.That(ctx.WorkspaceController.VisualObjects.GetVisibleEntities(), Is.Empty);
        Assert.That(ctx.WorkspaceController.VisualObjects.GetAll(), Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

}