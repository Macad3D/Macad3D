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
        Assume.That(_ViewportControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
        
    public void  MoveRelative(double x, double y, bool jump = true)
    {
        var rect = _ViewportControl.BoundingRectangle;
        var pnt = new Point((int) (rect.Left + rect.Width * x), (int) (rect.Top + rect.Height * y));
        if (jump)
            Mouse.Position = pnt;
        else
            Mouse.MoveTo(pnt);

        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_ViewportControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickRelative(double x, double y, MouseButton button = MouseButton.Left, bool jump = true)
    {
        MoveRelative(x, y, jump);

        if (jump)
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

}