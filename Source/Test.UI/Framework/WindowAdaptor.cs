using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Conditions;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.UIA3;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public class WindowAdaptor
    {
        public Window Window { get; protected set; }

        //--------------------------------------------------------------------------------------------------

        public string Title
        {
            get { return Window?.Name; }
        }

        //--------------------------------------------------------------------------------------------------

        public bool IsEnabled
        {
            get { return Window?.IsEnabled ?? false; }
        }

        //--------------------------------------------------------------------------------------------------

        protected WindowAdaptor(WindowAdaptor mainWindow, Func<ConditionFactory, ConditionBase> conditionFunc)
        {
            Wait.UntilResponsive(mainWindow.Window);
            Window = mainWindow.Window.FindFirstChild(conditionFunc)?.AsWindow();
            Assert.That(Window, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        public WindowAdaptor(WindowAdaptor mainWindow, string automationId)
        {
            Wait.UntilResponsive(mainWindow.Window);
            Window = mainWindow.Window.FindFirstChild(automationId)?.AsWindow();
            Assert.That(Window, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        public WindowAdaptor(ApplicationAdaptor app, string automationId)
        {
            // Find window
            using (var automation = new UIA3Automation())
            {
                do
                {
                    Window = app.FindWindow((win)=>win.AutomationId==automationId);
                } while (Window == null);

                Window.Focus();
                Wait.UntilResponsive(Window);
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

        public void ClickButton(string id, bool jump = true)
        {
            var buttonCtrl = Window.FindFirstDescendant(cf => cf.ByClassName("Button").And(cf.ByAutomationId(id)))?.AsButton();
            Assert.IsNotNull(buttonCtrl, $"Button {id} not found in dialog.");
            buttonCtrl.Click(!jump);
            Wait.UntilInputIsProcessed();
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

        public void ExpandComboBox(string id, bool expandOrColapse=true)
        {
            var boxCtrl = Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId(id)))?.AsComboBox();
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
            // File Save
            var boxCtrl = Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId(boxid)))?.AsComboBox();
            if (boxCtrl == null)
            {
                // File Open
                boxCtrl = Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId("1136")))?.AsComboBox();
            }
            Assert.IsNotNull(boxCtrl, $"ComboBox {boxid} not found in dialog.");

            boxCtrl.Expand();

            var listCtrl = Window.FindFirstDescendant(cf => cf.ByControlType(ControlType.List).And(cf.ByName(boxCtrl.Name)))?.AsListBox();
            Assert.IsNotNull(listCtrl, $"Itemlist of combobox {boxid} not found.");

            var index = listCtrl.Items.IndexOfFirst(item => item.Text.Contains(pattern));
            Assert.AreNotEqual(-1, index, $"List index of pattern {pattern} not found in combobox {boxid}. Items found: {string.Join(",", listCtrl.Items.Select(item => item.Text).ToArray())}");

            listCtrl.Items[index].Click(!jump);
        }

        //--------------------------------------------------------------------------------------------------

        public void Close()
        {
            Window.Close();
            Wait.UntilInputIsProcessed();
        }
    }
}