using System;
using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Common;

[TestFixture]
public class TransformToolTests
{
    const string _BasePath = @"Interaction\Common\Transform";

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
    public void RenderingTranslate()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(new[] {body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Translate Idle
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateIdle"));

            // Translate Hilite X
            ctx.ViewportController.MouseMove(new Point(264, 188));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateHiliteX"));
            // Translate Hilite Y
            ctx.ViewportController.MouseMove(new Point(385, 187));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateHiliteY"));
            // Translate Hilite Z
            ctx.ViewportController.MouseMove(new Point(325, 84));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateHiliteZ"));

            // Translate Hilite XY
            ctx.ViewportController.MouseMove(new Point(326, 182));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateHiliteXY"));
            // Translate Hilite YZ
            ctx.ViewportController.MouseMove(new Point(350, 136));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateHiliteYZ"));
            // Translate Hilite XZ
            ctx.ViewportController.MouseMove(new Point(296, 136));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingTranslateHiliteXZ"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenderingRotation()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(new[] {body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // Rotate Idle
            tool.ToggleTransformMode();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingRotateIdle"));

            // Rotate Hilite Y
            ctx.ViewportController.MouseMove(new Point(324, 211));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingRotateHiliteY"));
            // Rotate Hilite P
            ctx.ViewportController.MouseMove(new Point(357, 62));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingRotateHiliteP"));
            // Rotate Hilite R
            ctx.ViewportController.MouseMove(new Point(293, 62));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RenderingRotateHiliteR"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    [Description("Issue: In Top view, the axis aligned move leads to a zero-length direction.")]
    public void MoveInTopView()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
        ctx.ViewportController.SetPredefinedView(ViewportController.PredefinedViews.WorkingPlane);
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(new[] {body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // X-Axis
            ctx.ViewportController.MouseMove(new Point(90, 363));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(100, 363));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveInTopView01"));

            // Y-Axis
            ctx.ViewportController.MouseMove(new Point(31, 300));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(31, 280));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveInTopView02"));

            // Z-Axis
            ctx.ViewportController.MouseMove(new Point(33, 343));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(50, 320));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveInTopView03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Move()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
        body.Position = new Pnt(3, 2, 1);
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(new[] {body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            // X-Axis
            var oldpos = body.Position;
            ctx.ViewportController.MouseMove(new Point(267, 186));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(230, 215));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos.Y, body.Position.Y, Double.Epsilon);
            Assert.AreEqual(oldpos.Z, body.Position.Z, Double.Epsilon);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Move01"));

            // Y-Axis
            oldpos = body.Position;
            ctx.ViewportController.MouseMove(new Point(339, 212));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(357, 240));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos.X, body.Position.X, Double.Epsilon);
            Assert.AreEqual(oldpos.Z, body.Position.Z, Double.Epsilon);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Move02"));

            // Z-Axis
            oldpos = body.Position;
            ctx.ViewportController.MouseMove(new Point(314, 133));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(325, 119));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos.X, body.Position.X, Double.Epsilon);
            Assert.AreEqual(oldpos.Y, body.Position.Y, Double.Epsilon);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Move03"));

            // XY-Plane
            oldpos = body.Position;
            ctx.ViewportController.MouseMove(new Point(320, 216));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(293, 246));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos.Z, body.Position.Z, Double.Epsilon);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Move04"));

            // YZ-Plane
            oldpos = body.Position;
            ctx.ViewportController.MouseMove(new Point(315, 200));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(351, 183));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos.X, body.Position.X, Double.Epsilon);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Move05"));

            // XZ-Plane
            oldpos = body.Position;
            ctx.ViewportController.MouseMove(new Point(297, 175));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(269, 167));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos.Y, body.Position.Y, Double.Epsilon);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Move06"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
        body.Position = new Pnt(3, 2, 1);
        var oldpos = body.Position;
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(new[] {body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
        ctx.WorkspaceController.StartTool(tool);
        tool.ToggleTransformMode();

        Assert.Multiple(() =>
        {
            // X-Axis
            ctx.ViewportController.MouseMove(new Point(374, 123));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(390, 154));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos, body.Position);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotate01"));

            // Y-Axis
            ctx.ViewportController.MouseMove(new Point(310, 120));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(291, 143));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos, body.Position);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotate02"));

            // Z-Axis
            ctx.ViewportController.MouseMove(new Point(420, 178));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(411, 214));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(oldpos, body.Position);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Rotate03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveMultiple()
    {
        var ctx = Context.Current;

        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(bodies, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.MouseMove(new Point(250, 278));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(250, 400));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveMultiple01"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveMultipleFirstEntityPivot()
    {
        var ctx = Context.Current;

        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool(bodies, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.MultipleUseFirst);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.MouseMove(new Point(317, 190));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(317, 300));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveMultipleFirstEntityPivot01"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MoveMultipleExcludeLinked()
    {
        var ctx = Context.Current;

        var (body, shapes) = TestGeomGenerator.CreateBooleanBodies(false);
        BooleanFuse.Create(body, shapes);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new TransformTool(new []{body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.None);
            ctx.WorkspaceController.StartTool(tool);

            ctx.ViewportController.MouseMove(new Point(250, 236));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(250, 400));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveMultipleExcludeLinked01"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void MoveMultipleIncludeLinked()
    {
        var ctx = Context.Current;

        var (body, shapes) = TestGeomGenerator.CreateBooleanBodies(false);
        BooleanFuse.Create(body, shapes);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new TransformTool(new []{body}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.LinkForeignOperands);
            ctx.WorkspaceController.StartTool(tool);

            ctx.ViewportController.MouseMove(new Point(250, 236));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(250, 400));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveMultipleIncludeLinked01"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------
                        
    [Test]
    public void MoveMultipleNoReferences()
    {
        var ctx = Context.Current;

        var body = TestGeomGenerator.CreateBox().Body;
        var bodyRef = Reference.Create(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var tool = new TransformTool(new []{bodyRef}, TransformTool.PivotPoint.EntityPivot, TransformTool.Options.LinkForeignOperands);
            ctx.WorkspaceController.StartTool(tool);

            ctx.ViewportController.MouseMove(new Point(250, 280));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(250, 400));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveMultipleNoReferences01"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

}