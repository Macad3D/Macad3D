using System.Threading;
using Macad.Test.Utils;
using Macad.Core;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure
{
    [TestFixture]
    public class GridTests
    {
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
        public void SwitchRendermodes_OCCT29395()
        {
            var ctx = Context.Current;

            ctx.Workspace.GridEnabled = true;
            ctx.Workspace.GridStep = 2.0;
            ctx.EditorState.SnapToGridSelected = true;

            ctx.Viewport.RenderMode = Viewport.RenderModes.SolidShaded;
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\SwitchRendermodes01");
            ctx.Viewport.RenderMode = Viewport.RenderModes.HLR;
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\SwitchRendermodes01");
            ctx.Viewport.RenderMode = Viewport.RenderModes.Raytraced;
            // OCCT 29395: Grid disappears forever after enabling raytracing
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\SwitchRendermodes01");
            ctx.Viewport.RenderMode = Viewport.RenderModes.SolidShaded;
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\SwitchRendermodes01");
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void AutomaticSizeAdjust()
        {
            double sizeX = 0;
            double sizeY = 0;
            double offset = 0;
            var ctx = Context.Current;

            ctx.Workspace.GridEnabled = true;
            ctx.Workspace.GridStep = 1.0;

            ctx.ViewportController.Zoom(-5.0);
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\AutomaticSizeAdjust01");
            ctx.Workspace.V3dViewer.RectangularGridGraphicValues(ref sizeX, ref sizeY, ref offset);
            Assert.Less(sizeX, 100.0);

            ctx.ViewportController.Zoom(-20.0);
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\AutomaticSizeAdjust02");
            ctx.Workspace.V3dViewer.RectangularGridGraphicValues(ref sizeX, ref sizeY, ref offset);
            Assert.AreEqual(sizeX, 1000.0);

            ctx.ViewportController.Zoom(20.0);
            AssertHelper.IsSameViewport(@"Interaction\Infrastructure\Grid\AutomaticSizeAdjust01");
            ctx.Workspace.V3dViewer.RectangularGridGraphicValues(ref sizeX, ref sizeY, ref offset);
            Assert.Less(sizeX, 100.0);
        }
    }
}