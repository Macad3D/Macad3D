using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives
{
    [TestFixture]
    public class CylinderTests
    {
        const string _BasePath = @"Interaction\Primitives\Cylinder";

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
        public void CreateCylinder()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateCylinderTool());

            // Center point
            ctx.ViewportController.MouseMove(new Point(250, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder1"));

            // Radius
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(450, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder2"));

            // Height
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(450, 200));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder3"));

            // Create
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateCylinder4"));
        }
    }
}