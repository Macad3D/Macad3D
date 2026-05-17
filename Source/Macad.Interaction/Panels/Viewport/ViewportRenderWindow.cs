using Macad.Common.Interop;
using Macad.Occt;
using System;
using System.Windows;
using Macad.Common;

namespace Macad.Interaction.Panels;

/// <summary>
/// This class encapsulates the render window for a viewport. It creates a native and manages its lifecycle.
/// It also provides methods to invalidate the viewport and resize it when needed.
/// The render window is used to display the 3D view of the workspace. This class is the glue between the
/// UI Framework and the viewport rendering. 
/// </summary>
internal sealed class ViewportRenderWindow : IDisposable
{
    #region Properties

    /// <summary>
    /// Native window handle of the render window.
    /// </summary>
    public IntPtr Handle
    {
        get { return _WntWindow?.HWindow() ?? IntPtr.Zero; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Statics

    static WNT_WClass _WindowClass;

    //--------------------------------------------------------------------------------------------------

    static ViewportRenderWindow()
    {
        uint style = Win32Api.CS_OWNDC;
        _WindowClass = new(new("WorkspaceView"), IntPtr.Zero, style, 0);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region C'tor and D'tor

    WNT_Window _WntWindow;
    WorkspaceController _WorkspaceController;

    public ViewportRenderWindow(WorkspaceController workspaceController, Color backgroundColor, double dpiScale)
    {
        _WorkspaceController = workspaceController;
        _WorkspaceController.ViewportLayoutManager.DpiScale = dpiScale;
        _WorkspaceController.ViewportLayoutManager.BackgroundColor = backgroundColor;
    }

    //--------------------------------------------------------------------------------------------------

    public void Init(IntPtr parentHWnd, Int32Rect initialRect)
    {
        if (initialRect.IsEmpty)
        {
            initialRect = new Int32Rect(0, 0, 64, 64);
        }

        uint style = Win32Api.WS_VISIBLE | (parentHWnd == IntPtr.Zero ? Win32Api.WS_POPUP : Win32Api.WS_CHILD);
        _WntWindow = new("WorkspaceView", _WindowClass, style, initialRect.X, initialRect.Y, initialRect.Width, initialRect.Height, Quantity_NameOfColor.GRAY50, parentHWnd);
        _WntWindow.Map();

        _WorkspaceController.ViewportLayoutManager.SetWindow(_WntWindow);
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        if (_WntWindow != null && !_WntWindow.IsDisposed())
        {
            if (_WntWindow.IsMapped())
            {
                _WntWindow.Unmap();
            }

            _WntWindow.Dispose();
            _WntWindow = null;
        }

        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public void Invalidate()
    {
        _WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public void Resize()
    {
        _WorkspaceController.ViewportLayoutManager.Resize();
    }

    //--------------------------------------------------------------------------------------------------

    public (int Width, int Height) Size()
    {
        int height = 100;
        int width = 100;
        _WntWindow?.Size(ref width, ref height);
        return (width, height);
    }
}