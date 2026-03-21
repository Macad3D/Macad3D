using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class ToggleButtonAdaptor
{
    readonly PanelAdaptor _Panel;
    readonly string _AutomationId;

    //--------------------------------------------------------------------------------------------------

    public ToggleButtonAdaptor(PanelAdaptor panel, string automationId)
    {
        _Panel = panel;
        _AutomationId = automationId;
        Assert.That(_Panel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsOn => _Panel.IsToggled(_AutomationId);

    //--------------------------------------------------------------------------------------------------

    public void Set(bool on)
    {
        if (IsOn != on)
        {
            _Panel.Toggle(_AutomationId);
        }
    }
}
