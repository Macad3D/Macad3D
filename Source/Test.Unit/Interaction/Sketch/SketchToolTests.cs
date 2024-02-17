using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sketch;

[TestFixture]
public class SketchToolTests
{
    const string _BasePath = @"Interaction\Sketch";

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
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(sketch);

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
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(sketch);

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
            sketch.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorThinBoundingBox()
    {
        var ctx = Context.Current;
        var sketch = Core.Shapes.Sketch.Create();
        var sb = new SketchBuilder(sketch);
        sb.Line(-0.1, -1.0, 0.1, 1.0);
        Body.Create(sketch);

        ctx.WorkspaceController.StartEditor(sketch);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorThinBoundingBox01"));

            sketch.SetPoint(0, new Pnt2d(-0.1, -4.0));
            sketch.SetPoint(1, new Pnt2d(0.1, 4.0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorThinBoundingBox02"));

            sketch.SetPoint(0, new Pnt2d(-4.0, -1.0));
            sketch.SetPoint(1, new Pnt2d(4.0, 1.0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorThinBoundingBox03"));
        });
    }

}