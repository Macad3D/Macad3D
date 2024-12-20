using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using NUnit.Framework;
using Macad.Interaction;

namespace Macad.Test.Unit.Interaction.Infrastructure;

[TestFixture]
public class GridTests
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

    const string _BasePath = @"Interaction\Infrastructure\Grid";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SwitchRendermodes_OCCT29395()
    {
        var ctx = Context.Current;

        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 2.0;
        ctx.EditorState.SnapToGridSelected = true;

        ctx.Viewport.RenderMode = Viewport.RenderModes.SolidShaded;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchRendermodes01"));
        ctx.Viewport.RenderMode = Viewport.RenderModes.HLR;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchRendermodes01"));
        ctx.Viewport.RenderMode = Viewport.RenderModes.Raytraced;
        // OCCT 29395: Grid disappears forever after enabling raytracing
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchRendermodes01"));
        ctx.Viewport.RenderMode = Viewport.RenderModes.SolidShaded;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchRendermodes01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AutomaticSizeAdjust()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 1.0;

        ctx.ViewportController.Zoom(-5.0);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AutomaticSizeAdjust01"));

        ctx.ViewportController.Zoom(-20.0);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AutomaticSizeAdjust02"));

        ctx.ViewportController.Zoom(20.0);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AutomaticSizeAdjust01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AutomaticStepScale()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 1.0;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.VisualGridStepMinPixel = 10;
        viewportParameterSet.VisualGridMinStepsOnScreen = 10;

        Assert.Multiple(() =>
        {
            ctx.ViewportController.Zoom(-1.0);

            Assert.That(ctx.WorkspaceController.VisualGridMultiplier, Is.EqualTo(1.0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AutomaticStepScale01"));

            ctx.ViewportController.Zoom(-20.0);
            Assert.That(ctx.WorkspaceController.VisualGridMultiplier, Is.EqualTo(10.0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AutomaticStepScale02"));

            ctx.ViewportController.Zoom(-20.0);
            Assert.That(ctx.WorkspaceController.VisualGridMultiplier, Is.EqualTo(100.0));

            ctx.ViewportController.Zoom(20.0);
            Assert.That(ctx.WorkspaceController.VisualGridMultiplier, Is.EqualTo(10.0));

            ctx.ViewportController.Zoom(20.0);
            Assert.That(ctx.WorkspaceController.VisualGridMultiplier, Is.EqualTo(1.0));

            ctx.ViewportController.Zoom(20.0);
            Assert.That(ctx.WorkspaceController.VisualGridMultiplier, Is.EqualTo(0.1));

        });
    }
}