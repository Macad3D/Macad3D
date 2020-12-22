using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using System.Windows.Media;
using Macad.Presentation;

namespace Macad.Window
{
    public partial class ViewportHwndView : AirspaceOverlay
    {
        #region DataContext

        public ViewportViewModel Model => DataContext as ViewportViewModel;

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

        void Model_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "ViewportController")
            {
                ViewportControllerChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void OnDataContextChanged(object sender, DependencyPropertyChangedEventArgs e)
        {
            if (e.OldValue != null)
            {
                ((ViewportViewModel)e.OldValue).PropertyChanged -= Model_PropertyChanged;
                ViewportControllerChanged();
            }

            ViewContainer.DataContext = e.NewValue;
            ViewportContextMenu.DataContext = e.NewValue;

            if (e.NewValue != null)
            {
                ((ViewportViewModel)e.NewValue).PropertyChanged += Model_PropertyChanged;
                ViewportControllerChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------


        #endregion

        #region Members and c'tor

        bool _SuppressContextMenu;
        bool _IgnoreButtonsOnNextMove;

        public ViewportHwndView()
        {
            InitializeComponent();

            DataContextChanged += OnDataContextChanged;
            MouseMove += OnMouseMove;
            MouseDown += OnMouseDown;
            MouseUp += OnMouseUp;
            MouseEnter += OnMouseEnter;
            MouseLeave += OnMouseLeave;
            MouseWheel += OnMouseWheel;
            KeyDown += OnKeyDown;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Callbacks

        void OnMouseMove(object sender, MouseEventArgs e)
        {
            if (ViewportContextMenu.IsOpen)
                return;

            if (e.RightButton == MouseButtonState.Pressed)
                _SuppressContextMenu = true;

            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseMove(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), _IgnoreButtonsOnNextMove ? null : e.MouseDevice);
            _IgnoreButtonsOnNextMove = false;

            // Update HUD Container
            double left = ((ActualWidth - HudContainer.ActualWidth - pos.X) > 0) ? pos.X : pos.X - HudContainer.ActualWidth;
            double top = ((pos.Y - HudContainer.ActualHeight) > 0) ? pos.Y - HudContainer.ActualHeight : pos.Y;
            HudContainer.Margin = new Thickness(left, top, 0, 0);
        }

        //--------------------------------------------------------------------------------------------------

        void OnMouseWheel(object sender, MouseWheelEventArgs e)
        {
            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseWheel(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), e.Delta, e.MouseDevice);
        }

        //--------------------------------------------------------------------------------------------------

        void OnMouseDown(object sender, MouseButtonEventArgs e)
        {
            CaptureMouse();
            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseDown(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), e.ChangedButton, e.MouseDevice);
            //if (Model?.HudElements.Any() == true)
                Focus();
        }

        //--------------------------------------------------------------------------------------------------

        void OnMouseUp(object sender, MouseButtonEventArgs e)
        {
            if (e.ChangedButton == MouseButton.Right && !_SuppressContextMenu)
            {
                Model?.UpdateContextActions();
                ViewportContextMenu.Open();
                return;
            }

            _SuppressContextMenu = false;

            var pos = e.GetPosition(this);
            var dpiScale = VisualTreeHelper.GetDpi(this);
            Model?.MouseUp(new Point(pos.X * dpiScale.DpiScaleX, pos.Y * dpiScale.DpiScaleY), e.ChangedButton, e.ClickCount, e.MouseDevice);
            ReleaseMouseCapture();
        }

        //--------------------------------------------------------------------------------------------------

        void OnMouseEnter(object sender, MouseEventArgs e)
        {
            HudContainer.Visibility = Visibility.Visible;
            if(Model?.HudElements.Any() == true)
                Focus();
        }

        //--------------------------------------------------------------------------------------------------

        void OnMouseLeave(object sender, MouseEventArgs e)
        {
            HudContainer.Visibility = Visibility.Hidden;
            Model?.MouseLeave();
        }

        //--------------------------------------------------------------------------------------------------

        void OnKeyDown(object sender, KeyEventArgs e)
        {
            // Skip inputs if already handled
            // Textboxes do not set Handled to true for regular inputs
            if (e.Handled || e.OriginalSource is TextBoxBase)
                return;

            // Close context menu if open
            if (e.Key == Key.Escape && ViewportContextMenu.IsOpen && !e.Handled)
            {
                ViewportContextMenu.Close();
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
            AppContext.Current.WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
