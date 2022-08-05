using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify
{
    [TestFixture]
    public class ChamferToolTests
    {
        const string _BasePath = @"Interaction\Modify\Chamfer";

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
        public void EdgeSelection()
        {
            var ctx = Context.Current;

            var box = Box.Create(10.0, 10.0, 5.0);
            var body = Body.Create(box);

            ctx.ViewportController.ZoomFitAll();

            var shape = Chamfer.Create(body);
            shape.Distance = 2.0;
            var tool = new EdgeModifierTool(shape);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(139, 252);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection1"));

                ctx.SelectAt(139, 252);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection2"));

                tool.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EnhanceContinuesEdges()
        {
            var ctx = Context.Current;

            var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "EnhanceContinuesEdges_Source.brep"));
            ctx.ViewportController.ZoomFitAll();

            var shape = Chamfer.Create(body);
            shape.Distance = 0.3f;
            ctx.WorkspaceController.StartTool(new EdgeModifierTool(shape));

            Assert.Multiple(() =>
            {
                // Hilight single edge
                ctx.ViewportController.MouseMove(new Point(310, 350));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges1"));

                // Select edge -> Expect extension to three edges
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                ctx.ViewportController.MouseMove(new Point(0, 0));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges2"));

                // The same on the lower three edges
                ctx.ViewportController.MouseMove(new Point(250, 370));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                ctx.ViewportController.MouseMove(new Point(0, 0));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges3"));

                // Deselect via another edge (not the original)
                ctx.ViewportController.MouseMove(new Point(250, 340));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                ctx.ViewportController.MouseMove(new Point(0, 0));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges4"));

                // Deselect via same edge (the original)
                ctx.ViewportController.MouseMove(new Point(250, 370));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                ctx.ViewportController.MouseMove(new Point(0, 0));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EnhanceContinuesEdges5"));
            });
        }
    }
}