using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Sheet;

[TestFixture]
public class UnfoldSheetUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateUnfoldSheet()
    {
        // Create unfold modifier
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateUnfoldSheet");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateUnfoldSheet"), Is.False);
        Assert.AreEqual("Unfold Sheet", Pipe.GetValue<string>("$Selected.Shape.Name"));
        Assert.That(MainWindow.PropertyView.FindPanelByClass("UnfoldSheetPropertyPanel"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectFace()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateUnfoldSheet");
        var propPanel = MainWindow.PropertyView.FindPanelByClass("UnfoldSheetPropertyPanel");
        Assert.That(propPanel, Is.Not.Null);
        Assert.That(Pipe.GetValue("$Selected.Shape.StartFace"), Is.EqualTo("?null"));
        Assert.That(propPanel.IsEnabled("ResetFace"), Is.False);

        propPanel.Click("SelectFace");
        Assert.That(Pipe.GetValue<string>("$Context.EditorState.ActiveTool"), Is.EqualTo("CreateUnfoldSheetTool"));
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        Assert.That(Pipe.GetValue<string>("$Context.EditorState.ActiveTool"), Is.Empty);
        Assert.That(Pipe.GetValue("$Selected.Shape.StartFace"), Is.Not.EqualTo("?null"));
        Assert.That(propPanel.IsEnabled("ResetFace"), Is.True);

        propPanel.Click("ResetFace");
        Assert.That(Pipe.GetValue("$Selected.Shape.StartFace"), Is.EqualTo("?null"));
        Assert.That(propPanel.IsEnabled("ResetFace"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------

}