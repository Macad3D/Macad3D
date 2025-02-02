using System.IO;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
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
        Context.Current.ViewportController.V3dView.SetBackgroundColor(Macad.Common.Color.Black.ToQuantityColor());
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
    public void CreateLine_Continued()
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
    public void CreateBezier2_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>(true);
            ctx.ClickAt(50, 50); // Start point
            ctx.ClickAt(450, 450); // End point
            ctx.ClickAt(150, 300); // Control point
            ctx.MoveTo(400, 50);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier2Continued01"), 0.1);
            ctx.ClickAt(400, 50); // End point 2
            ctx.ClickAt(450, 100); // Control point 2
            ctx.ClickAt(50, 50); // End point 3 -> Merge
            ctx.ClickAt(250, 200); // Control point 3
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier2Continued02"), 0.1);
            Assert.AreEqual(6, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
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
    public void CreateBezier3_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>(true);
            ctx.ClickAt(50, 50); // Start point
            ctx.ClickAt(450, 450); // End point
            ctx.ClickAt(150, 300); // Control point
            ctx.ClickAt(250, 50); // Control point
            ctx.MoveTo(400, 50);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier3Continued01"), 0.1);
            ctx.ClickAt(400, 50); // End point 2
            ctx.ClickAt(450, 300); // Control point 2
            ctx.ClickAt(470, 100); // Control point 2
            ctx.ClickAt(50, 50); // End point 3 -> Merge
            ctx.ClickAt(240, 200); // Control point 3
            ctx.ClickAt(260, 20); // Control point 3
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier3Continued02"), 0.1);
            Assert.AreEqual(9, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
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
    public void CreateArcCenter_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>(true);
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(150, 300); // Start point
            ctx.ClickAt(450, 450); // End point
            ctx.MoveTo(350, 150);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenterContinued01"), 0.1);
            ctx.ClickAt(250, 250); // Center point 2
            ctx.ClickAt(400, 250); // End point 2
            ctx.ClickAt(250, 250); // Center point 3
            ctx.ClickAt(150, 300); // End point 3 -> Merge
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenterContinued02"), 0.1);
            Assert.AreEqual(6, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
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
    public void CreateArcRim_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>(true);
            ctx.ClickAt(50, 50); // Start point
            ctx.ClickAt(450, 450); // End point
            ctx.ClickAt(150, 300); // Rim point
            ctx.MoveTo(400, 50);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRimContinued01"), 0.1);
            ctx.ClickAt(400, 50); // End point 2
            ctx.ClickAt(450, 100); // Rim point 2
            ctx.ClickAt(50, 50); // End point 3 -> Merge
            ctx.ClickAt(250, 200); // Rim point 3
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRimContinued02"), 0.1);
            Assert.AreEqual(6, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
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
    public void CreateEllipticalArcCenter_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>(true);
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(150, 300); // Start point
            ctx.ClickAt(450, 450); // End point
            ctx.MoveTo(350, 150);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenterContinued01"), 0.1);
            ctx.ClickAt(250, 250); // Center point 2
            ctx.ClickAt(400, 250); // End point 2
            ctx.ClickAt(250, 250); // Center point 3
            ctx.ClickAt(150, 300); // End point 3 -> Merge
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipticalArcCenterContinued02"), 0.1);
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
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
    [Description("Bugfix for taking the latest point in list instead of the nearest, if both points are inside the minimum range.")]
    public void MergeNearest()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = false;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create points to merge to
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(200, 192); 
        ctx.ClickAt(200, 208);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.MoveTo(200, 199); 
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MergeNearest01"), 0.1);
            sketchEditTool.StopTool();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Snapping()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(1, 1, 0);

        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;
        ctx.EditorState.SnapToEdgeSelected = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Parameters.Get<ViewportParameterSet>().SelectionPixelTolerance = 10;

        var sketch = Core.Shapes.Sketch.Create();
        var body = Body.Create(sketch);
        SketchBuilder sb = new(sketch);
        sb.Line(-1, -1, 1, -1);
        ctx.WorkspaceController.Selection.SelectEntity(sketch.Body);
        SketchCommands.StartSketchEditor.Execute(sketch);
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
            ctx.MoveTo(295, 204); // Vertex point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Snapping01"), 0.1);
            ctx.MoveTo(295, 110); // Edge point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Snapping02"), 0.1);
            ctx.MoveTo(244, 246); // Grid
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Snapping03"), 0.1);
            ctx.MoveTo(206, 292); // Sketch Vertex
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Snapping04"), 0.1);

            //Cleanup
            sketchEditTool.Stop();
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
    public void StopPolylineOnMerge()
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

    [Test]
    public void ChangePolylineType()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
            ctx.ClickAt(10, 10);
            ctx.ClickAt(100, 50); 
            Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            ctx.MoveTo(200, 70);

            sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>(true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ChangePolylineType01"), 0.1);
            ctx.ClickAt(200, 70);
            ctx.ClickAt(150, 30); 
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            ctx.MoveTo(300, 30); 

            sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>(true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ChangePolylineType02"), 0.1);
            ctx.ClickAt(300, 150);
            ctx.ClickAt(220, 140); 
            ctx.ClickAt(270, 30); 
            Assert.AreEqual(7, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(3, sketchEditTool.Sketch.Segments.Count);
            ctx.MoveTo(400, 50); 

            sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>(true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ChangePolylineType03"), 0.1);
            ctx.ClickAt(400, 150);
            ctx.ClickAt(350, 100); 
            Assert.AreEqual(9, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(4, sketchEditTool.Sketch.Segments.Count);
            ctx.MoveTo(400, 200); 

            sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>(true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ChangePolylineType04"), 0.1);
            ctx.ClickAt(400, 200);
            ctx.ClickAt(400, 250); 
            Assert.AreEqual(11, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(5, sketchEditTool.Sketch.Segments.Count);
            ctx.MoveTo(400, 270); 
            
            sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>(true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ChangePolylineType05"), 0.1);
            ctx.ClickAt(350, 220);
            ctx.ClickAt(300, 350); 
            Assert.AreEqual(13, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(6, sketchEditTool.Sketch.Segments.Count);
            ctx.MoveTo(400, 270); 

            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ChangePolylineType06"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ShowHintMessages()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        Assert.That(ctx.TestHudManager.HintMessage.Contains("line"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateLine_ViaHudElement()
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
            ctx.TestHudManager.EnterValue(2.0);
            Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLine_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateLine_ViaHudElement_Continued()
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
            ctx.TestHudManager.EnterValue(2.0);
            ctx.MoveTo(450, 450); // Right point
            ctx.TestHudManager.EnterValue(2.0);
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateLine_ViaHudElement_Continued01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateRectangle_ViaHudElement()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
            ctx.ClickAt(100, 300); // LeftTop point
            ctx.MoveTo(300, 300);
            ctx.TestHudManager.EnterValue(2.0, 2.0);
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(4, sketchEditTool.Sketch.Segments.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateRectangle_ViaHud01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier2_ViaHudElement()
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
            ctx.TestHudManager.EnterValue(10.0); // Right point
            ctx.ClickAt(150, 300); // Control point
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier2_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier3_ViaHudElement()
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
            ctx.TestHudManager.EnterValue(10.0); // Right point
            ctx.ClickAt(150, 300); // Control point 1
            ctx.ClickAt(250, 50); // Control point 2
            Assert.AreEqual(4, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBezier3_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCircle_ViaHudElement()
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
            ctx.TestHudManager.EnterValue(2.0); // Rim point
            Assert.AreEqual(2, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCircle_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcCenter_ViaHudElement()
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
            ctx.TestHudManager.EnterValue(2.0); // Edge point 1
            ctx.MoveTo(200, 100);
            ctx.TestHudManager.EnterValue(100.0);  // Edge point 2
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------
    [Test]
    public void CreateArcCenter_ViaHudElement_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>(true);
            ctx.ClickAt(250, 250); // Center point
            ctx.MoveTo(80, 250);
            ctx.TestHudManager.EnterValue(2.0); // Edge point 1
            ctx.MoveTo(200, 100);
            ctx.TestHudManager.EnterValue(100.0);  // Edge point 2
            ctx.MoveTo(250, 250); // Center point 2
            ctx.TestHudManager.EnterValue(2.0); // Edge point 1
            ctx.MoveTo(150, 300); // End point 3 -> Merge
            ctx.TestHudManager.EnterValue(100.0);  // Edge point 2
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcCenter_ViaHudElement_Continued01"), 0.1);
            Assert.AreEqual(5, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);

            //Cleanup
            sketchEditTool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcRim_ViaHudElement()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>();
            ctx.ClickAt(100, 250); // Edge point 1
            ctx.ClickAt(250, 100); // Edge point 2
            ctx.MoveTo(130, 180);
            ctx.TestHudManager.EnterValue(2.0);  // Rim point
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRim_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcRim_ViaHudElement_Continued()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>(true);
            ctx.ClickAt(50, 50); // Start point
            ctx.ClickAt(450, 450); // End point
            ctx.TestHudManager.EnterValue(2.0); // Rim point
            ctx.MoveTo(400, 50);
            ctx.ClickAt(400, 50); // End point 2
            ctx.TestHudManager.EnterValue(3.0);  // Rim point 2
            ctx.MoveTo(250, 250);
            Assert.AreEqual(5, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(2, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateArcRim_ViaHudElement_Continued01"), 0.1);

            //Cleanup
            sketchEditTool.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEllipseCenter_ViaHudElement()
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
            ctx.TestHudManager.EnterValue(2.0); // Rim point1
            ctx.MoveTo(150, 200);
            ctx.TestHudManager.EnterValue(4.0); // Rim point2
            Assert.AreEqual(3, sketchEditTool.Sketch.Points.Count);
            Assert.AreEqual(1, sketchEditTool.Sketch.Segments.Count);
            Assert.AreEqual(0, sketchEditTool.Sketch.Constraints.Count);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateEllipseCenter_ViaHudElement01"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

}