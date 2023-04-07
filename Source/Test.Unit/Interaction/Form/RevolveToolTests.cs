using System;
using System.IO;
using System.Windows.Input;
using Macad.Common;
using Macad.Interaction;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Form;

[TestFixture]
public class RevolveToolTests
{
    const string _BasePath = @"Interaction\Form\Revolve";

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
        var revolve = TestGeomGenerator.CreateRevolve();
        ctx.WorkspaceController.StartEditor(revolve);
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
        var revolve = TestGeomGenerator.CreateRevolve();
        ctx.WorkspaceController.StartEditor(revolve);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            revolve.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle03"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle04"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(347, 328, 305, 350, "X", TestName = "LiveOffsetX")]
    [TestCase(380, 326, 390, 335, "Y", TestName = "LiveOffsetY")]
    [TestCase(367, 292, 362, 237, "Z", TestName = "LiveOffsetZ")]
    public void LiveOffset(int x1, int y1, int x2, int y2, string axis)
    {
        var ctx = Context.Current;

        var revolve = TestGeomGenerator.CreateRevolve();
        ctx.WorkspaceController.StartEditor(revolve);

        var oldOffset = revolve.Offset.Magnitude();
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(x1, y1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffset{axis}01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(x2, y2);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffset{axis}02"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffset{axis}03"));
            Assert.Greater(revolve.Offset.Magnitude(), oldOffset);
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffset{axis}99"));
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    [TestCase(422, 267, 422, 304, "X", TestName = "LiveOffsetRotatedX")]
    [TestCase(449, 249, 493, 251, "Y", TestName = "LiveOffsetRotatedY")]
    [TestCase(423, 222, 422, 178, "Z", TestName = "LiveOffsetRotatedZ")]
    public void LiveOffsetRotated(int x1, int y1, int x2, int y2, string axis)
    {
        var ctx = Context.Current;

        var revolve = TestGeomGenerator.CreateRevolve();
        revolve.Body.Rotation = new Quaternion(45.0.ToRad(), 0, 0);
        ctx.WorkspaceController.StartEditor(revolve);

        var oldOffset = revolve.Offset.Magnitude();
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(x1, y1);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(x2, y2);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffsetRotated{axis}03"));
            Assert.Greater(revolve.Offset.Magnitude(), oldOffset);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    [TestCase(347, 328, 305, 350, "X", TestName = "LiveOffsetClampX")]
    [TestCase(380, 326, 390, 335, "Y", TestName = "LiveOffsetClampY")]
    [TestCase(367, 292, 362, 237, "Z", TestName = "LiveOffsetClampZ")]
    public void LiveOffsetClamp(int x1, int y1, int x2, int y2, string axis)
    {
        var ctx = Context.Current;

        var revolve = TestGeomGenerator.CreateRevolve();
        ctx.WorkspaceController.StartEditor(revolve);
        ctx.ViewportController.ZoomFitAll();
        
        var oldOffset = revolve.Offset;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(x1, y1);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(x2, y2);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffsetClamp{axis}Clamp01"));
            ctx.MoveTo(x2, y2, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"LiveOffsetClamp{axis}Clamp02"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.0, Math.IEEERemainder(revolve.Offset.Subtracted(oldOffset).Magnitude().Abs(), 10.0), 0.00001);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
               
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(347, 328, 305, 350, "X", TestName = "LiveOffsetX")]
    [TestCase(380, 326, 390, 335, "Y", TestName = "LiveOffsetY")]
    [TestCase(367, 292, 362, 237, "Z", TestName = "LiveOffsetZ")]
    public void LiveOffsetUndo(int x1, int y1, int x2, int y2, string axis)
    {
        var ctx = Context.Current;

        var revolve = TestGeomGenerator.CreateRevolve();
        ctx.WorkspaceController.StartEditor(revolve);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var oldOffset = revolve.Offset;

        ctx.MoveTo(x1, y1);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(x2, y2);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();
            
        Assert.AreNotEqual(oldOffset, revolve.Offset);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldOffset, revolve.Offset);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }
               
    //--------------------------------------------------------------------------------------------------

}