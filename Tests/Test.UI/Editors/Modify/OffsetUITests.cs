using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Modifier;

[TestFixture]
public class OffsetUITests : UITestBase
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
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateOffset");

        Assert.AreEqual("Offset", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSolid()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateOffset");

        Assert.AreEqual("Offset", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PropertyPanelSketch()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateOffset");

        var _Panel = MainWindow.PropertyView.FindPanelByClass("OffsetPropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Distance"));
        Assert.AreEqual("Round", Pipe.GetValue("$Selected.Shape.Corner"));
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));

        _Panel.SetValue("Distance", 2.0);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Distance"));

        _Panel.Click("CornerAngularBtn");
        Assert.AreEqual("Angular", Pipe.GetValue("$Selected.Shape.Corner"));

        _Panel.Click("CornerRoundBtn");
        Assert.AreEqual("Round", Pipe.GetValue("$Selected.Shape.Corner"));

        Assert.IsTrue(_Panel.Exists("KeepOriginal"));
        _Panel.Click("KeepOriginal");
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void PropertyPanelSolid()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateOffset");

        var _Panel = MainWindow.PropertyView.FindPanelByClass("OffsetPropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Distance"));
        Assert.AreEqual("Round", Pipe.GetValue("$Selected.Shape.Corner"));
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.KeepOriginal"));

        _Panel.SetValue("Distance", 2.0);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Distance"));

        _Panel.Click("CornerAngularBtn");
        Assert.AreEqual("Angular", Pipe.GetValue("$Selected.Shape.Corner"));

        _Panel.Click("CornerRoundBtn");
        Assert.AreEqual("Round", Pipe.GetValue("$Selected.Shape.Corner"));

        Assert.IsFalse(_Panel.Exists("KeepOriginal"));
    }

    //--------------------------------------------------------------------------------------------------
}