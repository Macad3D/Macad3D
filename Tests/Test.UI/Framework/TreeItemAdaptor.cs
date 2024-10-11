using System.Drawing;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Input;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class TreeItemAdaptor : FormAdaptor
{
    readonly TreeItem _TreeItem;

    //--------------------------------------------------------------------------------------------------

    public bool IsSelected
    {
        get { return _TreeItem.IsSelected; }
    }

    //--------------------------------------------------------------------------------------------------

    public string Text
    {
        get { return _TreeItem.Text; }
    }

    //--------------------------------------------------------------------------------------------------

    public TreeItemAdaptor(TreeItem treeItem)
        : base(treeItem)
    {
        _TreeItem = treeItem;
        Assert.That(_TreeItem, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public void Click(bool doubleClick = false)
    {
        var rect = _TreeItem.BoundingRectangle;
        var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
        if(doubleClick)
            Mouse.DoubleClick(pnt, MouseButton.Left);
        else
            Mouse.Click(pnt, MouseButton.Left);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void Drag(int distance)
    {
        var rect = _TreeItem.BoundingRectangle;
        var pnt = new Point((int)(rect.Left + rect.Width * 0.5), (int)(rect.Top + rect.Height * 0.5));
        Mouse.DragVertically(pnt, distance, MouseButton.Left);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

}