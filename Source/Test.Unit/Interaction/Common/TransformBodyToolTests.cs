using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Common
{
    [TestFixture]
    public class TransformBodyToolTests
    {
        const string _BasePath = @"Interaction\Common\TransformBody";

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
        public void Rendering()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
            ctx.ViewportController.ZoomFitAll();

            var tool = new TransformBodyTool(new[] {body}, TransformBodyTool.PivotPoint.BodyPivot, TransformBodyTool.Options.None);
            ctx.WorkspaceController.StartTool(tool);

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
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Description("Issue: In Top view, the axis aligned move leads to a zero-length direction.")]
        public void MoveInTopView()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBody(Box.Create(10, 5, 2));
            ctx.ViewportController.SetPredefinedView(ViewportController.PredefinedViews.WorkingPlane);
            ctx.ViewportController.ZoomFitAll();

            var tool = new TransformBodyTool(new[] {body}, TransformBodyTool.PivotPoint.BodyPivot, TransformBodyTool.Options.None);
            ctx.WorkspaceController.StartTool(tool);

            // X-Axis
            ctx.ViewportController.MouseMove(new Point(90, 363));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(100, 363));
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveInTopView01"));

            // Y-Axis
            ctx.ViewportController.MouseMove(new Point(31, 300));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(31, 280));
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveInTopView02"));

            // Z-Axis
            ctx.ViewportController.MouseMove(new Point(33, 343));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseMove(new Point(50, 320));
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveInTopView03"));
        }
    }
}