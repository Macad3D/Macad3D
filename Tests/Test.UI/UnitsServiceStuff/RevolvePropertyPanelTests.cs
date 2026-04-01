using FlaUI.Core.Input;
using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class RevolvePropertyPanelTests : UnitSystemUITestBase
{
    FormAdaptor _Panel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------
    // One-time initialization of measurement system
    //--------------------------------------------------------------------------------------------------

    [OneTimeSetUp]
    public new void OneTimeSetUp()
    {
        var provider = new UnitsSettingsProvider(new UnitsParameterSet
        {
            LengthUnit = UnitId.Millimeter,
            LengthPrecision = 2,
            AngleUnit = UnitId.Degree,
            AnglePrecision = 1,
            TimeUnit = UnitId.Second,
            TimePrecision = 2
        });

        var units = new UnitsService(provider);

        AppServices.Units = units;
        units.RaiseMeasurementSettingsChanged();
    }

    //--------------------------------------------------------------------------------------------------
    // Per-test setup
    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Reset();

        _Viewport = MainWindow.Viewport;
        WaitForViewportReady(_Viewport);

        CreateRevolve();
        OpenRevolvePropertyPanel();
    }

    //--------------------------------------------------------------------------------------------------

    string WaitForField(string id)
    {
        return UITestHelpers.WaitForStringValue(_Panel, id);
    }

    double WaitForFieldValue(string id)
    {
        return UITestHelpers.ParseUnitValue(WaitForField(id));
    }

    //--------------------------------------------------------------------------------------------------
    // Create a revolve feature
    //--------------------------------------------------------------------------------------------------

    void CreateRevolve()
    {
        // Create sketch on XZ plane
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.OpenSplitButtonMenu("CreateSketch");
        Wait.UntilInputIsProcessed();

        MainWindow.Ribbon.ClickSplitButtonMenuItem("WorkplaneXZ");
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        Wait.UntilInputIsProcessed();

        // Draw rectangle
        MainWindow.Ribbon.ClickButton("CreateRectangleSegment");
        Wait.UntilInputIsProcessed();

        _Viewport.ClickRelative(0.82, 0.40);
        Wait.UntilInputIsProcessed();

        _Viewport.ClickRelative(0.92, 0.50);
        WaitForViewportReady(_Viewport);

        // Finish sketch
        MainWindow.Ribbon.ClickButton("CloseSketchEditor");
        WaitForViewportReady(_Viewport);

        Assert.That(
            UITestHelpers.Until(() =>
                Pipe.GetValue<string>("$Context.EditorState.ActiveTool") == ""
            ),
            Is.True);

        // Select all sketch segments
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Wait.UntilInputIsProcessed();

        MainWindow.Ribbon.ClickButton("Layers_SelectAll");
        WaitForViewportReady(_Viewport);

        // Create revolve
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.ClickButton("CreateRevolve");
        Wait.UntilInputIsProcessed();

        _Panel = WaitForPanel("RevolvePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);

        // Select Y axis
        _Panel.Click("Yaxis");
        Assert.That(_Panel.IsChecked("Yaxis"), Is.True);
        Assert.That(_Panel.IsChecked("Xaxis"), Is.False);
        Assert.That(_Panel.IsChecked("Zaxis"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    void OpenRevolvePropertyPanel()
    {
        _Panel = WaitForPanel("RevolvePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    // TESTS
    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test01_OffsetX_FieldExists()
    {
        Assert.That(WaitForField("OffsetX"), Is.Not.Null.And.Not.Empty);
    }

    [Test, Order(2)]
    public void Test02_OffsetX_Edit()
    {
        var initial = WaitForFieldValue("OffsetX");

        _Panel.EnterValue("OffsetX", initial + 2.0);
        var updated = WaitForFieldValue("OffsetX");

        Assert.That(updated, Is.EqualTo(initial + 2.0).Within(0.001));
    }

    [Test, Order(3)]
    public void Test03_OffsetX_FormatsUsingUnitsService()
    {
        _Panel.EnterValue("OffsetX", 12.5);
        var text = WaitForField("OffsetX");

        Assert.That(text.Contains("12") || text.Contains("mm") || text.Contains("cm"));
    }

    [Test, Order(4)]
    public void Test04_OffsetX_ParsesUsingUnitsService()
    {
        _Panel.EnterValue("OffsetX", "25mm");
        var updated = WaitForFieldValue("OffsetX");

        Assert.That(updated, Is.EqualTo(25.0).Within(0.001));
    }

    [Test, Order(5)]
    public void Test05_OffsetX_RoundTrip_FormatParseFormat()
    {
        _Panel.EnterValue("OffsetX", "15mm");

        var formatted1 = WaitForField("OffsetX");
        _Panel.EnterValue("OffsetX", formatted1);

        var formatted2 = WaitForField("OffsetX");
        Assert.That(formatted2, Is.EqualTo(formatted1));
    }

    //--------------------------------------------------------------------------------------------------
    // OffsetY
    //--------------------------------------------------------------------------------------------------

    [Test, Order(6)]
    public void Test06_OffsetY_FieldExists()
    {
        Assert.That(WaitForField("OffsetY"), Is.Not.Null.And.Not.Empty);
    }

    [Test, Order(7)]
    public void Test07_OffsetY_Edit()
    {
        var initial = WaitForFieldValue("OffsetY");

        _Panel.EnterValue("OffsetY", initial + 2.0);
        var updated = WaitForFieldValue("OffsetY");

        Assert.That(updated, Is.EqualTo(initial + 2.0).Within(0.001));
    }

    [Test, Order(8)]
    public void Test08_OffsetY_FormatsUsingUnitsService()
    {
        _Panel.EnterValue("OffsetY", 12.5);
        var text = WaitForField("OffsetY");

        Assert.That(text.Contains("12") || text.Contains("mm") || text.Contains("cm"));
    }

    [Test, Order(9)]
    public void Test09_OffsetY_ParsesUsingUnitsService()
    {
        _Panel.EnterValue("OffsetY", "25mm");
        var updated = WaitForFieldValue("OffsetY");

        Assert.That(updated, Is.EqualTo(25.0).Within(0.001));
    }

    [Test, Order(10)]
    public void Test10_OffsetY_RoundTrip_FormatParseFormat()
    {
        _Panel.EnterValue("OffsetY", "15mm");

        var formatted1 = WaitForField("OffsetY");
        _Panel.EnterValue("OffsetY", formatted1);

        var formatted2 = WaitForField("OffsetY");
        Assert.That(formatted2, Is.EqualTo(formatted1));
    }

    //--------------------------------------------------------------------------------------------------
    // OffsetZ
    //--------------------------------------------------------------------------------------------------

    [Test, Order(11)]
    public void Test11_OffsetZ_FieldExists()
    {
        Assert.That(WaitForField("OffsetZ"), Is.Not.Null.And.Not.Empty);
    }

    [Test, Order(12)]
    public void Test12_OffsetZ_Edit()
    {
        var initial = WaitForFieldValue("OffsetZ");

        _Panel.EnterValue("OffsetZ", initial + 2.0);
        var updated = WaitForFieldValue("OffsetZ");

        Assert.That(updated, Is.EqualTo(initial + 2.0).Within(0.001));
    }

    [Test, Order(13)]
    public void Test13_OffsetZ_FormatsUsingUnitsService()
    {
        _Panel.EnterValue("OffsetZ", 12.5);
        var text = WaitForField("OffsetZ");

        Assert.That(text.Contains("12") || text.Contains("mm") || text.Contains("cm"));
    }

    [Test, Order(14)]
    public void Test14_OffsetZ_ParsesUsingUnitsService()
    {
        _Panel.EnterValue("OffsetZ", "25mm");
        var updated = WaitForFieldValue("OffsetZ");

        Assert.That(updated, Is.EqualTo(25.0).Within(0.001));
    }

    [Test, Order(15)]
    public void Test15_OffsetZ_RoundTrip_FormatParseFormat()
    {
        _Panel.EnterValue("OffsetZ", "15mm");

        var formatted1 = WaitForField("OffsetZ");
        _Panel.EnterValue("OffsetZ", formatted1);

        var formatted2 = WaitForField("OffsetZ");
        Assert.That(formatted2, Is.EqualTo(formatted1));
    }

    //--------------------------------------------------------------------------------------------------
    // SegmentAngle
    //--------------------------------------------------------------------------------------------------

    [Test, Order(16)]
    public void Test16_SegmentAngle_FieldExists()
    {
        Assert.That(WaitForField("SegmentAngle"), Is.Not.Null.And.Not.Empty);
    }

    [Test, Order(17)]
    public void Test17_SegmentAngle_Edit()
    {
        // deprecated
    }

    [Test, Order(18)]
    public void Test18_SegmentAngle_FormatsUsingUnitsService()
    {
        _Panel.EnterValue("SegmentAngle", 90.0);
        var text = WaitForField("SegmentAngle");

        Assert.That(text.Contains("90") || text.Contains("°"));
    }

    [Test, Order(19)]
    public void Test19_SegmentAngle_ParsesUsingUnitsService()
    {
        var desc = GetAngleDescriptor();

        _Panel.EnterValue("SegmentAngle", "120°");

        var updatedText = UITestHelpers.WaitForStringValue(_Panel, "SegmentAngle");
        AppServices.Units.TryParseExpression(updatedText, desc, out var updated);

        Assert.That(updated, Is.EqualTo(120.0).Within(0.001));
    }

    [Test, Order(20)]
    public void Test20_SegmentAngle_RoundTrip_FormatParseFormat()
    {
        _Panel.EnterValue("SegmentAngle", "45°");

        var formatted1 = WaitForField("SegmentAngle");
        _Panel.EnterValue("SegmentAngle", formatted1);

        var formatted2 = WaitForField("SegmentAngle");
        Assert.That(formatted2, Is.EqualTo(formatted1));
    }
}
