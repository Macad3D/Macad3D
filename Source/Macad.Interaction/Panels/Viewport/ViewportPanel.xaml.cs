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

namespace Macad.Interaction.Panels
{
    [ContentProperty("OverlayContent")]
    public partial class ViewportPanel : AirspaceOverlay
    {
        #region Properties

        public static readonly DependencyProperty OverlayContentProperty = DependencyProperty.Register(
            "OverlayContent", typeof(object), typeof(ViewportPanel), new PropertyMetadata(default(object), _OverlayContentChanged));

        public object OverlayContent
        {
            get { return (object) GetValue(OverlayContentProperty); }
            set { SetValue(OverlayContentProperty, value); }
        }

        static void _OverlayContentChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
        {
            if (e.NewValue is FrameworkElement overlayChildElement)
            {
                if (overlayChildElement.DataContext == null)
                {
                    overlayChildElement.SetBinding(DataContextProperty, BindingHelper.Create(((FrameworkElement)d).Parent, nameof(DataContext), BindingMode.OneWay));
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region DataContext

        public ViewportPanelModel Model => DataContext as ViewportPanelModel;

        //--------------------------------------------------------------------------------------------------

        void ViewportControllerChanged()
        {
            if (Child != null)
            {
                Child = null;
            }

            var viewportController = Model?.ViewportController;
            if (viewportController is null)
                return;

            // Viewport changed
            var dpiScale = VisualTreeHelper.GetDpi(this);
            viewportController.Viewport.DpiScale = (dpiScale.DpiScaleX + dpiScale.DpiScaleY) / 2.0;

            Child = new ViewportHwndHost(viewportController);
        }

        //--------------------------------------------------------------------------------------------------

        void _Model_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(ViewportController))
            {
                ViewportControllerChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members and c'tor

        bool _SuppressContextMenu;
        bool _IgnoreButtonsOnNextMove;
        Point _MouseDownPosition;

        public ViewportPanel()
        {
            DataContext ??= new ViewportPanelModel();
            Model.PropertyChanged += _Model_PropertyChanged;

            InitializeComponent();
            OverlayContentPresenter.SetBinding(ContentPresenter.ContentProperty, BindingHelper.Create(this, nameof(OverlayContent), BindingMode.OneWay));

            ViewportControllerChanged();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Callbacks

        protected override void OnContextMenuOpening(ContextMenuEventArgs e)
        {
            // The context menu is handled manually by mouse events
            e.Handled = true;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseMove(MouseEventArgs e)
        {
            base.OnMouseMove(e);

            if (ContextMenu != null && ContextMenu.IsOpen)
                return;

            var pos = e.GetPosition(this);

            // Supress context menu if mouse was moved significantly
            if (e.RightButton == MouseButtonState.Pressed && (_MouseDownPosition - pos).LengthSquared > 9)
            {
                _SuppressContextMenu = true;
            }

            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseMove(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), _IgnoreButtonsOnNextMove ? null : e.MouseDevice);
            _IgnoreButtonsOnNextMove = false;

            // Update HUD Container
            double left = ((ActualWidth - HudContainer.ActualWidth - pos.X) > 0) ? pos.X : pos.X - HudContainer.ActualWidth;
            double top = ((pos.Y - HudContainer.ActualHeight) > 0) ? pos.Y - HudContainer.ActualHeight : pos.Y;
            HudContainer.Margin = new Thickness(left, top, 0, 0);
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseWheel(MouseWheelEventArgs e)
        {
            base.OnMouseWheel(e);

            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseWheel(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), e.Delta, e.MouseDevice);
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseDown(MouseButtonEventArgs e)
        {
            base.OnMouseDown(e);

            CaptureMouse();
            _MouseDownPosition = e.GetPosition(this);

            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseDown(new Point(_MouseDownPosition.X * dpiScale.DpiScaleX, _MouseDownPosition.Y * dpiScale.DpiScaleY), e.ChangedButton, e.MouseDevice);

            if (Model?.HudElements.Any() == true)
                Focus();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseUp(MouseButtonEventArgs e)
        {
            base.OnMouseUp(e);
        
            if (e.ChangedButton == MouseButton.Right && ContextMenu != null && !_SuppressContextMenu)
            {
                Model?.UpdateContextActions();
                ContextMenu.IsOpen = true;
                return;
            }

            _SuppressContextMenu = false;

            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseUp(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), e.ChangedButton, e.ClickCount, e.MouseDevice);
            ReleaseMouseCapture();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseEnter(MouseEventArgs e)
        {
            base.OnMouseEnter(e);

            HudContainer.Visibility = Visibility.Visible;
            if(Model?.HudElements.Any() == true)
                Focus();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnMouseLeave(MouseEventArgs e)
        {
            base.OnMouseLeave(e);

            HudContainer.Visibility = Visibility.Hidden;
            Model?.MouseLeave();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnKeyDown(KeyEventArgs e)
        {
            base.OnKeyDown(e);

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
    }
}
