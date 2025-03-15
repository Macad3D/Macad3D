using System.Drawing;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public enum RibbonTabs
{
    File,
    Edit,
    Model,
    Sketch,
    Toolbox
}

//--------------------------------------------------------------------------------------------------

public class RibbonAdaptor : FormAdaptor
{
    readonly Window _MainWindow;
    AutomationElement _ButtonBarControl;

    //--------------------------------------------------------------------------------------------------

    public RibbonAdaptor(Window window)
    {
        _MainWindow = window;
        _FormControl = window.FindFirstDescendant(cf => cf.ByClassName("MainWindowRibbon"));
        Assert.That(_FormControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectTab(RibbonTabs id, bool jump = true)
    {
        var tabControl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id.ToString()));
        Assert.That(tabControl, Is.Not.Null, $"Ribbon tab control {id} not found.");
        //groupControl.Click(!jump);
        tabControl.Patterns.SelectionItem.Pattern.Select();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);

        _ButtonBarControl = tabControl;
    }

    //--------------------------------------------------------------------------------------------------

    AutomationElement _FindButton(string id)
    {
        Assert.That(_ButtonBarControl != null, "Select ribbon group prior to use any button.");

        var listItem = _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.ListItem)))
                       ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Button)))
                       ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.SplitButton)))
                       ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Custom)));

        Assert.IsNotNull(listItem, $"Item {id} not found in current ribbon group.");

        var btn = listItem.FindFirstDescendant(cf => cf.ByAutomationId("PART_Button"));

        return btn ?? listItem;
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickButton(string id, bool jump = true, bool doubleClick = false)
    {
        var button = _FindButton(id);

        var center = button.BoundingRectangle.Center();
        if (jump)
            Mouse.Position = new Point(center.X + 10, center.Y + 10);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);

        Mouse.MoveTo(center);
        if(doubleClick)
            Mouse.LeftDoubleClick(center);
        else
            Mouse.LeftClick(center);

        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
        Wait.UntilInputIsProcessed();
    }
        
    //--------------------------------------------------------------------------------------------------

    public void OpenSplitButtonMenu(string id, bool jump = true)
    {
        Assert.That(_ButtonBarControl != null, "Select ribbon group prior to use any button.");
        var listItem = _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.SplitButton)))
                       ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.ListItem)));
        Assert.IsNotNull(listItem, $"Item {id} not found in current ribbon group.");

        if (!listItem.Patterns.ExpandCollapse.IsSupported)
        {
            Assert.IsNotNull(listItem, $"Button {id} does not support the toggle pattern.");
        }

        listItem.Patterns.ExpandCollapse.Pattern.Expand();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickFileMenuItem(string id1, string id2=null, bool jump = true)
    {
        var tabControl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(RibbonTabs.File.ToString()));
        Assert.That(tabControl, Is.Not.Null, $"Ribbon tab control File not found.");
        Assert.That(tabControl.Patterns.ExpandCollapse.IsSupported, $"Ribbon tab control File does not support ExpandCollapsePattern.");
        tabControl.Patterns.ExpandCollapse.Pattern.Expand();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);

        var menuItem1 = _MainWindow.Popup?.FindFirstDescendant(cf => cf.ByAutomationId($"AppMenu{id1}"))?.AsMenuItem();
        Assert.IsNotNull(menuItem1, $"Parent MenuItem AppMenu{id1} not found.");
        if(id2 == null)
            menuItem1.Click(!jump);
        else
            Mouse.Position = menuItem1.GetClickablePoint();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);

        if (!id2.IsNullOrEmpty())
        {
            var menuItem2 = _MainWindow.Popup?.FindFirstDescendant(cf => cf.ByAutomationId($"AppMenu{id2}"))?.AsMenuItem();
            Assert.IsNotNull(menuItem2, $"Child MenuItem AppMenu{id2} not found.");
            menuItem2.Click(!jump);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetButtonChecked(string id, bool isChecked)
    {
        if(IsChecked(id) == isChecked)
            return;
        ClickButton(id);
    }

    //--------------------------------------------------------------------------------------------------

}