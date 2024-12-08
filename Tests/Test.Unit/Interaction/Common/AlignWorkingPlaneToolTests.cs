using System.IO;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Test.Utils;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Common;

[TestFixture]
public class AlignWorkingPlaneToolTests
{
    const string _BasePath = @"Interaction\Common\AlignWorkingPlane";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.WorkspaceController.V3dViewer.DisplayPrivilegedPlane(true);
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AlignOnFace()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(350, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnFace1"));

            ctx.SelectAt(350, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnFace2"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void AlignOnReversedFace()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();
        TransformUtils.Rotate(body, Ax1.OZ, 180.0.ToRad());

        Assert.Multiple(() =>
        {
            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(350, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnReversedFace1"));

            ctx.SelectAt(350, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnReversedFace2"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AlignOnEdge()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBox().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
        Assert.That(ctx.WorkspaceController.StartTool(tool));

        ctx.MoveTo(77, 151);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnEdge1"));

        ctx.SelectAt(77, 151);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnEdge2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AlignOnVertex()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBox().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
        Assert.That(ctx.WorkspaceController.StartTool(tool));

        ctx.MoveTo(250, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnVertex1"));

        ctx.SelectAt(250, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnVertex2"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectionFilter()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
        Assert.That(ctx.WorkspaceController.StartTool(tool));

        ctx.MoveTo(90, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter1"));

        ctx.SelectAt(160, 256);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter2"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void AlignOnDefaultPlane()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateImprint().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.ClickAt(279, 244);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnDefaultPlane01"));

            tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.ClickAt(208, 258);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnDefaultPlane02"));

            tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.ClickAt(234, 333);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnDefaultPlane03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AlignOnSketchEdge()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateCrossSection().Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.MoveTo(303, 244);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnSketchEdge01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AlignOnSketchVertex()
    {
        var ctx = Context.Current;

        var body = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle, true).Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.MoveTo(251, 118);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnSketchVertex01"));
        });
    }
}