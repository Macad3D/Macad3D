using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify;

[TestFixture]
public class FilletToolTests
{
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
                
    const string _BasePath = @"Interaction\Modify\Fillet";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EdgeSelection()
    {
        var ctx = Context.Current;

        var box = Box.Create(10.0, 10.0, 5.0);
        var body = Body.Create(box);

        ctx.ViewportController.ZoomFitAll();

        var shape = Fillet.Create(body);
        shape.Radius = 2.0;
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(139, 252);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection1"));

            ctx.SelectAt(139, 252);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection2"));

            tool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection3"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EdgeSelectionFailure()
    {
        // This test shall show that two edges which differ only in location
        // are properly selectable
        var ctx = Context.Current;

        var box = Box.Create(10.0, 10.0, 5.0);
        var body = Body.Create(box);
        var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 10.0, 5.0);
        flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

        ctx.ViewportController.ZoomFitAll();

        var shape = Fillet.Create(body);
        shape.Radius = 2.0;
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.MouseMove(new Point(120, 200));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelectionFailure1"));

            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelectionFailure2"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HighlightInnerOriginalEdges()
    {
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Rectangle);
        imprint.Mode = Imprint.ImprintMode.Cutout;
        ctx.ViewportController.ZoomFitAll();
            
        var shape = Fillet.Create(imprint.Body);
        shape.Radius = 4.0f;
        ctx.WorkspaceController.StartTool(new FilletEditorTool(shape));

        Assert.Multiple(() =>
        {
            ctx.ClickAt(250, 185);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HighlightInnerOriginalEdges01"));
            ctx.ClickAt(210, 210);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HighlightInnerOriginalEdges02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    public void PropPanelCleanup()
    {
        var ctx = Context.Current;
        var panelMgr = ctx.EnablePropertyPanels();

        var box = TestGeomGenerator.CreateBox();
        var fillet = Fillet.Create(box.Body);
        fillet.Radius = 2.0;            
        ctx.WorkspaceController.StartEditor(fillet);

        var propPanel = panelMgr.FindFirst<FilletPropertyPanel>();
        propPanel.StartToolCommand.Execute(null);
        Assert.IsAssignableFrom<FilletEditorTool>(ctx.WorkspaceController.CurrentTool);

        ctx.WorkspaceController.StopEditor();
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorToolIdle()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorToolIdle1"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolRadius()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolRadius01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(230, 108);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolRadius02"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("radius"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolRadius03"));
                                            
            Assert.IsFalse(ctx.TestHudManager.HintMessage.Contains("radius"));
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolRadiusMin()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(210, 90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolRadiusMin01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.01, shape.Radius);

            // Cleanup
            tool.Stop();
        });
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolRadiusClamp()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 1.0;
        ctx.ViewportController.ZoomFitAll();
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(228, 106, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolRadiusClamp01"));
            ctx.ViewportController.MouseUp();

            Assert.AreEqual(3.0, shape.Radius);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolRadiusUndo()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new FilletEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);
            
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(230, 108);
            ctx.ViewportController.MouseUp();
                
            Assert.Greater(shape.Radius, 4.0);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

            ctx.UndoHandler.DoUndo(1);

            Assert.Less(shape.Radius, 4.0);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            // Cleanup
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Fillet _CreateTestBlock()
    {
        var box1 = Box.Create(10.0, 10.0, 10.0);
        var body1 = TestGeomGenerator.CreateBody(box1, new Pnt(5.0, 0.0, 0.0));
        var box2 = Box.Create(10.0, 10.0, 20.0);
        var body2 = TestGeomGenerator.CreateBody(box2, new Pnt(-5.0, 0.0, 0.0));
        body2.IsVisible = false;
        var fuse = BooleanFuse.Create(body1, new BodyShapeOperand(body2));
        var fillet = Fillet.Create(body1);
        fillet.Radius = 2.0;
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 1));
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 3));
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 9));
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 10));
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 13));
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 14));
        fillet.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 16));
        return fillet;
    }
}