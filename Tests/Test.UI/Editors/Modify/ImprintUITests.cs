using FlaUI.Core.WindowsAPI;
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
        _CreateImprint();

        // Check panel count, must be 7
        // Body, BodyShape, Imprint, Sketch, SketchPoints, SketchSegments, SketchConstraints
        Assert.AreEqual(7, MainWindow.PropertyView.GetPanelCount());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StartSketchEditor()
    {
        _CreateImprint();
        Pipe.TypeKey(VirtualKeyShort.KEY_E);

        Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
        Assert.That(sketchPanel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _CreateImprint()
    {
        // Create box
        TestDataGenerator.GenerateBox(MainWindow);

        // Create imprint on any face
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateImprint");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateImprint"), Is.True);
        MainWindow.Viewport.ClickRelative(0.5, 0.5);
    }
}