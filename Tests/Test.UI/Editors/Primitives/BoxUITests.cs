using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Primitives;

[TestFixture]
public class BoxUITests : UITestBase
{
    FormAdaptor _BodyPanel;
    FormAdaptor _BoxPanel;
    ViewportAdaptor _Viewport;

    [OneTimeSetUp]
    public new void OneTimeSetUp()
    {
        _Viewport = MainWindow.Viewport;
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void CreateBox()
    {
        Assert.That(_Viewport, Is.Not.Null);

        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);

        // Three point creation
        _Viewport.ClickRelative(0.3, 0.3);
        _Viewport.ClickRelative(0.6, 0.6);
        _Viewport.ClickRelative(0.6, 0.3);

        // Tool has finished
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);

        // Check property panel for correct creation
        _BodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.That(_BodyPanel, Is.Not.Null);
        Assert.That(_BodyPanel.GetValue<string>("EntityName"), Is.EqualTo("Box_1"));

        _BoxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(_BoxPanel, Is.Not.Null);
        Assert.That(_BoxPanel.GetValue<double>("BoxLength"), Is.GreaterThan(0.35));
        Assert.That(_BoxPanel.GetValue<double>("BoxWidth"), Is.GreaterThan(5.0));
        Assert.That(_BoxPanel.GetValue<double>("BoxHeight"), Is.GreaterThan(3.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void ChangeDimensions()
    {
        Assert.That(_BoxPanel, Is.Not.Null);
        Assert.That(_Viewport, Is.Not.Null);

        // Set new values
        _BoxPanel.EnterValue("BoxLength", 3.0);
        _BoxPanel.EnterValue("BoxWidth", 7.0);
        _BoxPanel.EnterValue("BoxHeight", 2.0);

        Assert.AreEqual(3.0, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
        Assert.AreEqual(7.0, Pipe.GetValue<double>("$Selected.Shape.DimensionY"));
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Selected.Shape.DimensionZ"));

        // Deselect
        _Viewport.ClickRelative(0.9, 0.5);
        Assert.That(MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel"), Is.Null);

        // Reselect
        _Viewport.ClickRelative(0.5, 0.5);
        _BoxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(_BoxPanel, Is.Not.Null);

        // Check Values 
        Assert.That(_BoxPanel.GetValue<double>("BoxLength"), Is.EqualTo(3.0));
        Assert.That(_BoxPanel.GetValue<double>("BoxWidth"), Is.EqualTo(7.0));
        Assert.That(_BoxPanel.GetValue<double>("BoxHeight"), Is.EqualTo(2.0));
    }
}