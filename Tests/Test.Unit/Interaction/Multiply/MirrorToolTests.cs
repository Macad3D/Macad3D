using System.IO;
using System.Windows.Input;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;
using Macad.Occt;

namespace Macad.Test.Unit.Interaction.Multiply;

[TestFixture]
public class MirrorToolTests
{
    const string _BasePath = @"Interaction\Multiply\Mirror";

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
    public void CreateByFace()
    {
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
        Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(300, 375);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByFace01"));

            ctx.ClickAt(300, 375);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            Assert.That(body.Shape is Mirror);

            ctx.MoveTo(0, 0);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByFace02"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReselectFace()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
        Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

        ctx.ClickAt(300, 350);
        var mirrorShape = body.Shape as Mirror;
        Assert.IsNotNull(mirrorShape);

        ctx.WorkspaceController.StartTool(new CreateMirrorTool(mirrorShape));
        ctx.ClickAt(140, 320);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectFace01"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateSketchByEdge()
    {
        var ctx = Context.Current;

        var body = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true).Body;

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
        Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(300, 209);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByEdge01"));

            ctx.ClickAt(300, 209);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            Assert.That(body.Shape is Mirror);

            ctx.MoveTo(0, 0);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByEdge02"));
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReselectSketchEdge()
    {
        var ctx = Context.Current;

        var body = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true).Body;

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
        Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

        ctx.ClickAt(300, 209);
        var mirrorShape = body.Shape as Mirror;
        Assert.IsNotNull(mirrorShape);

        ctx.WorkspaceController.StartTool(new CreateMirrorTool(mirrorShape));
        ctx.ClickAt(397, 311);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectEdge01"));
    }
                
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirror();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(mirror);

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
    public void EditorIdleByAxis()
    {
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        var mirror = Mirror.Create(imprint.Body, new Ax2(new Pnt(30, 30, 20), Dir.DX));
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(mirror);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdleByAxis01"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorReversedFaceIdle()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirrorReversedFace();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(mirror);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle21"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorStartStopTools()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirror();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(mirror);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            mirror.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffset()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirror();
        ctx.WorkspaceController.StartEditor(mirror);

        var oldOffset = mirror.Offset;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(232, 155);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(177, 186);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset03"));
            Assert.Greater(mirror.Offset, oldOffset);

            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffsetClamp()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirror();
        ctx.WorkspaceController.StartEditor(mirror);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(232, 155);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(177, 186, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetClamp01"));
            Assert.AreEqual(11.0, mirror.Offset);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorSketchIdle()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirrorSketch();
        ctx.ViewportController.Zoom(-3);
        ctx.WorkspaceController.StartEditor(mirror);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle01"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void EditorSketchReversedEdgeIdle()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirror2DReversedEdge();
        ctx.ViewportController.Zoom(-3);
        ctx.WorkspaceController.StartEditor(mirror);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle21"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorSketchStartStopTools()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirrorSketch();
        ctx.ViewportController.Zoom(-3);
        ctx.WorkspaceController.StartEditor(mirror);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle02"));
            mirror.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle03"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle04"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorSketchIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffsetSketch()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirrorSketch();
        ctx.WorkspaceController.StartEditor(mirror);

        var oldOffset = mirror.Offset;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(124, 172);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketch01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(170, 140);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketch02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketch03"));
            Assert.Greater(mirror.Offset, oldOffset);

            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketch99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffsetSketchClamp()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirrorSketch();
        ctx.WorkspaceController.StartEditor(mirror);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(124, 172);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(170, 140, ModifierKeys.Control);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketchClamp01"));
            Assert.AreEqual(5.0, mirror.Offset);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffsetUndo()
    {
        var ctx = Context.Current;
        var mirror = _CreateSimpleMirrorSketch();
        ctx.WorkspaceController.StartEditor(mirror);
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        var oldOffset = mirror.Offset;
        ctx.ViewportController.ZoomFitAll();
        ctx.MoveTo(124, 172);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(170, 140);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();

        Assert.Greater(mirror.Offset, oldOffset);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(mirror.Offset, oldOffset);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffsetSketchTransformedPlane()
    {
        var ctx = Context.Current;
        var section = TestGeomGenerator.CreateCrossSection();
        var subshape = section.GetSubshapeReference(SubshapeType.Edge, 0);
        var mirror = Mirror.Create(section.Body, subshape);
        ctx.WorkspaceController.StartEditor(mirror);

        var oldOffset = mirror.Offset;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(358, 403);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketchTransformedPlane01"));
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(373, 393);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSketchTransformedPlane02"));
            Assert.Greater(mirror.Offset, oldOffset);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveOffsetSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToEdgeSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(20.0, 12.0, 0);

        var mirror = _CreateSimpleMirror();
        ctx.WorkspaceController.StartEditor(mirror);

        var oldOffset = mirror.Offset;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(224, 156);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(221, 307);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSnap01"));
            Assert.That(mirror.Offset, Is.EqualTo(20.0).Within(1e-6));

            ctx.MoveTo(224, 156);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(270, 276);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetSnap02"));
            Assert.That(mirror.Offset, Is.EqualTo(10.0).Within(1e-6));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    public void PropPanelCleanup()
    {
        var ctx = Context.Current;
        var panelMgr = ctx.EnablePropertyPanels();

        var mirror = _CreateSimpleMirror();
        ctx.WorkspaceController.StartEditor(mirror);

        var propPanel = panelMgr.FindFirst<MirrorPropertyPanel>();
        propPanel.ReselectCommand.Execute(null);
        Assert.IsAssignableFrom<CreateMirrorTool>(ctx.WorkspaceController.CurrentTool);

        ctx.WorkspaceController.StopEditor();
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Mirror _CreateSimpleMirror()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        return Mirror.Create(imprint.Body, imprint.GetSubshapeReference(SubshapeType.Face, 5));
    }

    //--------------------------------------------------------------------------------------------------

    Mirror _CreateSimpleMirrorReversedFace()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        return Mirror.Create(imprint.Body, imprint.GetSubshapeReference(SubshapeType.Face, 0));
    }

    //--------------------------------------------------------------------------------------------------

    Mirror _CreateSimpleMirrorSketch()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        return Mirror.Create(sketch.Body, sketch.GetSubshapeReference(SubshapeType.Edge, 0));
    }
        
    //--------------------------------------------------------------------------------------------------

    Mirror _CreateSimpleMirror2DReversedEdge()
    {
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        return Mirror.Create(sketch.Body, sketch.GetSubshapeReference(SubshapeType.Edge, 1));
    }

}