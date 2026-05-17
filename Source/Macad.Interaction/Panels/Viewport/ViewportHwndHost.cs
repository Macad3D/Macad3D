using System;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Controls.Primitives;
using System.Windows.Interop;
using System.Windows.Media;
using System.Windows.Threading;
using Macad.Common.Interop;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

internal class ViewportHwndHost : HwndHost
{
    readonly Int32Rect _InitialRect;
    bool _IsProcessingSizeEvent;
    WindowSizeMoveEvents _SizeMoveEvents;
    ViewportRenderWindow _RenderWindow;

    //--------------------------------------------------------------------------------------------------

    public ViewportHwndHost(ViewportRenderWindow renderWindow, UIElement parent)
    {
        _RenderWindow = renderWindow;

        var dpiScale = VisualTreeHelper.GetDpi(parent);
        var pos = parent.TranslatePoint(new Point(), Application.Current.MainWindow);
        _InitialRect.Width = (int)(parent.RenderSize.Width * dpiScale.DpiScaleX);
        _InitialRect.Height = (int)(parent.RenderSize.Height * dpiScale.DpiScaleY);
        _InitialRect.X = (int)(pos.X * dpiScale.DpiScaleX);
        _InitialRect.Y = (int)(pos.Y * dpiScale.DpiScaleY);
    }

    //--------------------------------------------------------------------------------------------------

    protected override HandleRef BuildWindowCore(HandleRef hwndParent)
    {
        _RenderWindow.Init(hwndParent.Handle, _InitialRect);
        var parent = PresentationHelper.FindVisualParent<Window>(this);
        if (parent != null)
        {
            _SizeMoveEvents = WindowSizeMoveEvents.GetOrCreate(parent);
            _SizeMoveEvents.StateChanged += _SizeMoveEvents_StateChanged;
        }
        
        return new HandleRef(this, _RenderWindow.Handle);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void DestroyWindowCore(HandleRef hwnd)
    {
        _RenderWindow.Dispose();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Dispose(bool disposing)
    {
        if (_SizeMoveEvents != null)
        {
            _SizeMoveEvents.StateChanged -= _SizeMoveEvents_StateChanged;
            _SizeMoveEvents = null;
        }

        // Remove ourselves as an IKeyboardInputSinks child of our previous
        // containing window.
        // This is done in OnSourceChanged-event of HwndHost, but unfortunately not in Dispose
        IKeyboardInputSite keyboardInputSite = ((IKeyboardInputSink)this).KeyboardInputSite;
        if (keyboardInputSite != null)
        {
            // Derived classes that implement IKeyboardInputSink should support setting it to null.
            ((IKeyboardInputSink)this).KeyboardInputSite = null;

            keyboardInputSite.Unregister();
        }

        base.Dispose(disposing);
    }

    //--------------------------------------------------------------------------------------------------

    void _SizeMoveEvents_StateChanged(object sender, WindowSizeMoveChangedEventArgs e)
    {
        switch (e.CurrentState)
        {
            case WindowSizeMoveState.None:
                _IsProcessingSizeEvent = false;
                break;
            case WindowSizeMoveState.Sizing:
                _IsProcessingSizeEvent = true;
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
    {
        base.OnRenderSizeChanged(sizeInfo);
        Dispatcher.BeginInvoke(() =>
        {
            _IsProcessingSizeEvent = false;
            UpdateWindowPos();
            _IsProcessingSizeEvent = true;
            _RenderWindow.Resize();
        }, DispatcherPriority.Normal);
    }
    
    //--------------------------------------------------------------------------------------------------

    protected override void OnWindowPositionChanged(Rect rcBoundingBox)
    {
        if (_IsProcessingSizeEvent)
        {
            // Ignore position update, we get a better update with next size changed message
            return;
        }
        base.OnWindowPositionChanged(rcBoundingBox);
    }

    //--------------------------------------------------------------------------------------------------

    public void SetAirspaceClipping(Thickness clipping)
    {
        if (Handle != IntPtr.Zero)
        {
            if ((clipping.Left + clipping.Right + clipping.Top + clipping.Bottom) <= 0)
            {
                Win32Api.SetWindowRgn(new HandleRef(this, Handle), IntPtr.Zero, true);
            }
            else
            {
                var dpiScale = VisualTreeHelper.GetDpi(this);
                var r = LayoutInformation.GetLayoutSlot(this);
                var rgn = Win32Api.CreateRectRgn(
                    (int) (clipping.Left * dpiScale.DpiScaleX),
                    (int) (clipping.Top * dpiScale.DpiScaleY),
                    (int) ((r.Width - clipping.Right) * dpiScale.DpiScaleY),
                    (int) ((r.Height - clipping.Bottom) * dpiScale.DpiScaleY));
                Win32Api.SetWindowRgn(new HandleRef(this, Handle), rgn, false);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override IntPtr WndProc(IntPtr hwnd, int msg, IntPtr wParam, IntPtr lParam, ref bool handled)
    {
        // Switch by message type
        switch (msg)
        {
            case Win32Api.WM_SHOWWINDOW:
                _RenderWindow.Resize();
                break;

            case Win32Api.WM_NCHITTEST:
                // For mouse input, this window should be treated completely transparent
                // so Windows will forward all mouse events to the underlying WPF Window
                handled = true;
                return new IntPtr(Win32Api.HTTRANSPARENT);

            case Win32Api.WM_PAINT:
                _RenderWindow.Invalidate();
                break;
        }
        return base.WndProc(hwnd, msg, wParam, lParam, ref handled);
    }

    //--------------------------------------------------------------------------------------------------

}