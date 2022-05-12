using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public class LayersAdaptor : FormAdaptor
    {
        readonly Tree _ListControl;

        //--------------------------------------------------------------------------------------------------

        public LayersAdaptor(Window window)
        {
            _FormControl = window.FindFirstDescendant(cf => cf.ByClassName("LayersPanel"));
            Assume.That(_FormControl, Is.Not.Null);
            _ListControl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId("LayerList")).AsTree();
            Assume.That(_ListControl, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        public TreeItem GetLayerItem(int index)
        {
            Assume.That(_ListControl.Items.Length, Is.GreaterThan(index));
            return _ListControl.Items[index];
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TreeItem> GetLayerItems()
        {
            return _ListControl.Items;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TreeItem> GetSelectedItems()
        {
            return GetLayerItems().Where(lbi => lbi.IsSelected);
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectItem(string name)
        {
            var rect = GetLayerItems().First(lbi => lbi.Text == name).BoundingRectangle;
            var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
            Mouse.Click(pnt, MouseButton.Left);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
        }
        
        //--------------------------------------------------------------------------------------------------

        public void SelectItem(int index)
        {
            var rect = GetLayerItem(index).BoundingRectangle;
            var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
            Mouse.Click(pnt, MouseButton.Left);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
        }

        //--------------------------------------------------------------------------------------------------

        public void DragItem(int index, int distance)
        {
            var rect = GetLayerItem(index).BoundingRectangle;
            var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
            Mouse.DragVertically(pnt, distance, MouseButton.Left);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
        }

        //--------------------------------------------------------------------------------------------------

        public TreeItem AddLayer()
        {
            ClickButton("CreateLayer");
            return GetLayerItems().Last();
        }

        //--------------------------------------------------------------------------------------------------

        void _ClickLayerButton(TreeItem layer, string id)
        {
            var control = layer.FindFirstDescendant(cf => cf.ByAutomationId(id).And(cf.ByControlType(ControlType.Button)));
            Assert.That(control, Is.Not.Null, $"Button {id} not found in form.");

            var center = control.BoundingRectangle.Center();
            Mouse.LeftClick(center);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_FormControl);
        }

        //--------------------------------------------------------------------------------------------------

        public void ToggleIsLocked(TreeItem layer)
        {
            _ClickLayerButton(layer, "ToggleIsLocked");
        }
        
        //--------------------------------------------------------------------------------------------------

        public void ToggleIsVisible(TreeItem layer)
        {
            _ClickLayerButton(layer, "ToggleIsVisible");
        }
    }
}