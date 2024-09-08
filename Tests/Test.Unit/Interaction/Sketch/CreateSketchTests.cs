using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sketch;

[TestFixture]
public class CreateSketchTests
{
    const string _BasePath = @"Interaction\Sketch\Create";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.Workspace.GridEnabled = true;
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSketchInXY()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            // Create Circle
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(100, 250); // Rim point
            ctx.MoveTo(50, 50); // Move crsr out of the way
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchInXY1"), 0.1);

            // Leave editor
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchInXY2"), 0.1);

            // Selectable
            ctx.MoveTo(100, 250); // Rim point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchInXY3"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSketchOnFace()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();
            
        var sketchEditTool = new CreateSketchTool();
        Assert.That(ctx.WorkspaceController.StartTool(sketchEditTool));
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnFace1"), 0.1);

            ctx.SelectAt(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnFace2"), 0.1);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.TypeOf(typeof(SketchEditorTool)));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSketchOnReversedFace()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();
        TransformUtils.Rotate(body, Ax1.OZ, 180.0.ToRad());

        var sketchEditTool = new CreateSketchTool();
        Assert.That(ctx.WorkspaceController.StartTool(sketchEditTool));
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(350, 332);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnReversedFace1"), 0.1);

            ctx.SelectAt(350, 332);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnReversedFace2"), 0.1);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.TypeOf(typeof(SketchEditorTool)));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateOnFaceSelectionFilter()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        var sketchEditTool = new CreateSketchTool();
        Assert.That(ctx.WorkspaceController.StartTool(sketchEditTool));
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(160, 260);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateOnFaceSelectionFilter1"), 0.1);

            ctx.MoveTo(212, 190);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateOnFaceSelectionFilter2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSketchOnBoundFace()
    {
        var ctx = Context.Current;

        var box = Box.Create(10, 20, 2);
        var body = Body.Create(box);
        body.Position = new Pnt(5, 5, 0);
        var flange = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 2), 45);
        flange.Reverse = true;

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        var createImprintTool = new CreateImprintTool(body, Imprint.ImprintMode.Cutout);
        Assert.That(ctx.WorkspaceController.StartTool(createImprintTool));
        Assert.That(createImprintTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(180, 180);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnBoundFace01"), 0.1);

            ctx.SelectAt(180, 180);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnBoundFace02"), 0.1);
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);

            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(200, 250); // Rim point
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnBoundFace03"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EmptySketchMarker()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);
        var sketch = sketchEditTool.Sketch;

        Assert.Multiple(() =>
        {
            // In Editor, no marker
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker01"), 0.1);
            sketchEditTool.Stop();

            // Out of Editor, marker
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker02"), 0.1);

            // Enter editor, no marker
            sketchEditTool = new SketchEditorTool(sketch);
            ctx.WorkspaceController.StartTool(sketchEditTool);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker01"), 0.1);

            // Create Circle, no marker
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(200, 200); // Center point
            ctx.MoveTo(100, 100);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker03"), 0.1);
            ctx.ClickAt(100, 250); // Rim point
            ctx.MoveTo(50, 50); // Move crsr out of the way
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker04"), 0.1);

            // Leave editor, no marker
            sketchEditTool.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker05"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SegmentsVisibleOverClippedObjects()
    {
        var ctx = Context.Current;

        var box = Box.Create(10, 10, 2);
        var body = Body.Create(box);

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        Assert.Multiple(() =>
        {
            // Create Circle
            sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
            ctx.ClickAt(250, 250); // Center point
            ctx.ClickAt(100, 250); // Rim point
            ctx.MoveTo(50, 50); // Move crsr out of the way
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SegmentsVisibleOverClippedObjects1"), 0.1);
        });

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateOnDatumPlane()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 15.0;

        var datumPlane = DatumPlane.Create();
        datumPlane.Position = new Pnt(5, 10, 10);
        ctx.Document.Add(datumPlane);
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.StartTool(new CreateSketchTool());
        ctx.ClickAt(360, 240);
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.NotNull(sketchEditTool);
        Assert.AreEqual(sketchEditTool.Sketch.Body.Position, datumPlane.Position);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(CreateSketchTool.CreateMode.WorkplaneXY)]
    [TestCase(CreateSketchTool.CreateMode.WorkplaneXZ)]
    [TestCase(CreateSketchTool.CreateMode.WorkplaneYZ)]
    public void CreateSketchOnDefaultPlane(CreateSketchTool.CreateMode mode)
    {
        (int x, int y) coords = default;
        switch (mode)
        {
            case CreateSketchTool.CreateMode.WorkplaneXY:
                coords = (250, 290);
                break;
            case CreateSketchTool.CreateMode.WorkplaneXZ:
                coords = (204, 240);
                break;
            case CreateSketchTool.CreateMode.WorkplaneYZ:
                coords = (290, 240);
                break;
        }

        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool());
        ctx.MoveTo(coords.x, coords.y);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"CreateSketchInDefault{mode}1"), 0.1);
        ctx.ClickAt(coords.x, coords.y);
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.NotNull(sketchEditTool);

        // Create Circle in the top right
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(375, 125); // Center point
        ctx.ClickAt(375, 250); // Rim point
        ctx.MoveTo(50, 50); // Move crsr out of the way

        // Leave editor
        sketchEditTool.Stop();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"CreateSketchInDefault{mode}2"), 0.1);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(CreateSketchTool.CreateMode.WorkplaneXY)]
    [TestCase(CreateSketchTool.CreateMode.WorkplaneXZ)]
    [TestCase(CreateSketchTool.CreateMode.WorkplaneYZ)]
    public void CreateSketchOnDefaultPlaneOpposite(CreateSketchTool.CreateMode mode)
    {
        (int x, int y) coords = default;
        switch (mode)
        {
            case CreateSketchTool.CreateMode.WorkplaneXY:
                coords = (250, 290);
                break;
            case CreateSketchTool.CreateMode.WorkplaneXZ:
                coords = (290, 240);
                break;
            case CreateSketchTool.CreateMode.WorkplaneYZ:
                coords = (204, 240);
                break;
        }

        var ctx = Context.Current;
        ctx.Viewport.EyePoint = ctx.Viewport.EyePoint.Scaled(Pnt.Origin, -1);

        ctx.WorkspaceController.StartTool(new CreateSketchTool());
        ctx.MoveTo(coords.x, coords.y);
        //AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"CreateSketchInDefaultOpposite{mode}1"), 0.1);
        ctx.ClickAt(coords.x, coords.y);
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.NotNull(sketchEditTool);

        // Create Circle in the top right
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(375, 125); // Center point
        ctx.ClickAt(375, 250); // Rim point
        ctx.MoveTo(50, 50); // Move crsr out of the way

        // Leave editor
        sketchEditTool.Stop();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"CreateSketchInDefaultOpposite{mode}2"), 0.1);
    }
}