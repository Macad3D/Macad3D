using System;
using System.Collections.Generic;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Conditions;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.UIA3;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class WindowAdaptor : FormAdaptor
{
    public Window Window => _FormControl as Window;

    //--------------------------------------------------------------------------------------------------

    public string Title
    {
        get { return Window?.Name; }
    }
    
    //--------------------------------------------------------------------------------------------------

    protected WindowAdaptor(WindowAdaptor mainWindow, Func<ConditionFactory, ConditionBase> conditionFunc)
    {
        Wait.UntilResponsive(mainWindow.Window);
        int retryCount = 3;
        while (retryCount > 0)
        {
            _FormControl = mainWindow.Window.FindFirstChild(conditionFunc)?.AsWindow();
            if (_FormControl != null)
                break;

            retryCount--;
            Wait.UntilInputIsProcessed();
        }
        Assert.That(_FormControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public WindowAdaptor(WindowAdaptor mainWindow, string automationId)
    {
        Wait.UntilResponsive(mainWindow.Window);
        _FormControl = mainWindow.Window.FindFirstChild(automationId)?.AsWindow();
        Assert.That(_FormControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public WindowAdaptor(ApplicationAdaptor app, string automationId)
    {
        // Find window
        using (var automation = new UIA3Automation())
        {
            do
            {
                _FormControl = app.FindWindow((win)=>win.AutomationId==automationId);
            } while (_FormControl == null);

            _FormControl.Focus();
            Wait.UntilResponsive(_FormControl);
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected WindowAdaptor()
    {}
        
    //--------------------------------------------------------------------------------------------------

    public static bool IsWindowOpen(MainWindowAdaptor mainWindow, string automationId)
    {
        return mainWindow.Window.FindFirstChild(automationId)?.AsWindow() != null;
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsWindowEnabled()
    {
        return Window?.IsEnabled ?? false;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<string> GetListBoxItems(string id)
    {
        var listCtrl = Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.List).And(cf.ByAutomationId(id)))?.AsListBox();
        Assert.IsNotNull(listCtrl, $"ListBox {id} not found in dialog.");

        return listCtrl.Items.Select(item => item.Text);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SelectListBoxItem(string boxid, int index, bool jump = true)
    {
        var listCtrl = Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.List).And(cf.ByAutomationId(boxid)))?.AsListBox();
        Assert.IsNotNull(listCtrl, $"ListBox {boxid} not found in dialog.");

        listCtrl.Items[index].Click(!jump);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void Close()
    {
        Window.Close();
        Wait.UntilInputIsProcessed();
    }
}