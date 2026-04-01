using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using NUnit.Framework;
using System.Windows.Data;
using static Macad.Interaction.MouseEventData;

namespace Macad.Test.UI.Framework;

public class ValueEditBoxAdaptor
{
    readonly PanelAdaptor _Panel;
    readonly string _AutomationId;

    //--------------------------------------------------------------------------------------------------

    public ValueEditBoxAdaptor(PanelAdaptor panel, string automationId)
    {
        _Panel = panel;
        _AutomationId = automationId;
        Assert.That(_Panel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public string Get()
    {
        return _Panel.GetValue(_AutomationId);
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(string text)
    {
        _Panel.SetValue(_AutomationId, text);
    }

    //--------------------------------------------------------------------------------------------------
}
