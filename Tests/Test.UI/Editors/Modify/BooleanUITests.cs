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
    public void CreateCut()
    {
        _CreateCut();
        Assert.AreEqual("Boolean Cut", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFuse()
    {
        _CreateFuse();
        Assert.AreEqual("Boolean Fuse", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FuseMergeFaces()
    {
        _CreateFuse();

        var panel = MainWindow.PropertyView.FindPanelByClass("BooleanPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsTrue(panel.Exists("MergeFaces"));

        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.Click("MergeFaces");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.Click("MergeFaces");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CommonMergeFaces()
    {
        _CreateCommon();

        var panel = MainWindow.PropertyView.FindPanelByClass("BooleanPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsFalse(panel.Exists("MergeFaces"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutMergeFaces()
    {
        _CreateCut();

        var panel = MainWindow.PropertyView.FindPanelByClass("BooleanPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsFalse(panel.Exists("MergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _CreateCommon()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateCylinder(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateBooleanCommon"));
        MainWindow.Ribbon.ClickButton("CreateBooleanCommon");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateBooleanCommon"));

        MainWindow.Viewport.ClickRelative(0.4, 0.1);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateBooleanCommon"));
    }

    //--------------------------------------------------------------------------------------------------
    
    void _CreateFuse()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateCylinder(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateBooleanFuse"));
        MainWindow.Ribbon.ClickButton("CreateBooleanFuse");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateBooleanFuse"));

        MainWindow.Viewport.ClickRelative(0.4, 0.1);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateBooleanFuse"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    void _CreateCut()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateCylinder(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateBooleanCut"));
        MainWindow.Ribbon.ClickButton("CreateBooleanCut");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateBooleanCut"));

        MainWindow.Viewport.ClickRelative(0.4, 0.1);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateBooleanCut"));
    }
}