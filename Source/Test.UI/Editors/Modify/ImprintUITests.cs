using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Modifier;

public class ImprintUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchPropertyPanels()
    {
        var viewport = MainWindow.Viewport;

        // Create box
        TestDataGenerator.GenerateBox(MainWindow);

        // Create imprint on any face
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateImprint");
        Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateImprint"), Is.True);
        viewport.ClickRelative(0.5, 0.5);

        // Check panel count, must be 7
        // Body, BodyShape, Imprint, Sketch, SketchPoints, SketchSegments, SketchConstraints
        Assert.AreEqual(7, MainWindow.PropertyView.GetPanelCount());
    }

    //--------------------------------------------------------------------------------------------------

}