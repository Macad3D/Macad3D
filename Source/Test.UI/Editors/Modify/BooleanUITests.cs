using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Modifier;

[TestFixture]
public class BooleanUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCommon()
    {
        _CreateCommon();
        Assert.AreEqual("Boolean Common", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ToggleMergeFaces()
    {
        _CreateCommon();

        var panel = MainWindow.PropertyView.FindPanelByClass("BooleanPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.ClickToggle("MergeFaces");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.ClickToggle("MergeFaces");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
    }
    
    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _CreateCommon()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateCylinder(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateBooleanCommon"));
        MainWindow.Ribbon.ClickButton("CreateBooleanCommon");
        Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateBooleanCommon"));

        MainWindow.Viewport.ClickRelative(0.4, 0.1);
        Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateBooleanCommon"));
    }
}