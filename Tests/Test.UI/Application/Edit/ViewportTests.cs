using System.Threading;
using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

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
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSphere");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateSphere"));
        MainWindow.Viewport.ClickRelative(0.5, 0.5);

        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));

        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Thread.Sleep(1000); // Allow fadeout
        Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        Assert.That(MainWindow.Ribbon.IsChecked("CreateSphere"));

        // Select button prior to ESC
        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
        var menu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
        menu.Click("SnappingEnabled");
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Thread.Sleep(1000); // Allow fadeout
        Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        Assert.That(MainWindow.Ribbon.IsChecked("CreateSphere"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LeftClickClosesContextMenu()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSphere");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateSphere"));
        MainWindow.Viewport.ClickRelative(0.5, 0.5);

        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Left);
        Thread.Sleep(1000); // Allow fadeout
        Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        Assert.That(MainWindow.Ribbon.IsChecked("CreateSphere"));

        // Select button prior to LMB
        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
        var menu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
        menu.Click("SnappingEnabled");
        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Left);
        Thread.Sleep(1000); // Allow fadeout
        Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateSphere"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveAwayClosesContextMenu()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSphere");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateSphere"));
        MainWindow.Viewport.ClickRelative(0.5, 0.5);

        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        MainWindow.Viewport.MoveRelative(0.3, 0.3);
        Thread.Sleep(1000); // Allow fadeout
        Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateSphere"));
        MainWindow.Viewport.ClickRelative(0.3, 0.3, MouseButton.Left);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateSphere"));
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

        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("Transform"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MouseClickBlockedByViewCube()
    {
        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateBox"));

        // Three point creation
        var viewport = MainWindow.Viewport;
        viewport.ClickRelative(0.3, 0.3);
        viewport.ClickRelative(0.6, 0.6);

        // Klick to ViewCube
        viewport.ClickRelative(0.9, 0.1);
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateBox"));

        // Final click
        viewport.ClickRelative(0.6, 0.3);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateBox"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DoubleClickStartsEditing()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");
        Assert.AreNotEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

        MainWindow.Viewport.ClickRelative(0.4, 0.46, doubleClick: true);
        Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
    }

    //--------------------------------------------------------------------------------------------------

}