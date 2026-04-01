using FlaUI.Core.Input;
using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;
using System;
using System.Threading;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class ChamferPropertyPanelTests : UnitSystemUITestBase
{
    FormAdaptor _Panel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------
    // TEST 0 — Create Chamfer
    //--------------------------------------------------------------------------------------------------

    [Test, Order(0)]
    public void Test0_CreateChamfer()
    {
        Reset();

        _Viewport = MainWindow.Viewport;
        WaitForViewportReady(_Viewport);

        // Create Box
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");

        _Viewport.ClickRelative(0.3, 0.3);
        _Viewport.ClickRelative(0.6, 0.6);
        _Viewport.ClickRelative(0.6, 0.3);
        WaitForViewportReady(_Viewport);

        // Apply Chamfer
        MainWindow.Ribbon.ClickButton("CreateChamfer");

        // Select the same edge used in earlier tests
        _Viewport.ClickRelative(0.6, 0.4);
        Wait.UntilInputIsProcessed();
        WaitForViewportReady(_Viewport);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 1 — Distance field exists
    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test1_DistanceFieldExists()
    {
        _Panel = WaitForPanel("ChamferPropertyPanel");
        var value = _Panel.GetValue<string>("Distance");
        Assert.That(value, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 2 — Edit Distance
    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void Test2_EditDistance_FullPipeline()
    {
        ReselectChamfer();

        var uiText = _Panel.GetValue<string>("Distance");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();
        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var kernel), Is.True);

        var display = UnitConversionService.ConvertToDisplayUnits(kernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplay = display + 1.5;
        var newKernel = UnitConversionService.ConvertToKernelUnits(newDisplay, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernel, desc);

        _Panel.EnterValue("Distance", formatted);

        ReselectChamfer();

        var uiTextAfter = _Panel.GetValue<string>("Distance");
        Assert.That(AppServices.Units.TryParseExpression(uiTextAfter, desc, out var kernelAfter), Is.True);

        var displayAfter = UnitConversionService.ConvertToDisplayUnits(kernelAfter, desc.UnitId, desc.PhysicalQuantity);
        Assert.That(displayAfter, Is.EqualTo(newDisplay).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 3 — Switch to asymmetric mode, edit SecondDistance
    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void Test3_SwitchToAsymmetricMode_EditSecondDistance_FullPipeline()
    {
        ReselectChamfer();

        _Panel.Click("TwoDistances");
        Assert.That(_Panel.IsVisible("SecondDistance"), Is.True);

        var uiText = _Panel.GetValue<string>("SecondDistance");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();
        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var kernel), Is.True);

        var display = UnitConversionService.ConvertToDisplayUnits(kernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplay = display + 2.0;
        var newKernel = UnitConversionService.ConvertToKernelUnits(newDisplay, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernel, desc);

        _Panel.EnterValue("SecondDistance", formatted);

        ReselectChamfer();

        var uiTextAfter = _Panel.GetValue<string>("SecondDistance");
        Assert.That(AppServices.Units.TryParseExpression(uiTextAfter, desc, out var kernelAfter), Is.True);

        var displayAfter = UnitConversionService.ConvertToDisplayUnits(kernelAfter, desc.UnitId, desc.PhysicalQuantity);
        Assert.That(displayAfter, Is.EqualTo(newDisplay).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 4 — Switch to angle mode, edit Angle
    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void Test4_SwitchToAngleMode_EditAngle_FullPipeline()
    {
        ReselectChamfer();

        _Panel.Click("DistanceAngle");
        Assert.That(_Panel.IsVisible("Angle"), Is.True);

        var uiText = _Panel.GetValue<string>("Angle");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetAngleDescriptor();
        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var kernel), Is.True);

        var display = UnitConversionService.ConvertToDisplayUnits(kernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplay = display + 45.0;
        var newKernel = UnitConversionService.ConvertToKernelUnits(newDisplay, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernel, desc);

        _Panel.EnterValue("Angle", formatted);

        ReselectChamfer();

        var uiTextAfter = _Panel.GetValue<string>("Angle");
        Assert.That(AppServices.Units.TryParseExpression(uiTextAfter, desc, out var kernelAfter), Is.True);

        var displayAfter = UnitConversionService.ConvertToDisplayUnits(kernelAfter, desc.UnitId, desc.PhysicalQuantity);
        Assert.That(displayAfter, Is.EqualTo(newDisplay).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 5 — Mode switching shows/hides correct fields
    //--------------------------------------------------------------------------------------------------

    [Test, Order(5)]
    public void Test5_SwitchModes_HidesAndShowsCorrectFields()
    {
        _Panel.Click("Symmetric");
        Assert.That(_Panel.IsVisible("SecondDistance"), Is.False);
        Assert.That(_Panel.IsVisible("Angle"), Is.False);

        _Panel.Click("TwoDistances");
        Assert.That(_Panel.IsVisible("SecondDistance"), Is.True);
        Assert.That(_Panel.IsVisible("Angle"), Is.False);

        _Panel.Click("DistanceAngle");
        Assert.That(_Panel.IsVisible("SecondDistance"), Is.False);
        Assert.That(_Panel.IsVisible("Angle"), Is.True);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 6 — SwapSide works only in angle mode
    //--------------------------------------------------------------------------------------------------

    [Test, Order(6)]
    public void Test6_SwapSide_WorksOnlyInAngleMode()
    {
        _Panel.Click("DistanceAngle");

        var before = _Panel.GetValue<string>("Angle");

        _Panel.Click("SwitchAngleSideCommand");

        var after = _Panel.GetValue<string>("Angle");

        Assert.That(after, Is.EqualTo(before));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 7 — SelectAll / SelectNone
    //--------------------------------------------------------------------------------------------------

    [Test, Order(7)]
    public void Test7_SelectAllAndSelectNone()
    {
        _Panel.Click("SelectAllCommand");
        var textAfterAll = _Panel.GetValue<string>("EdgesCount");
        Assert.That(ParseCount(textAfterAll), Is.GreaterThan(0));

        _Panel.Click("SelectNoneCommand");
        var textAfterNone = _Panel.GetValue<string>("EdgesCount");
        Assert.That(ParseCount(textAfterNone), Is.EqualTo(0));
    }

    //--------------------------------------------------------------------------------------------------

    int ParseCount(string text)
    {
        var parts = text.Split(':');
        return int.Parse(parts[1]);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 8 — Panel updates after reselect
    //--------------------------------------------------------------------------------------------------

    [Test, Order(8)]
    public void Test8_PanelUpdatesAfterReselect_FullPipeline()
    {
        ReselectChamfer();

        var uiText = _Panel.GetValue<string>("Distance");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();
        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var kernel), Is.True);

        var newDisplay = 7.0;
        var newKernel = UnitConversionService.ConvertToKernelUnits(newDisplay, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernel, desc);

        _Panel.EnterValue("Distance", formatted);

        ReselectChamfer();

        var uiTextAfter = _Panel.GetValue<string>("Distance");
        Assert.That(AppServices.Units.TryParseExpression(uiTextAfter, desc, out var kernelAfter), Is.True);

        var displayAfter = UnitConversionService.ConvertToDisplayUnits(kernelAfter, desc.UnitId, desc.PhysicalQuantity);
        Assert.That(displayAfter, Is.EqualTo(newDisplay).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------

    void ReselectChamfer()
    {
        WaitForViewportReady(_Viewport);

        // Deselect
        _Viewport.ClickRelative(0.9, 0.5);
        Wait.UntilInputIsProcessed();

        // Reselect using the SAME edge as CreateChamfer()
        _Viewport.ClickRelative(0.6, 0.4);
        Wait.UntilInputIsProcessed();

        WaitForViewportReady(_Viewport);

        _Panel = WaitForPanel("ChamferPropertyPanel");
    }
}
