using System.IO;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Editors.Topology;
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

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StopEditorToolOnEditorClose()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.StartEditor(sketch);

        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        Assert.That(ctx.WorkspaceController.CurrentTool, Is.EqualTo(tool));
        ctx.WorkspaceController.StopEditor();
        Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SecondOperandEditor()
    {
        var ctx = Context.Current;
        ctx.EnablePropertyPanels();

        var box = Box.Create(5, 5, 1);
        var body = Body.Create(box);
        var imprint = Imprint.Create(body, box.GetSubshapeReference(SubshapeType.Face, 5));
        SketchBuilder sb = new(imprint.Sketch);
        sb.Circle(-1, -1, 0.5);
        ctx.ViewportController.ZoomFitAll();
        ctx.ClickAt(250, 250);

        BodyShapePropertyPanel.SetCurrentShapeCommand.Execute(imprint.Sketch);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondOperandEditor01"));
    }
}