using FlaUI.Core.Input;
using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class TransformablePropertyGroupTests : UnitSystemUITestBase
{
    FormAdaptor _Panel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------
    // TEST 0 — Create Box + Initialize UnitsService
    //--------------------------------------------------------------------------------------------------

    [Test, Order(0)]
    public void Test0_CreateBox()
    {
        Reset();

        // Initialize UnitsService instance
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

        _Viewport = MainWindow.Viewport;
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");

        _Viewport.ClickRelative(0.3, 0.3);
        _Viewport.ClickRelative(0.6, 0.6);
        _Viewport.ClickRelative(0.6, 0.3);
        WaitForViewportReady(_Viewport);
    }

    //--------------------------------------------------------------------------------------------------

    FormAdaptor WaitForTransformPanel()
    {
        return WaitForPanel("TransformablePropertyGroup");
    }

    void ReselectBoxAndWaitForPanel()
    {
        ReselectBox();
        _Panel = WaitForPanel("TransformablePropertyGroup");
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 1 — Panel shows all fields
    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test1_PanelShowsAllFields()
    {
        ReselectBoxAndWaitForPanel();

        Assert.That(_Panel.GetValue<string>("PositionX"), Is.Not.Null);
        Assert.That(_Panel.GetValue<string>("PositionY"), Is.Not.Null);
        Assert.That(_Panel.GetValue<string>("PositionZ"), Is.Not.Null);

        Assert.That(_Panel.GetValue<string>("OrientationY"), Is.Not.Null);
        Assert.That(_Panel.GetValue<string>("OrientationP"), Is.Not.Null);
        Assert.That(_Panel.GetValue<string>("OrientationR"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 2 — Edit PositionX
    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void Test2_EditPositionX()
    {
        ReselectBoxAndWaitForPanel();

        var desc = GetLengthDescriptor();

        var x0 = ReadLength("PositionX", desc);
        var y0 = ReadLength("PositionY", desc);
        var z0 = ReadLength("PositionZ", desc);

        Write("PositionX", AppServices.Units.Format(x0 + 10.0, desc));

        ReselectBoxAndWaitForPanel();

        Assert.That(ReadLength("PositionX", desc), Is.EqualTo(x0 + 10.0).Within(0.001));
        Assert.That(ReadLength("PositionY", desc), Is.EqualTo(y0).Within(0.001));
        Assert.That(ReadLength("PositionZ", desc), Is.EqualTo(z0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 3 — Edit PositionY
    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void Test3_EditPositionY()
    {
        ReselectBoxAndWaitForPanel();

        var desc = GetLengthDescriptor();

        var x0 = ReadLength("PositionX", desc);
        var y0 = ReadLength("PositionY", desc);
        var z0 = ReadLength("PositionZ", desc);

        Write("PositionY", AppServices.Units.Format(y0 + 5.0, desc));

        ReselectBoxAndWaitForPanel();

        Assert.That(ReadLength("PositionY", desc), Is.EqualTo(y0 + 5.0).Within(0.001));
        Assert.That(ReadLength("PositionX", desc), Is.EqualTo(x0).Within(0.001));
        Assert.That(ReadLength("PositionZ", desc), Is.EqualTo(z0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 4 — Edit PositionZ
    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void Test4_EditPositionZ()
    {
        ReselectBoxAndWaitForPanel();

        var desc = GetLengthDescriptor();

        var x0 = ReadLength("PositionX", desc);
        var y0 = ReadLength("PositionY", desc);
        var z0 = ReadLength("PositionZ", desc);

        Write("PositionZ", AppServices.Units.Format(z0 + 3.0, desc));

        ReselectBoxAndWaitForPanel();

        Assert.That(ReadLength("PositionZ", desc), Is.EqualTo(z0 + 3.0).Within(0.001));
        Assert.That(ReadLength("PositionX", desc), Is.EqualTo(x0).Within(0.001));
        Assert.That(ReadLength("PositionY", desc), Is.EqualTo(y0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 5 — Edit OrientationY
    //--------------------------------------------------------------------------------------------------

    [Test, Order(5)]
    public void Test5_EditOrientationY()
    {
        ReselectBoxAndWaitForPanel();

        var desc = GetAngleDescriptor();

        var y0 = ReadAngle("OrientationY", desc);
        var p0 = ReadAngle("OrientationP", desc);
        var r0 = ReadAngle("OrientationR", desc);

        Write("OrientationY", AppServices.Units.Format(y0 + 15.0, desc));

        ReselectBoxAndWaitForPanel();

        Assert.That(ReadAngle("OrientationY", desc), Is.EqualTo(y0 + 15.0).Within(0.001));
        Assert.That(ReadAngle("OrientationP", desc), Is.EqualTo(p0).Within(0.001));
        Assert.That(ReadAngle("OrientationR", desc), Is.EqualTo(r0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 6 — Edit OrientationP
    //--------------------------------------------------------------------------------------------------

    [Test, Order(6)]
    public void Test6_EditOrientationP()
    {
        ReselectBoxAndWaitForPanel();

        var desc = GetAngleDescriptor();

        var y0 = ReadAngle("OrientationY", desc);
        var p0 = ReadAngle("OrientationP", desc);
        var r0 = ReadAngle("OrientationR", desc);

        Write("OrientationP", AppServices.Units.Format(p0 + 7.0, desc));

        ReselectBoxAndWaitForPanel();

        Assert.That(ReadAngle("OrientationP", desc), Is.EqualTo(p0 + 7.0).Within(0.001));
        Assert.That(ReadAngle("OrientationY", desc), Is.EqualTo(y0).Within(0.001));
        Assert.That(ReadAngle("OrientationR", desc), Is.EqualTo(r0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 7 — Edit OrientationR
    //--------------------------------------------------------------------------------------------------

    [Test, Order(7)]
    public void Test7_EditOrientationR()
    {
        ReselectBoxAndWaitForPanel();

        var desc = GetAngleDescriptor();

        var y0 = ReadAngle("OrientationY", desc);
        var p0 = ReadAngle("OrientationP", desc);
        var r0 = ReadAngle("OrientationR", desc);

        Write("OrientationR", AppServices.Units.Format(r0 + 30.0, desc));

        ReselectBoxAndWaitForPanel();

        Assert.That(ReadAngle("OrientationR", desc), Is.EqualTo(r0 + 30.0).Within(0.001));
        Assert.That(ReadAngle("OrientationY", desc), Is.EqualTo(y0).Within(0.001));
        Assert.That(ReadAngle("OrientationP", desc), Is.EqualTo(p0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------
    // Helpers
    //--------------------------------------------------------------------------------------------------

    void ReselectBox()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton("Layers_SelectAll");
        Wait.UntilInputIsProcessed();
    }

    double ReadLength(string field, MeasurementDescriptor desc)
    {
        var text = _Panel.GetValue<string>(field);
        AppServices.Units.TryParseExpression(text, desc, out var value);
        return value;
    }

    double ReadAngle(string field, MeasurementDescriptor desc)
    {
        var text = _Panel.GetValue<string>(field);
        AppServices.Units.TryParseExpression(text, desc, out var value);
        return value;
    }

    void Write(string field, string formatted)
    {
        _Panel.EnterValue(field, formatted);
        Wait.UntilInputIsProcessed();
    }
}
