using System.IO;
using System.Linq;
using System.Threading;
using System.Windows;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives2D.Sketch
{
    [TestFixture]
    public class SketchEditorToolTests
    {
        const string _BasePath = @"Interaction\Primitives2D\Sketch\EditorTool";

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
        public void MovePoint()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                // MovePoints Idle
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint01"), 0.1);
                // Hilite Point
                ctx.ViewportController.MouseMove(new Point(377, 122));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint02"), 0.1);
                // Select Point, move gizmo shown
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint03"), 0.1);
                // Hilite Gizmo X-Axis
                ctx.ViewportController.MouseMove(new Point(459, 122));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint04"), 0.1);
                // Hilite Gizmo Y-Axis
                ctx.ViewportController.MouseMove(new Point(377, 38));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint05"), 0.1);
                // Hilite Gizmo XY-Plane
                ctx.ViewportController.MouseMove(new Point(392, 104));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint06"), 0.1);
                // Move on progress
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseMove(new Point(387, 141));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint07"), 0.1);
                // Move released
                ctx.ViewportController.MouseUp();
                ctx.ViewportController.MouseMove(new Point(1, 1));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint08"), 0.1);
                // Return to idle
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint09"), 0.1);

                // Cleanup
                tool.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint10"), 0.1);
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MovePointMerge()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            // Select Point
            ctx.ClickAt(377, 122);
            Assume.That(ctx.WorkspaceController.CurrentToolAction is MoveSketchPointAction);
            // Move to MergePoint
            ctx.MoveTo(416, 78);
            ctx.WorkspaceController.MouseDown(ctx.ViewportController, ModifierKeys.None);
            ctx.MoveTo(290, 206);
            // Hilighted MergePoint
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMerge01"), 0.1);

            // End
            ctx.WorkspaceController.CancelTool(tool, false);
            // Check Cleanup
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMerge02"), 0.1);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RotatePoint()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateRectangle(5, 5);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                // SelectSegment
                tool.Select(new []{0, 1, 2, 3}, new []{0, 1, 2, 3});
                ctx.ViewportController.MouseMove(new Point(275, 294));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseMove(new Point(234, 281));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotatePoint01"), 0.1);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotatePoint02"), 0.1);
                ctx.WorkspaceController.CancelTool(tool, false);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RotatePointClamp()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateRectangle(5, 5);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                // SelectSegment
                tool.Select(new []{0, 1, 2, 3}, new []{0, 1, 2, 3});
                ctx.ViewportController.MouseMove(new Point(275, 294));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseMove(new Point(234, 281));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotatePointClamp01"), 0.1);
                ctx.ViewportController.MouseMove(new Point(234, 281), ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotatePointClamp02"), 0.1);
                ctx.WorkspaceController.CancelTool(tool, false);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RotatePointMerge()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            SketchBuilder sb = new(sketch);
            sb.Circle(0, 0, 7.5);

            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                // SelectSegment
                tool.Select(new []{0, 1, 2, 3}, new []{0, 1, 2, 3});
                ctx.ViewportController.MouseMove(new Point(275, 294));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseMove(new Point(203, 235));

                // Hilighted MergePoint
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotatePointMerge01"), 0.1);

                // End
                ctx.WorkspaceController.CancelTool(tool, false);
                // Check Cleanup
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotatePointMerge02"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MovePointClamp()
        {            
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                // Select Point
                ctx.ClickAt(377, 122);
                // Move on progress
                ctx.MoveTo(390, 108);
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseMove(new Point(188, 131));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointClamp01"), 0.1);
                ctx.ViewportController.MouseMove(new Point(188, 131), ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointClamp02"), 0.1);
                ctx.ViewportController.MouseUp();

                // Cleanup
                tool.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void MovePointSnap()
        {            
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);
            ctx.EditorState.SnappingEnabled = true;
            ctx.EditorState.SnapToGridSelected = true;

            Assert.Multiple(() =>
            {
                // Select Point
                ctx.ClickAt(377, 122);
                // Move on progress
                ctx.MoveTo(390, 108);
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseMove(new Point(257, 83));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap01"), 0.1);
                // Move released
                ctx.ViewportController.MouseUp();
                ctx.ClickAt(1,1);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap02"), 0.1);

                // Cleanup
                tool.Stop();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SnapToGrid()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                var sketchEditor = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(sketchEditor);

                ctx.EditorState.SnappingEnabled = true;
                ctx.EditorState.SnapToVertexSelected = false;
                ctx.EditorState.SnapToEdgeSelected = false;
                ctx.Workspace.GridStep = 3.0;
                sketchEditor.StartSegmentCreation<SketchSegmentLineCreator>();

                // Do not snap to grid
                ctx.Workspace.GridType = Workspace.GridTypes.Rectangular;
                ctx.Workspace.GridRotation = 0;
                ctx.EditorState.SnapToGridSelected = false;
                ctx.MoveTo(60, 60);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToGrid01"), 0.1);

                // Snap to rect grid
                ctx.EditorState.SnapToGridSelected = true;
                ctx.MoveTo(60, 60);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToGrid11"), 0.1);
                ctx.Workspace.GridRotation = 20;
                ctx.MoveTo(162, 219);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToGrid12"), 0.1);

                // Snap to circ grid
                ctx.Workspace.GridType = Workspace.GridTypes.Circular;
                ctx.Workspace.GridDivisions = 8;
                ctx.Workspace.GridRotation = 0;
                ctx.EditorState.SnapToGridSelected = true;
                ctx.MoveTo(184, 185);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToGrid21"), 0.1);
                ctx.Workspace.GridRotation = 20;
                ctx.MoveTo(182, 187);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToGrid22"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeleteElements()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                var tool = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(tool);
                Assert.IsFalse(ctx.WorkspaceController.CanDelete());

                // Delete Point
                ctx.SelectAt(411, 88);
                Assert.IsTrue(ctx.WorkspaceController.CanDelete());
                ctx.WorkspaceController.Delete();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeleteElements01"), 0.1);

                // Delete Segment
                ctx.SelectAt(90, 230);
                Assert.IsTrue(ctx.WorkspaceController.CanDelete());
                ctx.WorkspaceController.Delete();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeleteElements02"), 0.1);

                // Undo twice
                ctx.UndoHandler.DoUndo(2);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DeleteElements03"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeleteSegmentWithConstrainedPoint()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Circle, true);
            ctx.ViewportController.ZoomFitAll();
            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            // Create Constraint
            ctx.SelectAt(250, 250);
            Assert.IsTrue(tool.CanCreateConstraint<SketchConstraintFixed>());
            tool.CreateConstraint<SketchConstraintFixed>();

            // Delete Segment
            ctx.SelectAt(250, 88);
            Assert.AreEqual(1, tool.SelectedSegments.Count);
            Assert.IsTrue(tool.CanDelete());
            tool.Delete();
            Assert.AreEqual(0, sketch.Segments.Count);
            Assert.AreEqual(0, sketch.Points.Count);
            Assert.AreEqual(0, sketch.Constraints.Count);
            tool.StopTool();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DeletePointOfSegmentWithConstrainedPoint()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Circle, true);
            ctx.ViewportController.ZoomFitAll();
            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            // Create Constraint
            ctx.SelectAt(250, 250);
            Assert.IsTrue(tool.CanCreateConstraint<SketchConstraintFixed>());
            tool.CreateConstraint<SketchConstraintFixed>();

            // Delete Segment
            ctx.SelectAt(364, 135);
            Assert.AreEqual(1, tool.SelectedPoints.Count);
            Assert.IsTrue(tool.CanDelete());
            tool.Delete();
            Assert.AreEqual(0, sketch.Segments.Count);
            Assert.AreEqual(0, sketch.Points.Count);
            Assert.AreEqual(0, sketch.Constraints.Count);
            tool.StopTool();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DuplicateElements()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);
            Assert.IsFalse(ctx.WorkspaceController.CanDuplicate());

            // Select 
            ctx.SelectAt(254, 88);
            ctx.SelectAt(411, 236, ModifierKeys.Shift);
            ctx.SelectAt(387, 115, ModifierKeys.Shift);
            Assume.That(tool.SelectedSegments.Count, Is.EqualTo(2));

            // Do it
            Assert.Multiple(() =>
            {
                Assert.IsTrue(ctx.WorkspaceController.CanDuplicate());
                ctx.WorkspaceController.Duplicate();

                // Check results
                Assert.AreEqual(7, sketch.Points.Count);
                Assert.AreEqual(6, sketch.Segments.Count);
                Assert.AreEqual(5, sketch.Constraints.Count);
                Assert.AreEqual(3, tool.SelectedPoints.Count);
                Assert.AreEqual(2, tool.SelectedSegments.Count);
                Assert.That(tool.SelectedPoints.SequenceEqual(new[] {4, 5, 6}));
                Assert.That(tool.SelectedSegmentIndices.SequenceEqual(new[] {4, 5}));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DuplicateElements01"), 0.1);

                // Try move
                ctx.MoveTo(328, 170);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(350, 150);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DuplicateElements02"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void CopyToAndPasteFromClipboard()
        {
            var ctx = Context.Current;
            var clipboard = TestClipboard.Init();

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);
            Assert.IsFalse(ctx.WorkspaceController.CanCopyToClipboard());

            // Select 
            ctx.SelectAt(254, 88);
            ctx.SelectAt(411, 236, ModifierKeys.Shift);
            ctx.SelectAt(387, 115, ModifierKeys.Shift);
            Assume.That(tool.SelectedSegments.Count, Is.EqualTo(2));

            // Do it
            Assert.IsTrue(ctx.WorkspaceController.CanCopyToClipboard());
            ctx.WorkspaceController.CopyToClipboard();
            Assert.That(clipboard.ContainsData("Macad.SketchContent.1"));
            ctx.WorkspaceController.PasteFromClipboard();

            Assert.AreEqual(7, sketch.Points.Count);
            Assert.AreEqual(6, sketch.Segments.Count);
            Assert.AreEqual(5, sketch.Constraints.Count);
            Assert.AreEqual(3, tool.SelectedPoints.Count);
            Assert.AreEqual(2, tool.SelectedSegments.Count);
            Assert.That(tool.SelectedPoints.SequenceEqual(new[] {4, 5, 6}));
            Assert.That(tool.SelectedSegmentIndices.SequenceEqual(new[] {4, 5}));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DuplicateElements01"), 0.1);

            // Try move
            ctx.MoveTo(328, 170);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(350, 150);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DuplicateElements02"), 0.1);
        }
        
        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void CutToAndPasteFromClipboard()
        {
            var ctx = Context.Current;
            var clipboard = TestClipboard.Init();

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);
            Assert.IsFalse(ctx.WorkspaceController.CanCopyToClipboard());
            Assert.IsFalse(ctx.WorkspaceController.CanDelete());

            // Select 
            ctx.SelectAt(254, 88);
            ctx.SelectAt(411, 236, ModifierKeys.Shift);
            ctx.SelectAt(387, 115, ModifierKeys.Shift);
            Assume.That(tool.SelectedSegments.Count, Is.EqualTo(2));

            // Do it
            Assert.IsTrue(ctx.WorkspaceController.CanCopyToClipboard());
            Assert.IsTrue(ctx.WorkspaceController.CanDelete());
            ctx.WorkspaceController.CopyToClipboard();
            ctx.WorkspaceController.Delete();
            Assert.That(clipboard.ContainsData("Macad.SketchContent.1"));
            ctx.WorkspaceController.PasteFromClipboard();

            Assert.AreEqual(6, sketch.Points.Count);
            Assert.AreEqual(4, sketch.Segments.Count);
            Assert.AreEqual(2, sketch.Constraints.Count);
            Assert.AreEqual(3, tool.SelectedPoints.Count);
            Assert.AreEqual(2, tool.SelectedSegments.Count);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void RubberbandSelection()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            ctx.MoveTo(170, 50);
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
            ctx.MoveTo(450, 300);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection01"), 0.1);
            Assert.AreEqual(4, tool.SelectedPoints.Count);
            Assert.AreEqual(1, tool.SelectedSegments.Count);

            // Cleanup
            tool.Stop();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RestoreWorkingContextAfterRotation()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            var sketch = sketchEditTool.Sketch;

            Assert.Multiple(() =>
            {
                // Create Circle
                sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                ctx.ClickAt(250, 250); // Center point
                ctx.ClickAt(100, 250); // Rim point
                ctx.MoveTo(50, 50); // Move crsr out of the way
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext01"), 0.1);

                // Leave editor
                sketchEditTool.Stop();
                // Rotate
                sketch.Body.Rotation = new Quaternion(0.0, 90.0.ToRad(), 0.0);
                sketch.Invalidate();
                // Restart Editor
                ctx.WorkspaceController.StartTool(new SketchEditorTool(sketch));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext02"), 0.1);

                // Leave editor
                sketchEditTool.Stop();
                // Rotate
                sketch.Body.Rotation = new Quaternion(45.0.ToRad(), 45.0.ToRad(), 45.0.ToRad());
                sketch.Invalidate();
                // Restart Editor
                ctx.WorkspaceController.StartTool(new SketchEditorTool(sketch));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext03"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void RestoreWorkingContextTwist()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            var sketch = sketchEditTool.Sketch;

            // Create Circle
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(100, 250); // Rim point
            ctx.MoveTo(50, 50); // Move crsr out of the way
            sketchEditTool.RotateView(90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext10"), 0.1);

            // Restart Editor
            sketchEditTool.Stop();
            ctx.WorkspaceController.StartTool(new SketchEditorTool(sketch));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext11"), 0.1);
        }

        //--------------------------------------------------------------------------------------------------
                
        [Test]
        public void RestoreWorkingContextWithTopView()
        {
            var ctx = Context.Current;
            var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            viewportParameterSet.ShowViewCube = true;

            // Create sketch
            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            var sketch = sketchEditTool.Sketch;

            // Fill in anything
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(100, 250); // Rim point

            // Exit editor
            sketchEditTool.Stop();

            // Select predefined topview
            ctx.WorkspaceController.ActiveViewControlller.SetPredefinedView(ViewportController.PredefinedViews.Top);
            Thread.Sleep(500);
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
//            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext22"), 0.1);
            
            // Enter editor
            sketchEditTool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(sketchEditTool);

            // move the viewport
            ctx.MoveTo(250, 250);
            ctx.ViewportController.MouseMove(new Point(150, 250), ModifierKeys.None, ViewportController.MouseMoveMode.Panning);

            // Leave editor
            sketchEditTool.Stop();

            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContext21"), 0.1);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ClipPlane()
        {
            var ctx = Context.Current;
            
            // The imprint we want to edit
            var imprint = TestGeomGenerator.CreateImprint();
            var sketch = imprint.Sketch;
            imprint.Make(Shape.MakeFlags.None);

            // A box is in the view, which shall be clipped
            var box = TestGeomGenerator.CreateBox().Body;
            box.Position = new Pnt(0, 0, 15);

            ctx.WorkspaceController.StartTool(new SketchEditorTool(sketch));
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ClipPlane01"), 0.1);

            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ClipPlane02"), 0.1);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ToggleClipPlane()
        {
            var ctx = Context.Current;
            
            // The imprint we want to edit
            var imprint = TestGeomGenerator.CreateImprint();
            var sketch = imprint.Sketch;
            imprint.Make(Shape.MakeFlags.None);

            // A box is in the view, which shall be clipped
            var box = TestGeomGenerator.CreateBox().Body;
            box.Position = new Pnt(0, 0, 15);

            Assert.Multiple(() =>
            {
                var sketchEditTool = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(sketchEditTool);
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToggleClipPlane01"), 0.1);

                sketchEditTool.EnableClipPlane(false);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToggleClipPlane02"), 0.1);

                sketchEditTool.EnableClipPlane(true);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToggleClipPlane01"), 0.1);

                // Setting saved?
                sketchEditTool.EnableClipPlane(false);
                ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
                sketchEditTool = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(sketchEditTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToggleClipPlane02"), 0.1);

                sketchEditTool.EnableClipPlane(true);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ToggleClipPlane01"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void StopCurrentActionOnCreateSegment()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);

            // Create Segment
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.ClickAt(100, 100); // Create Point 1
            ctx.ClickAt(250, 250); // Create Point 2

            ctx.ClickAt(250, 250); // Select Point, Move Action started
            Assume.That(ctx.WorkspaceController.CurrentToolAction is MoveSketchPointAction);

            // Create another Segment
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            Assert.IsFalse(ctx.WorkspaceController.CurrentToolAction is MoveSketchPointAction);
            ctx.ClickAt(300, 300); // Create Point 1
            ctx.ClickAt(450, 450); // Create Point 2
            Assert.IsTrue(ctx.WorkspaceController.CurrentToolAction is MoveSketchPointAction);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectPointAfterMove()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var tool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(tool);

            // Move point
            ctx.ClickAt(377, 122);
            Assert.AreEqual(1, tool.SelectedPoints.Count);
            ctx.MoveTo(392, 104);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(387, 141);
            ctx.ViewportController.MouseUp();

            // Return to idle
            ctx.ClickAt(1, 1);
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0, tool.SelectedPoints.Count);

            // Try to select point
            ctx.ClickAt(371, 160);
            Assert.AreEqual(1, tool.SelectedPoints.Count);

            // Cleanup
            tool.Stop();
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ConstraintsOverClipPlane()
        {
            var ctx = Context.Current;
            
            // The imprint we want to edit
            var imprint = TestGeomGenerator.CreateImprint();
            var sketch = imprint.Sketch;
            imprint.Make(Shape.MakeFlags.None);
            sketch.AddConstraint(new SketchConstraintHorizontalDistance(1, sketch.Points[1].X));

            ctx.WorkspaceController.StartTool(new SketchEditorTool(sketch));
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ConstraintsOverClipPlane01"), 0.1);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RecenterGrid()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                var sketchEditor = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(sketchEditor);

                Assert.IsTrue(SketchCommands.RecenterGrid.CanExecute());
                SketchCommands.RecenterGrid.Execute();
                Assert.IsInstanceOf<RecenterGridSketchTool>(sketchEditor.CurrentTool);

                ctx.MoveTo(200, 200);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGrid01"), 0.1);

                ctx.ClickAt(200, 200);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGrid02"), 0.1);

                // Elements selectable again
                ctx.ClickAt(288, 143);
                Assert.AreEqual(1, sketchEditor.SelectedSegments.Count);
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RecenterGridSnapping()
        {
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                var sketchEditor = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(sketchEditor);

                ctx.Workspace.GridStep = 3.0;
                ctx.EditorState.SnappingEnabled = true;
                var savedWorkingPlane = ctx.WorkspaceController.Workspace.WorkingPlane;

                // Snap to grid
                ctx.EditorState.SnapToVertexSelected = false;
                ctx.EditorState.SnapToGridSelected = true;
                SketchCommands.RecenterGrid.Execute();
                ctx.MoveTo(61, 61);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping01"), 0.1);
                ctx.ClickAt(61, 61);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping02"), 0.1);
                ctx.WorkspaceController.Workspace.WorkingPlane = savedWorkingPlane;

                // Snap to Vertex
                ctx.EditorState.SnapToGridSelected = false;
                ctx.EditorState.SnapToVertexSelected = true;
                SketchCommands.RecenterGrid.Execute();
                ctx.MoveTo(409, 93);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping11"), 0.1);
                ctx.ClickAt(409, 93);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping12"), 0.1);
                // Snap to origin
                SketchCommands.RecenterGrid.Execute();
                ctx.MoveTo(252, 252);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping13"), 0.1);
                ctx.ClickAt(252, 252);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping14"), 0.1);
                ctx.EditorState.SnapToVertexSelected = false;
                ctx.WorkspaceController.Workspace.WorkingPlane = savedWorkingPlane;
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RecenterGridSnapRef()
        {
            // Check that RecenterGrid also updates the reference grid for snapping
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var sketchEditor = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(sketchEditor);

            Assert.IsTrue(SketchCommands.RecenterGrid.CanExecute());
            SketchCommands.RecenterGrid.Execute();
            Assert.IsInstanceOf<RecenterGridSketchTool>(sketchEditor.CurrentTool);

            ctx.ClickAt(200, 200);

            SketchCommands.CreateSegment.Execute(SketchCommands.Segments.Line);
            ctx.EditorState.SnappingEnabled = true;
            ctx.EditorState.SnapToGridSelected = true;
            ctx.MoveTo(44, 44);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapRef01"), 0.1);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RecenterGridSegmentTools()
        {
            // Check that segment creation tools also respect the recentered grid
            var ctx = Context.Current;

            var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
            var body = TestGeomGenerator.CreateBody(sketch);
            ctx.ViewportController.ZoomFitAll();

            var sketchEditor = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(sketchEditor);

            Assert.IsTrue(SketchCommands.RecenterGrid.CanExecute());
            SketchCommands.RecenterGrid.Execute();
            Assert.IsInstanceOf<RecenterGridSketchTool>(sketchEditor.CurrentTool);
            ctx.ClickAt(200, 200);
            
            Assert.Multiple(() =>
            {
                sketchEditor.StartSegmentCreation<SketchSegmentArcCenterCreator>();
                ctx.ClickAt(120, 120); // Center point
                ctx.MoveTo(120, 160);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSegmentTools01"), 0.1);
                ctx.ClickAt(120, 160); // Edge point 1
                ctx.ClickAt(160, 120); // Edge point 2
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSegmentTools03"), 0.1);
            });
        }

        //--------------------------------------------------------------------------------------------------

    }
}