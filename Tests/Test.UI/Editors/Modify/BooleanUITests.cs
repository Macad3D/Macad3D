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
        Assert.IsTrue(panel.ControlExists("MergeFaces"));

        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.ClickToggle("MergeFaces");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.ClickToggle("MergeFaces");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CommonMergeFaces()
    {
        _CreateCommon();

        var panel = MainWindow.PropertyView.FindPanelByClass("BooleanPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsFalse(panel.ControlExists("MergeFaces"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutMergeFaces()
    {
        _CreateCut();

        var panel = MainWindow.PropertyView.FindPanelByClass("BooleanPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsFalse(panel.ControlExists("MergeFaces"));
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

    //--------------------------------------------------------------------------------------------------
    
    void _CreateFuse()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateCylinder(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateBooleanFuse"));
        MainWindow.Ribbon.ClickButton("CreateBooleanFuse");
        Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateBooleanFuse"));

        MainWindow.Viewport.ClickRelative(0.4, 0.1);
        Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateBooleanFuse"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    void _CreateCut()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateCylinder(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateBooleanCut"));
        MainWindow.Ribbon.ClickButton("CreateBooleanCut");
        Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateBooleanCut"));

        MainWindow.Viewport.ClickRelative(0.4, 0.1);
        Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateBooleanCut"));
    }
}