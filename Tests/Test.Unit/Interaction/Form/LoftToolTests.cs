using System.IO;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Form;

[TestFixture]
public class LoftToolTests
{
    const string _BasePath = @"Interaction\Form\Loft";

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
    public void SelectSections()
    {
        var ctx = Context.Current;

        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();
            // Select First
            ctx.SelectAt(176, 405);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectSections00"));

            // Select Second
            ctx.WorkspaceController.StartTool(new CreateLoftTool());
            ctx.SelectAt(161, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectSections01"));

            // Select Third
            ctx.SelectAt(349, 164);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectSections02"));

            // Finish
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectSections03"));
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectionFilter()
    {
        var ctx = Context.Current;

        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestGeomGenerator.CreateBox().Body;
        body3.Position = body3.Position.Translated(new Vec(0, 20, 0.0));

        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(114, 261);
            ctx.WorkspaceController.StartTool(new CreateLoftTool());

            // Move to sketch, it should highlight
            ctx.MoveTo(216, 160);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter00"));

            // Move to solid, it should not highlight
            ctx.MoveTo(350, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter01"));

            // Move to self, it should not highlight
            ctx.MoveTo(114, 261);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddSections()
    {
        var ctx = Context.Current;

        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        Loft.Create(body1, new[] {new BodyShapeOperand(body2)});

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();
            // Select Loft Body
            ctx.SelectAt(176, 405);
            ctx.WorkspaceController.StartTool(new CreateLoftTool());

            // Add and Finish
            ctx.SelectAt(349, 164);
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AddSections00"));
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StartWithMultipleSections()
    {
        var ctx = Context.Current;

        var body1 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;

        var body2 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body2.Position = body2.Position.Translated(new Vec(0, 0, 10.0));
        body2.Rotation = new Quaternion(20.0.ToRad(), 20.0.ToRad(), 0.0);

        var body3 = TestSketchGenerator.CreateRectangle(5.0, 5.0).Body;
        body3.Position = body3.Position.Translated(new Vec(0, 5.0, 20.0));
        body3.Rotation = new Quaternion(40.0.ToRad(), 40.0.ToRad(), 0.0);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();
            // Select First
            ctx.SelectAt(176, 405);

            // Select Second and Start
            ctx.SelectAt(161, 300, ModifierKeys.Shift);
            ctx.WorkspaceController.StartTool(new CreateLoftTool());
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultipleSections01"));

            // Select Third
            ctx.SelectAt(349, 164);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultipleSections02"));

            // Finish
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        });
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    public void PropPanelCleanup()
    {
        var ctx = Context.Current;
        var panelMgr = ctx.EnablePropertyPanels();

        var loft = TestGeomGenerator.CreateLoft();
        ctx.WorkspaceController.Selection.SelectEntity(loft.Body);

        var propPanel = panelMgr.FindFirst<LoftPropertyPanel>();
        propPanel.AddSectionCommand.Execute(null);
        Assert.IsAssignableFrom<CreateLoftTool>(ctx.WorkspaceController.CurrentTool);

        ctx.WorkspaceController.StopEditor();
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------

}