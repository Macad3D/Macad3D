using System.IO;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Multiply;

[TestFixture]
public class LinearArrayTests
{
    const string _BasePath = @"Interaction\Multiply\LinearArray";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.Viewport.V3dView.SetBackgroundColor(Quantity_NameOfColor.BLACK.ToColor());
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSketch()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(sketch.Body);

        var tool = new CreateLinearArrayTool(sketch.Body);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            Assert.IsInstanceOf<LinearArray>(sketch.Body.Shape);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSketch01"));
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CreateFromSolid()
    {
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Selection.SelectEntity(imprint.Body);

        var tool = new CreateLinearArrayTool(imprint.Body);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            var linearArray = imprint.Body.Shape as LinearArray;
            Assert.IsNotNull(linearArray);
            Assert.AreEqual(tool, ctx.WorkspaceController.CurrentTool);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid01"));

            ctx.MoveTo(209, 103);
            Assert.AreEqual(LinearArray.PlaneType.XZ, linearArray.Plane);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid02"));

            ctx.MoveTo(366, 147);
            Assert.AreEqual(LinearArray.PlaneType.YZ, linearArray.Plane);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid03"));

            ctx.ClickAt(180, 223);
            Assert.AreEqual(LinearArray.PlaneType.XY, linearArray.Plane);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFromSolid04"));
        });
    }

    //--------------------------------------------------------------------------------------------------

}