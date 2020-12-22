using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives
{
    [TestFixture]
    public class BoxTests
    {
        const string _BasePath = @"Interaction\Primitives\Box";

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
        public void CreateBox()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateBoxTool());

            // Left corner
            ctx.ViewportController.MouseMove(new Point(50, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox1"));

            // Right corner
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(450, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox2"));

            // Height
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(450, 200));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox3"));

            // Create
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox4"));
        }
    }
}