using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sheet;

[TestFixture]
public class UnfoldSheetToolTests
{
    const string _BasePath = @"Interaction\Sheet\UnfoldSheet";

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
    public void CreateUnfoldAutomatic()
    {
        var ctx = Context.Current;

        var box = Box.Create(10.0, 10.0, 1.0);
        var body = Body.Create(box);
        var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 70.0, 10.0, 1.0);
        flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.StartTool(new CreateUnfoldSheetTool(body));
        Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);

        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.MouseMove(new Point(300, 350));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateUnfoldAutomatic"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateUnfoldManual()
    {
        var ctx = Context.Current;

        var box = Box.Create(10.0, 10.0, 1.0);
        var body = TestGeomGenerator.CreateBody(box);
        var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 70.0, 10.0, 1.0);
        flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;
        ctx.UndoHandler.Commit();

        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.StartTool(new CreateUnfoldSheetTool(body, CreateUnfoldSheetTool.Flags.ForceManualSelect));
        Assert.That(ctx.WorkspaceController.CurrentTool, Is.Not.Null);

        // Check selection filter
        ctx.ViewportController.MouseMove(new Point(279, 413));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateUnfoldManual1"));

        // Select correct face
        ctx.ViewportController.MouseMove(new Point(100, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateUnfoldManual2"));

        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateUnfoldManual3"));
    }
}