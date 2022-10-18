using System.IO;
using System.Windows.Input;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;
using Macad.Interaction;
using Macad.Common;

namespace Macad.Test.Unit.Interaction.Modify
{
    [TestFixture]
    public class TaperTests
    {
        const string _BasePath = @"Interaction\Modify\Taper";

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
        public void CreateWithEdge()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.MoveTo(90, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithEdge1"));
                ctx.SelectAt(90, 250);

                // Select edge
                ctx.MoveTo(150, 190);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithEdge2"));
                ctx.SelectAt(150, 190);

                // Finished
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithEdge3"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void CreateWithVertex()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.SelectAt(90, 250);

                // Select vertex
                ctx.MoveTo(250, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithVertex2"));
                ctx.SelectAt(250, 250);

                // Finished
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithVertex3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReselectEdge()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            // Select face and edge
            ctx.SelectAt(90, 250);
            ctx.SelectAt(150, 190);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);

            Assert.Multiple(() =>
            {
                tool = new CreateTaperTool(body.Shape as Taper);
                Assert.That(ctx.WorkspaceController.StartTool(tool));

                // Select face
                ctx.MoveTo(350, 300);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectEdge1"));
                ctx.SelectAt(350, 300);

                // Select edge
                ctx.SelectAt(446, 242);
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectEdge3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectOnlyFaceEdges()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.SelectAt(90, 250);

                // Hilight edge of face
                ctx.MoveTo(150, 190);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOnlyFaceEdges1"));

                // Ignore other edge
                ctx.MoveTo(446, 242);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOnlyFaceEdges2"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SelectNoSeamEdges()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateCylinder().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.SelectAt(90, 250);

                ctx.MoveTo(150, 190);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectNoSeamEdges1"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TakeEdgeParameter()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateCylinder().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                ctx.SelectAt(250, 180); // Select face
                ctx.SelectAt(250, 277); // Select edge
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TakeEdgeParameter1"));

                tool = new CreateTaperTool(body.Shape as Taper);
                Assert.That(ctx.WorkspaceController.StartTool(tool));
                ctx.SelectAt(250, 180); // Select face
                ctx.SelectAt(350, 112); // Select edge
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TakeEdgeParameter2"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FirstParameterNotNull()
        {
            // Issue: If first parameter of the edge is not null, the calculated location was not correct
            var ctx = Context.Current;

            var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "BoxJointShape_Source.brep"));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                ctx.SelectAt(250, 180); // Select face

                ctx.MoveTo(168, 190); // Highlight edge
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstParameterNotNull1"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void VertexConcave()
        {
            // If the vertex is a concave corner, check direction
            var ctx = Context.Current;

            var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "BoxJointShape_Source.brep"));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                ctx.SelectAt(250, 180); // Select face

                ctx.MoveTo(353, 136); // Highlight vertex
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "VertexConcave1"));
            });
        }

        //--------------------------------------------------------------------------------------------------
               
        [Test]
        public void EditorIdle()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
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
        public void EditorReselectTarget()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var box = taper.Predecessor as Box;
            Assume.That(box != null);
            var editor = Editor.CreateEditor(taper);
            editor.Start();
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                var edge = box.GetSubshapeReference(SubshapeType.Edge, 5);
                taper.BaseEdgeOrVertex = edge;

                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorReselectTarget01"));
            
                // Cleanup
                editor.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetEdge()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldOffset = taper.Offset;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(102, 258);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetEdge01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(157, 292);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetEdge02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetEdge03"));
                Assert.Greater(taper.Offset, oldOffset);

                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetEdge99"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetVertex()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByVertex();
            taper.Body.Rotation = new Quaternion(60.0.ToRad(), 0.0, 0.0);
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldOffset = taper.Offset;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(215, 392);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetVertex01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(270, 338);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetVertex02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetVertex03"));
                Assert.Greater(taper.Offset, oldOffset);

                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetVertex99"));
            });
        }
         
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetNegativeAngle()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            taper.Angle *= -1;
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldOffset = taper.Offset;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(91, 217);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetNegativeAngle01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(140, 248);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetNegativeAngle02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetNegativeAngle03"));
                Assert.Greater(taper.Offset, oldOffset);

                // Cleanup
                editor.Stop();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetRotate()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            taper.Body.Rotation = new Quaternion(0, 30.0.ToRad(), 0);
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldOffset = taper.Offset;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(124, 298);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(169, 325);
                ctx.ViewportController.MouseUp();

                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetRotate01"));
                Assert.Greater(taper.Offset, oldOffset);

                // Cleanup
                editor.Stop();
            });
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetOutOfRange()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(102, 258);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetOutOfRange01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(386, 400);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetOutOfRange02"));
                ctx.MoveTo(5, 232);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetOutOfRange03"));
            
                ctx.ViewportController.MouseUp();
                Assert.AreEqual(0.0, taper.Offset);

                // Cleanup
                editor.Stop();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetClamp()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Workspace.GridStep = 1.0;

            Assert.Multiple(() =>
            {
                ctx.MoveTo(102, 258);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(157, 292);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetClamp01"));
                ctx.MoveTo(157, 292, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveOffsetClamp02"));
                ctx.ViewportController.MouseUp();
                Assert.AreEqual(4.0, taper.Offset);

                // Cleanup
                editor.Stop();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveOffsetUndo()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();
            ctx.UndoHandler.Commit();
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            var oldOffset = taper.Offset;

            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(102, 258);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(157, 292);
            ctx.ViewportController.MouseUp();
            editor.Stop();

            Assert.Greater(taper.Offset, oldOffset);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

            ctx.UndoHandler.DoUndo(1);

            Assert.AreEqual(taper.Offset, oldOffset);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleEdge()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldAngle = taper.Angle;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(62, 274);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleEdge01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(74, 278);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleEdge02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleEdge03"));
                Assert.Greater(taper.Angle, oldAngle);

                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleEdge99"));
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleVertex()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByVertex();
            taper.Body.Rotation = new Quaternion(60.0.ToRad(), 0.0, 0.0);
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldAngle = taper.Angle;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(217, 432);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleVertex01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(221, 425);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleVertex02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleVertex03"));
                Assert.Greater(taper.Angle, oldAngle);

                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleVertex99"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleNegative()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(90, 277);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleNegative01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(51, 271);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleNegative02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleNegative03"));
                Assert.Less(taper.Angle, 0.0);

                // Cleanup
                editor.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleRotate()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            taper.Body.Rotation = new Quaternion(0, 30.0.ToRad(), 0);
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            var oldAngle = taper.Angle;
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(82, 329);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(94, 329);
                ctx.ViewportController.MouseUp();

                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleRotate01"));
                Assert.Greater(taper.Angle, oldAngle);

                // Cleanup
                editor.Stop();
            });
        }
                        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleOutOfRange()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            taper.Body.Rotation = new Quaternion(45.0.ToRad(), 0, 0);
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.MoveTo(153, 364);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleOutOfRange01"));

                ctx.ViewportController.MouseDown();
                ctx.MoveTo(202, 362);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleOutOfRange02"));
                ctx.MoveTo(104, 322);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleOutOfRange03"));
            
                ctx.ViewportController.MouseUp();

                // Cleanup
                editor.Stop();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleClamp()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();

            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Workspace.GridStep = 1.0;

            Assert.Multiple(() =>
            {
                ctx.MoveTo(62, 274);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(74, 278);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleClamp01"));
                ctx.MoveTo(74, 278, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleClamp02"));
                ctx.ViewportController.MouseUp();
                Assert.AreEqual(40.0, taper.Angle);

                // Cleanup
                editor.Stop();
            });
        }
            
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveAngleUndo()
        {
            var ctx = Context.Current;

            var taper = _CreateTaperedBoxByEdge();
            var editor = Editor.CreateEditor(taper);
            editor.Start();
            ctx.UndoHandler.Commit();
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

            var oldAngle = taper.Angle;

            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(62, 274);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(74, 278);
            ctx.ViewportController.MouseUp();
            editor.Stop();

            Assert.Greater(taper.Angle, oldAngle);
            Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

            ctx.UndoHandler.DoUndo(1);

            Assert.AreEqual(taper.Angle, oldAngle);
            Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        }

        //--------------------------------------------------------------------------------------------------
        //--------------------------------------------------------------------------------------------------

        Taper _CreateTaperedBoxByEdge()
        {
            var box = TestGeomGenerator.CreateBox();
            var face = box.GetSubshapeReference(SubshapeType.Face, 1);
            var edge = box.GetSubshapeReference(SubshapeType.Edge, 4);
            return Taper.Create(box.Body, face, edge, 22.5);
        }

        //--------------------------------------------------------------------------------------------------

        Taper _CreateTaperedBoxByVertex()
        {
            var box = TestGeomGenerator.CreateBox();
            var face = box.GetSubshapeReference(SubshapeType.Face, 1);
            var vertex = box.GetSubshapeReference(SubshapeType.Vertex, 5);
            return Taper.Create(box.Body, face, vertex, 22.5);
        }
    }
}