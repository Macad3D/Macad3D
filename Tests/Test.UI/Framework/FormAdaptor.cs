using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using FlaUI.Core.WindowsAPI;
using Macad.Common;
using NUnit.Framework;
using System;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;

namespace Macad.Test.UI.Framework;

public class FormAdaptor
{
    protected AutomationElement _FormControl;

    //--------------------------------------------------------------------------------------------------

    public AutomationElement Element => _FormControl;

    //--------------------------------------------------------------------------------------------------

    public FormAdaptor(AutomationElement formControl)
    {
        _FormControl = formControl;
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsVisible(string id)
    {
        var ctrl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id));
        if (ctrl == null)
            return false;

        return !ctrl.IsOffscreen && ctrl.BoundingRectangle.Width > 0 && ctrl.BoundingRectangle.Height > 0;
    }

    //--------------------------------------------------------------------------------------------------

    protected FormAdaptor()
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected AutomationElement Find(string automationId)
    {
        var element = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(automationId));
        if (element == null)
            return null;

        var innerEdit = element.FindFirstDescendant(cf => cf.ByControlType(ControlType.Edit));
        if (innerEdit != null)
            return innerEdit;

        return element;
    }

    //--------------------------------------------------------------------------------------------------

    public T GetValue<T>(string id)
    {
        var element = this.Find(id);
        if (element == null)
            throw new Exception($"Element {id} not found in form.");

        if (typeof(T) == typeof(bool))
        {
            if (element.Patterns.Toggle.IsSupported)
            {
                var toggle = element.Patterns.Toggle.Pattern;
                bool state = toggle.ToggleState.Value == ToggleState.On;
                return (T)(object)state;
            }

            if (element.Patterns.Value.IsSupported)
            {
                var rawBool = element.Patterns.Value.Pattern.Value;
                bool parsed = rawBool == "True" || rawBool == "true" || rawBool == "1" || rawBool == "On";
                return (T)(object)parsed;
            }

            var nameBool = element.Name;
            bool nameParsed = nameBool == "True" || nameBool == "On" || nameBool == "Checked";
            return (T)(object)nameParsed;
        }

        if (typeof(T) == typeof(string))
        {
            // Prefer ValuePattern
            if (element.Patterns.Value.IsSupported)
            {
                var raw = element.Patterns.Value.Pattern.Value;
                return (T)(object)(raw ?? string.Empty);
            }

            // Then TextPattern
            if (element.Patterns.Text.IsSupported)
            {
                var raw = element.Patterns.Text.Pattern.DocumentRange.GetText(-1) ?? string.Empty;
                return (T)(object)raw;
            }

            // Finally, Name
            return (T)(object)(element.Name ?? string.Empty);
        }

        throw new NotSupportedException(
            $"GetValue<{typeof(T).Name}> is not supported. Only bool and string are handled.");
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

        try
        {
            Wait.UntilInputIsProcessed();
            if(_FormControl.IsAvailable)
                Wait.UntilResponsive(_FormControl);
        }
        catch (COMException e)
        {
            // This can occur when the click leads to closing the form or application.
            // If this is ok or not will be checked by a later assertion of the test case.
            if ((uint)e.HResult != 0x80040201)
            {
                throw;
            }
        }
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

        if (button.Patterns.Toggle.IsSupported)
        {
            var toggle = button.Patterns.Toggle.Pattern;
            return toggle.ToggleState.Value == ToggleState.On;
        }

        if (button.Patterns.Value.IsSupported)
        {
            var raw = button.Patterns.Value.Pattern.Value;
            return raw == "True" || raw == "On" || raw == "Checked";
        }

        return button.Name == "True" || button.Name == "On" || button.Name == "Checked";
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

        bool found = Retry.WhileFalse(() =>
        {
            var listCtrl = _FormControl.FindFirstDescendant(cf => cf.ByControlType(ControlType.List).And(cf.ByName(boxCtrl.Name)))?.AsListBox();
            if (listCtrl != null)
            {
                var index = listCtrl.Items.IndexOfFirst(item => item.Text.Contains(pattern));
                if (index != -1)
                {
                    listCtrl.Items[index].Click(!jump);
                    return true;
                }
            }

            // Try to find item as direct child
            var items = boxCtrl.FindAllDescendants(cf => cf.ByControlType(ControlType.ListItem));
            foreach (var item in items)
            {
                var text = item.FindFirstDescendant(cf => cf.ByControlType(ControlType.Text));
                if (text == null || !text.Name.Contains(pattern))
                    continue;

                var center = item.BoundingRectangle.Center();
                if (!jump)
                    Mouse.MoveTo(center);
                Mouse.LeftClick(center);
                Wait.UntilInputIsProcessed();
                Wait.UntilResponsive(_FormControl);
                return true;
            }

            Assert.Fail($"List index of pattern {pattern} not found in combobox {boxid}.");
            return false;
        }, TimeSpan.FromSeconds(10)).Result;
        Assert.That(found, Is.True, $"Itemlist of combobox {boxid} not found.");
    }

    //--------------------------------------------------------------------------------------------------

}