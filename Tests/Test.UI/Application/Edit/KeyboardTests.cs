using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

public class KeyboardTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ForwardEscapeFromTreeView()
    {
        // Init
        TestDataGenerator.GenerateBox(MainWindow);

        // Start transform
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Transform"));
        MainWindow.Ribbon.ClickButton("Transform");
        Assert.AreEqual("TransformTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

        // Select tree view
        MainWindow.Document.SelectItem("Box_1");

        // Press Escape, tool should be canceled
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Assert.AreEqual("", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ForwardKeysFromTreeView()
    {
        // Init
        TestDataGenerator.GenerateBox(MainWindow);
        Assert.IsFalse(Pipe.GetValue<bool>("$Context.WorkspaceController.VisualObjects.EntityIsolationEnabled"));

        // Select tree view
        MainWindow.Document.SelectItem("Box_1");

        // Press Escape, tool should be canceled
        Pipe.TypeKey(VirtualKeyShort.KEY_I);
        Assert.IsTrue(Pipe.GetValue<bool>("$Context.WorkspaceController.VisualObjects.EntityIsolationEnabled"));
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ForwardEnterFromTreeView()
    {
        // Select tree view
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Document.SelectItem(0);

        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
            
        // Enter numbers
        Pipe.TypeText("15");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("10");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("5");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);
        Assert.AreEqual("Box_2", Pipe.GetValue<string>("$Selected.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ForwardKeysFromLayers()
    {
        // Init
        bool gridEnabled = Pipe.GetValue<bool>("$Context.WorkspaceController.Workspace.GridEnabled");

        // Select layers
        MainWindow.Layers.SelectItem(0);

        // Press G, grid should be toggled
        Pipe.TypeKey(VirtualKeyShort.KEY_G);
        Assert.AreNotEqual(gridEnabled, Pipe.GetValue<bool>("$Context.WorkspaceController.Workspace.GridEnabled"));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ForwardEnterFromLayers()
    {
        // Select layers
        MainWindow.Layers.SelectItem(0);

        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
            
        // Enter numbers
        Pipe.TypeText("15");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("10");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("5");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);
        Assert.AreEqual("Box_1", Pipe.GetValue<string>("$Selected.Name"));
    }
}