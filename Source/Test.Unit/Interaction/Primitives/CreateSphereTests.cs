using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives
{
    [TestFixture]
    public class SphereTests
    {
        const string _BasePath = @"Interaction\Primitives\Sphere";

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
        public void CreateSphere()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSphereTool());

            // Center point
            ctx.ViewportController.MouseMove(new Point(250, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere1"));

            // Radius
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(450, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere2"));

            // Create
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere3"));
        }
    }
}