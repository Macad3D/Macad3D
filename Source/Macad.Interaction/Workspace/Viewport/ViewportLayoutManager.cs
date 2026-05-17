using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Helper;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Threading;

namespace Macad.Interaction;

/// <summary>
/// This class manages the layout of all viewports within a workspace. It handles the arrangement of viewports,
/// resizing, and maximizing individual viewports. It activates and deactivates viewports as needed.
/// </summary>
public sealed class ViewportLayoutManager : BaseObject, IDisposable
{
    #region Properties

    internal V3d_View V3dComposerView { get; private set; }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The DPI scale factor to apply when arranging viewports. This is used to ensure that the viewports are
    /// displayed at the correct size relative to the system's DPI settings. This value is typically set by
    /// the window hosting the viewports and should be updated when the DPI scale changes.
    /// </summary>
    public double DpiScale { get; set; } = 1.0;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The spacing in pixels between viewports when arranging them.
    /// </summary>
    public int SpacingBetweenViewports
    {
        get;
        set
        {
            field = value;
            UpdateLayout();
        }
    } = 2;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The background color to use for the free space around the viewports. Typically only seen in the
    /// space between viewports when using a multi-viewport layout.
    /// </summary>
    public Color BackgroundColor { get; set; } = Color.Black;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Indicates whether a viewport is currently maximized.
    /// </summary>
    public bool HasMaximizedViewport
    {
        get { return _MaximizedViewportIndex >= 0; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Fields, C'tor, D'tor

    readonly WorkspaceController _WorkspaceController;
    readonly Dictionary<ViewportController, ViewportContentFrame> _ContentFrameCache = new();
    WNT_Window _WntWindow;
    int _MaximizedViewportIndex = -1;

    //--------------------------------------------------------------------------------------------------

    public ViewportLayoutManager(WorkspaceController workspaceController)
    {
        _WorkspaceController = workspaceController;
        _WorkspaceController.Workspace.PropertyChanged += _Workspace_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        _ContentFrameCache.Clear();
        _WorkspaceController.Workspace.PropertyChanged -= _Workspace_PropertyChanged;
        _WntWindow = null;

        if (V3dComposerView != null)
        {
            V3dComposerView.Remove();
            V3dComposerView.Dispose();
            V3dComposerView = null;
        }

        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Arrangement

    /// <summary>
    /// Sets the native window to be used for rendering the viewports.
    /// </summary>
    /// <param name="_window"></param>
    public void SetWindow(WNT_Window _window)
    {
        _WntWindow = _window;

        if (Application.Current != null)
        {
            Application.Current.Dispatcher.InvokeAsync(UpdateLayout, DispatcherPriority.Render);
        }
        else
        {
            UpdateLayout();
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Resizes the viewports to fit the current size of the window.
    /// </summary>
    public void Resize()
    {
        if (V3dComposerView != null)
        {
            V3dComposerView.MustBeResized();

            var layout = _WorkspaceController.Workspace.ViewportLayout;
            (int width, int height) = GetSize();
            layout.Arrange(new(0, 0, width, height), SpacingBetweenViewports);

            foreach (var kvp in _ContentFrameCache)
            {
                ViewportController vc = kvp.Key;
                ViewportContentFrame frame = kvp.Value;
                vc.SetWindow(V3dComposerView, frame.Location);
            }
        }

        foreach (var viewportController in _WorkspaceController.ViewportControllers)
        {
            viewportController.Resize();
        }
        _WorkspaceController.Invalidate();

        _RaiseLayoutArranged();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Arranges the viewports according to the current layout.
    /// </summary>
    public void UpdateLayout()
    {
        if (_WntWindow == null)
            return;

        var layout = _WorkspaceController.Workspace.ViewportLayout;
        if (_MaximizedViewportIndex >= 0)
        {
            layout = layout.GetContentFrame(_MaximizedViewportIndex) ?? layout;
        }
        IEnumerable<ViewportContentFrame> frames = layout.GetContentFrames();

        (int width, int height) = GetSize();
        layout.Arrange(new(0, 0, width, height), SpacingBetweenViewports);

        /* Currently, we always use the composer view, even for single viewport layouts.
           When assigning a window to a view, OCCT will always initialize the OpenGL window and calls 
           SetPixelFormat on the window. This is only allowed once per window, so we can't move the
           window to a different view once it has been set.
        */
        //if (frames.Count() == 1 && V3dComposerView == null)
        //{
        //    // Single viewport
        //    ViewportController vc = _WorkspaceController.ViewportController;
        //    vc.SetWindow(_WntWindow);
        //    ViewportContentFrame frame = layout.GetContentFrame(0);
        //    Debug.Assert(frame != null);

        //    _ContentFrameCache.Clear();
        //    _ContentFrameCache.Add(vc, frame);
        //}
        //else
        {
            if (V3dComposerView == null)
            {
                _CreateComposerView();
            }

            // Layout viewports
            _ContentFrameCache.Clear();
            foreach (var frame in frames)
            {
                ViewportController vc = _WorkspaceController.GetViewportController(frame.ViewportIndex);
                vc.SetWindow(V3dComposerView, frame.Location);
                _ContentFrameCache.Add(vc, frame);
            }
        }

        // Deactivate unused viewports
        foreach (var vc in _WorkspaceController.ViewportControllers)
        {
            if (vc.IsVisible && !_ContentFrameCache.Keys.Contains(vc))
            {
                vc.ReleaseWindow();
            }
        }

        _RaiseLayoutArranged();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Maximizes the specified viewport, or restores all viewports to their original size.
    /// </summary>
    /// <param name="viewport">The viewport to maximize, or null to restore all viewports.</param>
    public void MaximizeViewport(ViewportController viewport)
    {
        if (viewport == null)
        {
            _MaximizedViewportIndex = -1;
        }
        else
        {
            _MaximizedViewportIndex = _WorkspaceController.ViewportControllers.IndexOf(viewport);
        }

        UpdateLayout();
        RaisePropertyChanged(nameof(HasMaximizedViewport));
    }

    //--------------------------------------------------------------------------------------------------

    void _Workspace_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(Workspace.ViewportLayout))
        {
            _MaximizedViewportIndex = -1;
            UpdateLayout();
            RaisePropertyChanged(nameof(HasMaximizedViewport));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateComposerView()
    {
        if(V3dComposerView != null)
            return;

        // Window already mapped?
        if (_ContentFrameCache.Count == 1)
        {
            ViewportController vc = _ContentFrameCache.Keys.First();
            vc.ReleaseWindow();
        }

        // Create composer view
        V3dComposerView = _WorkspaceController.V3dViewer.CreateView();
        V3dComposerView.SetBackgroundColor(BackgroundColor.ToQuantityColor());
        V3dHelper.SetSubviewComposer(V3dComposerView, true);
        V3dComposerView.SetWindow(_WntWindow);
        V3dComposerView.MustBeResized();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Queries

    public (int Width, int Height) GetSize()
    {
        int height = 100;
        int width = 100;
        _WntWindow?.Size(ref width, ref height);
        return (width, height);
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportContentFrame GetContentFrame(ViewportController viewportController)
    {
        _ContentFrameCache.TryGetValue(viewportController, out var frame);
        return frame;
    }

    //--------------------------------------------------------------------------------------------------

    public bool FindViewport(Point position, out ViewportController viewport, out Point viewportPosition)
    {
        foreach (var (vp, frame) in _ContentFrameCache)
        {
            if (frame.Location.Contains(position.X, position.Y, out var viewportPos))
            {
                viewport = vp;
                viewportPosition = new(viewportPos.x, viewportPos.y);
                return true;
            }
        }
        viewport = null;
        viewportPosition = position;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public Point TransformToViewport(Point point, ViewportController targetViewport, bool clamp = false)
    {
        var frame = _ContentFrameCache[targetViewport];
        if (frame == null)
            return point;

        Point result = new(point.X - frame.Location.Left, point.Y - frame.Location.Top);

        if (clamp)
        {
            result = ClampToViewport(result, targetViewport);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public Point TransformFromViewport(Point point, ViewportController sourceViewport)
    {
        var frame = _ContentFrameCache[sourceViewport];
        if (frame == null)
            return point;

        Point result = new(point.X + frame.Location.Left, point.Y + frame.Location.Top);
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public Point ClampToViewport(Point point, ViewportController targetViewport)
    {
        var frame = _ContentFrameCache[targetViewport];
        if (frame == null)
            return point;

        return new(Math.Max(1, Math.Min(point.X, frame.Location.Width - 1)),
            Math.Max(1, Math.Min(point.Y, frame.Location.Height - 1)));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    public delegate void LayoutArrangedEventHandler(ViewportLayoutManager senders);

    /// <summary>
    /// Raised when the layout of the viewports has been rearranged.
    /// </summary>
    public event LayoutArrangedEventHandler LayoutArranged;

    void _RaiseLayoutArranged()
    {
        LayoutArranged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}