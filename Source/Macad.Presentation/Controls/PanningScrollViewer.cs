using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;

namespace Macad.Presentation;
// http://www.codeproject.com/Articles/37349/Creating-A-Scrollable-Control-Surface-In-WPF.aspx

public class PanningScrollViewer : ScrollViewer
{
    static PanningScrollViewer()
    {
        DefaultStyleKeyProperty.OverrideMetadata(typeof(PanningScrollViewer), new FrameworkPropertyMetadata(typeof(PanningScrollViewer)));
    }

    private Point _ScrollStartPoint;
    private Point _ScrollStartOffset;
       
    protected override void OnMouseDown(MouseButtonEventArgs e)
    {
        if (IsMouseOver)
        {
            // Save starting point, used later when determining how much to scroll.
            _ScrollStartPoint = e.GetPosition(this);
            _ScrollStartOffset.X = HorizontalOffset;
            _ScrollStartOffset.Y = VerticalOffset;

            // Update the cursor if can scroll or not.
            this.Cursor = (ExtentWidth > ViewportWidth) ||
                          (ExtentHeight > ViewportHeight) ?
                              Cursors.ScrollNS : Cursors.Arrow;

            this.CaptureMouse();
            e.Handled = true;
        }

        base.OnPreviewMouseDown(e);
    }

    protected override void OnPreviewMouseMove(MouseEventArgs e)
    {
        if (this.IsMouseCaptured)
        {
            // Get the new scroll position.
            Point point = e.GetPosition(this);

            // Determine the new amount to scroll.
            Point delta = new Point(
                (point.X > this._ScrollStartPoint.X) ?
                    -(point.X - this._ScrollStartPoint.X) :
                    (this._ScrollStartPoint.X - point.X),

                (point.Y > this._ScrollStartPoint.Y) ?
                    -(point.Y - this._ScrollStartPoint.Y) :
                    (this._ScrollStartPoint.Y - point.Y));

            // Scroll to the new position.
            ScrollToHorizontalOffset(_ScrollStartOffset.X + delta.X);
            ScrollToVerticalOffset(_ScrollStartOffset.Y + delta.Y);
        }

        base.OnPreviewMouseMove(e);
    }


    protected override void OnPreviewMouseUp(MouseButtonEventArgs e)
    {
        if (this.IsMouseCaptured)
        {
            this.Cursor = Cursors.Arrow;
            this.ReleaseMouseCapture();
        }

        base.OnPreviewMouseUp(e);
    }
         
}