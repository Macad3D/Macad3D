using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Multiply;

[TestFixture]
public class MirrorUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSketch()
    {
        _CreateSketchBased();
        Assert.AreEqual("Mirror", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSolid()
    {
        _CreateSolidBased();
        Assert.AreEqual("Mirror", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ChangeOffset()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        panel.EnterValue("Offset", 5.0);
        Assert.AreEqual(5.0, Pipe.GetValue<double>("$Selected.Shape.Offset"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToggleKeepOriginal()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        panel.ClickToggle("KeepOriginal");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        panel.ClickToggle("KeepOriginal");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ReselectReference()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsTrue(panel.ControlExists("ReselectReference"));
        panel.ClickButton("ReselectReference");
        MainWindow.Viewport.ClickRelative(0.45, 0.45);
        Assert.AreEqual("Axis", Pipe.GetValue("$Selected.Shape.Mode"));
    }
        
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MergeFacesOnSketch()
    {
        _CreateSketchBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        Assert.IsFalse(panel.ControlExists("MergeFaces"));
        panel.ClickToggle("KeepOriginal");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        Assert.IsFalse(panel.ControlExists("MergeFaces"));
        panel.ClickToggle("KeepOriginal");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        Assert.IsFalse(panel.ControlExists("MergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MergeFacesOnSolid()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        Assert.IsTrue(panel.ControlExists("MergeFaces"));
        panel.ClickToggle("KeepOriginal");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        Assert.IsFalse(panel.ControlExists("MergeFaces"));
        panel.ClickToggle("KeepOriginal");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
        Assert.IsTrue(panel.ControlExists("MergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ToggleMergeFaces()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.ClickToggle("MergeFaces");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
        panel.ClickToggle("MergeFaces");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.MergeFaces"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ByAxisMode()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("MirrorPropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsTrue(panel.ControlExists("Offset"));
        panel.ClickButton("ReselectReference");
        MainWindow.Viewport.ClickRelative(0.45, 0.45);
        Assert.IsFalse(panel.ControlExists("Offset"));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------
    
    void _CreateSketchBased()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateMirror"));
        MainWindow.Ribbon.ClickButton("CreateMirror");

        MainWindow.Viewport.ClickRelative(0.6, 0.41);
        Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateMirror"));
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateSolidBased()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateMirror"));
        MainWindow.Ribbon.ClickButton("CreateMirror");
        Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateMirror"));

        MainWindow.Viewport.ClickRelative(0.3, 0.33);
        Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateMirror"));
    }
}