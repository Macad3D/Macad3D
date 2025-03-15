using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;
using Macad.Interaction;

namespace Macad.Test.Unit.Interaction.Infrastructure;

[TestFixture]
public class SnappingTests
{
    const string _BasePath = @"Interaction\Infrastructure\Snapping";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 2.0;
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SnapToRectGrid()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true;

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(102, 245);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToRectGrid01"));
            ctx.MoveTo(147, 272);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToRectGrid02"));
            ctx.MoveTo(175, 213);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToRectGrid03"));

            ctx.EditorState.SnapToGridSelected = false;
            ctx.MoveTo(175, 213);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToRectGrid90"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SnapToScaledRectGrid()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.Workspace.GridStep = 1.0;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.VisualGridStepMinPixel = 10;
        viewportParameterSet.VisualGridMinStepsOnScreen = 10;

        ctx.ViewportController.Zoom(-20.0);
        Assume.That(ctx.WorkspaceController.VisualGridMultiplier, Is.GreaterThan(1.0));

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(102, 245);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToScaledRectGrid"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SnapToCircGrid()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridType = Workspace.GridTypes.Circular;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true;

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(102, 245);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToCircGrid01"));
            ctx.MoveTo(147, 272);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToCircGrid02"));
            ctx.MoveTo(175, 213);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToCircGrid03"));

            ctx.EditorState.SnapToGridSelected = false;
            ctx.MoveTo(175, 213);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToCircGrid90"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SnapToScaledCircGrid()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridType = Workspace.GridTypes.Circular;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = true; 
        ctx.Workspace.GridStep = 1.0;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.VisualGridStepMinPixel = 10;
        viewportParameterSet.VisualGridMinStepsOnScreen = 10;

        ctx.ViewportController.Zoom(-20.0);
        Assume.That(ctx.WorkspaceController.VisualGridMultiplier, Is.GreaterThan(1.0));
        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(102, 245);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToScaledCircGrid"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SnapToVertex()
    {
        var refBody = TestGeomGenerator.CreateBox().Body;

        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = false;
        ctx.EditorState.SnapToVertexSelected = true;

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(54, 357);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToVertex01"));
            ctx.MoveTo(255, 254);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToVertex02"));
            ctx.MoveTo(252, 482);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToVertex03"));

            ctx.EditorState.SnapToVertexSelected = false;
            ctx.MoveTo(252, 482);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToVertex90"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SnapToEdge()
    {
        var refBody = TestGeomGenerator.CreateBox().Body;

        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = false;
        ctx.EditorState.SnapToEdgeSelected = true;

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(54, 357);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToEdge01"));
            ctx.MoveTo(168, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToEdge02"));
            ctx.MoveTo(251, 462);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToEdge03"));

            ctx.EditorState.SnapToEdgeSelected = false;
            ctx.MoveTo(251, 462);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SnapToEdge90"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FindSelectedSnapshape()
    {
        var refBody = TestGeomGenerator.CreateBox().Body;

        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToGridSelected = false;
        ctx.EditorState.SnapToVertexSelected = true;

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.MoveTo(252, 482);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FindSelectedSnapshape01"));
            ctx.ClickAt(252, 482);
            ctx.ClickAt(249, 495);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FindSelectedSnapshape02"));
            ctx.MoveTo(445, 139);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FindSelectedSnapshape03"));
            ctx.ClickAt(445, 139);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FindSelectedSnapshape04"));
        });
    }

    //--------------------------------------------------------------------------------------------------
}