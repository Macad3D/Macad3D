using FlaUI.Core.Input;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

[TestFixture]
public class TransformTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloseOnClick()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Transform"));
        MainWindow.Ribbon.ClickButton("Transform");
        Assert.AreEqual("TransformTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
        MainWindow.Viewport.ClickRelative(0.1, 0.1);
        Assert.AreNotEqual("TransformTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ContextMenu()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Transform"));
        MainWindow.Ribbon.ClickButton("Transform");
        Assert.AreEqual("TransformTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

        // Open context menu via RMB
        MainWindow.Viewport.ClickRelative(0.4, 0.4, MouseButton.Right);
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));

        // Close context menu via LMB, tool should keep active
        MainWindow.Viewport.ClickRelative(0.4, 0.4);
        Assert.IsFalse(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        Assert.AreEqual("TransformTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
    }
}