using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Toolkits;

[TestFixture]
public class ConvertToEditableSketchUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertSketch()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateMirror");
        MainWindow.Viewport.ClickRelative(0.6, 0.41);
        Assert.AreEqual("Mirror", Pipe.GetValue<string>("$Selected.Shape.Name"));

        // Do convert
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("ConvertToEditableSketch"));
        MainWindow.Ribbon.ClickButton("ConvertToEditableSketch");
        Assert.AreEqual("Sketch", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DoNotConvertSolid()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateMirror");
        MainWindow.Viewport.ClickRelative(0.3, 0.33);
        Assert.AreEqual("Mirror", Pipe.GetValue<string>("$Selected.Shape.Name"));

        // Do NOT convert
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("ConvertToEditableSketch"));
    }
}