using System.Threading;
using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit
{
    [TestFixture]
    public class ViewportTests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void NoMoveAfterContextMenuClosed()
        {
            var lastX = Pipe.GetValue<double>("$Context.ViewportController.Viewport.EyePoint.X");
            var lastY = Pipe.GetValue<double>("$Context.ViewportController.Viewport.EyePoint.Y");
            var lastZ = Pipe.GetValue<double>("$Context.ViewportController.Viewport.EyePoint.Z");

            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            MainWindow.Viewport.ClickRelative(0.6, 0.6, MouseButton.Right, false);

            Assert.AreEqual(lastX, Pipe.GetValue<double>("$Context.ViewportController.Viewport.EyePoint.X"));
            Assert.AreEqual(lastY, Pipe.GetValue<double>("$Context.ViewportController.Viewport.EyePoint.Y"));
            Assert.AreEqual(lastZ, Pipe.GetValue<double>("$Context.ViewportController.Viewport.EyePoint.Z"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EscapeClosesContextMenu()
        {
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateBox");
            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"));

            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));

            Pipe.TypeKey(VirtualKeyShort.ESCAPE);
            Thread.Sleep(1000); // Allow fadeout
            Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"));

            // Select button prior to ESC
            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            var menu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
            menu.ClickButton("SnappingEnabled");
            Pipe.TypeKey(VirtualKeyShort.ESCAPE);
            Thread.Sleep(1000); // Allow fadeout
            Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"));
        }
    }
}