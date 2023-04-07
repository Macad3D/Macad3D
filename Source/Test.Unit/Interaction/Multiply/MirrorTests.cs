using System.IO;
using System.Windows.Input;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Multiply
{
    [TestFixture]
    public class MirrorTests
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
                ctx.MoveTo(300, 350);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByFace01"));

                ctx.ClickAt(300, 350);
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
        public void Create2DByEdge()
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
        public void Reselect2DEdge()
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
        public void Editor2DIdle()
        {
            var ctx = Context.Current;
            var mirror = _CreateSimpleMirror2D();
            ctx.ViewportController.Zoom(-3);
            ctx.WorkspaceController.StartEditor(mirror);

            Assert.Multiple(() =>
            {
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle01"));
                        
                // Cleanup
                ctx.WorkspaceController.StopEditor();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle99"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void Editor2DReversedEdgeIdle()
        {
            var ctx = Context.Current;
            var mirror = _CreateSimpleMirror2DReversedEdge();
            ctx.ViewportController.Zoom(-3);
            ctx.WorkspaceController.StartEditor(mirror);

            Assert.Multiple(() =>
            {
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle21"));
                        
                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Editor2DStartStopTools()
        {
            var ctx = Context.Current;
            var mirror = _CreateSimpleMirror2D();
            ctx.ViewportController.Zoom(-3);
            ctx.WorkspaceController.StartEditor(mirror);

            Assert.Multiple(() =>
            {
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle01"));
                ctx.WorkspaceController.CurrentEditor.StopTools();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle02"));
                mirror.RaiseShapeChanged();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle03"));
                ctx.WorkspaceController.CurrentEditor.StartTools();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle04"));
                        
                // Cleanup
                ctx.WorkspaceController.StopEditor();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Editor2DIdle99"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffset2D()
        {
            var ctx = Context.Current;
            var mirror = _CreateSimpleMirror2D();
            ctx.WorkspaceController.StartEditor(mirror);

            var oldOffset = mirror.Offset;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(124, 172);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset2D01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(170, 140);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset2D02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset2D03"));
                Assert.Greater(mirror.Offset, oldOffset);

                Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
                Assert.IsEmpty(ctx.TestHudManager.HudElements);

                // Cleanup
                ctx.WorkspaceController.StopEditor();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset2D99"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffset2DClamp()
        {
            var ctx = Context.Current;
            var mirror = _CreateSimpleMirror2D();
            ctx.WorkspaceController.StartEditor(mirror);
            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Workspace.GridStep = 1.0;

            Assert.Multiple(() =>
            {
                ctx.MoveTo(124, 172);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(170, 140, ModifierKeys.Control);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffset2DClamp01"));
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
            var mirror = _CreateSimpleMirror2D();
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

        Mirror _CreateSimpleMirror2D()
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
}