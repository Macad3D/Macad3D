using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Test.Utils;
using NUnit.Framework;
using System.IO;

namespace Macad.Test.Interaction.Infrastructure;

[TestFixture]
public class HighlightTests
{
    const string _BasePath = @"Interaction\Infrastructure\Highlight";

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
    public void ModernHighlight()
    {
        var ctx = Context.Current;
        TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();
        var paramSet = ctx.Parameters.Get<VisualParameterSet>();
        paramSet.HighlightStyle = VisualParameterSet.HighlightStyles.Modern;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(320, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ModernHighlight01"));
            ctx.MoveTo(175, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ModernHighlight02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SwitchHighlightStyle()
    {
        var ctx = Context.Current;
        TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();
        var paramSet = ctx.Parameters.Get<VisualParameterSet>();

        Assert.Multiple(() =>
        {
            paramSet.HighlightStyle = VisualParameterSet.HighlightStyles.Modern;
            ctx.MoveTo(320, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchHighlightStyle01"));
            paramSet.HighlightStyle = VisualParameterSet.HighlightStyles.Classic;
            ctx.MoveTo(0, 0);
            ctx.MoveTo(320, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchHighlightStyle02"));
            paramSet.HighlightStyle = VisualParameterSet.HighlightStyles.Modern;
            ctx.MoveTo(0, 0);
            ctx.MoveTo(320, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchHighlightStyle01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OutlineWidth()
    {
        var ctx = Context.Current;
        TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();
        var paramSet = ctx.Parameters.Get<VisualParameterSet>();
        paramSet.HighlightStyle = VisualParameterSet.HighlightStyles.Modern;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(320, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OutlineWidth01"));
            paramSet.OutlineWidth = 2;
            ctx.MoveTo(320, 161);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OutlineWidth02"));
            paramSet.OutlineWidth = 10;
            ctx.MoveTo(320, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OutlineWidth03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenderModes([Values] Viewport.RenderModes renderMode)
    {
        var ctx = Context.Current;
        TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();
        var paramSet = ctx.Parameters.Get<VisualParameterSet>();
        paramSet.HighlightStyle = VisualParameterSet.HighlightStyles.Modern;
        ctx.Viewport.RenderMode = renderMode;
        ctx.WorkspaceController.Invalidate(forceRedraw:true);
        ctx.MoveTo(320, 160);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"RenderModes_{renderMode}"));
    }
}