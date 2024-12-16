using System.IO;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sketch;

[TestFixture]
public class CreateConstraintTests
{
    const string _BasePath = @"Interaction\Sketch\CreateConstraint";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        Context.Current.Workspace.GridEnabled = true;
        // Set background color to black to better the helper lines
        Context.Current.ViewportController.V3dView.SetBackgroundColor(Color.Black.ToQuantityColor());
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleAcuteForward()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(400, 50);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(400, 400);
        ctx.MoveTo(0, 0);
        //AssertHelper.IsSameViewport(Path.Combine(BasePath, @"CreateConstraint_AngleAcute1"), 0.1);

        // Create Constraint
        ctx.ClickAt(250, 131);
        ctx.ClickAt(250, 332, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintAngle>());
        sketchEditTool.CreateConstraint<SketchConstraintAngle>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(53.0, ((SketchConstraintAngle) sketchEditTool.Sketch.Constraints[0]).Angle, 1.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AngleAcute2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleAcuteReverse()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(400, 50);
        ctx.ClickAt(50, 240);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(400, 400);
        ctx.ClickAt(50, 240);
        ctx.MoveTo(0, 0);
        //AssertHelper.IsSameViewport(Path.Combine(BasePath, @"CreateConstraint_AngleAcute1"), 0.1);

        // Create Constraint
        ctx.ClickAt(250, 131);
        ctx.ClickAt(250, 332, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintAngle>());
        sketchEditTool.CreateConstraint<SketchConstraintAngle>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(53.0, ((SketchConstraintAngle) sketchEditTool.Sketch.Constraints[0]).Angle, 2.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AngleAcuteReverse2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleAcuteSwapSelection()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(400, 50);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(400, 400);
        ctx.MoveTo(0, 0);
        //AssertHelper.IsSameViewport(Path.Combine(BasePath, @"CreateConstraint_AngleAcute1"), 0.1);

        // Create Constraint
        ctx.ClickAt(250, 332);
        ctx.ClickAt(250, 131, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintAngle>());
        sketchEditTool.CreateConstraint<SketchConstraintAngle>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(53.0, ((SketchConstraintAngle) sketchEditTool.Sketch.Constraints[0]).Angle, 2.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AngleAcuteSwapSelection2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleObtuseForward()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(100, 240);
        ctx.ClickAt(240, 50);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(100, 240);
        ctx.ClickAt(240, 400);
        ctx.MoveTo(0, 0);
        //AssertHelper.IsSameViewport(Path.Combine(BasePath, @"CreateConstraint_AngleObtuse1"), 0.1);

        // Create Constraint
        ctx.ClickAt(140, 184);
        ctx.ClickAt(140, 287, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintAngle>());
        sketchEditTool.CreateConstraint<SketchConstraintAngle>();

        // Check 
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(102.0, ((SketchConstraintAngle) sketchEditTool.Sketch.Constraints[0]).Angle, 1.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AngleObtuse2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleUnconnected()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(400, 50);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(60, 250);
        ctx.ClickAt(410, 410);
        ctx.MoveTo(0, 0);
        //AssertHelper.IsSameViewport(Path.Combine(BasePath, @"CreateConstraint_AngleUnconnected1"), 0.1);

        // Create Constraint
        ctx.ClickAt(250, 131);
        ctx.ClickAt(250, 338, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintAngle>());
        sketchEditTool.CreateConstraint<SketchConstraintAngle>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(53.0, ((SketchConstraintAngle) sketchEditTool.Sketch.Constraints[0]).Angle, 1.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AngleUnconnected2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AngleUnconnectedReverse()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(400, 50);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(410, 410);
        ctx.ClickAt(60, 250);
        ctx.MoveTo(0, 0);
        //AssertHelper.IsSameViewport(Path.Combine(BasePath, @"CreateConstraint_AngleUnconnected1"), 0.1);

        // Create Constraint
        ctx.ClickAt(250, 131);
        ctx.ClickAt(250, 338, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintAngle>());
        sketchEditTool.CreateConstraint<SketchConstraintAngle>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(53.0, ((SketchConstraintAngle) sketchEditTool.Sketch.Constraints[0]).Angle, 1.0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AngleUnconnectedReverse2"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Perpendicular()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(110, 60);
        ctx.ClickAt(120, 400);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(120, 400);
        ctx.ClickAt(400, 400);
        ctx.MoveTo(0, 0);

        // Create Constraint
        ctx.ClickAt(115, 250, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintPerpendicular>());
        sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Perpendicular"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Radius()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(250, 250);
        ctx.ClickAt(400, 400);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintRadius>());
        sketchEditTool.CreateConstraint<SketchConstraintRadius>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(4.24, ((SketchConstraintRadius) sketchEditTool.Sketch.Constraints[0]).Radius, 0.01);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Radius"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Concentric()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(250, 250);
        ctx.ClickAt(250, 400);
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(260, 260);
        ctx.ClickAt(260, 300);
        ctx.MoveTo(0, 0);

        // Create Constraint
        ctx.ClickAt(250, 100, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintConcentric>());
        sketchEditTool.CreateConstraint<SketchConstraintConcentric>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Concentric"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Horizontal()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(450, 260);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintHorizontal>());
        sketchEditTool.CreateConstraint<SketchConstraintHorizontal>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Horizontal"), 0.1);

            sketchEditTool.RotateView(90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HorizontalRotated"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Vertical()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(240, 50);
        ctx.ClickAt(260, 450);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintVertical>());
        sketchEditTool.CreateConstraint<SketchConstraintVertical>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Vertical"), 0.1);

            sketchEditTool.RotateView(90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "VerticalRotated"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LineLength()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 250);
        ctx.ClickAt(450, 250);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintLength>());
        sketchEditTool.CreateConstraint<SketchConstraintLength>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(8, ((SketchConstraintLength) sketchEditTool.Sketch.Constraints[0]).Length, 0.01);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineLength"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EqualLine()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 150);
        ctx.ClickAt(450, 150);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(100, 350);
        ctx.ClickAt(400, 350);
        ctx.ClickAt(200, 150, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintEqual>());
        sketchEditTool.CreateConstraint<SketchConstraintEqual>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EqualLine"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EqualCircle()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(125, 250);
        ctx.ClickAt(50, 250);
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(375, 250);
        ctx.ClickAt(400, 250);
        ctx.ClickAt(125, 175, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintEqual>());
        sketchEditTool.CreateConstraint<SketchConstraintEqual>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EqualCircle"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ParallelLine()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 140);
        ctx.ClickAt(450, 160);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(100, 360);
        ctx.ClickAt(400, 340);
        ctx.ClickAt(250, 150, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintParallel>());
        sketchEditTool.CreateConstraint<SketchConstraintParallel>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ParallelLine"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HorizontalDistance()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 250);
        ctx.ClickAt(450, 250);
        ctx.ClickAt(50, 250);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintHorizontalDistance>());
        var constraints = sketchEditTool.CreateConstraint<SketchConstraintHorizontalDistance>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(-4.0, ((SketchConstraintHorizontalDistance) constraints[0]).Distance, 0.01);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HorizontalDistance"), 0.1);

            sketchEditTool.RotateView(90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HorizontalDistanceRotated"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void VerticalDistance()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(450, 200);
        ctx.ClickAt(50, 200);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintVerticalDistance>());
        var constraints = sketchEditTool.CreateConstraint<SketchConstraintVerticalDistance>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            Assert.AreEqual(1.0, ((SketchConstraintVerticalDistance) constraints[0]).Distance, 0.03);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "VerticalDistance"), 0.1);

            sketchEditTool.RotateView(90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "VerticalDistanceRotated"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FixedPoint()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(450, 200);
        ctx.ClickAt(50, 200);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintFixed>());
        sketchEditTool.CreateConstraint<SketchConstraintFixed>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FixedPoint"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FixedSegment()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(450, 200);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintFixed>());
        sketchEditTool.CreateConstraint<SketchConstraintFixed>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FixedSegment"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PointOnSegment()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(370, 200);
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(350, 250);
        ctx.ClickAt(450, 350);

        ctx.ClickAt(370, 200, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintPointOnSegment>());
        sketchEditTool.CreateConstraint<SketchConstraintPointOnSegment>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PointOnSegment"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TangentToCircle()
    {            
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(370, 200);
        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
        ctx.ClickAt(350, 250);
        ctx.ClickAt(450, 350);

        ctx.ClickAt(300, 200, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintTangent>());
        sketchEditTool.CreateConstraint<SketchConstraintTangent>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TangentToCircle"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------
    [Test]
    public void TangentToArc()
    {            
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(370, 200);
        sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
        ctx.ClickAt(350, 250);
        ctx.ClickAt(222, 290);
        ctx.ClickAt(383, 185);

        ctx.ClickAt(300, 200, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintTangent>());
        sketchEditTool.CreateConstraint<SketchConstraintTangent>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TangentToArc"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void PointOnMidpoint()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 200);
        ctx.ClickAt(370, 200);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(400, 444);
        ctx.ClickAt(290, 30);

        ctx.ClickAt(370, 200, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintPointOnMidpoint>());
        sketchEditTool.CreateConstraint<SketchConstraintPointOnMidpoint>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PointOnMidpoint"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SmoothCorner_BezierBezier()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
        ctx.ClickAt(50, 400);
        ctx.ClickAt(200, 200);
        ctx.ClickAt(40, 220);
        sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>();
        ctx.ClickAt(200, 200);
        ctx.ClickAt(400, 400);
        ctx.ClickAt(300, 220);
        ctx.ClickAt(400, 260);

        ctx.ClickAt(200, 200);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.AreEqual(0, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintSmoothCorner>());
        sketchEditTool.CreateConstraint<SketchConstraintSmoothCorner>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SmoothCorner_BezierBezier"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SmoothCorner_BezierLine()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
        ctx.ClickAt(50, 400);
        ctx.ClickAt(200, 200);
        ctx.ClickAt(40, 220);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(200, 200);
        ctx.ClickAt(400, 200);

        ctx.ClickAt(200, 200);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.AreEqual(0, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintSmoothCorner>());
        sketchEditTool.CreateConstraint<SketchConstraintSmoothCorner>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SmoothCorner_BezierLine"), 0.1);
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SmoothCorner_BezierArc()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
        ctx.ClickAt(50, 400);
        ctx.ClickAt(200, 200);
        ctx.ClickAt(40, 220);
        sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>();
        ctx.ClickAt(200, 200);
        ctx.ClickAt(350, 350);
        ctx.ClickAt(400, 200);

        ctx.ClickAt(200, 200);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedPoints.Count);
        Assert.AreEqual(0, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintSmoothCorner>());
        sketchEditTool.CreateConstraint<SketchConstraintSmoothCorner>();

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SmoothCorner_BezierArc"), 0.1);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MarkerStacking()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
        ctx.ClickAt(100, 100);
        ctx.ClickAt(400, 400);

        // Create constraints
        ctx.ClickAt(250, 400);
        ctx.ClickAt(100, 250, ModifierKeys.Shift);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>().Count > 0);
        ctx.ClickAt(100, 250);
        ctx.ClickAt(250, 100, ModifierKeys.Shift);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>().Count > 0);
        ctx.ClickAt(250, 100);
        ctx.ClickAt(400, 250, ModifierKeys.Shift);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>().Count > 0);
        ctx.ClickAt(400, 250);
        ctx.ClickAt(250, 400, ModifierKeys.Shift);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>().Count > 0);

        ctx.ClickAt(100, 250);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintVertical>().Count > 0);
        ctx.ClickAt(100, 250);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintLength>().Count > 0);
        ctx.ClickAt(100, 250);
        ctx.ClickAt(250, 100, ModifierKeys.Shift);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
        ctx.ClickAt(100, 250);
        ctx.ClickAt(400, 250, ModifierKeys.Shift);
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintParallel>().Count > 0);
        ctx.ClickAt(400, 250);
        ctx.ClickAt(250, 400, ModifierKeys.Shift);    
        Assert.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
            
        ctx.MoveTo(0,0);

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MarkerStacking01"), 0.1);

        // Zoom should adjust 
        ctx.ViewportController.Zoom(-0.5);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MarkerStacking02"), 0.1);

        // Delete Constraint
        ctx.ClickAt(130, 250);
        sketchEditTool.Delete();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MarkerStacking03"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Undo()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
        var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
        Assert.That(sketchEditTool, Is.Not.Null);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(110, 60);
        ctx.ClickAt(120, 400);
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(120, 400);
        ctx.ClickAt(400, 400);
        ctx.MoveTo(0, 0);

        // Create Constraint
        ctx.ClickAt(115, 250, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.AreEqual(2, sketchEditTool.SelectedSegments.Count);
        Assert.IsTrue(sketchEditTool.CanCreateConstraint<SketchConstraintPerpendicular>());
        sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>();

        Assert.IsTrue(ctx.UndoHandler.CanUndo);
        ctx.UndoHandler.DoUndo(1);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Undo01"), 0.1);
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OrientationSwap()
    {
        var ctx = Context.Current;

        var sketch = TestSketchGenerator.CreateRectangle(10, 10);
        sketch.Body.Rotation = new Quaternion(0, -90.0.ToRad(), -90.0.ToRad());
        var sketchEditTool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(sketchEditTool);

        // Create segments
        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
        ctx.ClickAt(50, 240);
        ctx.ClickAt(450, 260);
        ctx.MoveTo(0, 0);

        // Create Constraint
        Assert.AreEqual(1, sketchEditTool.SelectedSegments.Count);
        SketchCommands.CreateConstraint.Execute(SketchCommands.Constraints.Horizontal);

        // Check
        Assert.Multiple(() =>
        {
            Assert.IsNotEmpty(sketchEditTool.Sketch.Constraints);
            Assert.IsTrue(sketchEditTool.Sketch.SolveConstraints(true), "Constraint not solved.");
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OrientationSwap01"), 0.1);

            sketchEditTool.RotateView(90);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "OrientationSwap02"), 0.1);
        });
    }
}