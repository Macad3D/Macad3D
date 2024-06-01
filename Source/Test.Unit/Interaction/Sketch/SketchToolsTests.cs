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
        Context.Current.Viewport.V3dView.SetBackgroundColor(Macad.Common.Color.Black.ToQuantityColor());
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
            ctx.MoveTo(200, 209);
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
}