using System.IO;
using System.Linq;
using System.Windows;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;
using Macad.Occt;

namespace Macad.Test.Unit.Interaction.Primitives2D.Sketch
{
    [TestFixture]
    public class SketchToolsTests
    {
        const string _BasePath = @"Interaction\Primitives2D\Sketch\Tools";

        [SetUp]
        public void SetUp()
        {
            Context.InitWithView(500);
            Context.Current.Workspace.GridEnabled = true;
            // Set background color to black to better see half-transparent gizmo XY plane
            Context.Current.Viewport.V3dView.SetBackgroundColor(Quantity_NameOfColor.Quantity_NOC_BLACK.ToColor());
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

            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.Rectangle);
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
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment01"));
                ctx.MoveTo(150, 88);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment02"));
                ctx.ClickAt(150, 88);
                ctx.MoveTo(200, 88);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment03"));
                ctx.ClickAt(200, 88);

                // Cleanup
                tool.StopTool();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitSegment04"));
            });

            tool.Stop();
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SplitPeriodicSegment()
        {
            var ctx = Context.Current;

            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.Circle);
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
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPeriodicSegment01"));
                ctx.ClickAt(184, 103);

                // Cleanup
                tool.StopTool();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPeriodicSegment02"));
            });

            tool.Stop();
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SplitSegmentUndo()
        {
            var ctx = Context.Current;

            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.Rectangle);
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

            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.Rectangle);
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
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPoint01"));
                ctx.ClickAt(88, 88);

                // Cleanup
                tool.StopTool();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPoint02"));

                // Move
                ctx.ClickAt(88, 88);
                ctx.MoveTo(95, 80);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(150, 40);
                ctx.ViewportController.MouseUp(false);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SplitPoint03"));
            });

            tool.Stop();
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SplitPointUndo()
        {
            var ctx = Context.Current;

            var sketch = TestGeomGenerator.CreateSketch(TestGeomGenerator.SketchType.Rectangle);
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
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointLineLine01"));

                // Delete Point
                ctx.ClickAt(250, 300);
                sketchEditTool.Delete();
                Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
                Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointLineLine02"));

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
                sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>(true);
                ctx.ClickAt(250, 250); 
                ctx.ClickAt(50, 250);
                ctx.ClickAt(250, 50);
                sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>(true);
                ctx.ClickAt(250, 250); 
                ctx.ClickAt(250, 50);
                ctx.ClickAt(400, 250);
                Assert.AreEqual(5, sketchEditTool.Sketch.Points.Count);
                Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointArcArc01"));

                // Delete Point
                ctx.ClickAt(250, 50);
                sketchEditTool.Delete();
                Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
                Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointArcArc02"));

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
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointBezierBezier01"));

                // Delete Point
                ctx.ClickAt(250, 250);
                sketchEditTool.Delete();
                Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
                Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeletePointBezierBezier02"));

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
    }
}