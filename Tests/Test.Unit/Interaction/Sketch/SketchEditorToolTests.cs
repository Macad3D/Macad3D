using System.IO;
using System.Linq;
using System.Threading;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sketch;

[TestFixture]
public class SketchEditorToolTests
{
    const string _BasePath = @"Interaction\Sketch\EditorTool";

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.Workspace.GridEnabled = true;
        // Set background color to black to better see half-transparent gizmo XY plane
        Context.Current.ViewportController.V3dView.SetBackgroundColor(Color.Black.ToQuantityColor());
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
            ctx.ViewportController.MouseMove(new Point(412, 84));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePoint06"), 0.1);
            // Move on progress
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(407, 121));
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
        Assert.That(ctx.WorkspaceController.CurrentTool.CurrentAction is MoveSketchPointAction);
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
    public void MovePointMergeMaxPoints()
    {
        var ctx = Context.Current;
        ctx.Parameters.Get<SketchEditorParameterSet>().MaximumPointCountSnapping = 5;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        
        Assert.Multiple(() =>
        {
            // Select all
            tool.Select(sketch.Points.Keys.Take(3), null);
            // Move on progress
            ctx.MoveTo(350, 161);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(414, 358);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMergeMaxPoints01"), 0.1);

            ctx.Parameters.Get<SketchEditorParameterSet>().MaximumPointCountSnapping = 1;
            ctx.MoveTo(414, 358);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMergeMaxPoints02"), 0.1);

            // Move released
            ctx.ViewportController.MouseUp();
            tool.Stop();
        });
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
        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(1, 1, 0);

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

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
            ctx.MoveTo(410, 90);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(306, 48); // Vertex
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Vertex));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap01"), 0.1);
            ctx.MoveTo(305, 130); // Edge point
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Edge));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap02"), 0.1);
            ctx.MoveTo(142, 219); // Grid
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Grid));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap03"), 0.1);
            ctx.MoveTo(362, 138); // Sketch point
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Vertex));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap04"), 0.1);
            ctx.MoveTo(378, 159); // Sketch segment
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Edge));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap05"), 0.1);

            // Move released
            ctx.MoveTo(362, 138);
            ctx.ViewportController.MouseUp();
            ctx.ClickAt(1,1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnap99"), 0.1);

            // Cleanup
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MovePointSnapNotItself()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();
        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        tool.StartSegmentCreation<SketchSegmentRectangleCreator>();
        ctx.ClickAt(150, 150); // LeftTop point
        ctx.ClickAt(350, 350); // BottomRight point
        
        Assert.Multiple(() =>
        {
            // Move on progress
            ctx.MoveTo(290, 210);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(290, 220);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.None));
            ctx.MoveTo(290, 267);
            Assert.That(ctx.EditorState.SnapInfo.Mode, Is.EqualTo(SnapModes.Edge));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointSnapNotItself01"), 0.1);

            // Cleanup
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MovePointMaxSnapPoints()
    {            
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Workspace.GridStep = 3.0;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 20;
        ctx.Parameters.Get<SketchEditorParameterSet>().MaximumPointCountSnapping = 5;

        ctx.ViewportController.ZoomFitAll();
        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        
        Assert.Multiple(() =>
        {
            // Select all
            tool.Select(sketch.Points.Keys, null);
            // Move on progress
            ctx.MoveTo(390, 187);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(340, 190);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMaxSnapPoints01"), 0.1);
            ctx.MoveTo(350, 170);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMaxSnapPoints02"), 0.1);

            ctx.Parameters.Get<SketchEditorParameterSet>().MaximumPointCountSnapping = 1;
            ctx.MoveTo(340, 190);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMaxSnapPoints01"), 0.1);
            ctx.MoveTo(350, 170);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MovePointMaxSnapPoints03"), 0.1);

            // Move released
            ctx.ViewportController.MouseUp();
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Plane selection should be higher prio than edge selection.")]
    [Ignore("OCCT 0030484")]
    public void SegmentCoveredByPlane()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Hilite Point
            ctx.ClickAt(377, 122);
            // Select Point, move gizmo shown
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(392, 104));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SegmentCoveredByPlane"), 0.1);

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

            ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 5;
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
            ctx.MoveTo(184, 180);
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
        Assert.That(tool.SelectedSegments.Count, Is.EqualTo(2));

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
    public void DuplicateNoPoints()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        Assert.IsFalse(ctx.WorkspaceController.CanDuplicate());


        // Do it
        Assert.Multiple(() =>
        {
            // Select Point
            ctx.SelectAt(89, 412);
            Assert.AreEqual(1, tool.SelectedPoints.Count);
            Assert.IsFalse(ctx.WorkspaceController.CanDuplicate());

            ctx.SelectAt(411, 236, ModifierKeys.Shift);
            Assert.AreEqual(1, tool.SelectedSegments.Count);
            Assert.IsTrue(ctx.WorkspaceController.CanDuplicate());
            ctx.WorkspaceController.Duplicate();

            // Check results
            Assert.AreEqual(6, sketch.Points.Count);
            Assert.AreEqual(5, sketch.Segments.Count);
            Assert.AreEqual(4, sketch.Constraints.Count);
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DuplicateNoConstraints()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        Assert.IsFalse(ctx.WorkspaceController.CanDuplicate());


        // Do it
        Assert.Multiple(() =>
        {
            // Select Point
            ctx.SelectAt(461, 254);
            Assert.AreEqual(1, tool.SelectedConstraints.Count);
            Assert.IsFalse(ctx.WorkspaceController.CanDuplicate());

            ctx.SelectAt(411, 236, ModifierKeys.Shift);
            Assert.AreEqual(1, tool.SelectedSegments.Count);
            Assert.IsTrue(ctx.WorkspaceController.CanDuplicate());
            ctx.WorkspaceController.Duplicate();

            // Check results
            Assert.AreEqual(6, sketch.Points.Count);
            Assert.AreEqual(5, sketch.Segments.Count);
            Assert.AreEqual(4, sketch.Constraints.Count);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyToAndPasteFromClipboard()
    {
        var ctx = Context.Current;

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
        Assert.That(tool.SelectedSegments.Count, Is.EqualTo(2));

        // Do it
        Assert.IsTrue(ctx.WorkspaceController.CanCopyToClipboard());
        ctx.WorkspaceController.CopyToClipboard();
        Assert.That(ctx.Clipboard.ContainsData("Macad.SketchContent.1"));
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
        Assert.That(tool.SelectedSegments.Count, Is.EqualTo(2));

        // Do it
        Assert.IsTrue(ctx.WorkspaceController.CanCopyToClipboard());
        Assert.IsTrue(ctx.WorkspaceController.CanDelete());
        ctx.WorkspaceController.CopyToClipboard();
        ctx.WorkspaceController.Delete();
        Assert.That(ctx.Clipboard.ContainsData("Macad.SketchContent.1"));
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

    [Test] public void RestoreWorkingContextAfterMove()
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
        ctx.ClickAt(50, 50); // Move crsr out of the way
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContextMove01"), 0.1);

        // Leave editor
        sketchEditTool.Stop();
        // Move
        sketch.Body.Position = new Pnt(100.0, 0.0, 0.0);
        sketch.Invalidate();
        // Restart Editor
        ctx.WorkspaceController.StartTool(new SketchEditorTool(sketch));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RestoreWorkingContextMove01"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RotateView()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);
        var sketch = sketchEditTool.Sketch;
        ctx.WorkspaceController.Invalidate(forceRedraw: true);

        Assert.Multiple(() =>
        {
            // Create Circle
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(375, 125); // Center point
            ctx.ClickAt(375, 250); // Rim point
            ctx.MoveTo(50, 50); // Move crsr out of the way
            ctx.WorkspaceController.Invalidate(forceRedraw: true);

            sketchEditTool.RotateView(90.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateView01"), 0.1);

            sketchEditTool.RotateView(90.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateView02"), 0.1);

            sketchEditTool.RotateView(90.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateView03"), 0.1);

            sketchEditTool.RotateView(-270.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateView04"), 0.1);

            sketchEditTool.RotateView(-90.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateView05"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LockViewRotation()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.IsNotNull(sketchEditTool);

        Assert.Multiple(() =>
        {
            Assert.DoesNotThrow(() => ctx.ViewportController.SetPredefinedView(ViewportController.PredefinedViews.Top));
            Assert.IsFalse(WorkspaceCommands.SetPredefinedView.CanExecute(ViewportController.PredefinedViews.Top));

            sketchEditTool.Stop();
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            Assert.IsTrue(WorkspaceCommands.SetPredefinedView.CanExecute(ViewportController.PredefinedViews.Top));
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
        Assert.That(ctx.WorkspaceController.CurrentTool.CurrentAction is MoveSketchPointAction);

        // Create another Segment
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        Assert.IsFalse(ctx.WorkspaceController.CurrentTool.CurrentAction is MoveSketchPointAction);
        ctx.ClickAt(300, 300); // Create Point 1
        ctx.ClickAt(450, 450); // Create Point 2
        Assert.IsTrue(ctx.WorkspaceController.CurrentTool.CurrentAction is MoveSketchPointAction);
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
        ctx.MoveTo(412, 84);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(407, 121);
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
            ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 5;
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
            ctx.MoveTo(409, 92);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RecenterGridSnapping11"), 0.1);
            ctx.ClickAt(409, 92);
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
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 25;
        ctx.MoveTo(65, 65);
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

    [Test]
    public void UpdateTransformation()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            body.Position = new Pnt(2, 2, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateTransformation01"), 0.1);

            // Cleanup
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdateTransformationKeepSelection()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle);
        var body = TestGeomGenerator.CreateBody(sketch);
        ctx.ViewportController.ZoomFitAll();

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            tool.Select([0, 1], [0]);
            body.Position = new Pnt(2, 2, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateTransformation02"), 0.1);

            Assert.That(tool.SelectedPoints, Is.EqualTo(new[] { 0, 1 }));
            Assert.That(tool.SelectedSegmentIndices, Is.EqualTo(new[] { 0 }));

            // Cleanup
            tool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------
}