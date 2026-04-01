using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Modifier;

[TestFixture]
public class ScaleUITests : UITestBase
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
        MainWindow.Ribbon.ClickButton("CreateScale");

        Assert.AreEqual("Scale", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromSolid()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateScale");

        Assert.AreEqual("Scale", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateFromMesh()
    {
        TestDataGenerator.GenerateMesh(MainWindow);

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateScale");

        Assert.AreEqual("Scale", Pipe.GetValue<string>("$Selected.Shape.Name"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void PropertyPanelSketchUniform()
    {
        var desc = new MeasurementDescriptor(UnitId.Percentage, 1);
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        // Create pipe on existing sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateScale");

        var _Panel = MainWindow.PropertyView.FindPanelByClass("ScalePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));
        Assert.IsTrue(_Panel.Exists("FactorUniform"));
        Assert.IsTrue(_Panel.Exists("RatioL"));
        Assert.IsTrue(_Panel.Exists("RatioR"));
        Assert.IsFalse(_Panel.IsVisible("FactorX"));
        Assert.IsFalse(_Panel.IsVisible("FactorY"));
        Assert.IsFalse(_Panel.IsVisible("FactorZ"));

        _Panel.EnterValue("FactorUniform", 200);
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        var ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out var ratioLkernel);
        Assert.AreEqual(2.0, ratioLkernel);
        var ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out var ratioRkernel);
        Assert.AreEqual(1.0, ratioRkernel);

        _Panel.EnterValue("FactorUniform", 50);
        Assert.AreEqual(0.5, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out ratioLkernel);
        Assert.AreEqual(1.0, ratioLkernel);
        ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out ratioRkernel);
        Assert.AreEqual(2.0, ratioRkernel);

        _Panel.EnterValue("RatioR", 4);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out ratioLkernel);
        Assert.AreEqual(1.0, ratioLkernel);
        ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out ratioRkernel);
        Assert.AreEqual(1.0, ratioRkernel);

        _Panel.EnterValue("RatioL", 2);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out ratioLkernel);
        Assert.AreEqual(1.0, ratioLkernel);
        ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out ratioRkernel);
        Assert.AreEqual(1.0, ratioRkernel);
    }
    
    //--------------------------------------------------------------------------------------------------
          
    [Test]
    public void PropertyPanelSketchNonUniform()
    {
        TestDataGenerator.GenerateSketch(MainWindow);
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateScale");

        var _Panel = MainWindow.PropertyView.FindPanelByClass("ScalePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));
        _Panel.Click("IsUniform");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));

        Assert.IsFalse(_Panel.Exists("FactorUniform"));
        Assert.IsFalse(_Panel.Exists("RatioL"));
        Assert.IsFalse(_Panel.Exists("RatioR"));
        Assert.IsTrue(_Panel.Exists("FactorX"));
        Assert.IsTrue(_Panel.Exists("FactorY"));
        Assert.IsFalse(_Panel.Exists("FactorZ"));

        _Panel.EnterValue("FactorX", 200);
        _Panel.EnterValue("FactorY", 300);
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        Assert.AreEqual(3.0, Pipe.GetValue<double>("$Selected.Shape.Factor.Y"));
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));
    }
    
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void PropertyPanelSolidUniform()
    {
        var desc = new MeasurementDescriptor(UnitId.Percentage, 1);
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateScale");

        var _Panel = MainWindow.PropertyView.FindPanelByClass("ScalePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));
        Assert.IsTrue(_Panel.Exists("FactorUniform"));
        Assert.IsTrue(_Panel.Exists("RatioL"));
        Assert.IsTrue(_Panel.Exists("RatioR"));
        Assert.IsFalse(_Panel.Exists("FactorX"));
        Assert.IsFalse(_Panel.Exists("FactorY"));
        Assert.IsFalse(_Panel.Exists("FactorZ"));

        _Panel.EnterValue("FactorUniform", 200);
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        var ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out var ratioLkernel);
        Assert.AreEqual(2.0, ratioLkernel);
        var ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out var ratioRkernel);
        Assert.AreEqual(1.0, ratioRkernel);

        _Panel.EnterValue("FactorUniform", 50);
        Assert.AreEqual(0.5, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out ratioLkernel);
        Assert.AreEqual(1.0, ratioLkernel);
        ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out ratioRkernel);
        Assert.AreEqual(2.0, ratioRkernel);

        _Panel.EnterValue("RatioR", 4);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out ratioLkernel);
        Assert.AreEqual(1.0, ratioLkernel);
        ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out ratioRkernel);
        Assert.AreEqual(1.0, ratioRkernel);

        _Panel.EnterValue("RatioL", 2);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        ratioLdisplayed = _Panel.GetValue<string>("RatioL");
        AppServices.Units.TryParseExpression(ratioLdisplayed, desc, out ratioLkernel);
        Assert.AreEqual(1.0, ratioLkernel);
        ratioRdisplayed = _Panel.GetValue<string>("RatioR");
        AppServices.Units.TryParseExpression(ratioRdisplayed, desc, out ratioRkernel);
        Assert.AreEqual(1.0, ratioRkernel);
    }
    
    //--------------------------------------------------------------------------------------------------
          
    [Test]
    public void PropertyPanelSolidNonUniform()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateScale");

        var _Panel = MainWindow.PropertyView.FindPanelByClass("ScalePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
        Assert.AreEqual(1.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        Assert.AreEqual(true, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));
        _Panel.Click("IsUniform");
        Assert.AreEqual(false, Pipe.GetValue<bool>("$Selected.Shape.Uniform"));

        Assert.IsFalse(_Panel.Exists("FactorUniform"));
        Assert.IsFalse(_Panel.Exists("RatioL"));
        Assert.IsFalse(_Panel.Exists("RatioR"));
        Assert.IsTrue(_Panel.Exists("FactorX"));
        Assert.IsTrue(_Panel.Exists("FactorY"));
        Assert.IsTrue(_Panel.Exists("FactorZ"));

        _Panel.EnterValue("FactorX", 200);
        _Panel.EnterValue("FactorY", 300);
        _Panel.EnterValue("FactorZ", 400);
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Selected.Shape.Factor.X"));
        Assert.AreEqual(3.0, Pipe.GetValue<double>("$Selected.Shape.Factor.Y"));
        Assert.AreEqual(4.0, Pipe.GetValue<double>("$Selected.Shape.Factor.Z"));
    }

    //--------------------------------------------------------------------------------------------------
}