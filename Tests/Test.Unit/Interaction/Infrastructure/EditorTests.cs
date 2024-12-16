using System.IO;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
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
    [TestCase(false, true, TestName="Entity Hidden")]
    [TestCase(true, false, TestName="Layer Hidden")]
    public void ToolsIfBodyInvisible(bool isEntityVisible, bool isLayerVisible)
    {
        var ctx = Context.Current;
        var panelMgr = Context.Current.EnablePropertyPanels();
        var imprint = TestGeomGenerator.CreateImprint();
        var body = imprint.Body;
        ctx.Document.Add(body);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(body);

        Assert.Multiple(() =>
        {
            var shapePanel = panelMgr.FindFirst<BodyShapePropertyPanel>();
            Assert.IsInstanceOf<ImprintEditor>(shapePanel.SelectedEditor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfBodyInvisible01"));

            body.IsVisible = isEntityVisible;
            body.Layer.IsVisible = isLayerVisible;
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfBodyInvisible02"));

            // Reselect
            ctx.WorkspaceController.Selection.DeselectEntity(body);
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            ctx.WorkspaceController.Selection.SelectEntity(body);
            DispatcherHelper.DoEventsSync(); // Editor Update comes via Dispatcher
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsIfBodyInvisible02"));

            body.IsVisible = true;
            body.Layer.IsVisible = true;
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

    //--------------------------------------------------------------------------------------------------


    [Test]
    [Description("Tools should only be started if the editor is still active.")]
    public void ToolsStartIfEditorActive()
    {
        var ctx = Context.Current;
        var propertyPanels = ctx.EnablePropertyPanels();
        var box = Box.Create(5, 5, 1);
        var body = Body.Create(box);
        var imprint = Imprint.Create(body, box.GetSubshapeReference(SubshapeType.Face, 5));
        SketchBuilder sb = new(imprint.Sketch);
        sb.Circle(-1, -1, 0.5);
        ctx.ViewportController.ZoomFitAll();
        ctx.ClickAt(250, 250);

        body.Shape = imprint.Sketch;
        ctx.WorkspaceController.StartTool(new SketchEditorTool(imprint.Sketch));
        var bodyShapePanel = propertyPanels.FindFirst<BodyShapePropertyPanel>();
        bodyShapePanel.Select(imprint);
        BodyShapePropertyPanel.SetCurrentShapeCommand.Execute(imprint);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolsStartIfEditorActive01"));
    }

    //--------------------------------------------------------------------------------------------------

}