using System.IO;
using Macad.Core;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sketch;

[TestFixture]
public class CreateSegmentTests
{
    const string _BasePath = @"Interaction\Sketch\CreateSegments";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.Workspace.GridEnabled = true;
        // Set background color to black to better the helper lines
        Context.Current.Viewport.V3dView.SetBackgroundColor(Quantity_NameOfColor.BLACK.ToColor());
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateLine()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.ClickAt(50, 50); // Left point
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLine1"), 0.1);
            ctx.ClickAt(450, 450); // Right point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLine2"), 0.1);
            Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLine9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateLineContinued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
            ctx.ClickAt(50, 50); // Left point
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLineContinued1"), 0.1);
            ctx.ClickAt(450, 450); // Right point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLineContinued2"), 0.1);
            ctx.ClickAt(250, 50); // top point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLineContinued3"), 0.1);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLineContinued9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier2()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
            ctx.ClickAt(50, 50); // Left point
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier21"), 0.1);
            ctx.ClickAt(450, 450); // Right point
            ctx.MoveTo(150, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier22"), 0.1);
            ctx.ClickAt(150, 300); // Control point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier23"), 0.1);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier29"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier3()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>();
            ctx.ClickAt(50, 50); // Left point
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier31"), 0.1);
            ctx.ClickAt(450, 450); // Right point
            ctx.MoveTo(150, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier32"), 0.1);
            ctx.ClickAt(150, 300); // Control point 1
            ctx.MoveTo(250, 50);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier33"), 0.1);
            ctx.ClickAt(250, 50); // Control point 2
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier34"), 0.1);
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier39"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateRectangle()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
            ctx.ClickAt(50, 50); // LeftTop point
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateRectangle1"), 0.1);
            ctx.ClickAt(450, 450); // BottomRight point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateRectangle2"), 0.1);
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(4, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(4, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateRectangle9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCircle()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.MoveTo(80, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCircle1"), 0.1);
            ctx.ClickAt(100, 250); // Rim point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCircle2"), 0.1);
            Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCircle9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcCenter()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.MoveTo(80, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter1"), 0.1);
            ctx.ClickAt(100, 250); // Edge point 1
            ctx.MoveTo(200, 100);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter2"), 0.1);
            ctx.ClickAt(100, 250); // Edge point 2
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter3"), 0.1);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcRim()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>();
            ctx.ClickAt(100, 250); // Edge point 1
            ctx.MoveTo(200, 100);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRim1"), 0.1);
            ctx.ClickAt(250, 100); // Edge point 2
            ctx.MoveTo(130, 180);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRim2"), 0.1);
            ctx.ClickAt(150, 150); // Rim point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRim3"), 0.1);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRim9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEllipseCenter()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentEllipseCenterCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.MoveTo(80, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipseCenter1"), 0.1);
            ctx.ClickAt(100, 250); // Rim point1
            ctx.MoveTo(150, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipseCenter2"), 0.1);
            ctx.ClickAt(150, 200); // Rim point2
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipseCenter3"), 0.1);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipseCenter9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEllipticalArcCenter()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.MoveTo(80, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenter1"), 0.1);
            ctx.ClickAt(100, 250); // Rim point1
            ctx.MoveTo(150, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenter2"), 0.1);
            ctx.ClickAt(150, 200); // Rim point2
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenter3"), 0.1);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenter9"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MergeHilight()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create points to merge to
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 50); 
        ctx.ClickAt(300, 300);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.MoveTo(50, 50); 
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MergeHilight01"), 0.1);
            sketchEditTool.StopTool();
            ctx.MoveTo(10, 10);  // Move away to get a clear picture
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MergeHilight02"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateLine_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(100, 100); // Left point
        ctx.ClickAt(100, 100); // Right point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(101, 101); // Right point, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier2_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
        ctx.ClickAt(100, 100); // Left point
        ctx.ClickAt(100, 100); // Right point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(101, 101); // Right point, valid
        ctx.ClickAt(101, 101); // Bezier point, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateBezier3_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>();
        ctx.ClickAt(100, 100); // Left point
        ctx.ClickAt(100, 100); // Right point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(101, 101); // Right point, valid
        ctx.ClickAt(101, 101); // Bezier point 1, valid
        ctx.ClickAt(101, 101); // Bezier point 2, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void CreateRectangle_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
        ctx.ClickAt(100, 100); // first point
        ctx.ClickAt(100, 100); // second point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(101, 101); // second point, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(4, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(4, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCircle_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(100, 100); // Center point
        ctx.ClickAt(100, 100); // Rim point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(101, 101); // Rim point, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateArcCenter_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
        ctx.ClickAt(100, 100); // Center point
        ctx.ClickAt(100, 100); // Start point, not valid
        ctx.ClickAt(110, 110); // Start point, valid
        ctx.ClickAt(110, 110); // End point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(110, 120); // End point, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void CreateArcRim_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>();
        ctx.ClickAt(100, 100); // Start point
        ctx.ClickAt(100, 100); // End point, not valid
        ctx.ClickAt(110, 100); // End point, valid
        ctx.ClickAt(100, 100); // Rim point, not valid
        ctx.ClickAt(110, 100); // Rim point, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(105, 105); // Rim point, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEllipseCenter_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentEllipseCenterCreator>();
        ctx.ClickAt(100, 100); // Center point
        ctx.ClickAt(100, 100); // Rim point 1, not valid
        ctx.ClickAt(110, 110); // Rim point 1, valid
        ctx.ClickAt(100, 100); // Rim point 2, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(110, 110); // Rim point 2, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(120, 120); // Rim point 2, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateEllipticalArcCenter_MinSize()
    {
        // Points must not be accepted if the segment cannot be constructed due to zero size
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>();
        ctx.ClickAt(100, 100); // Center point
        ctx.ClickAt(100, 100); // Rim point 1, not valid
        ctx.ClickAt(110, 110); // Rim point 1, valid
        ctx.ClickAt(100, 100); // Rim point 2, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(110, 110); // Rim point 2, not valid
        Assert.IsNotNull(sketchEditTool.CurrentTool);
        ctx.ClickAt(120, 120); // Rim point 2, valid
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);

        // Can make
        Assert.AreEqual(1, sketchEditTool.Sketch.GetBRep()?.Edges().Count);
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCircle_MinSizeHints()
    {
        // Hints should be removed when size is zero
        var ctx = Context.Current;

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Workspace.GridStep = 1.0;
        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        Assert.DoesNotThrow(() =>
        {
            ctx.ClickAt(250, 250); // Center point
            ctx.MoveTo(400, 100);
            ctx.MoveTo(250, 250);
        });
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCircle_MinSizeHints01"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcCenter_MinSizeHints()
    {
        // Hints should be removed when size is zero
        var ctx = Context.Current;

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Workspace.GridStep = 1.0;
        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
        ctx.ClickAt(250, 250); // Center point
        ctx.MoveTo(400, 100); // Preview start point
        ctx.MoveTo(250, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter_MinSizeHints01"), 0.1);
        ctx.ClickAt(250, 100); // Set start point
        ctx.MoveTo(400, 250);
        ctx.MoveTo(250, 50); // Preview end point
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter_MinSizeHints02"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateEllipticalArcCenter_MinSizeHints()
    {
        // Hints should be removed when size is zero
        var ctx = Context.Current;

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Workspace.GridStep = 1.0;
        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>();
        ctx.ClickAt(250, 250); // Center point
        ctx.MoveTo(400, 100); // Preview start point
        ctx.MoveTo(250, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenter_MinSizeHints01"), 0.1);
        ctx.ClickAt(250, 100); // Set start point
        ctx.MoveTo(400, 250);
        ctx.MoveTo(250, 100); // Preview end point
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenter_MinSizeHints02"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StopLineContinuedOnMerge()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
        ctx.ClickAt(50, 50);
        ctx.ClickAt(450, 450); 
        ctx.ClickAt(250, 50);
        ctx.ClickAt(50, 50); // Close
        Assert.IsNull(sketchEditTool.CurrentTool);
        Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
        Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
        Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
    }

    //--------------------------------------------------------------------------------------------------

}