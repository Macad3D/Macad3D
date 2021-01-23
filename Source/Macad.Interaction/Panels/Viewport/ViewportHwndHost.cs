using System;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Controls.Primitives;
using System.Windows.Interop;
using System.Windows.Media;
using Macad.Common.Interop;

namespace Macad.Interaction
{
    public class ViewportHwndHost : HwndHost
    {
        readonly ViewportController _ViewportController;

        //--------------------------------------------------------------------------------------------------

        public ViewportHwndHost(ViewportController viewportController)
        {
            _ViewportController = viewportController;
        }

        //--------------------------------------------------------------------------------------------------

        protected override HandleRef BuildWindowCore(HandleRef hwndParent)
        {
            IntPtr windowHandle = _ViewportController.InitWindow(hwndParent.Handle);

            return new HandleRef(this, windowHandle);
        }

        //--------------------------------------------------------------------------------------------------

        protected override void DestroyWindowCore(HandleRef hwnd)
        {
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
        {
            _ViewportController.Viewport.Resize();
            _ViewportController.WorkspaceController.Invalidate();
            base.OnRenderSizeChanged(sizeInfo);
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
                    if (_ViewportController?.Viewport?.V3dView != null)
                    {
                        _ViewportController.Viewport.Resize();
                        _ViewportController.WorkspaceController.Invalidate();
                    }
                    break;

                case Win32Api.WM_NCHITTEST:
                    // For mouse input, this window should be treated completely transparent
                    // so Windows will forward all mouse events to the underlying WPF Window
                    handled = true;
                    return new IntPtr(Win32Api.HTTRANSPARENT);

                case Win32Api.WM_PAINT:
                    _ViewportController?.WorkspaceController.Invalidate();
                    break;
            }
            return base.WndProc(hwnd, msg, wParam, lParam, ref handled);
        }

        //--------------------------------------------------------------------------------------------------

    }
}