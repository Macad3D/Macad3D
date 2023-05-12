using System.Drawing;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public enum RibbonTabs
    {
        File,
        Edit,
        Model,
        Sketch,
        Toolbox
    }

    //--------------------------------------------------------------------------------------------------

    public class RibbonAdaptor
    {
        readonly AutomationElement _RibbonControl;
        readonly Window _MainWindow;
        AutomationElement _ButtonBarControl;

        //--------------------------------------------------------------------------------------------------

        public RibbonAdaptor(Window window)
        {
            _MainWindow = window;
            _RibbonControl = window.FindFirstDescendant(cf => cf.ByClassName("MainWindowRibbon"));
            Assume.That(_RibbonControl, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectTab(RibbonTabs id, bool jump = true)
        {
            var tabControl = _RibbonControl.FindFirstDescendant(cf => cf.ByAutomationId(id.ToString()));
            Assume.That(tabControl, Is.Not.Null, $"Ribbon tab control {id} not found.");
            //groupControl.Click(!jump);
            tabControl.Patterns.SelectionItem.Pattern.Select();
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_RibbonControl);

            _ButtonBarControl = tabControl;
        }

        //--------------------------------------------------------------------------------------------------

        AutomationElement _FindButton(string id)
        {
            Assume.That(_ButtonBarControl != null, "Select ribbon group prior to use any button.");

            var listItem = _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.ListItem)))
                           ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Button)))
                           ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.SplitButton)))
                           ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Custom)));

            Assert.IsNotNull(listItem, $"Item {id} not found in current ribbon group.");

            var btn = listItem.FindFirstDescendant(cf => cf.ByAutomationId("PART_Button"));

            return btn ?? listItem;
        }

        //--------------------------------------------------------------------------------------------------

        public void ClickButton(string id, bool jump = true)
        {
            var button = _FindButton(id);

            var center = button.BoundingRectangle.Center();
            if (jump)
                Mouse.Position = new Point(center.X + 10, center.Y + 10);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_RibbonControl);

            Mouse.MoveTo(center);
            Mouse.LeftClick(center);

            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_RibbonControl);
            Wait.UntilInputIsProcessed();
        }
        
        //--------------------------------------------------------------------------------------------------

        public void OpenSplitButtonMenu(string id, bool jump = true)
        {
            Assume.That(_ButtonBarControl != null, "Select ribbon group prior to use any button.");
            var listItem = _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.SplitButton)))
                           ?? _ButtonBarControl.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.ListItem)));
            Assert.IsNotNull(listItem, $"Item {id} not found in current ribbon group.");

            if (!listItem.Patterns.ExpandCollapse.IsSupported)
            {
                Assert.IsNotNull(listItem, $"Button {id} does not support the toggle pattern.");
            }

            listItem.Patterns.ExpandCollapse.Pattern.Expand();
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_RibbonControl);
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsButtonChecked(string id)
        {
            var button = _FindButton(id);
            if (!button.Patterns.Toggle.IsSupported)
            {
                Assert.IsNotNull(button, $"Button {id} does not support the toggle pattern.");
            }

            return button.Patterns.Toggle.Pattern.ToggleState.Value == ToggleState.On;
        }
        
        //--------------------------------------------------------------------------------------------------

        public bool IsButtonEnabled(string id)
        {
            var button = _FindButton(id);
            return button.IsEnabled;
        }

        //--------------------------------------------------------------------------------------------------

        public void ClickFileMenuItem(string id1, string id2=null, bool jump = true)
        {
            var tabControl = _RibbonControl.FindFirstDescendant(cf => cf.ByAutomationId(RibbonTabs.File.ToString()));
            Assume.That(tabControl, Is.Not.Null, $"Ribbon tab control File not found.");
            Assume.That(tabControl.Patterns.ExpandCollapse.IsSupported, $"Ribbon tab control File does not support ExpandCollapsePattern.");
            tabControl.Patterns.ExpandCollapse.Pattern.Expand();
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_RibbonControl);

            var menuItem1 = _MainWindow.Popup?.FindFirstDescendant(cf => cf.ByAutomationId($"AppMenu{id1}"))?.AsMenuItem();
            Assert.IsNotNull(menuItem1, $"Parent MenuItem AppMenu{id1} not found.");
            if(id2 == null)
                menuItem1.Click(!jump);
            else
                Mouse.Position = menuItem1.GetClickablePoint();
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_RibbonControl);

            if (!id2.IsNullOrEmpty())
            {
                var menuItem2 = _MainWindow.Popup?.FindFirstDescendant(cf => cf.ByAutomationId($"AppMenu{id2}"))?.AsMenuItem();
                Assert.IsNotNull(menuItem2, $"Child MenuItem AppMenu{id2} not found.");
                menuItem2.Click(!jump);
                Wait.UntilInputIsProcessed();
                Wait.UntilResponsive(_RibbonControl);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void SetButtonChecked(string id, bool isChecked)
        {
            if(IsButtonChecked(id) == isChecked)
                return;
            ClickButton(id);
        }

        //--------------------------------------------------------------------------------------------------

    }

}