using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Test.Utils;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives
{
    [TestFixture]
    public class BoxTests
    {
        const string _BasePath = @"Interaction\Primitives\Box";

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
        public void CreateBox()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateBoxTool());

            // Left corner
            ctx.ViewportController.MouseMove(new Point(50, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox1"));

            // Right corner
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox2"));

            // Height
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 200));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox3"));

            // Create
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox4"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EditorIdle()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();
            ctx.WorkspaceController.StartEditor(box);
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
            ctx.WorkspaceController.StartEditor(box);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
                ctx.WorkspaceController.CurrentEditor.StopTools();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
                box.RaiseShapeChanged();
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
        public void LiveScale()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();
            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(352, 309);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(327, 297);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale03"));
                
                Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
                Assert.IsEmpty(ctx.TestHudManager.HudElements);

                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleCorner()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();
            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(450, 138);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(478, 123);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner03"));

                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }
                        
        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void LiveScaleRotated()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();
            box.Body.Rotation = new Quaternion(35.0.ToRad(), 0, 0);
            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(385, 103);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(415, 74);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated02"));
            
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated03"));

                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }
                                
        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void LiveScaleRotatedRolled()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();
            box.Body.Rotation = new Quaternion(0, 0, 180.0.ToRad());
            var startHeight = box.DimensionZ;

            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(250, 132);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(249, 93);
            ctx.ViewportController.MouseUp();
            Assert.Greater(box.DimensionZ, startHeight);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleChangeSign()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();

            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(51, 365);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(234, 260);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleChangeSign01"));

                ctx.MoveTo(450, 138);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(16, 400);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleChangeSign02"));

                ctx.MoveTo(4, 392);
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(430, 140);
                ctx.ViewportController.MouseUp();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleChangeSign03"));

                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleClamped()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();

            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Workspace.GridStep = 5.0;
            Assert.Multiple(() =>
            {
                ctx.MoveTo(450, 138);
                //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(400, 170, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped02"));
            
                ctx.MoveTo(344, 211, ModifierKeys.Control);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped03"));
                ctx.ViewportController.MouseUp();

                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void LiveScaleCenter()
        {
            var ctx = Context.Current;
            var box = TestGeomGenerator.CreateBox();

            ctx.WorkspaceController.StartEditor(box);

            ctx.ViewportController.ZoomFitAll();
            Assert.Multiple(() =>
            {
                ctx.MoveTo(450, 138);
                //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter01"));
                            
                ctx.ViewportController.MouseDown();
                ctx.MoveTo(400, 170, ModifierKeys.Shift);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter02"));
            
                ctx.ViewportController.MouseUp();

                // Cleanup
                ctx.WorkspaceController.StopEditor();
            });
        }
    }
}