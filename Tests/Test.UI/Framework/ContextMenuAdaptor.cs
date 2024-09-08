using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class ContextMenuAdaptor : WindowAdaptor
{
    public ContextMenuAdaptor(MainWindowAdaptor mainWindow)
    {
        _FormControl = _FindHostingWindow(mainWindow, null);
        Assert.That(_FormControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public ContextMenuAdaptor(MainWindowAdaptor mainWindow, string contextMenuId)
    {
        _FormControl = _FindHostingWindow(mainWindow, contextMenuId);
        Assert.That(_FormControl, Is.Not.Null);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void ClickMenuItem(string name, bool jump = true)
    {
        var menuItemCtrl = (Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.MenuItem).And(cf.ByAutomationId(name)))
                            ?? Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.MenuItem).And(cf.ByName(name))))
            ?.AsMenuItem();
        Assert.IsNotNull(menuItemCtrl, $"MenuItem {name} not found in current context menu.");
        menuItemCtrl.Click(!jump);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(Window);
    }
                
    //--------------------------------------------------------------------------------------------------

    public bool IsMenuItemEnabled(string name, bool jump = true)
    {
        var menuItemCtrl = (Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.MenuItem).And(cf.ByAutomationId(name)))
                            ?? Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.MenuItem).And(cf.ByName(name))))
            ?.AsMenuItem();
        Assert.IsNotNull(menuItemCtrl, $"MenuItem {name} not found in current context menu.");
        return menuItemCtrl.IsEnabled;
    }
                        
    //--------------------------------------------------------------------------------------------------

    public bool IsMenuItemChecked(string name, bool jump = true)
    {
        var menuItemCtrl = (Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.MenuItem).And(cf.ByAutomationId(name)))
                            ?? Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.MenuItem).And(cf.ByName(name))))
            ?.AsMenuItem();
        Assert.IsNotNull(menuItemCtrl, $"MenuItem {name} not found in current context menu.");
        return menuItemCtrl.IsChecked ?? false;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsContextMenuOpen(MainWindowAdaptor mainWindow)
    {
        Wait.UntilResponsive(mainWindow.Window);
        return _FindHostingWindow(mainWindow, null) != null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsContextMenuOpen(MainWindowAdaptor mainWindow, string contextMenuId)
    {
        Wait.UntilResponsive(mainWindow.Window);
        return _FindHostingWindow(mainWindow, contextMenuId) != null;
    }

    //--------------------------------------------------------------------------------------------------

    static Window _FindHostingWindow(MainWindowAdaptor mainWindow, string contextMenuId)
    {
        var window = mainWindow.Window.FindFirstChild(cf => cf.ByControlType(ControlType.Window).And(cf.ByClassName("Popup")))?.AsWindow();
        if (window == null && contextMenuId != null)
        {
            window = mainWindow.Application.FindWindow( win => win.AutomationId == "" 
                                                               && win.FindFirstChild(cf => cf.ByAutomationId(contextMenuId).And(cf.ByControlType(ControlType.Menu))) != null)?.AsWindow();
        }
        return window;
    }
}