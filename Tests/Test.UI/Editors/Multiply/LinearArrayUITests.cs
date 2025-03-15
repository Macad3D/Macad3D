using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Multiply;

[TestFixture]
public class LinearArrayUITests : UITestBase
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
        Assert.AreEqual("Linear Array", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSolid()
    {
        _CreateSolidBased();
        Assert.AreEqual("Linear Array", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }
    
    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _CreateSketchBased()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateLinearArray");
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateSolidBased()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        // Create on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateLinearArray");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateLinearArray"));

        MainWindow.Viewport.ClickRelative(0.3, 0.33);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateLinearArray"));
    }
}