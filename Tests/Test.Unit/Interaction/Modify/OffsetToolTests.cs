using System.IO;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify;

[TestFixture]
public class OffsetToolTests
{
    const string _BasePath = @"Interaction\Modify\Offset";

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
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);
        ctx.WorkspaceController.StartEditor(offset);
        ctx.ViewportController.ZoomFitAll();

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
    public void EditorStartStopTools()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);
        ctx.WorkspaceController.StartEditor(offset);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            offset.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle04"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistance()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(352, 309);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistance01"));
                        
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(327, 297);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistance02"));
        
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistance03"));
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
            
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void LiveDistanceSketch()
    {
        var ctx = Context.Current;
        var box = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle, true);
        var offset = Offset.Create(box.Body);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(364, 316);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketch01"));
                        
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(343, 305);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketch02"));
        
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketch03"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
            
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceCorner()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(450, 138);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceCorner01"));
                        
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(478, 123);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceCorner02"));
        
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceCorner03"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceRotated()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);
        offset.Body.Rotation = new Quaternion(35.0.ToRad(), 0, 0);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(385, 103);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceRotated01"));
                        
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(415, 74);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceRotated02"));
        
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceRotated03"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceUndo()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        ctx.ViewportController.ZoomFitAll();
        ctx.MoveTo(352, 309);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(327, 297);
        ctx.ViewportController.MouseUp();

        Assert.AreNotEqual(1.0, offset.Distance);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(1.0, offset.Distance);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceSketchTransformedPlane()
    {
        var ctx = Context.Current;
        var section = TestGeomGenerator.CreateCrossSection();
        var offset = Offset.Create(section.Body);
        ctx.WorkspaceController.StartEditor(offset);

        var oldDistance = offset.Distance;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(289, 186);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketchTransformedPlane01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(314, 160);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketchTransformedPlane02"));
            Assert.Greater(offset.Distance, oldDistance);

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
        ctx.EditorState.SnapToEdgeSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.DimensionZ = 12.0;
        box.Body.Position = new Pnt(20, 0, 0);
        var box2 = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box2.Body);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(350, 123);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(194, 206);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSnap01"));

            ctx.ViewportController.MouseUp();
            Assert.That(offset.Distance, Is.EqualTo(2.0).Within(1e-6));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceSketchSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(25, 5, 0);
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle, true);
        var offset = Offset.Create(sketch.Body);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(280, 237);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(251, 383);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketchSnap01"));

            ctx.ViewportController.MouseUp();
            Assert.That(offset.Distance, Is.EqualTo(20.0).Within(1e-6));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceSketchSnapRotated()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(25, 5, 0);
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle, true);
        var offset = Offset.Create(sketch.Body);
        offset.Body.Rotation = new Quaternion(0.0f, 0.2f, 0.0f);
        ctx.WorkspaceController.StartEditor(offset);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(279, 240);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(250, 377);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveDistanceSketchSnapRotated01"));

            ctx.ViewportController.MouseUp();
            Assert.That(offset.Distance, Is.EqualTo(19.5).Within(1e-2));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
}