using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;
using Macad.Core;
using Macad.Occt;
using System.Windows.Input;

namespace Macad.Test.Unit.Interaction.Modify;

[TestFixture]
public class ChamferToolTests
{
    const string _BasePath = @"Interaction\Modify\Chamfer";

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
    public void EdgeSelection()
    {
        var ctx = Context.Current;

        var box = Box.Create(10.0, 10.0, 5.0);
        var body = Body.Create(box);

        ctx.ViewportController.ZoomFitAll();

        var shape = Chamfer.Create(body);
        shape.Distance = 2.0;
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(139, 252);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection1"));

            ctx.SelectAt(139, 252);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection2"));

            ctx.SelectAt(382, 237);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection3"));

            tool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection4"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EnhanceContinuesEdges()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "EnhanceContinuesEdges_Source.brep"));
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        ctx.ViewportController.Pan(-1.0, 4.0);

        var shape = Chamfer.Create(body);
        shape.Distance = 0.3f;
        ctx.WorkspaceController.StartTool(new ChamferEditorTool(shape));

        Assert.Multiple(() =>
        {
            // Hilight single edge
            ctx.MoveTo(389, 207);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges1"));

            // Select edge -> Expect extension to three edges
            ctx.ClickAt(389, 207);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges2"));

            // The same on the lower three edges
            ctx.ClickAt(384, 264);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges3"));

            // Deselect via same edge (the original)
            ctx.ClickAt(403, 197);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges4"));

            // Deselect via another face (not the original)
            ctx.ClickAt(162, 267);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges5"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EdgeDeselection()
    {
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Rectangle);
        imprint.Mode = Imprint.ImprintMode.Cutout;
        ctx.ViewportController.ZoomFitAll();
            
        var shape = Chamfer.Create(imprint.Body);
        shape.Distance = 4.0f;
        ctx.WorkspaceController.StartTool(new ChamferEditorTool(shape));

        Assert.Multiple(() =>
        {
            ctx.ClickAt(250, 185);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeDeselection01"));
            ctx.ClickAt(213, 208);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeDeselection02"));
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
        var chamfer = Chamfer.Create(box.Body);
        chamfer.Distance = 2.0;            
        ctx.WorkspaceController.StartEditor(chamfer);

        var propPanel = panelMgr.FindFirst<ChamferPropertyPanel>();
        propPanel.StartToolCommand.Execute(null);
        Assert.IsAssignableFrom<ChamferEditorTool>(ctx.WorkspaceController.CurrentTool);

        ctx.WorkspaceController.StopEditor();
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(Chamfer.ChamferModes.Symmetric)]
    [TestCase(Chamfer.ChamferModes.TwoDistances)]
    [TestCase(Chamfer.ChamferModes.DistanceAngle)]
    public void EditorToolIdle(Chamfer.ChamferModes mode)
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            shape.Mode = mode;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"EditorToolIdle_{mode}"));

            if (mode == Chamfer.ChamferModes.DistanceAngle)
            {
                shape.ReverseOrientation = true;
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"EditorToolIdle_{mode}_Rev"));
            }
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceSym()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceSym01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(230, 108);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceSym02"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("distance"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceSym03"));
                                            
            Assert.IsFalse(ctx.TestHudManager.HintMessage.Contains("distance"));
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceSymMin()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(210, 90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceSymMin01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.01, shape.Distance);

            // Cleanup
            tool.Stop();
        });
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceSymClamp()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 1.0;
        ctx.ViewportController.ZoomFitAll();
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(228, 106, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceSymClamp01"));
            ctx.ViewportController.MouseUp();

            Assert.AreEqual(3.0, shape.Distance);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceSymUndo()
    {
        var shape = _CreateTestBlock();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);
            
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 103);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(230, 108);
            ctx.ViewportController.MouseUp();
                
            Assert.Greater(shape.Distance, 3.0);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

            ctx.UndoHandler.DoUndo(1);

            Assert.Less(shape.Distance, 3.0);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceTwoDist()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // First
            ctx.MoveTo(220, 144);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 129);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist02"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("distance"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist03"));

            Assert.IsFalse(ctx.TestHudManager.HintMessage.Contains("distance"));
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Second
            ctx.MoveTo(143, 277);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist11"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(129, 287);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist12"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("distance"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist13"));

            Assert.IsFalse(ctx.TestHudManager.HintMessage.Contains("distance"));
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Test another set with reversed direction
            ctx.MoveTo(442, 141);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(431, 143);
            ctx.ViewportController.MouseUp();
            ctx.MoveTo(334, 136);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(342, 145);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDist21"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceTwoDistMin()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(220, 144);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(222, 251);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDistMin01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.01, shape.Distance);

            ctx.MoveTo(143, 277);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(202, 229);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDistMin11"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.01, shape.SecondDistance);

            // Cleanup
            tool.Stop();
        });
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceTwoDistClamp()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 0.5;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // First
            ctx.MoveTo(220, 144);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 129, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDistClamp01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(2.5, shape.Distance);

            // Second
            ctx.MoveTo(143, 277);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(109, 287, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceTwoDistClamp11"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(3.0, shape.SecondDistance);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceTwoDistUndo()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.TwoDistances;
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 0.5;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);
            
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        Assert.Multiple(() =>
        {
            // First
            ctx.MoveTo(220, 144);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 129, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
                
            Assert.AreEqual(2.5, shape.Distance);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);
            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(2.0, shape.Distance);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            // Restart tool to comply with app
            tool.Stop();
            tool = new ChamferEditorTool(shape);
            ctx.WorkspaceController.StartTool(tool);

            // Second
            ctx.MoveTo(143, 277);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(109, 287, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
                
            Assert.AreEqual(3.0, shape.SecondDistance);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);
            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(2.0, shape.SecondDistance);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceAngle()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.DistanceAngle;
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Distance
            ctx.MoveTo(220, 124);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 109);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle02"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("distance"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle03"));

            Assert.IsFalse(ctx.TestHudManager.HintMessage.Contains("distance"));
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Angle
            ctx.MoveTo(193, 150);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle11"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(190, 155);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle12"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("angle"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle13"));

            Assert.IsFalse(ctx.TestHudManager.HintMessage.Contains("angle"));
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Test another set with reversed direction
            ctx.MoveTo(426, 147);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(415, 157);
            ctx.ViewportController.MouseUp();
            ctx.MoveTo(464, 155);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(448, 156);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngle21"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceAngleMin()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.DistanceAngle;
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Distance
            ctx.MoveTo(220, 124);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(222, 231);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngleMin01"));
            Assert.AreEqual(0.01, shape.Distance);
            ctx.MoveTo(220, 124);
            ctx.ViewportController.MouseUp();

            // Angle
            ctx.MoveTo(197, 176);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 211);
            Assert.AreEqual(0.01, shape.Angle);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngleMin11"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            tool.Stop();
        });
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceAngleClamp()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.DistanceAngle;
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 0.5;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Distance
            ctx.MoveTo(220, 124);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 109, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngleClamp01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(2.5, shape.Distance);

            // Angle
            ctx.MoveTo(189, 163);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(190, 158, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToolDistanceAngleClamp11"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(55.0, shape.Angle);

            // Cleanup
            tool.Stop();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolDistanceAngleUndo()
    {
        var shape = _CreateTestBlock();
        shape.Mode = Chamfer.ChamferModes.DistanceAngle;
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 0.5;
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(1.5);
        var tool = new ChamferEditorTool(shape);
        ctx.WorkspaceController.StartTool(tool);
            
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        Assert.Multiple(() =>
        {
            // Distance
            ctx.MoveTo(220, 124);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(220, 109, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
                
            Assert.AreEqual(2.5, shape.Distance);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);
            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(2.0, shape.Distance);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            // Restart tool to comply with app
            tool.Stop();
            tool = new ChamferEditorTool(shape);
            ctx.WorkspaceController.StartTool(tool);

            // Angle
            ctx.MoveTo(200, 163);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(198, 158, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
                
            Assert.AreEqual(50.0, shape.Angle);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);
            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(45.0, shape.Angle);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            // Cleanup
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Chamfer _CreateTestBlock()
    {
        var box1 = Box.Create(10.0, 10.0, 10.0);
        var body1 = TestGeomGenerator.CreateBody(box1, new Pnt(5.0, 0.0, 0.0));
        var box2 = Box.Create(10.0, 10.0, 20.0);
        var body2 = TestGeomGenerator.CreateBody(box2, new Pnt(-5.0, 0.0, 0.0));
        body2.IsVisible = false;
        var fuse = BooleanFuse.Create(body1, new BodyShapeOperand(body2));
        var chamfer = Chamfer.Create(body1);
        chamfer.Distance = 2.0;
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 1));
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 3));
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 9));
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 10));
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 13));
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 14));
        chamfer.AddEdge(fuse.GetSubshapeReference(SubshapeType.Edge, 16));
        return chamfer;
    }
}