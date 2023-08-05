using System.IO;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify;

[TestFixture]
public class BooleanToolTests
{
    const string _BasePath = @"Interaction\Modify\Boolean";

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
    public void CommonSimple()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.ViewportController.ZoomFitAll();

        // Select First
        ctx.SelectAt(220, 200);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Hilight Second
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Common));
        ctx.MoveTo(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHiglighted"));

        // Select Second
        ctx.SelectAt(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CommonSimple"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CommonPreselect()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.ViewportController.ZoomFitAll();

        // Select First
        ctx.SelectAt(220, 200);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select Second
        ctx.SelectAt(230, 330, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TwoSelected"));

        // Select Third
        ctx.SelectAt(350, 150, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ThreeSelected"));

        // Do it
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Common));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CommonPreselect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutSimple()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.ViewportController.ZoomFitAll();

        // Select First
        ctx.SelectAt(220, 200);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Hilight Second
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Cut));
        ctx.MoveTo(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHiglighted"));

        // Select Second
        ctx.SelectAt(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CutSimple"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutPreselect()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.ViewportController.ZoomFitAll();

        // Select First
        ctx.SelectAt(220, 200);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select Second
        ctx.SelectAt(230, 330, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TwoSelected"));

        // Select Third
        ctx.SelectAt(350, 150, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ThreeSelected"));

        // Do it
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Cut));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CutPreselect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FuseSimple()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.ViewportController.ZoomFitAll();

        // Select First
        ctx.SelectAt(220, 200);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Hilight Second
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Fuse));
        ctx.MoveTo(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHiglighted"));

        // Select Second
        ctx.SelectAt(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FuseSimple"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FusePreselect()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.ViewportController.ZoomFitAll();

        // Select First
        ctx.SelectAt(220, 200);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select Second
        ctx.SelectAt(230, 330, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TwoSelected"));

        // Select Third
        ctx.SelectAt(350, 150, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ThreeSelected"));

        // Do it
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Fuse));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FusePreselect"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Undo()
    {
        var ctx = Context.Current;

        var body1 = _CreateBodies(true);
        ctx.Document.UndoHandler.Commit();
        ctx.ViewportController.ZoomFitAll();

        // Use Boolean Tool
        ctx.SelectAt(220, 200);
        ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operation.Common));
        ctx.SelectAt(230, 330);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CommonSimple"));

        // Undo
        Assert.That(ctx.Document.UndoHandler.CanUndo);
        ctx.Document.UndoHandler.DoUndo(1);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Undo"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterSelectionByShapeType()
    {
        var ctx = Context.Current;

        var body1 = TestGeomGenerator.CreateBox().Body;
        body1.Position = new Pnt(-8, -8, 0);
        var body2 = TestGeomGenerator.CreateBox().Body;
        body2.Position = new Pnt(8, -8, 0);
        var body3 = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.Rectangle, true).Body;
        ctx.ViewportController.ZoomFitAll();
//        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AAA"));

        // Select solid body
        ctx.SelectAt(333, 111);
        // Start boolean
        var tool = new BooleanOperationTool(BooleanOperationTool.Operation.Cut);
        ctx.WorkspaceController.StartTool(tool);
        // Selection of sketch should not be possible
        ctx.SelectAt(333, 357);
        Assert.AreEqual(tool, ctx.WorkspaceController.CurrentTool);
        // Selection of another solid IS possible
        ctx.SelectAt(153, 317);
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------


    #region Helper

    Body _CreateBodies(bool bigsize)
    {
        var target = Body.Create(new Box()
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 10,
        });
        target.Position = new Pnt(10, 10, 0);

        var operands = new IShapeOperand[2];
        var body = Body.Create(new Cylinder()
        {
            Radius = bigsize ? 20 : 10,
            Height = 15
        });
        body.Position = new Pnt(0, 10, 0);
        operands[0] = new BodyShapeOperand(body);

        body = Body.Create(new Sphere()
        {
            Radius = 15
        });
        body.Position = new Pnt(10, 10, 5);

        return target;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}