using NUnit.Framework;
using Macad.Test.UI.Framework;
using System.Globalization;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class OffsetPropertyPanelTests : UITestBase
{
    //--------------------------------------------------------------------------------------------------

    FormAdaptor _Panel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Reset();

        _Viewport = MainWindow.Viewport;
        _Viewport.WaitUntilReady();

        CreateOffset();
    }

    //--------------------------------------------------------------------------------------------------

    string WaitForDistance()
    {
        return UITestHelpers.WaitForStringValue(_Panel, "Distance");
    }

    //--------------------------------------------------------------------------------------------------

    double WaitForDistanceValue()
    {
        return UITestHelpers.ParseUnitValue(WaitForDistance());
    }

    //--------------------------------------------------------------------------------------------------

    void CreateOffset()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");

        _Viewport.ClickRelative(0.3, 0.3);
        UITestHelpers.WaitForViewportReady(_Viewport);

        _Viewport.ClickRelative(0.6, 0.6);
        UITestHelpers.WaitForViewportReady(_Viewport);

        _Viewport.ClickRelative(0.6, 0.4);
        UITestHelpers.WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.ClickButton("CreateOffset");
        UITestHelpers.Until(() => MainWindow.Ribbon.IsChecked("CreateOffset"), 500);

        _Viewport.ClickRelative(0.5, 0.5);
        UITestHelpers.WaitForViewportReady(_Viewport);

        _Panel = UITestHelpers.ActivateShapeToolAndOpenPanel(
            MainWindow, _Viewport, "CreateOffset", "OffsetPropertyPanel", 0.5, 0.5);
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test1_DistanceFieldExists()
    {
        var value = WaitForDistance();
        Assert.That(value, Is.Not.Null.And.Not.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void Test2_EditDistance()
    {
        var initial = WaitForDistanceValue();

        _Panel.EnterValue("Distance", initial + 2.0);
        var updated = WaitForDistanceValue();

        Assert.That(updated, Is.EqualTo(initial + 2.0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void Test3_Distance_FormatsUsingUnitsService()
    {
        _Panel.EnterValue("Distance", 12.5);
        var text = WaitForDistance();

        Assert.That(text.Contains("12") || text.Contains("mm") || text.Contains("cm"),
            "Distance text does not appear formatted by UnitsService.Format.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void Test4_Distance_ParsesUsingUnitsService()
    {
        _Panel.EnterValue("Distance", "25mm");

        var updated = WaitForDistanceValue();

        Assert.That(updated, Is.EqualTo(25.0).Within(0.001),
            "Distance value does not reflect UnitsService.Parse result.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(5)]
    public void Test5_Distance_RoundTrip_FormatParseFormat()
    {
        _Panel.EnterValue("Distance", "15mm");

        var formatted1 = WaitForDistance();

        _Panel.EnterValue("Distance", formatted1);

        var formatted2 = WaitForDistance();

        Assert.That(formatted2, Is.EqualTo(formatted1),
            "Round‑trip Format→Parse→Format did not produce stable output.");
    }

    //--------------------------------------------------------------------------------------------------
}
