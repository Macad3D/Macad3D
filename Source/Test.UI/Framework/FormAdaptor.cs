using System;
using System.Globalization;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using FlaUI.Core.WindowsAPI;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public class FormAdaptor
    {
        readonly AutomationElement _FormControl;

        //--------------------------------------------------------------------------------------------------

        public FormAdaptor(AutomationElement formControl)
        {
            _FormControl = formControl;
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

        public bool GetToggle(string id)
        {
            var togglePattern = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id))?.Patterns.Toggle?.PatternOrDefault;
            Assert.IsNotNull(togglePattern, $"Toggle {id} not found in form.");

            return togglePattern.ToggleState.Value == ToggleState.On;
        }
                
        //--------------------------------------------------------------------------------------------------

        public void ClickToggle(string id)
        {
            var togglePattern = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id))?.Patterns.Toggle?.PatternOrDefault;
            Assert.IsNotNull(togglePattern, $"Toggle {id} not found in form.");

            togglePattern.Toggle();
        }

        //--------------------------------------------------------------------------------------------------

        public void ClickButton(string id, bool jump = true)
        {
            var control = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Button)));
            Assert.That(control, Is.Not.Null, $"Button {id} not found in form.");

            var center = control.BoundingRectangle.Center();
            if(!jump)
                Mouse.MoveTo(center);
            Mouse.LeftClick(center);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsButtonChecked(string id)
        {
            var button = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Button))).AsButton();
            Assert.IsNotNull(button, $"Button {id} not found in form.");

            if (button.ControlType == ControlType.SplitButton)
            {
                button = button.FindFirstDescendant(cf => cf.ByAutomationId("PART_Button"))?.AsButton();
                Assert.IsNotNull(button, $"Button {id} is a SplitButton, but the ToggleButton part was not found.");
            }

            return button.Patterns.Toggle.Pattern.ToggleState.Value == ToggleState.On;
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
            Assert.Fail("Neither the form nore its parent does support ExpandCollapsePattern.");
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool ControlExists(string id)
        {
            return _FormControl.FindFirstDescendant(cf => cf.ByAutomationId(id)) != null;
        }
        
        //--------------------------------------------------------------------------------------------------

    }
}