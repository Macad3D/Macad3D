using System.Threading;
using System.Threading.Tasks;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Mcp;
using Macad.Test.Utils;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class DuplicateBodyEditorSettingsTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(200);
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DuplicateBody_KeepsSketchEditorSettings()
    {
        var ctx = Context.Current;
        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var tool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(tool, Is.Not.Null);
        var sketch = tool.Sketch;
        tool.RotateView(90.0);
        tool.EnableClipPlane(false);
        ctx.Workspace.WorkingContext.GridStep = 7.5;
        var expectedView = tool.EditorViewport.Viewport.GetViewParameters(sketch.GetTransformation().Inverted());
        tool.Stop();

        var copyInfo = await new DocumentTools().DuplicateBody(sketch.Body.Name, "Copy");

        var clonedSketch = FindBody(copyInfo).Shape as Core.Shapes.Sketch;
        Assert.That(clonedSketch, Is.Not.Null.And.Not.SameAs(sketch));
        tool = new SketchEditorTool(clonedSketch);
        ctx.WorkspaceController.StartTool(tool);
        Assert.Multiple(() =>
        {
            Assert.That(tool.EditorViewport.Viewport.GetViewParameters(clonedSketch.GetTransformation().Inverted()),
                        Is.EqualTo(expectedView).Within(1e-6));
            Assert.That(tool.ViewRotation, Is.EqualTo(90.0).Within(1e-6));
            Assert.That(tool.ClipPlaneEnabled, Is.False);
            Assert.That(ctx.Workspace.WorkingContext.GridStep, Is.EqualTo(7.5).Within(1e-6));
        });
        tool.Stop();
    }
}
