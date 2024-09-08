using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Assemble;

[TestFixture]
public class BoxJointToolTests
{
    const string _BasePath = @"Interaction\Assemble\BoxJoint";

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
    public void CreateSingleSelected()
    {
        var ctx = Context.Current;

        var body1 = TestGeomGenerator.CreateBody(Box.Create(-10, -2, 10));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(-2, -10, 10));

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body1);
        ctx.WorkspaceController.StartTool(new CreateBoxJointTool(body1));
        Assert.That(ctx.WorkspaceController.CurrentTool is CreateBoxJointTool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(150, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSingleSelected01"));

            ctx.ClickAt(150, 300);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            Assert.That(body1.Shape is BoxJoint);
            Assert.That(body2.Shape is BoxJoint);

            ctx.MoveTo(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSingleSelected02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateDoubleSelected()
    {
        var ctx = Context.Current;

        var body1 = TestGeomGenerator.CreateBody(Box.Create(-10, -2, 10));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(-2, -10, 10));

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body1);
        ctx.WorkspaceController.StartTool(new CreateBoxJointTool(body1, body2));

        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        Assert.That(body1.Shape is BoxJoint);
        Assert.That(body2.Shape is BoxJoint);

        ctx.MoveTo(0, 0);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateDoubleSelected01"));
    }

    //--------------------------------------------------------------------------------------------------

}