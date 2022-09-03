using System.IO;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify;

[TestFixture]
public class OffsetTests
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

        var editor = Editor.CreateEditor(offset);
        editor.Start();

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
                        
            // Cleanup
            editor.Stop();
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

        var editor = Editor.CreateEditor(offset);
        editor.Start();

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

            // Cleanup
            editor.Stop();
        });
    }
            
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void LiveDistanceSketch()
    {
        var ctx = Context.Current;
        var box = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.MultiCircle, true);
        var offset = Offset.Create(box.Body);

        var editor = Editor.CreateEditor(offset);
        editor.Start();

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
            editor.Stop();
        });
    }
            
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceCorner()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);

        var editor = Editor.CreateEditor(offset);
        editor.Start();

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
            editor.Stop();
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

        var editor = Editor.CreateEditor(offset);
        editor.Start();

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
            editor.Stop();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveDistanceUndo()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        var offset = Offset.Create(box.Body);

        var editor = Editor.CreateEditor(offset);
        editor.Start();
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

}