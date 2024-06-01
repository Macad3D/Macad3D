using System;
using System.ComponentModel;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Threading;
using Macad.Common.Interop;

namespace Macad.Presentation;

[ContentProperty("OverlayChild")]
public class AirspaceOverlay : Border
{
    readonly Window _TransparentInputWindow;
    Window _Parent;
    Thickness _ClippingBorder;
    WindowSizeMoveEvents _SizeMoveEvents;
    bool _IsProcessingSizeEvent;

    //--------------------------------------------------------------------------------------------------

    public Thickness ClippingBorder
    {
        get { return _ClippingBorder; }
        set
        {
            _ClippingBorder = value;
            ClippingBorderChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void ClippingBorderChanged()
    {
        _InvalidateWindow();
    }

    //--------------------------------------------------------------------------------------------------

    public AirspaceOverlay()
    {
        Padding = new Thickness(0, 0, 0, 0);
        _TransparentInputWindow = new Window
        {
            //Make the window itself transparent, with no style.
            Background = Brushes.Transparent,
            AllowsTransparency = true,
            WindowStyle = WindowStyle.None,
            SnapsToDevicePixels = true,
            UseLayoutRounding = false,

            //Hide from taskbar until it becomes a child
            ShowInTaskbar = false,

            //HACK: This window and it's child controls should never have focus, as window styling of an invisible window 
            //will confuse user.
            Focusable = false,
        };

        _TransparentInputWindow.SetValue(AutomationProperties.AutomationIdProperty, "AirspaceOverlay");
        _TransparentInputWindow.PreviewMouseDown += _TransparentInputWindow_PreviewMouseDown;
        _TransparentInputWindow.MouseDown += _TransparentInputWindow_ForwardMouseEvent;
        _TransparentInputWindow.MouseUp += _TransparentInputWindow_ForwardMouseEvent;
        _TransparentInputWindow.MouseMove += _TransparentInputWindow_ForwardMouseEvent;
        _TransparentInputWindow.MouseWheel += _TransparentInputWindow_ForwardMouseEvent;
    }

    //--------------------------------------------------------------------------------------------------

    void _TransparentInputWindow_PreviewMouseDown(object sender, MouseButtonEventArgs e)
    {
        this.Focus();
        RaiseEvent(e);
    }

    //--------------------------------------------------------------------------------------------------

    void _TransparentInputWindow_ForwardMouseEvent(object sender, MouseEventArgs e)
    {
        RaiseEvent(e);
    }

    //--------------------------------------------------------------------------------------------------

    public object OverlayChild
    {
        get
        {
            return _TransparentInputWindow?.Content;
        }
        set
        {
            if (_TransparentInputWindow != null)
            {
                _TransparentInputWindow.Content = value;

                if (value is FrameworkElement overlayChildElement)
                {
                    if (overlayChildElement.DataContext == null)
                    {
                        overlayChildElement.SetBinding(DataContextProperty, BindingHelper.Create(this, nameof(DataContext), BindingMode.OneWay));
                    }
                }

            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnRender(DrawingContext drawingContext)
    {
        base.OnRender(drawingContext);
        if (_TransparentInputWindow.Owner == null)
        {
            if (!DesignerProperties.GetIsInDesignMode(this))
            {
                _Parent = PresentationHelper.FindVisualParent<Window>(this);
                if (_Parent != null)
                {
                    _TransparentInputWindow.Show();
                    _TransparentInputWindow.Owner = _Parent;
                    _Parent.LocationChanged += _Parent_LocationChanged;
                    _SizeMoveEvents = WindowSizeMoveEvents.GetOrCreate(_Parent);
                    _SizeMoveEvents.StateChanged += _SizeMoveEvents_StateChanged;
                    _InvalidateWindow();
                }
            }
        }
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

        _InvalidateWindow();
    }

    //--------------------------------------------------------------------------------------------------

    void _Parent_LocationChanged(object sender, EventArgs e)
    {
        if (_IsProcessingSizeEvent)
        {
            // Ignore position update, we get a better update with next size changed message
            _IsProcessingSizeEvent = false;
            return;
        }

        _InvalidateWindow();
    }

    //--------------------------------------------------------------------------------------------------

    void _InvalidateWindow()
    {
        _TransparentInputWindow.Dispatcher.BeginInvoke(() =>
        {
            _UpdateWindow();
        }, DispatcherPriority.Normal);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateWindow()
    {
        if (!DesignerProperties.GetIsInDesignMode(this))
        {
            var parent = PresentationHelper.FindVisualParent<Window>(this);
            if (parent is not {IsVisible: true})
                return;

            var r = LayoutInformation.GetLayoutSlot(this);
            // Layout slot has unreliable position, we need to get the position separately
            var p = PointToScreen(new Point(0, 0));
            var dpiScale = VisualTreeHelper.GetDpi(this);

            _TransparentInputWindow.Left = p.X / dpiScale.DpiScaleX + _ClippingBorder.Left;
            _TransparentInputWindow.Top = p.Y / dpiScale.DpiScaleY + _ClippingBorder.Top;
            _TransparentInputWindow.Width = Math.Max(0, r.Width - _ClippingBorder.Left - _ClippingBorder.Right);
            _TransparentInputWindow.Height = Math.Max(0, r.Height - _ClippingBorder.Top - _ClippingBorder.Bottom);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetWindowEnabled(bool bIsEnabled)
    {
        var hRefWnd = new HandleRef(this, new System.Windows.Interop.WindowInteropHelper(_TransparentInputWindow).Handle);
        Win32Api.EnableWindow(hRefWnd, bIsEnabled);
    }

    //--------------------------------------------------------------------------------------------------

}