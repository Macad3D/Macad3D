using System.Drawing;
using System.IO;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Multiply;

[TestFixture]
public class LinearArrayToolTests
{
    const string _BasePath = @"Interaction\Multiply\LinearArray";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.ViewportController.V3dView.SetBackgroundColor(Macad.Common.Color.Black.ToQuantityColor());
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSketch()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(sketch.Body);

        var tool = new CreateLinearArrayTool(sketch.Body);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            Assert.IsInstanceOf<LinearArray>(sketch.Body.Shape);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSketch01"));
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CreateFromSolid()
    {
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(imprint.Body);

        var tool = new CreateLinearArrayTool(imprint.Body);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            var linearArray = imprint.Body.Shape as LinearArray;
            Assert.IsNotNull(linearArray);
            Assert.AreEqual(tool, ctx.WorkspaceController.CurrentTool);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid01"));

            ctx.MoveTo(209, 103);
            Assert.AreEqual(LinearArray.PlaneType.ZX, linearArray.Plane);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid02"));

            ctx.MoveTo(366, 147);
            Assert.AreEqual(LinearArray.PlaneType.YZ, linearArray.Plane);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid03"));

            ctx.ClickAt(180, 223);
            Assert.AreEqual(LinearArray.PlaneType.XY, linearArray.Plane);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid04"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(array);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void EditorIdleSketch()
    {
        var ctx = Context.Current;
        var array = _CreateSketchArray();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(array);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdleSketch01"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorStartStopTools()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(array);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            array.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Combinatorial]
    public void LiveDistance([Values(LinearArray.PlaneType.XY, LinearArray.PlaneType.YZ, LinearArray.PlaneType.ZX)] LinearArray.PlaneType plane,
                             [Values(0,1)] int direction)
    {
        Point[] coords = null;
        switch (plane)
        {
            case LinearArray.PlaneType.XY:
                coords = direction == 0 ? new[] { new Point(114, 330), new Point(60, 360) }
                                        : new[] { new Point(388, 330), new Point(427, 357) };
                break;
            case LinearArray.PlaneType.ZX:
                coords = direction == 0 ? new[] { new Point(251, 167), new Point(249, 104) }
                                        : new[] { new Point(81, 350), new Point(38, 373) };
                break;
            case LinearArray.PlaneType.YZ:
                coords = direction == 0 ? new[] { new Point(420, 350), new Point(470, 380) }
                                        : new[] { new Point(250, 162), new Point(248, 106) };
                break;
        }

        var ctx = Context.Current;
        var array = _CreateSolidArray();
        array.Plane = plane;
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();

        var oldDistance = direction == 0 ? array.Distance1 : array.Distance2;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(coords[0].X, coords[0].Y);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveDistance{plane}{direction}1"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(coords[1].X, coords[1].Y);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveDistance{plane}{direction}2"));
            
            ctx.ViewportController.MouseUp();
            Assert.Less(oldDistance, direction == 0 ? array.Distance1 : array.Distance2);

            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            ctx.MoveTo(1, 1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveDistance{plane}{direction}9"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceClamp()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(388, 330);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(427, 357, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceClamp01"));
            Assert.AreEqual(9.0, array.Distance2);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceUniform()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(388, 330);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(427, 357, ModifierKeys.Shift);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceUniform01"));
            Assert.AreEqual(array.Distance1, array.Distance2);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceUndo()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        ctx.WorkspaceController.StartEditor(array);
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        var oldDistance = array.Distance2;
        ctx.ViewportController.ZoomFitAll();
        ctx.MoveTo(388, 330);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(427, 357);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();

        Assert.Greater(array.Distance2, oldDistance);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldDistance, array.Distance2);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceRotated()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        array.Rotation = 30;
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceRotated01"));
            ctx.MoveTo(432, 280);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(468, 285);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceRotated02"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceAlignmentCenter()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        array.Alignment2 = LinearArray.AlignmentMode.Center;
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceAlignmentCenter01"));
            ctx.MoveTo(390, 330);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(460, 372);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceAlignmentCenter02"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceAlignmentLast()
    {
        var ctx = Context.Current;
        var array = _CreateSolidArray();
        array.Alignment2 = LinearArray.AlignmentMode.Last;
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceAlignmentLast01"));
            ctx.MoveTo(109, 168);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(30, 114);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceAlignmentLast02"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceSketchTransformedPlane()
    {
        var ctx = Context.Current;
        var section = TestGeomGenerator.CreateCrossSection();
        var linearArray = LinearArray.Create(section.Body);
        ctx.WorkspaceController.StartEditor(linearArray);

        var oldDistance = linearArray.Distance2;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(299, 377);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketchTransformedPlane01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(319, 430);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketchTransformedPlane02"));
            Assert.Greater(linearArray.Distance2, oldDistance);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(40.0, 5.0, 0);
        var array = _CreateSolidArray();
        ctx.WorkspaceController.StartEditor(array);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(191, 294);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(135, 365);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSnap01"));
            Assert.AreEqual(1.0, array.Distance2);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    LinearArray _CreateSolidArray()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var linearArray = LinearArray.Create(imprint.Body);
        return linearArray;
    }

    //--------------------------------------------------------------------------------------------------

    LinearArray _CreateSketchArray()
    {
        var sketch = TestSketchGenerator.CreateSketch(createBody:true);
        var linearArray = LinearArray.Create(sketch.Body);
        return linearArray;
    }

}