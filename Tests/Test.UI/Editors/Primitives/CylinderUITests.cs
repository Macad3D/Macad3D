using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Primitives;

[TestFixture]
public class CylinderUITests : UITestBase
{
    FormAdaptor _BodyPanel;
    FormAdaptor _CylinderPanel;
    ViewportAdaptor _Viewport;

    [OneTimeSetUp]
    public new void OneTimeSetUp()
    {
        _Viewport = MainWindow.Viewport;
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void CreateCylinder()
    {
        Assert.That(_Viewport, Is.Not.Null);

        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateCylinder");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateCylinder"), Is.True);

        // Three point creation
        _Viewport.ClickRelative(0.5, 0.5);
        _Viewport.ClickRelative(0.5, 0.7);
        _Viewport.ClickRelative(0.5, 0.3);

        // Tool has finished
        Assert.That(MainWindow.Ribbon.IsChecked("CreateCylinder"), Is.False);

        // Check property panel for correct creation
        _BodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.That(_BodyPanel, Is.Not.Null);
        Assert.That(_BodyPanel.GetValue<string>("EntityName"), Is.EqualTo("Cylinder_1"));

        _CylinderPanel = MainWindow.PropertyView.FindPanelByClass("CylinderPropertyPanel");
        Assert.That(_CylinderPanel, Is.Not.Null);
        Assert.That(_CylinderPanel.GetValue<double>("CylinderRadius"), Is.GreaterThan(3.0));
        Assert.That(_CylinderPanel.GetValue<double>("CylinderHeight"), Is.GreaterThan(2.0));
        Assert.That(_CylinderPanel.GetValue<double>("CylinderSegment"), Is.EqualTo(360.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void ChangeDimensions()
    {
        Assert.That(_CylinderPanel, Is.Not.Null);

        // Set new values
        _CylinderPanel.EnterValue("CylinderRadius", 3.0);
        _CylinderPanel.EnterValue("CylinderHeight", 2.0);
        _CylinderPanel.EnterValue("CylinderSegment", 180.0);
            
        Assert.AreEqual(3.0, Pipe.GetValue<double>("$Selected.Shape.Radius"));
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Selected.Shape.Height"));
        Assert.AreEqual(180.0, Pipe.GetValue<double>("$Selected.Shape.SegmentAngle"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void SegmentClamp()
    {
        Assert.That(_CylinderPanel, Is.Not.Null);

        // Segment should clamp between 0...360
        _CylinderPanel.EnterValue("CylinderSegment", 0.0);
        Assert.That(_CylinderPanel.GetValue<double>("CylinderSegment"), Is.EqualTo(0.0));
        _CylinderPanel.EnterValue("CylinderSegment", -1.0);
        Assert.That(_CylinderPanel.GetValue<double>("CylinderSegment"), Is.EqualTo(0.0));
        _CylinderPanel.EnterValue("CylinderSegment", 360.0);
        Assert.That(_CylinderPanel.GetValue<double>("CylinderSegment"), Is.EqualTo(360.0));
        _CylinderPanel.EnterValue("CylinderSegment", 370.0);
        Assert.That(_CylinderPanel.GetValue<double>("CylinderSegment"), Is.EqualTo(360.0));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void NegativeHeight()
    {
        Assert.That(_CylinderPanel, Is.Not.Null);

        // Set new values
        _CylinderPanel.EnterValue("CylinderHeight", -2.0);
        Assert.AreEqual(-2.0, _CylinderPanel.GetValue<double>("CylinderHeight"));
        Assert.AreEqual(-2.0, Pipe.GetValue<double>("$Selected.Shape.Height"));
    }

    //--------------------------------------------------------------------------------------------------
}