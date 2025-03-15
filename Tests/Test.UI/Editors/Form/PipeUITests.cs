using System.Windows.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Form;

public class PipeUITests : UITestBase
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
        _CreateRectPipe();
        Assert.That(Pipe.GetValue<string>("$Selected.Shape.Name"), Is.EqualTo("Pipe"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StartSketchEditor()
    {
        _CreateRectPipe();
        Pipe.TypeKey(VirtualKeyShort.KEY_E);

        Assert.That(Pipe.GetValue<string>("$Context.EditorState.ActiveTool"), Is.EqualTo("SketchEditorTool"));
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
        Assert.That(sketchPanel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CustomProfile()
    {
        _CreateRectPipe();
        var panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
        Assert.That(panel, Is.Not.Null);
        Assert.That(panel.IsChecked("ProfileCircle"));
        Assert.That(panel.Exists("DimensionX"));
        Assert.That(panel.Exists("DimensionY"));
        Assert.That(panel.Exists("SymmetricProfile"));
        Assert.That(panel.Exists("Rotation"));

        panel.Click("ProfileCustom");
        Assert.That(Pipe.GetValue<string>("$Context.EditorState.ActiveTool"), Is.EqualTo("SketchEditorTool"));
        Pipe.TypeKey(VirtualKeyShort.ESC);

        panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
        Assert.That(panel, Is.Not.Null);
        Assert.That(!panel.IsChecked("ProfileCircle"));
        Assert.That(panel.IsChecked("ProfileCustom"));
        Assert.That(!panel.Exists("DimensionX"));
        Assert.That(!panel.Exists("DimensionY"));
        Assert.That(!panel.Exists("SymmetricProfile"));
        Assert.That(!panel.Exists("Rotation"));

        panel.Click("ProfileCircle");
        panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
        Assert.That(panel, Is.Not.Null);
        Assert.That(panel.IsChecked("ProfileCircle"));
        Assert.That(!panel.IsChecked("ProfileCustom"));
        Assert.That(panel.Exists("DimensionX"));
        Assert.That(panel.Exists("DimensionY"));
        Assert.That(panel.Exists("SymmetricProfile"));
        Assert.That(panel.Exists("Rotation"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SymmetricProfile()
    {
        _CreateRectPipe();
        var panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
        Assert.That(panel, Is.Not.Null);
        Assert.That(panel.IsChecked("SymmetricProfile"));
        Assert.That(!panel.IsEnabled("DimensionY"));
        Assert.That(panel.GetValue<double>("DimensionY"), Is.EqualTo(panel.GetValue<double>("DimensionX")));

        panel.Click("SymmetricProfile");
        Assert.That(!panel.IsChecked("SymmetricProfile"));
        Assert.That(panel.IsEnabled("DimensionY"));

        panel.EnterValue("DimensionY", 2.0);
        Assert.That(Pipe.GetValue<double>("$Selected.Shape.SizeY"), Is.EqualTo(2.0));
        Assert.That(panel.GetValue<double>("DimensionY"), Is.Not.EqualTo(panel.GetValue<double>("DimensionX")));

        panel.Click("SymmetricProfile");
        Assert.That(panel.IsChecked("SymmetricProfile"));
        Assert.That(!panel.IsEnabled("DimensionY"));
        Assert.That(panel.GetValue<double>("DimensionY"), Is.EqualTo(panel.GetValue<double>("DimensionX")));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BendRadius()
    {
        _CreateRectPipe();
        var panel = MainWindow.PropertyView.FindPanelByClass("PipePropertyPanel");
        Assert.That(panel, Is.Not.Null);
        Assert.That(panel.IsChecked("AutoBendRadius"));
        Assert.That(!panel.IsEnabled("BendRadius"));
        Assert.That(panel.GetValue<double>("BendRadius"), Is.EqualTo(panel.GetValue<double>("DimensionX")));

        panel.Click("AutoBendRadius");
        Assert.That(!panel.IsChecked("AutoBendRadius"));
        Assert.That(panel.IsEnabled("BendRadius"));

        panel.EnterValue("BendRadius", 2.0);
        Assert.That(Pipe.GetValue<double>("$Selected.Shape.BendRadius"), Is.EqualTo(2.0));
        Assert.That(panel.GetValue<double>("BendRadius"), Is.Not.EqualTo(panel.GetValue<double>("DimensionX")));

        panel.Click("AutoBendRadius");
        Assert.That(panel.IsChecked("AutoBendRadius"));
        Assert.That(!panel.IsEnabled("BendRadius"));
        Assert.That(panel.GetValue<double>("BendRadius"), Is.EqualTo(panel.GetValue<double>("DimensionX")));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _CreateRectPipe()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.That(MainWindow.Ribbon.IsEnabled("CreatePipe"), Is.True);
        MainWindow.Ribbon.ClickButton("CreatePipe");
    }
}