using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Form;

[TestFixture]
public class ExtrudeUITests: UITestBase
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
        Assert.AreEqual("Extrude", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSolid()
    {
        _CreateSolidBased();
        Assert.AreEqual("Extrude", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }
    
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void SymmetricOnSketch()
    {
        _CreateSketchBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("ExtrudePropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsTrue(panel.Exists("Symmetric"));
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.Symmetric"));
        panel.Click("Symmetric");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.Symmetric"));
        panel.Click("Symmetric");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.Symmetric"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void SymmetricOnSolid()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("ExtrudePropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsFalse(panel.Exists("Symmetric"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MergeFacesOnSketch()
    {
        _CreateSketchBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("ExtrudePropertyPanel");
        Assert.IsNotNull(panel);
        Assert.IsFalse(panel.Exists("MergeFaces"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MergeFacesOnSolid()
    {
        _CreateSolidBased();
        var panel = MainWindow.PropertyView.FindPanelByClass("ExtrudePropertyPanel");
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
    public void StartSketchEditor()
    {
        _CreateSketchBased();
        Pipe.TypeKey(VirtualKeyShort.KEY_E);

        Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
        Assert.That(sketchPanel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------
    
    void _CreateSketchBased()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateExtrude"));
        MainWindow.Ribbon.ClickButton("CreateExtrude");
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateSolidBased()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateExtrude"));
        MainWindow.Ribbon.ClickButton("CreateExtrude");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateExtrude"));

        MainWindow.Viewport.ClickRelative(0.3, 0.33);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateExtrude"));
    }
}