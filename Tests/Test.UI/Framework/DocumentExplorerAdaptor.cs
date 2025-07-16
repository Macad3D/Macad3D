using FlaUI.Core.AutomationElements;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using Macad.Common;
using NUnit.Framework;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;

namespace Macad.Test.UI.Framework;

public class DocumentExplorerAdaptor : FormAdaptor
{
    readonly Tree _TreeControl;

    //--------------------------------------------------------------------------------------------------

    public DocumentExplorerAdaptor(Window window)
    {
        _FormControl = window.FindFirstDescendant(cf => cf.ByClassName("DocumentExplorerPanel"));
        Assert.That(_FormControl, Is.Not.Null);
        _TreeControl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId("TreeView")).AsTree();
        Assert.That(_TreeControl, Is.Not.Null);
    }


    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TreeItem> GetItems(string type="")
    {
        if(type.IsNullOrEmpty())
            return _TreeControl.Items;
        else
            return _TreeControl.Items.Where(ti => ti.AutomationId == type);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TreeItem> GetSelectedItems()
    {
        return _TreeControl.Items.Where(ti => ti.IsSelected);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectItem(string name)
    {
        var item = _TreeControl.Items.First(ti => ti.Text == name);
        Assert.NotNull(item, $"Item {name} not found");
        SelectItem(item);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SelectItem(int index)
    {
        Assert.That(index >= 0 && index < _TreeControl.Items.Length, "Index out of bounds.");
        SelectItem(_TreeControl.Items[index]);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectItem(TreeItem item)
    {
        var rect = item.BoundingRectangle;
        var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
        Mouse.Click(pnt, MouseButton.Left);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Click(string id, bool jump = true, bool doubleClick = false)
    {
        var item = _TreeControl.Items.FirstOrDefault(ti => ti.Text == id);
        if (item == null)
        {
            base.Click(id, jump, doubleClick);
            return;
        }

        var center = item.BoundingRectangle.Center();
        if (!jump)
            Mouse.MoveTo(center);

        if (doubleClick)
            Mouse.LeftDoubleClick(center);
        else
            Mouse.LeftClick(center);

        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

}