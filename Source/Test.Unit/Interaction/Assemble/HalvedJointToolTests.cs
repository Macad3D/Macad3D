using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Assemble;

[TestFixture]
public class HalvedJointToolTests
{
    const string _BasePath = @"Interaction\Assemble\HalvedJoint";

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
    public void Create()
    {
        var ctx = Context.Current;

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt(-9, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 2), new Pnt(-1, -9, 0));
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new CreateHalvedJointTool(body1);
            ctx.WorkspaceController.StartTool(tool);
            ctx.MoveTo(111, 295);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Create01"));
            ctx.ClickAt(111, 295);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Create02"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreatePreselected()
    {
        var ctx = Context.Current;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt(-9, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 2), new Pnt(-1, -9, 0));

        var tool = new CreateHalvedJointTool(body1, body2);
        ctx.WorkspaceController.StartTool(tool);

        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreatePreselected01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectOrientation()
    {
        var ctx = Context.Current;
        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt(-9, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 2), new Pnt(-1, -9, 0));
        var (first, second) = HalvedJoint.Create(body1, body2);

        Assert.Multiple(() =>
        {
            var tool = new SelectHalvedJointOrientationTool(first);
            ctx.WorkspaceController.StartTool(tool);
            ctx.MoveTo(207, 214);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOrientation01"));
            ctx.ClickAt(207, 214);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOrientation02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectOrientationTwoJoints()
    {
        var ctx = Context.Current;
        Core.Shapes.Sketch sketch = Core.Shapes.Sketch.Create();
        SketchBuilder sb = new(sketch);
        sb.Rectangle(-10, -10, 10, 10);
        sb.Rectangle(-8,  -8, 8,  8);
        var body1 = Body.Create(sketch);
        var extrude = Extrude.Create(body1);
        extrude.Depth = 2.0;
        var body2 = TestGeomGenerator.CreateBody(Box.Create(20, 2, 2), new Pnt(-10, 0, 0));
        var (first, second) = HalvedJoint.Create(body1, body2);
        ctx.ViewportController.ZoomFitAll();
        
        Assert.Multiple(() =>
        {
            var tool = new SelectHalvedJointOrientationTool(first);
            ctx.WorkspaceController.StartTool(tool);
            ctx.ClickAt(150, 323);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOrientationTwoJoints01"));

            tool = new SelectHalvedJointOrientationTool(first);
            ctx.WorkspaceController.StartTool(tool);
            ctx.ClickAt(363, 184);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOrientationTwoJoints02"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------
                
    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    public void PropPanelCleanup()
    {
        var ctx = Context.Current;
        var panelMgr = ctx.EnablePropertyPanels();

        var body1 = TestGeomGenerator.CreateBody(Box.Create(10, 2, 2), new Pnt(-9, -1, 0));
        var body2 = TestGeomGenerator.CreateBody(Box.Create(2, 10, 2), new Pnt(-1, -9, 0));
        var (first, second) = HalvedJoint.Create(body1, body2);
        ctx.WorkspaceController.StartEditor(first);

        var propPanel = panelMgr.FindFirst<HalvedJointPropertyPanel>();
        propPanel.SelectOrientationCommand.Execute(null);
        Assert.IsAssignableFrom<SelectHalvedJointOrientationTool>(ctx.WorkspaceController.CurrentTool);

        ctx.WorkspaceController.StopEditor();
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------

}