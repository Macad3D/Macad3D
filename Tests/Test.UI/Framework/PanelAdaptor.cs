using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using FlaUI.Core.WindowsAPI;
using NUnit.Framework;
using System.Globalization;

namespace Macad.Test.UI.Framework;

public class PanelAdaptor : FormAdaptor
{
    //--------------------------------------------------------------------------------------------------

    public PanelAdaptor(AutomationElement panelElement)
        : base(panelElement)
    {
        Assert.That(panelElement, Is.Not.Null, "Panel element cannot be null.");
    }

    //--------------------------------------------------------------------------------------------------

    public string GetValue(string automationId)
    {
        var ctrl = Find(automationId);
        Assert.That(ctrl.Patterns.Value.IsSupported, $"Control '{automationId}' does not support ValuePattern.");
        return ctrl.Patterns.Value.Pattern.Value.Value;
    }

    //--------------------------------------------------------------------------------------------------

    public void EnterValue(string id, double value)
    {
        var ctrl = Find(id);
        Assert.That(ctrl.Patterns.Value.IsSupported, $"Control '{id}' does not support ValuePattern.");

        ctrl.Focus();
        Wait.UntilInputIsProcessed();

        // Clear existing text
        ctrl.Patterns.Value.Pattern.SetValue("");
        Wait.UntilInputIsProcessed();

        // Type the new value
        Keyboard.Type(value.ToString(CultureInfo.InvariantCulture));
        Wait.UntilInputIsProcessed();

        // Commit (simulate Enter key)
        Keyboard.Press(VirtualKeyShort.RETURN);
        Keyboard.Release(VirtualKeyShort.RETURN);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValue(string automationId, string value)
    {
        var ctrl = Find(automationId);
        Assert.That(ctrl.Patterns.Value.IsSupported, $"Control '{automationId}' does not support ValuePattern.");

        ctrl.Focus();
        ctrl.Patterns.Value.Pattern.SetValue(value);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void Click(string automationId, bool jump = true)
    {
        var ctrl = Find(automationId);
        var center = ctrl.BoundingRectangle.Center();

        if (!jump)
            Mouse.MoveTo(center);

        Mouse.LeftClick(center);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void Toggle(string automationId)
    {
        var ctrl = Find(automationId);
        Assert.That(ctrl.Patterns.Toggle.IsSupported, $"Control '{automationId}' does not support TogglePattern.");

        ctrl.Patterns.Toggle.Pattern.Toggle();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsToggled(string automationId)
    {
        var ctrl = Find(automationId);
        Assert.That(ctrl.Patterns.Toggle.IsSupported, $"Control '{automationId}' does not support TogglePattern.");

        return ctrl.Patterns.Toggle.Pattern.ToggleState.Value == ToggleState.On;
    }

    //--------------------------------------------------------------------------------------------------

    public double GetSliderValue(string automationId)
    {
        var ctrl = Find(automationId);
        Assert.That(ctrl.Patterns.RangeValue.IsSupported, $"Control '{automationId}' does not support RangeValuePattern.");

        return ctrl.Patterns.RangeValue.Pattern.Value.Value;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetSliderValue(string automationId, double value)
    {
        var ctrl = Find(automationId);
        Assert.That(ctrl.Patterns.RangeValue.IsSupported, $"Control '{automationId}' does not support RangeValuePattern.");

        ctrl.Patterns.RangeValue.Pattern.SetValue(value);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }
}
