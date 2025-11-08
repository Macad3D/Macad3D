using System.IO;
using System.Threading;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Interaction.Infrastructure;

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

    const string _BasePath = @"Interaction\Infrastructure\Viewport";

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
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ViewCubeVisible"));

            // Highlight
            ctx.MoveTo(360, 120);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ViewCubeHighlight"));

            // Moved camera
            ctx.ClickAt(360, 120);
            Thread.Sleep(1000); // Wait for animation to finish
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ViewCubeMoved"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(ViewForwardDirection.XPos)]
    [TestCase(ViewForwardDirection.XNeg)]
    [TestCase(ViewForwardDirection.YPos)]
    [TestCase(ViewForwardDirection.YNeg)]
    public void ViewCubeTextures(ViewForwardDirection forwardDirection)
    {
        var ctx = Context.Current;
        var vc = ctx.ViewportController;

        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ForwardDirection = forwardDirection;
        viewportParameterSet.ShowTrihedron = true;
        viewportParameterSet.ShowViewCube = true;
        viewportParameterSet.ViewCubeSize = 300;

        Assert.Multiple(() =>
        {
            // Axo views
            vc.SetPredefinedView(V3d_TypeOfOrientation.XposYposZpos);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"ViewCubeTextures_{forwardDirection}01"));
            vc.SetPredefinedView(V3d_TypeOfOrientation.XnegYnegZneg);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"ViewCubeTextures_{forwardDirection}02"));
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
        clipPlane.AddViewport(ctx.ViewportController);
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
        vc.WorkspaceController.Invalidate(forceRedraw: true);

        // Select topview
        ctx.ClickAt(400, 80);
        vc.WorkspaceController.Invalidate(forceRedraw: true);
        Thread.Sleep(1000); // Wait for animation to finish
        vc.WorkspaceController.Invalidate(forceRedraw: true);

        // Try to rotate
        vc.MouseMove(new Point(300, 300));
        vc.MouseMove(new Point(200, 200), ModifierKeys.None, ViewportController.MouseMoveMode.Rotating);
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
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotation()
    {
        var ctx = Context.Current;
        var vc = ctx.ViewportController;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-20, 20, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(20, 20, 0);
        vc.ZoomFitAll();
   
        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation01"));
            vc.Rotate(20, 0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation02"));
            vc.Rotate(-20, 0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation01"));
            vc.Rotate(0, 20, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation03"));
            vc.Rotate(0, -20, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation01"));
            vc.Rotate(0, 0, 20);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation04"));
            vc.Rotate(0, 0, -20);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotation01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RotationConstrainPoles()
    {
        var ctx = Context.Current;
        var vc = ctx.ViewportController;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-20, 20, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(20, 20, 0);
        vc.ZoomFitAll();
        var viewParams = vc.Viewport.GetViewParameters();

        Assert.Multiple(() =>
        {
            vc.Rotate(0, -40, 0);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles01"));
            vc.Rotate(0, -40, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles02"));

            vc.Viewport.RestoreViewParameters(viewParams);
            vc.Rotate(0, 110, 0);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles03"));
            vc.Rotate(0, 40, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles04"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RotationTwistedConstrainPoles()
    {
        var ctx = Context.Current;
        var vc = ctx.ViewportController;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-20, 20, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(20, 20, 0);
        vc.ZoomFitAll();
        vc.Rotate(0, 0, 20);
        var viewParams = vc.Viewport.GetViewParameters();

        Assert.Multiple(() =>
        {
            vc.Rotate(0, -40, 0);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles11"));
            vc.Rotate(0, -40, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles12"));

            vc.Viewport.RestoreViewParameters(viewParams);
            vc.Rotate(0, 110, 0);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles13"));
            vc.Rotate(0, 40, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotationConstrainPoles14"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SyncCamAnimationToViewport()
    {
        var ctx = Context.Current;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ShowViewCube = true;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            double[] paramsPre = ctx.Viewport.GetViewParameters();

            // Select view cube
            ctx.ClickAt(401, 70);
            Thread.Sleep(500);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            double[] paramsPost = ctx.Viewport.GetViewParameters();
            Assert.That(paramsPost, Is.Not.EqualTo(paramsPre));

            // Select predefined view
            ctx.WorkspaceController.ActiveViewControlller.SetPredefinedView(ViewportController.PredefinedViews.Front, true);
            Thread.Sleep(500);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            paramsPost = ctx.Viewport.GetViewParameters();
            Assert.That(paramsPost, Is.Not.EqualTo(paramsPre));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ZoomFitAll()
    {
        var ctx = Context.Current;
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ZoomFitAll01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ZoomFitBox()
    {
        var ctx = Context.Current;
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFit(bodies[0].GetTransformedBRep().BoundingBox());
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ZoomFitBox01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ZoomFitSelected()
    {
        var ctx = Context.Current;
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.WorkspaceController.Selection.SelectEntity(bodies[0]);
        ctx.ViewportController.ZoomFitSelected();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ZoomFitSelected01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PanToCenter()
    {
        var ctx = Context.Current;
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.PanToCenter(bodies[0].Position);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PanToCenter01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(ViewForwardDirection.XPos, 0.0, false)]
    [TestCase(ViewForwardDirection.XNeg, 2, false)]
    [TestCase(ViewForwardDirection.YPos, -1, true)]
    [TestCase(ViewForwardDirection.YNeg, 1, true)]
    public void PredefinedViews(ViewForwardDirection forwardDirection, double rotSteps, bool reverseTopBottom)
    {
        double rotation = rotSteps * Maths.HalfPI;

        var ctx = Context.Current;
        var vc = ctx.ViewportController;

        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ForwardDirection = forwardDirection;
        viewportParameterSet.ShowTrihedron = true;
        viewportParameterSet.ShowViewCube = true;
        viewportParameterSet.ViewCubeSize = 300;

        void __Check(Dir viewDir, Dir rightDir, Dir upDir)
        {
            Assert.That(vc.Viewport.GetViewDirection().Rotated(Ax1.OZ, rotation).IsEqual(viewDir, 1e-10));
            Assert.That(vc.Viewport.GetRightDirection().Rotated(Ax1.OZ, rotation).IsEqual(rightDir, 1e-10));
            Assert.That(vc.Viewport.GetUpDirection().Rotated(Ax1.OZ, rotation).IsEqual(upDir, 1e-10));
        }

        Assert.Multiple(() =>
        {
            vc.SetPredefinedView(ViewportController.PredefinedViews.Front);
            __Check(Dir.DX.Reversed(), Dir.DY, Dir.DZ);
           
            vc.SetPredefinedView(ViewportController.PredefinedViews.Back);
            __Check(Dir.DX, Dir.DY.Reversed(), Dir.DZ);
            
            vc.SetPredefinedView(ViewportController.PredefinedViews.Right);
            __Check(Dir.DY.Reversed(), Dir.DX.Reversed(), Dir.DZ);
            
            vc.SetPredefinedView(ViewportController.PredefinedViews.Left);
            __Check(Dir.DY, Dir.DX, Dir.DZ);

            vc.SetPredefinedView(ViewportController.PredefinedViews.Top);
            __Check(Dir.DZ.Reversed(), reverseTopBottom ? Dir.DX : Dir.DX.Reversed(), reverseTopBottom ? Dir.DY : Dir.DY.Reversed());
            
            vc.SetPredefinedView(ViewportController.PredefinedViews.Bottom);
            __Check(Dir.DZ, reverseTopBottom ? Dir.DX : Dir.DX.Reversed(), reverseTopBottom ? Dir.DY.Reversed() : Dir.DY);
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PredefinedViewsZoomFit()
    {
        var ctx = Context.Current;
        var vc = ctx.ViewportController;

        Assert.Multiple(() =>
        {
            var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
            vc.SetPredefinedView(ViewportController.PredefinedViews.Left);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PredefinedViewsZoomFit01"));

            ctx.WorkspaceController.Selection.SelectEntity(bodies[0]);
            vc.SetPredefinedView(ViewportController.PredefinedViews.Left);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PredefinedViewsZoomFit02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

}