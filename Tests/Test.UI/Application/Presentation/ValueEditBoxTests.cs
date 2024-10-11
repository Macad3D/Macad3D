using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Presentation;

[TestFixture]
public class ValueEditBoxTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptOneDecimalPointForValue()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.That(bodyPanel, Is.Not.Null);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "1.5.5", true);
        Assert.AreEqual(1.55, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptMultipleDecimalPointsForFormular()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.That(bodyPanel, Is.Not.Null);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "=1.5+1.5+1.5", true);
        Assert.AreEqual(4.5, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptOneMinusForValue()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.That(bodyPanel, Is.Not.Null);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "-1.5", true);
        Assert.AreEqual(-1.5, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));

        boxPanel.EnterValue("BoxLength", "-2.5-5", true);
        Assert.AreEqual(-2.55, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptMultipleMinusForFormular()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.That(bodyPanel, Is.Not.Null);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "=10-5-2", true);
        Assert.AreEqual(3.0, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }
}