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
            MainWindow.Ribbon.SelectTab("Model");
            MainWindow.Ribbon.ClickButton("CreateSphere");
            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateSphere"));
            MainWindow.Viewport.ClickRelative(0.5, 0.5);

            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));

            Pipe.TypeKey(VirtualKeyShort.ESCAPE);
            Thread.Sleep(1000); // Allow fadeout
            Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateSphere"));

            // Select button prior to ESC
            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            var menu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
            menu.ClickButton("SnappingEnabled");
            Pipe.TypeKey(VirtualKeyShort.ESCAPE);
            Thread.Sleep(1000); // Allow fadeout
            Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateSphere"));
        }

        //--------------------------------------------------------------------------------------------------
        [Test]
        public void LeftClickClosesContextMenu()
        {
            MainWindow.Ribbon.SelectTab("Model");
            MainWindow.Ribbon.ClickButton("CreateSphere");
            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateSphere"));
            MainWindow.Viewport.ClickRelative(0.5, 0.5);

            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            MainWindow.Viewport.ClickRelative(0.3, 0.3, MouseButton.Left);
            Thread.Sleep(1000); // Allow fadeout
            Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateSphere"));

            // Select button prior to LMB
            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            var menu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
            menu.ClickButton("SnappingEnabled");
            MainWindow.Viewport.ClickRelative(0.3, 0.3, MouseButton.Left);
            Thread.Sleep(1000); // Allow fadeout
            Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateSphere"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void DynamicContextMenuItems()
        {
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
            Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
            var menu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
            menu.ClickMenuItem("Transform Entity");

            MainWindow.Ribbon.SelectTab("Edit");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("TransformShape"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void HudValueElement_EnterValues()
        {
            // Init
            MainWindow.Ribbon.SelectTab("Edit");
            MainWindow.Ribbon.ClickButton("SnapEnable");
            MainWindow.Ribbon.ClickButton("SnapToGrid");
            MainWindow.Ribbon.SelectTab("Model");
            MainWindow.Ribbon.ClickButton("CreateBox");

            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"), Is.True);
            MainWindow.Viewport.ClickRelative(0.3, 0.3);
            MainWindow.Viewport.MoveRelative(0.55, 0.6);

            // Enter numbers
            Pipe.TypeText("2");
            Pipe.TypeKey(VirtualKeyShort.ENTER);
            Pipe.TypeText("4");
            Pipe.TypeKey(VirtualKeyShort.ENTER);
            Pipe.TypeText("1");
            Pipe.TypeKey(VirtualKeyShort.ENTER);

            Assume.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"), Is.False);
            Assert.AreEqual("Box_1", Pipe.GetValue<string>("$Selected.Name"));
            Assert.AreEqual(2, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
            Assert.AreEqual(4, Pipe.GetValue<double>("$Selected.Shape.DimensionY"));
            Assert.AreEqual(1, Pipe.GetValue<double>("$Selected.Shape.DimensionZ"));
        }
    }
}