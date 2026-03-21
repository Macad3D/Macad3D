using FlaUI.Core.AutomationElements;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using Macad.Interaction.Panels;
using Macad.Test.UI.Framework;
using NUnit.Framework;
using System;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class LayerVisualPanelTests : UnitSystemUITestBase
{
    PanelAdaptor _Panel;
    ValueEditBoxAdaptor _TransparencyBox;
    SliderAdaptor _TransparencySlider;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Reset();
        OpenLayerVisualPanel();
        InitAdaptors();
    }

    //--------------------------------------------------------------------------------------------------
    // Popup-based: use existing UI, no SetPanelContent
    //--------------------------------------------------------------------------------------------------

    void OpenLayerVisualPanel()
    {
        Wait.UntilInputIsProcessed();
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);

        // Detect if popup is already open
        var desktop = MainWindow.Window.Automation.GetDesktop();
        var existing = desktop.FindFirstDescendant(cf => cf.ByAutomationId("LayerVisualPanel"));

        if (existing != null)
        {
            // Close it by toggling the button
            MainWindow.Ribbon.ClickButton("ActiveLayerVisual");
            Wait.UntilInputIsProcessed();
        }

        // Now open it cleanly
        MainWindow.Ribbon.ClickButton("ActiveLayerVisual");
        Wait.UntilInputIsProcessed();

        var result = Retry.WhileNull(
            () => desktop.FindFirstDescendant(cf => cf.ByAutomationId("LayerVisualPanel")),
            timeout: TimeSpan.FromSeconds(5),
            throwOnTimeout: true);

        _Panel = new PanelAdaptor(result.Result);
    }

    //--------------------------------------------------------------------------------------------------

    void InitAdaptors()
    {
        _TransparencyBox = new ValueEditBoxAdaptor(_Panel, "TransparencyBox");
        _TransparencySlider = new SliderAdaptor(_Panel, "TransparencySlider");
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test1_Transparency_ValueBoxToSlider()
    {
        var initialText = WaitForStringValue("TransparencyBox");
        var initialSlider = _TransparencySlider.Get();

        _Panel.EnterValue("TransparencyBox", 50.0);

        var newText = WaitForStringValue("TransparencyBox");
        var newSlider = _TransparencySlider.Get();

        Assert.That(newText, Is.Not.EqualTo(initialText), "Transparency text did not change.");
        Assert.That(newSlider, Is.Not.EqualTo(initialSlider).Within(0.001), "Slider value did not change.");
        Assert.That(newSlider, Is.InRange(0.0, 1.0), "Slider value is out of valid range.");
    }

    [Test, Order(2)]
    public void Test2_Transparency_SliderToValueBox()
    {
        var initialText = WaitForStringValue("TransparencyBox");
        var initialSlider = _TransparencySlider.Get();

        _TransparencySlider.Set(0.75);

        var newText = WaitForStringValue("TransparencyBox");
        var newSlider = _TransparencySlider.Get();

        Assert.That(newSlider, Is.Not.EqualTo(initialSlider).Within(0.001), "Slider value did not change.");
        Assert.That(newText, Is.Not.EqualTo(initialText), "Transparency text did not change.");
    }

    [Test, Order(3)]
    public void Test3_Transparency_FormatsUsingUnitsService()
    {
        _Panel.EnterValue("TransparencyBox", 50);

        var text = WaitForStringValue("TransparencyBox");

        Assert.That(text.Contains("%") || text.Contains("50"),
            "TransparencyBox text does not appear formatted by UnitsService.Format.");
    }

    [Test, Order(4)]
    public void Test4_Transparency_ParsesUsingUnitsService()
    {
        _Panel.EnterValue("TransparencyBox", "50%");

        var sliderValue = _TransparencySlider.Get();

        Assert.That(sliderValue, Is.EqualTo(0.5).Within(0.01),
            "TransparencySlider value does not reflect UnitsService.Parse result for percent.");
    }

    [Test, Order(5)]
    public void Test5_Transparency_RoundTrip_FormatParseFormat()
    {
        _Panel.EnterValue("TransparencyBox", "25%");

        var formatted1 = WaitForStringValue("TransparencyBox");

        _Panel.EnterValue("TransparencyBox", formatted1);

        var formatted2 = WaitForStringValue("TransparencyBox");

        Assert.That(formatted2, Is.EqualTo(formatted1),
            "Round‑trip Format→Parse→Format did not produce stable output.");
    }

    [Test, Order(6)]
    public void Test6_Transparency_ParsesBareNumber()
    {
        _Panel.EnterValue("TransparencyBox", 25.0);

        var sliderValue = _TransparencySlider.Get();

        Assert.That(sliderValue, Is.EqualTo(0.25).Within(0.01),
            "Bare numeric input was not parsed correctly by UnitsService.Parse.");
    }

    [Test, Order(7)]
    public void Test7_Transparency_SliderUpdatesFormattedText()
    {
        _TransparencySlider.Set(0.33);

        var text = WaitForStringValue("TransparencyBox");

        Assert.That(text.Contains("33") || text.Contains("%"),
            "ValueEditBox text does not reflect formatted percent after slider change.");
    }

    //--------------------------------------------------------------------------------------------------

    string WaitForStringValue(string id, int timeoutMs = 3000)
    {
        string value = null;
        var start = DateTime.Now;

        while ((DateTime.Now - start).TotalMilliseconds < timeoutMs)
        {
            value = _Panel.GetValue<string>(id);

            if (!string.IsNullOrWhiteSpace(value) &&
                value != "INVALID" &&
                value != "NaN")
            {
                return value;
            }

            System.Threading.Thread.Sleep(50);
        }

        throw new Exception($"Timeout waiting for valid value for '{id}'. Last value: '{value}'");
    }
}
