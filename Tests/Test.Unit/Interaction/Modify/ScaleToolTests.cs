using System.IO;
using System.Windows.Input;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify;

[TestFixture]
public class ScaleToolTests
{
    const string _BasePath = @"Interaction\Modify\Scale";

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
    public void EditorIdleSketch()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 2.0);
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdleSketch01"));
                    
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdleSketch99"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveScaleSketchUniform()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 2.0);
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // X
            ctx.MoveTo(188, 272);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(213, 260);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform02"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform03"));
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);
                    
            // Y
            ctx.MoveTo(309, 272);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform11"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(349, 294);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform12"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform13"));
                                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchUniform99"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveScaleSketchNonUniform()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 2.0);
        scale.Uniform = false;
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // X
            ctx.MoveTo(188, 272);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(213, 260);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchNonUniform03"));
                    
            // Y
            ctx.MoveTo(309, 272);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(349, 294);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchNonUniform13"));
                    
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleSketchTransformedPlane()
    {
        var ctx = Context.Current;
        var section = TestGeomGenerator.CreateCrossSection();
        var scale = Scale.Create(section.Body, 1.0);
        ctx.WorkspaceController.StartEditor(scale);

        var oldFactor = scale.Factor;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(275, 305);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchTransformedPlane01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(305, 390);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchTransformedPlane02"));
            Assert.Greater(scale.Factor.X, oldFactor.X);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveScaleSolidUniform()
    {
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateImprint().Body;
        var scale = Scale.Create(body, 2.0);
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // X
            ctx.MoveTo(46, 276);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(100, 249);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform02"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform03"));
                                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Y
            ctx.MoveTo(409, 249);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform11"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(446, 272);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform12"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform13"));
                                              
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);
              
            // Z
            ctx.MoveTo(250, 107);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform21"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(251, 64);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform22"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform23"));
                                        
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidUniform99"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveScaleSolidNonUniform()
    {
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateImprint().Body;
        var scale = Scale.Create(body, 2.0);
        scale.Uniform = false;
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // X
            ctx.MoveTo(39, 270);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(93, 241);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidNonUniform03"));
                    
            // Y
            ctx.MoveTo(440, 271);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(394, 245);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidNonUniform13"));
                                
            // Z
            ctx.MoveTo(238, 94);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(245, 34);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidNonUniform23"));
            
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
    
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveScaleSketchMinimum()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 2.0);
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // X
            ctx.MoveTo(188, 272);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(374, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchMinimum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.001, scale.Factor.X);
                    
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveScaleSketchClamp()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 2.0);
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // X
            ctx.MoveTo(188, 272);
            ctx.ViewportController.MouseDown(ModifierKeys.Control);
            ctx.MoveTo(213, 260, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchClamp01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(1.55, scale.Factor.X);
                    
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleSketchUndo()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 2.0);
        ctx.WorkspaceController.StartEditor(scale);

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        ctx.ViewportController.ZoomFitAll();
        ctx.MoveTo(188, 272);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(213, 260);
        ctx.ViewportController.MouseUp();

        Assert.AreNotEqual(1.55, scale.Factor.X);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(2.0, scale.Factor.X);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleSolidSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(30.0, -20.0, 0);
        var body = TestGeomGenerator.CreateImprint().Body;
        var scale = Scale.Create(body, 1.0);
        scale.Uniform = false;
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(220, 247);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(127, 303);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSolidSnap01"));
            ctx.ViewportController.MouseUp();

            Assert.That(scale.Factor.X, Is.EqualTo(2.0).Within(1e-6));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleSketchSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(20.0, -20.0, 0);
        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        var scale = Scale.Create(sketch.Body, 1.0);
        ctx.WorkspaceController.StartEditor(scale);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(331, 288);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(161, 308);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSketchSnap01"));
            ctx.ViewportController.MouseUp();

            Assert.That(scale.Factor.X, Is.EqualTo(2.8).Within(0.1));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

}