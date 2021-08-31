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
using System.Windows.Shell;
using Macad.Common.Interop;

namespace Macad.Presentation
{
    [ContentProperty("OverlayChild")]
    public class AirspaceOverlay : Border
    {
        readonly Window _TransparentInputWindow;
        Window _Parent;
        Thickness _ClippingBorder;

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
            UpdateWindow();
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
        }

        //--------------------------------------------------------------------------------------------------

        void _TransparentInputWindow_PreviewMouseDown(object sender, MouseButtonEventArgs e)
        {
            this.Focus();
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

        protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
        {
            base.OnRenderSizeChanged(sizeInfo);
            UpdateWindow();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnRender(DrawingContext drawingContext)
        {
            base.OnRender(drawingContext);
            if (_TransparentInputWindow.Visibility != Visibility.Visible)
            {
                UpdateWindow();

                if (!DesignerProperties.GetIsInDesignMode(this))
                {
                    _Parent = GetParentWindow(this);
                    if (_Parent != null)
                    {
                        _TransparentInputWindow.Show();
                        _TransparentInputWindow.Owner = _Parent;
                        _Parent.LocationChanged += parent_LocationChanged;
                    }
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void parent_LocationChanged(object sender, EventArgs e)
        {
            UpdateWindow();
        }

        //--------------------------------------------------------------------------------------------------

        Window GetParentWindow(DependencyObject o)
        {
            DependencyObject parent = VisualTreeHelper.GetParent(o);
            if (parent == null)
            {
                if (!DesignerProperties.GetIsInDesignMode(this))
                {
                    FrameworkElement fe = o as FrameworkElement;
                    if (fe != null)
                    {
                        if (fe is Window)
                        {
                            return fe as Window;
                        }
                        else if (fe.Parent != null)
                        {
                            return GetParentWindow(fe.Parent);
                        }
                    }
                    //throw new ApplicationException("A window parent could not be found for " + o.ToString());
                }
                return null;
            }
            else
            {
                return GetParentWindow(parent);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void UpdateWindow()
        {
            if (!DesignerProperties.GetIsInDesignMode(this))
            {
                var parent = GetParentWindow(this);
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
}
