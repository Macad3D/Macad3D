using System;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

[ContentProperty("OverlayContent")]
public partial class ViewportPanel : AirspaceOverlay
{
    #region Properties

    public static readonly DependencyProperty OverlayContentProperty = DependencyProperty.Register(
        "OverlayContent", typeof(object), typeof(ViewportPanel), new PropertyMetadata(default(object)));

    public object OverlayContent
    {
        get { return (object) GetValue(OverlayContentProperty); }
        set { SetValue(OverlayContentProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MouseControlProperty = DependencyProperty.Register(
        "MouseControl", typeof(IViewportMouseControl), typeof(ViewportPanel), new PropertyMetadata(new ViewportMouseControlDefault()));

    public IViewportMouseControl MouseControl
    {
        get { return (IViewportMouseControl) GetValue(MouseControlProperty); }
        set { SetValue(MouseControlProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty TouchControlProperty = DependencyProperty.Register(
        "TouchControl", typeof(IViewportTouchControl), typeof(ViewportPanel), new PropertyMetadata(new ViewportTouchControlDefault()));

    public IViewportTouchControl TouchControl
    {
        get { return (IViewportTouchControl) GetValue(TouchControlProperty); }
        set { SetValue(TouchControlProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region DataContext

    public ViewportPanelModel Model => DataContext as ViewportPanelModel;

    //--------------------------------------------------------------------------------------------------

    void _WorkspaceControllerChanged()
    {
        if (Child != null)
        {
            (Child as IDisposable)?.Dispose();
            Child = null;
            _RenderWindow?.Dispose();
            _RenderWindow = null;
        }

        if (Model?.WorkspaceController == null)
            return;

        // Viewport changed
        var dpiScale = VisualTreeHelper.GetDpi(this);

        // Create host for OpenGL window
        var backgroundColor = (Background as SolidColorBrush)?.Color ?? Colors.Black;
        _RenderWindow = new(Model?.WorkspaceController, backgroundColor.ToMacadColor(), (dpiScale.DpiScaleX + dpiScale.DpiScaleY) / 2.0);
        Child = new ViewportHwndHost(_RenderWindow, this);
    }

    //--------------------------------------------------------------------------------------------------

    void _Model_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(ViewportPanelModel.WorkspaceController))
        {
            _WorkspaceControllerChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members and c'tor

    ViewportRenderWindow _RenderWindow;
    bool _SuppressContextMenu;
    bool _SupressButtonUp;
    bool _RightMouseBtnDown;
    Point _MouseDownPosition;
    Point _MouseMovePosition;
    bool _ContextMenuIsOpen;

    //--------------------------------------------------------------------------------------------------

    public ViewportPanel()
    {
        DataContext ??= new ViewportPanelModel();
        Model.PropertyChanged += _Model_PropertyChanged;

        InitializeComponent();
        OverlayContentPresenter.SetBinding(ContentPresenter.ContentProperty, BindingHelper.Create(this, nameof(OverlayContent), BindingMode.OneWay));
        HudContainer.SizeChanged += (_, _) => _UpdateHud(_MouseMovePosition);
        Model.HudElements.CollectionChanged += _HudElements_CollectionChanged;

        MouseHorizontalWheelEnabler.AddMouseHorizontalWheelHandler(this, OnMouseHorizontalWheel);

        _WorkspaceControllerChanged();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region HUD

    void _UpdateHud(Point pos)
    {
        // Update HUD Container
        double left = ((ActualWidth - HudContainer.ActualWidth - pos.X) > 0) ? pos.X : pos.X - HudContainer.ActualWidth;
        double top = ((pos.Y - HudContainer.ActualHeight) > 0) ? pos.Y - HudContainer.ActualHeight : pos.Y;
        HudContainer.Margin = new Thickness(left, top, 0, 0);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Callbacks

    protected override void OnPropertyChanged(DependencyPropertyChangedEventArgs e)
    {
        if (e.Property == ContextMenuProperty)
        {
            if (e.NewValue is ContextMenu oldMenu)
            {
                oldMenu.Opened -= _ContextMenu_Opened;
                oldMenu.Closed -= _ContextMenu_Closed;
            }

            if (e.NewValue is ContextMenu newMenu)
            {
                newMenu.Opened += _ContextMenu_Opened;
                newMenu.Closed += _ContextMenu_Closed;
            }
        }
        base.OnPropertyChanged(e);
    }

    //--------------------------------------------------------------------------------------------------

    void _HudElements_CollectionChanged(object sender, System.Collections.Specialized.NotifyCollectionChangedEventArgs e)
    {
        if (Model?.HudElements.Any() == true)
        {
            Focus();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ContextMenu_Closed(object sender, RoutedEventArgs e)
    {
        _ContextMenuIsOpen = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _ContextMenu_Opened(object sender, RoutedEventArgs e)
    {
        _ContextMenuIsOpen = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnContextMenuOpening(ContextMenuEventArgs e)
    {
        // The context menu is handled manually by mouse events
        e.Handled = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseMove(MouseEventArgs e)
    {
        base.OnMouseMove(e);

        if (_ContextMenuIsOpen)
            return;

        _MouseMovePosition = e.GetPosition(this);
        _UpdateHud(_MouseMovePosition);

        // Suppress context menu if mouse was moved significantly
        if (_RightMouseBtnDown && (_MouseDownPosition - _MouseMovePosition).LengthSquared > 9)
        {
            _SuppressContextMenu = true;
        }

        var dpiScale = VisualTreeHelper.GetDpi(this);
        Point mousePosition = new(_MouseMovePosition.X * dpiScale.DpiScaleX, _MouseMovePosition.Y * dpiScale.DpiScaleY);
        Model.WorkspaceController.ViewportLayoutManager.FindViewport(mousePosition, out var viewport, out var viewportPosition);
        MouseControl?.MouseMove(viewport, viewportPosition, _GetPressedButtons(e.MouseDevice), Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseWheel(MouseWheelEventArgs e)
    {
        base.OnMouseWheel(e);

        var pos = e.GetPosition(this);
        var dpiScale = VisualTreeHelper.GetDpi(this);
        Point mousePosition = new(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY);
        if (!Model.WorkspaceController.ViewportLayoutManager.FindViewport(mousePosition, out var viewport, out var viewportPosition))
        {
            return;
        }

        MouseControl?.MouseWheel(viewport, viewportPosition, Panels.MouseWheel.Vertical, e.Delta, _GetPressedButtons(e.MouseDevice), Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

    void OnMouseHorizontalWheel(object sender, MouseHorizontalWheelEventArgs e)
    {
        var pos = e.GetPosition(this);
        var dpiScale = VisualTreeHelper.GetDpi(this);
        Point mousePosition = new(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY);
        if (!Model.WorkspaceController.ViewportLayoutManager.FindViewport(mousePosition, out var viewport, out var viewportPosition))
        {
            return;
        }
        MouseControl?.MouseWheel(viewport, viewportPosition, Panels.MouseWheel.Horizontal, e.Delta, _GetPressedButtons(e.MouseDevice), Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseDown(MouseButtonEventArgs e)
    {
        base.OnMouseDown(e);

        if (_ContextMenuIsOpen)
        {
            _SupressButtonUp = true;//e.LeftButton == MouseButtonState.Pressed;
            _SuppressContextMenu = true;
            return;
        }

        if (!IsFocused)
        {
            Focus();
        }

        CaptureMouse();
        _MouseDownPosition = e.GetPosition(this);
        _RightMouseBtnDown = e.RightButton == MouseButtonState.Pressed;

        var dpiScale = VisualTreeHelper.GetDpi(this);
        Point mousePosition = new(_MouseDownPosition.X * dpiScale.DpiScaleX, _MouseDownPosition.Y * dpiScale.DpiScaleY);
        if (!Model.WorkspaceController.ViewportLayoutManager.FindViewport(mousePosition, out var viewport, out var viewportPosition))
        {
            return;
        }

        MouseControl?.MouseDown(viewport, viewportPosition, _ToMouseButtons(e.ChangedButton), e.ClickCount, _GetPressedButtons(e.MouseDevice), Keyboard.Modifiers);

        if (Model?.HudElements.Any() == true)
            Focus();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseUp(MouseButtonEventArgs e)
    {
        base.OnMouseUp(e);
        _RightMouseBtnDown = e.RightButton == MouseButtonState.Pressed;

        if (e.ChangedButton == MouseButton.Right && ContextMenu != null && !_SuppressContextMenu)
        {
            ContextMenu.IsOpen = true;
            return;
        }

        _SuppressContextMenu = false;

        if (!_ContextMenuIsOpen && !_SupressButtonUp)
        {
            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Point mousePosition = new(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY);
            Model.WorkspaceController.ViewportLayoutManager.FindViewport(mousePosition, out var viewport, out var viewportPosition);
            MouseControl?.MouseUp(viewport, viewportPosition, _ToMouseButtons(e.ChangedButton), _GetPressedButtons(e.MouseDevice), Keyboard.Modifiers);
        }

        _SupressButtonUp = false;
        ReleaseMouseCapture();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseEnter(MouseEventArgs e)
    {
        base.OnMouseEnter(e);

        HudContainer.Visibility = Visibility.Visible;
        if (Model?.HudElements.Any() == true)
        {
            Focus();
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnMouseLeave(MouseEventArgs e)
    {
        base.OnMouseLeave(e);

        HudContainer.Visibility = Visibility.Hidden;
        MouseControl?.Cancel();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnTouchMove(TouchEventArgs e)
    {
        base.OnTouchMove(e);

        if (ContextMenu != null && ContextMenu.IsOpen)
            return;

        var dpiScale = VisualTreeHelper.GetDpi(this);
        var point = e.GetTouchPoint(this);
        Point pos = new(point.Position.X * dpiScale.DpiScaleX, point.Position.Y * dpiScale.DpiScaleY);
        Model.WorkspaceController.ViewportLayoutManager.FindViewport(pos, out var viewport, out var viewportPosition);
        TouchControl?.TouchMove(point.TouchDevice.Id, viewport, viewportPosition, Keyboard.Modifiers);

        e.Handled = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnTouchDown(TouchEventArgs e)
    {
        base.OnTouchDown(e);

        var dpiScale = VisualTreeHelper.GetDpi(this);
        var point = e.GetTouchPoint(this);
        Point pos = new(point.Position.X * dpiScale.DpiScaleX, point.Position.Y * dpiScale.DpiScaleY);
        if (!Model.WorkspaceController.ViewportLayoutManager.FindViewport(pos, out var viewport, out var viewportPosition))
        {
            return;
        }
        CaptureTouch(e.TouchDevice);
        TouchControl?.TouchMove(point.TouchDevice.Id, viewport, viewportPosition, Keyboard.Modifiers);
        e.Handled = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnTouchUp(TouchEventArgs e)
    {
        base.OnTouchUp(e);

        var dpiScale = VisualTreeHelper.GetDpi(this);
        var point = e.GetTouchPoint(this);
        Point pos = new(point.Position.X * dpiScale.DpiScaleX, point.Position.Y * dpiScale.DpiScaleY);
        Model.WorkspaceController.ViewportLayoutManager.FindViewport(pos, out var viewport, out var viewportPosition);
        TouchControl?.TouchUp(point.TouchDevice.Id, viewport, viewportPosition, Keyboard.Modifiers);
        ReleaseTouchCapture(e.TouchDevice);
        e.Handled = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnKeyDown(KeyEventArgs e)
    {
        base.OnKeyDown(e);

        // Do not tab away
        if (e.Key == Key.Tab)
        {
            e.Handled = true;
            return;
        }

        // Skip inputs if already handled
        // Textboxes do not set Handled to true for regular inputs
        if (e.Handled || e.OriginalSource is TextBoxBase)
            return;

        // Close context menu if open
        if (e.Key == Key.Escape && !e.Handled && ContextMenu != null && ContextMenu.IsOpen)
        {
            ContextMenu.IsOpen = false;
            e.Handled = true;
            return;
        }

        e.Handled = Model?.KeyDown(e) ?? false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region AirspaceClipping (for Docking AutoHide Window)

    protected override void ClippingBorderChanged()
    {
        base.ClippingBorderChanged();
        (Child as ViewportHwndHost)?.SetAirspaceClipping(ClippingBorder);
        InteractiveContext.Current.WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    MouseButtons _ToMouseButtons(MouseButton mouseButton)
    {
        return mouseButton switch
        {
            MouseButton.Left => MouseButtons.Left,
            MouseButton.Middle => MouseButtons.Middle,
            MouseButton.Right => MouseButtons.Right,
            MouseButton.XButton1 => MouseButtons.XButton1,
            MouseButton.XButton2 => MouseButtons.XButton2,
            _ => MouseButtons.None
        };
    }

    //--------------------------------------------------------------------------------------------------

    MouseButtons _GetPressedButtons(MouseDevice mouseDevice)
    {
        MouseButtons buttons = MouseButtons.None;
        if (mouseDevice.LeftButton == MouseButtonState.Pressed)
            buttons |= MouseButtons.Left;
        if (mouseDevice.MiddleButton == MouseButtonState.Pressed)
            buttons |= MouseButtons.Middle;
        if (mouseDevice.RightButton == MouseButtonState.Pressed)
            buttons |= MouseButtons.Right;
        if (mouseDevice.XButton1 == MouseButtonState.Pressed)
            buttons |= MouseButtons.XButton1;
        if (mouseDevice.XButton2 == MouseButtonState.Pressed)
            buttons |= MouseButtons.XButton2;
        return buttons;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}