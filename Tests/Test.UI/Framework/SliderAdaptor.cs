using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class SliderAdaptor
{
    readonly PanelAdaptor _Panel;
    readonly string _AutomationId;

    //--------------------------------------------------------------------------------------------------

    public SliderAdaptor(PanelAdaptor panel, string automationId)
    {
        _Panel = panel;
        _AutomationId = automationId;
        Assert.That(_Panel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public double Get()
    {
        return _Panel.GetSliderValue(_AutomationId);
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(double value)
    {
        _Panel.SetSliderValue(_AutomationId, value);
    }
}
