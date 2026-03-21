using FlaUI.Core.AutomationElements;
using FlaUI.Core.Input;
using NUnit.Framework;
using System;
using System.Diagnostics;
using System.Drawing;
using System.Threading;

namespace Macad.Test.UI.Framework;

public class ViewportAdaptor
{
    public AutomationElement _ViewportControl;
    readonly Window _Window;

    //--------------------------------------------------------------------------------------------------

    public ViewportAdaptor(Window window)
    {
        _Window = window;
        Rebind();
    }

    //--------------------------------------------------------------------------------------------------

    public void WaitUntilReady()
    {
        // If the viewport was rebuilt (after Reset), rebind it
        if (!IsElementValid(_ViewportControl))
            Rebind();

        var ok = RetryUntil(() =>
        {
            try
            {
                var rect = _ViewportControl.BoundingRectangle;
                return rect.Width > 0 && rect.Height > 0 && !_ViewportControl.IsOffscreen;
            }
            catch
            {
                return false;
            }
        }, TimeSpan.FromSeconds(5));

        if (!ok)
            throw new TimeoutException("Viewport never became ready.");
    }

    //--------------------------------------------------------------------------------------------------

    public void Rebind()
    {
        _ViewportControl = _Window.FindFirstDescendant(cf => cf.ByClassName("WorkspaceView"));
        Assert.That(_ViewportControl, Is.Not.Null, "Viewport control not found after rebind.");
    }

    //--------------------------------------------------------------------------------------------------

    bool IsElementValid(AutomationElement element)
    {
        try
        {
            var _ = element.BoundingRectangle;
            return true;
        }
        catch
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void  MoveRelative(double x, double y, bool jump = true)
    {
        WaitUntilReady();
        
        var rect = _ViewportControl.BoundingRectangle;
        var pnt = new Point((int)(rect.Left + rect.Width * x), (int)(rect.Top + rect.Height * y)); 
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
        WaitUntilReady();
        var pt = GetClickablePoint(x, y);

        Mouse.MoveTo(pt);
        
        if (doubleClick)
        {
            Mouse.DoubleClick(button);
        }
        else
        {
            Mouse.Down(button);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(_ViewportControl);
            Mouse.Up(button);
        }

        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_ViewportControl);
    }

    //--------------------------------------------------------------------------------------------------

    Point GetClickablePoint(double x, double y)
    {
        var rect = _ViewportControl.BoundingRectangle;
        return new Point(
            (int)(rect.Left + rect.Width * x),
            (int)(rect.Top + rect.Height * y));
    }

    //--------------------------------------------------------------------------------------------------

    bool RetryUntil(Func<bool> condition, TimeSpan timeout)
    {
        var sw = Stopwatch.StartNew();
        while (sw.Elapsed < timeout)
        {
            if (condition())
                return true;

            Thread.Sleep(50);
        }
        return false;
    }
}