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

    public IEnumerable<TreeItem> GetFolderItems()
    {
        return _TreeControl.Items.Where(ti => ti.AutomationId == "Folder");
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Finds an item by its text, searching expanded folders recursively.
    /// </summary>
    public TreeItem FindItem(string text)
    {
        return _FindItem(_TreeControl.Items, text);
    }

    static TreeItem _FindItem(IEnumerable<TreeItem> items, string text)
    {
        foreach (var item in items)
        {
            if (item.Text == text)
                return item;
            var child = _FindItem(item.Items, text);
            if (child != null)
                return child;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public void RightClickItem(TreeItem item)
    {
        RightClickItemAt(item.BoundingRectangle.Center());
    }

    public void RightClickItemAt(Point point)
    {
        Mouse.Click(point, MouseButton.Right);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void DragItem(TreeItem source, TreeItem target)
    {
        DragItem(source, target.BoundingRectangle.Center());
    }

    public void DragItem(TreeItem source, Point target)
    {
        var start = source.BoundingRectangle.Center();
        Mouse.MoveTo(start);
        Mouse.Down(MouseButton.Left);
        Wait.UntilInputIsProcessed();
        Mouse.MoveTo(new Point(start.X, start.Y + 10));
        Wait.UntilInputIsProcessed();
        Mouse.MoveTo(target);
        Wait.UntilInputIsProcessed();
        Mouse.Up(MouseButton.Left);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// A point inside the tree below all items, where dropping means moving to root.
    /// </summary>
    public Point GetEmptyTreePoint()
    {
        var rect = _TreeControl.BoundingRectangle;
        return new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Bottom - 10));
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