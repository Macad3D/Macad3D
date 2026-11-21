using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Interaction.Sketch;

[TestFixture]
public class SketchEditorSettingsCloneTests
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

    const string _ModelClipboardFormat = "Macad.ModelContent.1";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DuplicateKeepsEditorSettings()
    {
        var (sketch, originalState) = _CreateCustomizedSketch();

        var clonedSketch = _DuplicateBodyOf(sketch);

        _AssertSameState(originalState, _OpenAndCapture(clonedSketch));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DuplicatedEditorSettingsAreIndependent()
    {
        var ctx = Context.Current;
        var (sketch, originalState) = _CreateCustomizedSketch();
        var clonedSketch = _DuplicateBodyOf(sketch);

        var tool = new SketchEditorTool(clonedSketch);
        ctx.WorkspaceController.StartTool(tool);
        ctx.Workspace.WorkingContext.GridStep = 3.0;
        tool.RotateView(90.0);
        tool.EnableClipPlane(true);
        tool.Stop();

        _AssertSameState(originalState, _OpenAndCapture(sketch));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DuplicateKeepsEditorSettingsOfClonedOperandBodies()
    {
        var ctx = Context.Current;
        var (sketch, originalState) = _CreateCustomizedSketch();
        var operandBody = sketch.Body;
        Extrude.Create(operandBody);
        var targetBody = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(targetBody);
        BooleanCut.Create(targetBody, new BodyShapeOperand(operandBody));

        var cloned = InteractiveContext.Current.DocumentController.Duplicate([targetBody], new CloneOptions(true));

        var clonedTarget = cloned.Single() as Body;
        var clonedOperandBody = ((clonedTarget.Shape as BooleanCut).Operands[1] as BodyShapeOperand).Body;
        Assert.That(clonedOperandBody, Is.Not.SameAs(operandBody));
        var clonedSketch = (clonedOperandBody.Shape as Extrude)?.Operands[0] as Core.Shapes.Sketch;
        Assert.That(clonedSketch, Is.Not.Null);
        _AssertSameState(originalState, _OpenAndCapture(clonedSketch));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PasteKeepsEditorSettingsOfDeletedOriginal()
    {
        var ctx = Context.Current;
        var (sketch, originalState) = _CreateCustomizedSketch();
        _CopyBodyOf(sketch);
        ctx.Document.SafeDelete([sketch.Body]);

        _AssertSameState(originalState, _OpenAndCapture(_PasteSketch()));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PasteUsesEditorSettingsFromCopyTime()
    {
        var ctx = Context.Current;
        var (sketch, originalState) = _CreateCustomizedSketch();
        _CopyBodyOf(sketch);

        // Change the original after copying
        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        ctx.Workspace.WorkingContext.GridStep = 3.0;
        tool.RotateView(90.0);
        tool.EnableClipPlane(true);
        tool.Stop();

        _AssertSameState(originalState, _OpenAndCapture(_PasteSketch()));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PasteOfContentWithoutEditorSettings()
    {
        // Clipboard content of older versions has no editor settings in the header
        var ctx = Context.Current;
        var (sketch, _) = _CreateCustomizedSketch();
        _CopyBodyOf(sketch);
        var content = ctx.Clipboard.GetDataAsString(_ModelClipboardFormat);
        int settingsStart = content.IndexOf(",EntitySettings:");
        int entitiesStart = content.IndexOf("[!Topology.Body");
        Assert.That(settingsStart, Is.Positive.And.LessThan(entitiesStart));
        ctx.Clipboard.SetData(_ModelClipboardFormat, content[..settingsStart] + "}" + content[entitiesStart..]);

        var state = _OpenAndCapture(_PasteSketch());

        Assert.Multiple(() =>
        {
            Assert.That(state.ViewRotation, Is.EqualTo(0.0));
            Assert.That(state.ClipPlaneEnabled, Is.True);
            Assert.That(state.GridType, Is.EqualTo(Workspace.GridTypes.Rectangular));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PasteIntoOtherDocumentKeepsEditorSettings()
    {
        var (sketch, originalState) = _CreateCustomizedSketch();
        _CopyBodyOf(sketch);
        var clipboardContent = Context.Current.Clipboard.GetDataAsString(_ModelClipboardFormat);

        // Fresh context with a new document, like another application instance
        Context.Current.Deinit();
        Context.InitWithView(500);
        Context.Current.Clipboard.SetData(_ModelClipboardFormat, clipboardContent);

        _AssertSameState(originalState, _OpenAndCapture(_PasteSketch()));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------


    record EditorState(double[] ViewParameters, double ViewRotation, bool ClipPlaneEnabled,
                       Workspace.GridTypes GridType, double GridStep, double GridRotation, int GridDivisions);

    //--------------------------------------------------------------------------------------------------

    static EditorState _CaptureEditorState(SketchEditorTool tool)
    {
        var wc = Context.Current.Workspace.WorkingContext;
        return new EditorState(tool.EditorViewport.Viewport.GetViewParameters(tool.Sketch.GetTransformation().Inverted()),
                               tool.ViewRotation, tool.ClipPlaneEnabled,
                               wc.GridType, wc.GridStep, wc.GridRotation, wc.GridDivisions);
    }

    //--------------------------------------------------------------------------------------------------

    static EditorState _OpenAndCapture(Core.Shapes.Sketch sketch)
    {
        var ctx = Context.Current;
        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        var state = _CaptureEditorState(tool);
        tool.Stop();
        return state;
    }

    //--------------------------------------------------------------------------------------------------

    // Creates a sketch and leaves its editor with non-default view, clip plane and working context.
    static (Core.Shapes.Sketch sketch, EditorState state) _CreateCustomizedSketch()
    {
        var ctx = Context.Current;
        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var tool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(tool, Is.Not.Null);

        tool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(250, 250);
        ctx.ClickAt(100, 250);

        ctx.MoveTo(250, 250);
        ctx.ViewportController.MouseMove(new Point(150, 200), ModifierKeys.None, ViewportController.MouseMoveMode.Panning);
        tool.RotateView(90.0);
        tool.EnableClipPlane(false);
        var wc = ctx.Workspace.WorkingContext;
        wc.GridType = Workspace.GridTypes.Circular;
        wc.GridStep = 7.5;
        wc.GridRotation = 15.0;
        wc.GridDivisions = 12;

        var state = _CaptureEditorState(tool);
        var sketch = tool.Sketch;
        tool.Stop();
        return (sketch, state);
    }

    //--------------------------------------------------------------------------------------------------

    static void _AssertSameState(EditorState expected, EditorState actual)
    {
        Assert.Multiple(() =>
        {
            Assert.That(actual.ViewParameters, Is.EqualTo(expected.ViewParameters).Within(1e-6));
            Assert.That(actual.ViewRotation, Is.EqualTo(expected.ViewRotation).Within(1e-6));
            Assert.That(actual.ClipPlaneEnabled, Is.EqualTo(expected.ClipPlaneEnabled));
            Assert.That(actual.GridType, Is.EqualTo(expected.GridType));
            Assert.That(actual.GridStep, Is.EqualTo(expected.GridStep).Within(1e-6));
            Assert.That(actual.GridRotation, Is.EqualTo(expected.GridRotation).Within(1e-6));
            Assert.That(actual.GridDivisions, Is.EqualTo(expected.GridDivisions));
        });
    }

    //--------------------------------------------------------------------------------------------------

    static Core.Shapes.Sketch _DuplicateBodyOf(Core.Shapes.Sketch sketch)
    {
        var ctx = Context.Current;
        ctx.WorkspaceController.Selection.SelectEntity(sketch.Body);
        ctx.WorkspaceController.Duplicate();
        var clonedBody = ctx.WorkspaceController.Selection.SelectedEntities.Single() as Body;
        Assert.That(clonedBody, Is.Not.Null.And.Not.SameAs(sketch.Body));
        var clonedSketch = clonedBody.Shape as Core.Shapes.Sketch;
        Assert.That(clonedSketch, Is.Not.Null);
        return clonedSketch;
    }

    //--------------------------------------------------------------------------------------------------

    static void _CopyBodyOf(Core.Shapes.Sketch sketch)
    {
        var ctx = Context.Current;
        ctx.WorkspaceController.Selection.SelectEntity(sketch.Body);
        ctx.WorkspaceController.CopyToClipboard();
        Assert.That(ctx.Clipboard.ContainsData(_ModelClipboardFormat));
    }

    //--------------------------------------------------------------------------------------------------

    static Core.Shapes.Sketch _PasteSketch()
    {
        var pasted = Context.Current.WorkspaceController.PasteFromClipboard()?.ToArray();
        Assert.That(pasted, Has.Length.EqualTo(1));
        var clonedSketch = (pasted[0] as Body)?.Shape as Core.Shapes.Sketch;
        Assert.That(clonedSketch, Is.Not.Null);
        return clonedSketch;
    }

    //--------------------------------------------------------------------------------------------------

}
