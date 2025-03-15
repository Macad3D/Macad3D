using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Form;

[TestFixture]
public class RevolveUITests : UITestBase
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
        Assert.AreEqual("Revolve", Pipe.GetValue<string>("$Selected.Shape.Name"));
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
        MainWindow.Ribbon.ClickButton("CreateRevolve");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateRevolve"));

        MainWindow.Viewport.ClickRelative(0.5, 0.4);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateRevolve"));
    }
}