using System.Linq;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

[TestFixture]
public class SelectionTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SyncAfterDuplicate()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Duplicate"));
        MainWindow.Ribbon.ClickButton("Duplicate");

        // Check that box is duplicated
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());

        // Select first item
        MainWindow.Document.SelectItem("Box_1");

        // Only one item should be selected
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
        Assert.AreEqual("Box_1", Pipe.GetValue<string>("$Selected.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RubberbandMode()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton("RubberbandMode");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("RubberbandModeRectangle");
        Assert.AreEqual("Rectangle", Pipe.GetValue("$Context.EditorState.RubberbandSelectionMode"));

        MainWindow.Ribbon.ClickButton("RubberbandMode");
        menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("RubberbandModeFreehand");
        Assert.AreEqual("Freehand", Pipe.GetValue("$Context.EditorState.RubberbandSelectionMode"));

        var boolState = Pipe.GetValue<bool>("$Context.EditorState.RubberbandIncludeTouched");
        MainWindow.Ribbon.ClickButton("RubberbandMode");
        menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("RubberbandIncludeTouched");
        Assert.AreEqual(!boolState, Pipe.GetValue<bool>("$Context.EditorState.RubberbandIncludeTouched"));
        MainWindow.Ribbon.ClickButton("RubberbandMode");
        menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("RubberbandIncludeTouched");
        Assert.AreEqual(boolState, Pipe.GetValue<bool>("$Context.EditorState.RubberbandIncludeTouched"));
    }
}