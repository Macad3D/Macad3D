using System;
using System.Drawing;
using System.Globalization;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using FlaUI.Core.WindowsAPI;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class FormAdaptor
{
    protected AutomationElement _FormControl;

    //--------------------------------------------------------------------------------------------------

    public FormAdaptor(AutomationElement formControl)
    {
        _FormControl = formControl;
    }

    //--------------------------------------------------------------------------------------------------

    protected FormAdaptor()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public T GetValue<T>(string id)
    {
        var control = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        Assert.That(control, Is.Not.Null, $"Element {id} not found in form.");
        Assert.That(control.Patterns.Value.IsSupported, $"Value pattern not supported on element {id}.");
        return (T)Convert.ChangeType(control.Patterns.Value.Pattern.Value.Value, typeof(T), CultureInfo.InvariantCulture);
    }


    //--------------------------------------------------------------------------------------------------

    public void SetValue<T>(string id, T value) where T : IConvertible
    {
        var control = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        Assert.That(control, Is.Not.Null, $"Element {id} not found in form.");
        Assert.That(control.Patterns.Value.IsSupported, $"Value pattern not supported on element {id}.");
        control.Patterns.Value.Pattern.SetValue((string)Convert.ChangeType(value, TypeCode.String));
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void EnterValue<T>(string id, T value, bool useKeyboard=false) where T: IConvertible
    {
        var control = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        Assert.That(control, Is.Not.Null, $"Element {id} not found in form.");
        Assert.That(control.Patterns.Value.IsSupported, $"Value pattern not supported on element {id}.");

        control.Focus();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);

        var stringValue = (string) Convert.ChangeType(value, TypeCode.String);
        if (useKeyboard)
        {
            DebugPipeClient.Current.TypeText(stringValue);
        }
        else
        {
            control.Patterns.Value.Pattern.SetValue(stringValue);
        }

        DebugPipeClient.Current.TypeKey(VirtualKeyShort.ENTER);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Click(string id, bool jump = true, bool doubleClick = false)
    {
        var control = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        Assert.That(control, Is.Not.Null, $"Button {id} not found in form.");

        var center = control.BoundingRectangle.Center();
        if(!jump)
            Mouse.MoveTo(center);

        if(doubleClick)
            Mouse.LeftDoubleClick(center);
        else
            Mouse.LeftClick(center);

        Wait.UntilInputIsProcessed();
        if(_FormControl.IsAvailable)
            Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsChecked(string id)
    {
        var button = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        Assert.IsNotNull(button, $"Control {id} not found in form.");

        if (button.ControlType == ControlType.SplitButton)
        {
            button = button.FindFirstDescendant(cf => cf.ByAutomationId("PART_Button"))?.AsButton();
            Assert.IsNotNull(button, $"Button {id} is a SplitButton, but the ToggleButton part was not found.");
        }

        return button.Patterns.Toggle.Pattern.ToggleState.Value == ToggleState.On;
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsEnabled(string id)
    {
        var button = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        Assert.IsNotNull(button, $"Control {id} not found in form.");

        return button.IsEnabled;
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsCollapsed()
    {
        if (_FormControl.Patterns.ExpandCollapse.IsSupported)
        {
            return _FormControl.Patterns.ExpandCollapse.Pattern.ExpandCollapseState.Value == ExpandCollapseState.Collapsed;
        }
        if (_FormControl.Parent.Patterns.ExpandCollapse.IsSupported)
        {
            return _FormControl.Parent.Patterns.ExpandCollapse.Pattern.ExpandCollapseState.Value == ExpandCollapseState.Collapsed;
        }
        Assert.Fail("Neither the form nor its parent does support ExpandCollapsePattern.");
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Exists(string id)
    {
        return _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id)) != null;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SelectTreeItem(string controlId, string itemId)
    {
        var treeControl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(controlId)).AsTree();
        Assert.That(treeControl, Is.Not.Null);

        var item = treeControl.Items.First(ti => ti.AutomationId == itemId);
        Assert.NotNull(item, $"No item with id {itemId} found in tree {controlId}");
        SelectTreeItem(item);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SelectTreeItem(TreeItem item)
    {
        var rect = item.BoundingRectangle;
        var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
        Mouse.Click(pnt, MouseButton.Left);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

        
    public void ExpandComboBox(string id, bool expandOrColapse=true)
    {
        var boxCtrl = _FormControl.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId(id)))?.AsComboBox();
        Assert.IsNotNull(boxCtrl, $"ComboBox {id} not found in dialog.");

        if(expandOrColapse)
            boxCtrl.Expand();
        else
            boxCtrl.Collapse();
        Wait.UntilInputIsProcessed();
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SelectComboBoxItem(string boxid, string pattern, bool jump = true)
    {
        var boxCtrl = _FormControl.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId(boxid)))?.AsComboBox();
        Assert.IsNotNull(boxCtrl, $"ComboBox {boxid} not found in dialog.");

        boxCtrl.Expand();
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);

        var listCtrl = _FormControl.FindFirstDescendant(cf => cf.ByControlType(ControlType.List).And(cf.ByName(boxCtrl.Name)))?.AsListBox();
        if (listCtrl != null)
        {
            var index = listCtrl.Items.IndexOfFirst(item => item.Text.Contains(pattern));
            Assert.AreNotEqual(-1, index, $"List index of pattern {pattern} not found in combobox {boxid}. Items found: {string.Join(",", listCtrl.Items.Select(item => item.Text).ToArray())}");

            listCtrl.Items[index].Click(!jump);
            return;
        }

        // Try to find item as direct child
        var items = boxCtrl.FindAllDescendants(cf => cf.ByControlType(ControlType.ListItem));
        foreach (var item in items)
        {
            var text = item.FindFirstDescendant(cf => cf.ByControlType(ControlType.Text));
            if (text == null || !text.Name.Contains(pattern))
                continue;

            var center = item.BoundingRectangle.Center();
            if(!jump)
                Mouse.MoveTo(center);
            Mouse.LeftClick(center);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
            return;
        }

        Assert.IsNotNull(listCtrl, $"Itemlist of combobox {boxid} not found.");
    }

    //--------------------------------------------------------------------------------------------------

}