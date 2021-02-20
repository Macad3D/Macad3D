using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.AutomationElements.Infrastructure;
using FlaUI.Core.Input;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public class LayersAdaptor
    {
        readonly AutomationElement _ViewControl;
        readonly ListBox _ListControl;

        //--------------------------------------------------------------------------------------------------

        public LayersAdaptor(Window window)
        {
            _ViewControl = window.FindFirstDescendant(cf => cf.ByClassName("LayersPanel"));
            Assume.That(_ViewControl, Is.Not.Null);
            _ListControl = _ViewControl.FindFirstDescendant(cf => cf.ByAutomationId("LayerList")).AsListBox();
            Assume.That(_ListControl, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        public ListBoxItem GetLayerItem(int index)
        {
            Assume.That(_ListControl.Items.Length, Is.GreaterThan(index));
            return _ListControl.Items[index];
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<ListBoxItem> GetLayerItems()
        {
            return _ListControl.Items;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<ListBoxItem> GetSelectedItems()
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
            Wait.UntilResponsive(_ViewControl);
        }
        
        //--------------------------------------------------------------------------------------------------

        public void SelectItem(int index)
        {
            var rect = GetLayerItem(index).BoundingRectangle;
            var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
            Mouse.Click(pnt, MouseButton.Left);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_ViewControl);
        }
    }
}