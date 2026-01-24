using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Memory.Interaction;

[TestFixture]
public class ProjectTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanupOnNew()
    {
        MemoryAssert.IsCollected(() =>
        {
            var model = InteractiveContext.Current.DocumentController.NewModel();
            var workspace = InteractiveContext.Current.Workspace;
            var workspaceCtrl = InteractiveContext.Current.WorkspaceController;
            InteractiveContext.Current.DocumentController.NewModel();
            return [model, workspaceCtrl, workspace];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanupOnNewWithBodies()
    {
        MemoryAssert.IsCollected(() =>
        {
            var model = InteractiveContext.Current.DocumentController.NewModel();
            var imprint = TestGeomGenerator.CreateImprint();
            var body = imprint.Body;
            Assume.That(body.Shape.Make(Shape.MakeFlags.None));

            InteractiveContext.Current.DocumentController.NewModel();
            return [model, imprint, body];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanupContext()
    {
        MemoryAssert.IsCollected(() =>
        {
            // Context is already initialized
            var context = Context.Current;
            var modelCtrl = context.DocumentController;
            var workspaceCtrl = context.WorkspaceController;
            var viewportCtrl = context.ViewportController;
            var clipboard = context.Clipboard;
            var shortcutHandler = context.ShortcutHandler;

            Context.InitEmpty();

            return [context, modelCtrl, workspaceCtrl, viewportCtrl, clipboard, shortcutHandler];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CleanupWorkspace()
    {
        MemoryAssert.IsCollected(() =>
        {
            var context = Context.Current;
            context.DocumentController.NewModel();

            var model = context.Document;
            var workspaceCtrl = context.WorkspaceController;
            var workspace = context.Workspace;
            var viewportCtrl = context.ViewportController;
            var viewport = context.Viewport;
            
            context.DocumentController.NewModel();

            return [model, workspaceCtrl, workspace, viewportCtrl, viewport];
        });
    }

    //--------------------------------------------------------------------------------------------------

}