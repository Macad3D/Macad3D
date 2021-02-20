using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.AutomationElements.Infrastructure;
using FlaUI.Core.Input;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public class DocumentExplorerAdaptor
    {
        readonly AutomationElement _ViewControl;
        readonly Tree _TreeControl;

        //--------------------------------------------------------------------------------------------------

        public DocumentExplorerAdaptor(Window window)
        {
            _ViewControl = window.FindFirstDescendant(cf => cf.ByClassName("DocumentExplorerPanel"));
            Assume.That(_ViewControl, Is.Not.Null);
            _TreeControl = _ViewControl.FindFirstDescendant(cf => cf.ByAutomationId("TreeView")).AsTree();
            Assume.That(_TreeControl, Is.Not.Null);
        }

        //--------------------------------------------------------------------------------------------------

        public TreeItem GetModelItem()
        {
            Assume.That(_TreeControl.Items.Length, Is.EqualTo(1));
            Assume.That(_TreeControl.Items[0].AutomationId == "Topology.Model");
            return _TreeControl.Items[0];
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TreeItem> GetBodyItems()
        {
            return GetModelItem().Items.Where(ti => ti.AutomationId == "Topology.Body");
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TreeItem> GetSelectedItems()
        {
            return GetModelItem().Items.Where(ti => ti.IsSelected);
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectItem(string name)
        {
            var rect = GetModelItem().Items.First(ti => ti.Text == name).BoundingRectangle;
            var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
            Mouse.Click(pnt, MouseButton.Left);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_ViewControl);
        }

    }
}