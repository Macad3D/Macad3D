using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

public class WorkspaceTests : UITestBase
{        
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GridEnabled()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        var enabled = Pipe.GetValue<bool>("$Context.WorkspaceController.Workspace.GridEnabled");
        Assert.AreEqual(enabled, MainWindow.Ribbon.IsChecked("ShowGrid"));

        enabled = !enabled;
        MainWindow.Ribbon.ClickButton("ShowGrid");
        Assert.AreEqual(enabled, Pipe.GetValue<bool>("$Context.WorkspaceController.Workspace.GridEnabled"));
        Assert.AreEqual(enabled, MainWindow.Ribbon.IsChecked("ShowGrid"));

        enabled = !enabled;
        MainWindow.Ribbon.ClickButton("ShowGrid");
        Assert.AreEqual(enabled, Pipe.GetValue<bool>("$Context.WorkspaceController.Workspace.GridEnabled"));
        Assert.AreEqual(enabled, MainWindow.Ribbon.IsChecked("ShowGrid"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GridType()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.OpenSplitButtonMenu("ShowGrid");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("CircGrid");
        Assert.AreEqual("Circular", Pipe.GetValue("$Context.WorkspaceController.Workspace.GridType"));

        MainWindow.Ribbon.OpenSplitButtonMenu("ShowGrid");
        menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("RectGrid");
        Assert.AreEqual("Rectangular", Pipe.GetValue("$Context.WorkspaceController.Workspace.GridType"));
    }

}