using System.Drawing;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Input;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class ViewportAdaptor
{
    readonly AutomationElement _ViewportControl;

    //--------------------------------------------------------------------------------------------------

    public ViewportAdaptor(Window window)
    {
        _ViewportControl = window.FindFirstDescendant(cf => cf.ByClassName("WorkspaceView"));
        Assert.That(_ViewportControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    Point _RelativeToAbsolute(double x, double y)
    {
        var rect = _ViewportControl.BoundingRectangle;
        return new Point((int)(rect.Left + rect.Width * x), (int)(rect.Top + rect.Height * y));
    }

    //--------------------------------------------------------------------------------------------------
        
    public void MoveRelative(double x, double y, bool jump = true)
    {
        var pnt = _RelativeToAbsolute(x, y);
        if (jump)
            Mouse.Position = pnt;
        else
            Mouse.MoveTo(pnt);

        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_ViewportControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickRelative(double x, double y, MouseButton button = MouseButton.Left, bool jump = true, bool doubleClick = false)
    {
        MoveRelative(x, y, jump);

        if (doubleClick)
        {
            Mouse.DoubleClick(button);
        }
        else if (jump)
        {
            Mouse.Down(button);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_ViewportControl);
            Mouse.Up(button);
        }
        else
        {
            Mouse.Click(button);
        }
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_ViewportControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void DragRelative(double x, double y, MouseButton button = MouseButton.Left)
    {
        var start = Mouse.Position;
        var end = _RelativeToAbsolute(x, y);
        Mouse.Drag(start, end, button);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_ViewportControl);
    }
}