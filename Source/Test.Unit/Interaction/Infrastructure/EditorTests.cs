using System.IO;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Editors.Topology;
using Macad.Presentation;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure;

[TestFixture]
public class EditorTests
{
    const string _BasePath = @"Interaction\Infrastructure\Editor";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolsChangingWithShapeSelection()
    {
        var ctx = Context.Current;
        var panelMgr = Context.Current.EnablePropertyPanels();
        var imprint = TestGeomGenerator.CreateImprint();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(imprint.Body);

        Assert.Multiple(() =>
        {
            var shapePanel = panelMgr.FindFirst<BodyShapePropertyPanel>();
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsChangingWithShapeSelection01"));

            shapePanel.Select(imprint.Predecessor  as Shape);
            Assert.IsInstanceOf<BoxEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsChangingWithShapeSelection02"));

            shapePanel.Select(imprint);
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsChangingWithShapeSelection01"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolsNoSkipped()
    {
        var ctx = Context.Current;
        var panelMgr = Context.Current.EnablePropertyPanels();
        var imprint = TestGeomGenerator.CreateImprint();
        var box = imprint.Predecessor as Box;
        var mirror = Mirror.Create(imprint.Body, box.GetSubshapeReference(SubshapeType.Face, 1));
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(imprint.Body);

        Assert.Multiple(() =>
        {
            var shapePanel = panelMgr.FindFirst<BodyShapePropertyPanel>();
            imprint.IsSkipped = true;
            shapePanel.Select(imprint);
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsNoSkipped01"));

            imprint.IsSkipped = false;
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsNoSkipped02"));

            imprint.IsSkipped = true;
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsNoSkipped01"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ToolsIfNotCurrent()
    {
        var ctx = Context.Current;
        var panelMgr = Context.Current.EnablePropertyPanels();
        var imprint = TestGeomGenerator.CreateImprint();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(imprint.Body);

        Assert.Multiple(() =>
        {
            var shapePanel = panelMgr.FindFirst<BodyShapePropertyPanel>();
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfNotCurrent01"));

            BodyShapePropertyPanel.SetCurrentShapeCommand.Execute(imprint.Predecessor);
            shapePanel.Select(imprint);
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfNotCurrent02"));

            BodyShapePropertyPanel.SetCurrentShapeCommand.Execute(imprint);
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfNotCurrent01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolsIfBodyInvisible()
    {
        var ctx = Context.Current;
        var panelMgr = Context.Current.EnablePropertyPanels();
        var imprint = TestGeomGenerator.CreateImprint();
        var body = imprint.Body;
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(body);
        

        Assert.Multiple(() =>
        {
            var shapePanel = panelMgr.FindFirst<BodyShapePropertyPanel>();
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfBodyInvisible01"));

            body.IsVisible = false;
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfBodyInvisible02"));

            body.IsVisible = true;
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfBodyInvisible01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolsAfterUndo()
    {
        var ctx = Context.Current;
        var panelMgr = Context.Current.EnablePropertyPanels();
        var imprint = TestGeomGenerator.CreateImprint();
        var body = imprint.Body;
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.UndoHandler.Commit(); // Cleanup change history

        Assert.Multiple(() =>
        {
            var shapePanel = panelMgr.FindFirst<BodyShapePropertyPanel>();
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsAfterUndo01"));

            body.RemoveShape(imprint);
            ctx.UndoHandler.Commit();
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsAfterUndo02"));

            ctx.UndoHandler.DoUndo(1);
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsAfterUndo01"));
        });
    }
}