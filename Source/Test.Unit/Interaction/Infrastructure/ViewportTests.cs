using System.Diagnostics;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure
{
    [TestFixture]
    public class ViewportTests
    {
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

        const string _BasePath = @"Interaction\Infrastructure\Viewport\";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ViewCube()
        {
            var ctx = Context.Current;

            var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            viewportParameterSet.ShowViewCube = true;

            TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                // ViewCube is visible
                AssertHelper.IsSameViewport(_BasePath + "ViewCubeVisible");

                // Higlight
                ctx.MoveTo(360, 120);
                AssertHelper.IsSameViewport(_BasePath + "ViewCubeHighlight");

                // Moved camera
                ctx.ClickAt(360, 120);
                Thread.Sleep(1000); // Wait for animation to finish
                AssertHelper.IsSameViewport(_BasePath + "ViewCubeMoved");
            });
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

            ctx.ViewportController.ZoomFitAll();

            var plane = sketch.Plane;
            plane.UReverse();
            var clipPlane = new ClipPlane(plane);
            clipPlane.AddViewport(ctx.Viewport);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ClipPlane01"));

            clipPlane.Remove();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ClipPlane02"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Description("Bug - rotation locked in top view.")]
        public void ReleaseLockInTopview()
        {
            var ctx = Context.Current;
            var vc = ctx.ViewportController;

            var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            viewportParameterSet.ShowViewCube = true;

            // Create sketch with segment
            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.ClickAt(50, 50); // Left point
            ctx.ClickAt(450, 450); // Right point
            sketchEditTool.Stop();

            // Select topview
            ctx.ClickAt(400, 80);
            vc.WorkspaceController.Invalidate(forceRedraw: true);
            Thread.Sleep(1000); // Wait for animation to finish
            vc.WorkspaceController.Invalidate(forceRedraw: true);

            // Try to rotate
            vc.MouseMove(new Point(300, 300));
            vc.MouseMove(new Point(200, 200), ViewportController.MouseMoveMode.Rotating);
            vc.WorkspaceController.Invalidate(forceRedraw: true);

            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReleaseLockInTopview01"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EnsureViewVector()
        {
            var ctx = Context.Current;
            var vc = ctx.ViewportController;

            var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            viewportParameterSet.ShowViewCube = true;

            // Create sketch with segment
            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.ClickAt(50, 50); // Left point
            ctx.ClickAt(450, 450); // Right point
            sketchEditTool.Stop();

            // Select topview
            ctx.ClickAt(400, 80);
            vc.WorkspaceController.Invalidate(forceRedraw: true);
            Thread.Sleep(1000); // Wait for animation to finish
            vc.WorkspaceController.Invalidate(forceRedraw: true);

            // Try to create e.g. box
            ctx.WorkspaceController.StartTool(new CreateBoxTool());
            ctx.ClickAt(150, 150); // Start point
            ctx.ClickAt(350, 350); // Rectangle
            Assert.DoesNotThrow(() => ctx.ClickAt(350, 200)); // Height
        }
    }
}