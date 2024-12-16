using System.Collections.Generic;
using System.IO;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sketch;

[TestFixture]
public class SketchToolsTests
{
    const string _BasePath = @"Interaction\Sketch\Tools";

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.Workspace.GridEnabled = true;
        // Set background color to black to better see half-transparent gizmo XY plane
        Context.Current.ViewportController.V3dView.SetBackgroundColor(Macad.Common.Color.Black.ToQuantityColor());
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitSegment()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Select Segment
            ctx.ClickAt(140, 90);

            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);
            ctx.MoveTo(150, 50);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment01"), 0.1);
            ctx.MoveTo(150, 88);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment02"), 0.1);
            ctx.ClickAt(150, 88);
            ctx.MoveTo(200, 88);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment03"), 0.1);
            ctx.ClickAt(200, 88);

            // Cleanup
            tool.StopTool();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment04"), 0.1);
        });

        tool.Stop();
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SplitPeriodicSegment()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Circle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Select Segment
            ctx.ClickAt(140, 90);

            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);
            ctx.MoveTo(184, 103);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPeriodicSegment01"), 0.1);
            ctx.ClickAt(184, 103);

            // Cleanup
            tool.StopTool();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPeriodicSegment02"), 0.1);
        });

        tool.Stop();
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SplitSegmentUndo()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        Assert.IsFalse(ctx.UndoHandler.CanUndo);
        Assert.IsFalse(ctx.UndoHandler.CanRedo);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Select Segment
            ctx.ClickAt(140, 90);

            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);

            // Split
            ctx.ClickAt(150, 88);
            Assert.AreEqual(5, tool.Sketch.Segments.Count);
            Assert.IsTrue(ctx.UndoHandler.CanUndo);
            Assert.IsFalse(ctx.UndoHandler.CanRedo);

            // Undo
            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(4, tool.Sketch.Segments.Count);
            Assert.IsFalse(ctx.UndoHandler.CanUndo);
            Assert.IsTrue(ctx.UndoHandler.CanRedo);

            // Redo
            ctx.UndoHandler.DoRedo(1);
            Assert.AreEqual(5, tool.Sketch.Segments.Count);
            Assert.IsTrue(ctx.UndoHandler.CanUndo);
            Assert.IsFalse(ctx.UndoHandler.CanRedo);

            // Cleanup
            tool.StopTool();
        });

        tool.Stop();
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitPoint()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Select Segment
            ctx.ClickAt(140, 90);

            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);
            ctx.MoveTo(88, 88);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPoint01"), 0.1);
            ctx.ClickAt(88, 88);

            // Cleanup
            tool.StopTool();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPoint02"), 0.1);

            // Move
            ctx.ClickAt(88, 88);
            ctx.MoveTo(108, 62);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(150, 40);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPoint03"), 0.1);
        });

        tool.Stop();
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitPointUndo()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        Assert.IsFalse(ctx.UndoHandler.CanUndo);
        Assert.IsFalse(ctx.UndoHandler.CanRedo);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Select Segment
            ctx.ClickAt(140, 90);

            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);
            ctx.ClickAt(88, 88);
            Assert.AreEqual(5, tool.Sketch.Points.Count);
            Assert.IsTrue(ctx.UndoHandler.CanUndo);
            Assert.IsFalse(ctx.UndoHandler.CanRedo);

            // Undo
            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(4, tool.Sketch.Points.Count);
            Assert.IsFalse(ctx.UndoHandler.CanUndo);
            Assert.IsTrue(ctx.UndoHandler.CanRedo);

            // Redo
            ctx.UndoHandler.DoRedo(1);
            Assert.AreEqual(5, tool.Sketch.Points.Count);
            Assert.IsTrue(ctx.UndoHandler.CanUndo);
            Assert.IsFalse(ctx.UndoHandler.CanRedo);

            // Cleanup
            tool.StopTool();
        });

        tool.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitSnap()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(0.5, 0.5, 0);

        ctx.Workspace.GridStep = 3.0;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Select Segment
            ctx.ClickAt(140, 90);
            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);

            // Snap to Edge
            ctx.MoveTo(350, 236);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Edge));
            ctx.ClickAt(350, 236);
            ctx.MoveTo(1, 1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSnap01"), 0.1);

            // Snap to Grid
            ctx.MoveTo(219, 145);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.None));
            ctx.ClickAt(219, 145);
            ctx.MoveTo(190, 150);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Grid));
            ctx.ClickAt(190, 150);
            ctx.MoveTo(146, 184);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Grid));
            ctx.ClickAt(146, 184);
            ctx.MoveTo(1, 1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSnap02"), 0.1);

            // Snap to circ grid
            ctx.Workspace.GridType = Workspace.GridTypes.Circular;
            ctx.MoveTo(271, 353);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.None));
            ctx.ClickAt(271, 353);
            ctx.MoveTo(145, 311);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Grid));
            ctx.ClickAt(145, 311);
            ctx.MoveTo(210, 353);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Grid));
            ctx.ClickAt(210, 353);
            ctx.MoveTo(1, 1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSnap03"), 0.1);

            tool.StopTool();
        });

        tool.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SplitSnapSegmentCrossing()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 10.0;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = false;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = false;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(0, 0, 10, 10);
        sb.Line(8, 2, 2, 8);
        var body = TestGeomGenerator.CreateBody(sketch);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);
            ctx.MoveTo(240, 240);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Edge));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSnapSegmentCrossing01"), 0.1);

            // Check un-highlighting of both segments
            ctx.MoveTo(180, 318);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSnapSegmentCrossing02"), 0.1);

            // Check double-split
            ctx.ClickAt(240, 240);
            Assert.That(sketch.Points.Count, Is.EqualTo(6));
            Assert.That(sketch.Segments.Count, Is.EqualTo(4));
            tool.StopTool();
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void SplitUnhighlightUnusedEdge()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(0.5, 0.5, 0);

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Start split tool
            var splitTool = new SplitElementSketchTool();
            tool.StartTool(splitTool);

            // Check not highlighting the unused detected edge
            ctx.MoveTo(259, 95);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitUnhighlightUnusedEdge01"), 0.1);

            tool.StopTool();
        });

        tool.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeletePointLineLine()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
            ctx.ClickAt(50, 250); 
            ctx.ClickAt(250, 300);
            ctx.ClickAt(400, 250);
            sketchEditTool.StopTool();
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointLineLine01"), 0.1);

            // Delete Point
            ctx.ClickAt(250, 300);
            sketchEditTool.Delete();
            Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointLineLine02"), 0.1);

            //Cleanup
            sketchEditTool.Stop();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeletePointArcArc()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
            ctx.ClickAt(250, 250); 
            ctx.ClickAt(50, 250);
            ctx.ClickAt(250, 50);
            sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
            ctx.ClickAt(250, 250); 
            ctx.ClickAt(250, 50);
            ctx.ClickAt(400, 250);
            Assert.AreEqual(5, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointArcArc01"), 0.1);

            // Delete Point
            ctx.ClickAt(250, 50);
            sketchEditTool.Delete();
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointArcArc02"), 0.1);

            //Cleanup
            sketchEditTool.Stop();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeletePointBezierBezier()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
            ctx.ClickAt(50, 250); 
            ctx.ClickAt(250, 250);
            ctx.ClickAt(180, 150);
            sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>();
            ctx.ClickAt(250, 250); 
            ctx.ClickAt(450, 250);
            ctx.ClickAt(320, 300);
            ctx.ClickAt(400, 220);
            Assert.AreEqual(6, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointBezierBezier01"), 0.1);

            // Delete Point
            ctx.ClickAt(250, 250);
            sketchEditTool.Delete();
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointBezierBezier02"), 0.1);

            //Cleanup
            sketchEditTool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertBezierToLine()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.IsFalse(SketchCommands.ConvertSegment.CanExecute(SketchCommands.Segments.Line));

        sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>();
        ctx.ClickAt(250, 250); 
        ctx.ClickAt(450, 250);
        ctx.ClickAt(320, 300);
        ctx.ClickAt(400, 220);
        Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
        Assert.IsTrue(SketchCommands.ConvertSegment.CanExecute(SketchCommands.Segments.Line));

        SketchCommands.ConvertSegment.Execute(SketchCommands.Segments.Line);
        Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentLine>(sketchEditTool.Sketch.Segments[1]);
        Assert.IsTrue(ctx.UndoHandler.CanUndo);
        Assert.IsFalse(SketchCommands.ConvertSegment.CanExecute(SketchCommands.Segments.Line));

        // Undo
        ctx.UndoHandler.DoUndo(1);
        Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentBezier>(sketchEditTool.Sketch.Segments[0]);
        Assert.IsTrue(ctx.UndoHandler.CanRedo);

        // Redo
        ctx.UndoHandler.DoRedo(1);
        Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
        Assert.IsInstanceOf<SketchSegmentLine>(sketchEditTool.Sketch.Segments[1]);
        Assert.IsFalse(ctx.UndoHandler.CanRedo);

        //Cleanup
        sketchEditTool.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScaleElements()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new ScaleElementSketchTool());

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElements01"), 0.1);
            ctx.MoveTo(249, 463);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElements02"), 0.1);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(316, 404);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElements03"), 0.1);
            ctx.ViewportController.MouseUp();
            ctx.MoveTo(287, 216);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElements04"), 0.1);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(200, 210);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElements05"), 0.1);

            // Cleanup
            tool.StopTool();
            ctx.WorkspaceController.CancelTool(tool, true);
            tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElements99"), 0.1);
        });
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ScaleElementsCenter()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new ScaleElementSketchTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(249, 463);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(316, 404, ModifierKeys.Shift);
            ctx.ViewportController.MouseUp(ModifierKeys.Shift);
            ctx.MoveTo(287, 216);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElementsCenter01"), 0.1);

            // Cleanup
            tool.StopTool();
            ctx.WorkspaceController.CancelTool(tool, true);
        });
    }
    
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void ScaleElementsRound()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new ScaleElementSketchTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(249, 463);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(316, 404, ModifierKeys.Control);
            ctx.ViewportController.MouseUp(ModifierKeys.Control);
            ctx.MoveTo(287, 216);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElementsRound01"), 0.1);

            // Cleanup
            tool.StopTool();
            ctx.WorkspaceController.CancelTool(tool, true);
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScaleElementsUndo()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        Dictionary<int, Pnt2d> savedPoints = new(sketch.Points);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new ScaleElementSketchTool());

        ctx.MoveTo(249, 463);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(316, 404);
        ctx.ViewportController.MouseUp();
        CollectionAssert.AreNotEqual(savedPoints, sketch.Points);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);
        ctx.UndoHandler.DoUndo(1);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        CollectionAssert.AreEqual(savedPoints, sketch.Points);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElementsUndo01"), 0.1);
        tool.StopTool();
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScaleElementsSnap()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(-12.0, 5.0, -0.5);

        ctx.Workspace.GridStep = 3.0;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new ScaleElementSketchTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(250, 103);
            ctx.ViewportController.MouseDown();

            ctx.MoveTo(290, 165);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElementsSnap01"), 0.1);
            Assert.That(tool.GetSnapHandler().CurrentInfo.Mode, Is.EqualTo(SnapModes.Grid));

            ctx.MoveTo(224, 78);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ScaleElementsSnap02"), 0.1);
            Assert.That(tool.GetSnapHandler().CurrentInfo.Mode, Is.EqualTo(SnapModes.Edge));

            // Cleanup
            tool.StopTool();
            ctx.WorkspaceController.CancelTool(tool, true);
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void OffsetSegmentsClosed()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            // Select reference point
            ctx.MoveTo(332, 70);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsClosed01"), 0.1);
            ctx.ClickAt(332, 70);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsClosed02"), 0.1);
            // Move to distance
            ctx.MoveTo(319, 95);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsClosed03"), 0.1);
            // Set
            ctx.ClickAt(319, 95);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsClosed04"), 0.1);

            Assert.IsNull(tool.CurrentTool);
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void OffsetSegmentsOpen()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            // Select reference point
            ctx.ClickAt(332, 70);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsOpen01"), 0.1);
            // Move to distance
            ctx.MoveTo(319, 95);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsOpen02"), 0.1);
            // Set
            ctx.ClickAt(319, 95);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsOpen03"), 0.1);

            Assert.IsNull(tool.CurrentTool);
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test] public void OffsetSegmentsMultiple()
    {
        var ctx = Context.Current;

        Core.Shapes.Sketch sketch = new();
        SketchBuilder sb = new(sketch);
        sb.PolyLine((-5, -5), (-1, 0), (-5, 5), (-5, -5));
        sb.PolyLine((5, -5), (1, 0), (5, 5), (5, -5));
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2,3,4,5]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            ctx.ClickAt(144, 157);
            ctx.MoveTo(216, 121);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsMultiple01"), 0.1);
            ctx.MoveTo(130, 180);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsMultiple02"), 0.1);
            ctx.ClickAt(130, 180);

            Assert.IsNull(tool.CurrentTool);
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void OffsetSegmentsCancel()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);

        Assert.Multiple(() =>
        {
            tool.StartTool(new OffsetSegmentSketchTool());
            tool.Cancel(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsCancel01"), 0.1);

            tool.StartTool(new OffsetSegmentSketchTool());
            // Select reference point
            ctx.ClickAt(332, 70);
            tool.Cancel(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsCancel01"), 0.1);

            tool.StartTool(new OffsetSegmentSketchTool());
            ctx.ClickAt(332, 70);
            ctx.MoveTo(319, 95);
            tool.Cancel(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsCancel01"), 0.1);

            Assert.IsNull(tool.CurrentTool);
        });
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void OffsetSegmentsUndo()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);

        Assert.Multiple(() =>
        {
            tool.StartTool(new OffsetSegmentSketchTool());
            ctx.ClickAt(332, 70);
            ctx.ClickAt(359, 30);
            Assert.IsNull(tool.CurrentTool);
            Assert.AreEqual(6, sketch.Segments.Count);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

            ctx.UndoHandler.DoUndo(1);
            Assert.AreEqual(3, sketch.Segments.Count);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OffsetSegmentsRound()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();
        ctx.Workspace.GridStep = 2.0;

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            ctx.ClickAt(332, 70);
            ctx.ClickAt(319, 95, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsRound01"), 0.1);

            Assert.IsNull(tool.CurrentTool);
        });
    }

    //--------------------------------------------------------------------------------------------------
      
    [Test]
    public void OffsetSegmentsJoinType()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            // Select reference point
            ctx.ClickAt(332, 70);
            ctx.MoveTo(340, 50);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsJoinType01"), 0.1);
            tool.OnKeyPressed(Key.Space, ModifierKeys.None);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsJoinType02"), 0.1);
            tool.OnKeyPressed(Key.Space, ModifierKeys.None);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsJoinType01"), 0.1);
        });
    }
        
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void OffsetSegmentsSnapReferencePoint()
    {
        var ctx = Context.Current;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(-5.0, -5.0, 0.0);

        ctx.Workspace.GridStep = 3.0;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(260, 152);
            Assert.That(tool.GetSnapHandler().CurrentInfo.Mode, Is.EqualTo(SnapModes.Edge));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsSnap01"), 0.1);

            ctx.MoveTo(258, 135);
            Assert.That(tool.GetSnapHandler().CurrentInfo.Mode, Is.EqualTo(SnapModes.Grid));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsSnap02"), 0.1);
        });
    }
            
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void OffsetSegmentsSnapDistance()
    {
        var ctx = Context.Current;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(0.0, 0.0, 0.0);

        ctx.Workspace.GridStep = 3.0;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [0,1,2]);
        tool.StartTool(new OffsetSegmentSketchTool());

        Assert.Multiple(() =>
        {
            // Select reference point
            ctx.ClickAt(334, 70);

            ctx.MoveTo(351, 31);
            Assert.That(tool.GetSnapHandler().CurrentInfo.Mode, Is.EqualTo(SnapModes.Edge));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OffsetSegmentsSnap11"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorElements()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new MirrorElementSketchTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(230, 380);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElements01"), 0.1);
            ctx.ClickAt(230, 380);
            ctx.MoveTo(345, 104);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElements02"), 0.1);
            ctx.ClickAt(345, 104);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElements03"), 0.1);
        });
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MirrorElementsCancel()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new MirrorElementSketchTool());

        Assert.Multiple(() =>
        {
            tool.StartTool(new MirrorElementSketchTool());
            tool.Cancel(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElementsCancel01"), 0.1);

            tool.StartTool(new MirrorElementSketchTool());
            ctx.ClickAt(230, 380);
            tool.Cancel(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElementsCancel01"), 0.1);

            tool.StartTool(new MirrorElementSketchTool());
            ctx.ClickAt(230, 380);
            ctx.MoveTo(345, 104);
            tool.Cancel(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElementsCancel01"), 0.1);

            Assert.IsNull(tool.CurrentTool);
        });
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MirrorElementsUndo()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        Dictionary<int, Pnt2d> savedPoints = new(sketch.Points);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new MirrorElementSketchTool());

        ctx.ClickAt(230, 380);
        ctx.MoveTo(345, 104);
        ctx.ClickAt(345, 104);

        CollectionAssert.AreNotEqual(savedPoints, sketch.Points);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);
        ctx.UndoHandler.DoUndo(1);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        CollectionAssert.AreEqual(savedPoints, sketch.Points);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElementsUndo01"), 0.1);
        tool.StopTool();
    }
    
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MirrorElementsRound()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric);
        var body = TestGeomGenerator.CreateBody(sketch);
        body.Position = new(-10, 5, 0);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1,2]);
        tool.StartTool(new MirrorElementSketchTool());
        ctx.ClickAt(230, 380);
        ctx.MoveTo(345, 104, ModifierKeys.Control);
        ctx.ClickAt(345, 104, ModifierKeys.Control);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElementsRound01"), 0.1);
        tool.StopTool();
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorElementsEllipticalArc()
    {
        var ctx = Context.Current;

        var sketch = Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.EllipticalArc(4, 0, 0, 2, 0, 0);
        sb.EllipticalArc(4, 0, 0, 2, 0, 0);
        var body = TestGeomGenerator.CreateBody(sketch);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        tool.Select(null, [1]);
        tool.StartTool(new MirrorElementSketchTool());

        Assert.Multiple(() =>
        {
            ctx.ClickAt(250, 100);
            ctx.ClickAt(250, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MirrorElementsEllipticalArc01"), 0.1);
        });
    }
}