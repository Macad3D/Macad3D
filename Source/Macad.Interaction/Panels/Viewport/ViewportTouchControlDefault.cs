using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public class ViewportTouchControlDefault : IViewportTouchControl
{
    public ViewportController ViewportController { get; set; }

    bool _MultiTouch
    {
        get { return _FirstId != -1 && _SecondId != -1; }
    }

    //--------------------------------------------------------------------------------------------------

    int _FirstId = -1;
    int _SecondId = -1;
    Point _FirstPos;
    Point _SecondPos;
    Vector _FirstToSecond;
    int _MoveCallCount;

    //--------------------------------------------------------------------------------------------------

    public void TouchDown(int id, Point pos, ModifierKeys modifierKeys)
    {
        if (ViewportController == null)
            return;

        if (_FirstId == -1)
        {
            _FirstId = id;
            _FirstPos = pos;
            _MoveCallCount = 0;
        }
        else if (_SecondId == -1)
        {
            _SecondId = id;
            _SecondPos = pos;
            _FirstToSecond = Point.Subtract(_FirstPos, _SecondPos);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void TouchUp(int id, Point pos, ModifierKeys modifierKeys)
    {
        if (_FirstId == id)
        {
            _FirstId = -1;
        } 
        else if (_SecondId == id)
        {
            _SecondId = -1;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void TouchMove(int id, Point pos, ModifierKeys modifierKeys)
    {
        if (ViewportController == null)
            return;

        if (_MultiTouch)
        {
            // Double touch, pan
            double dx=0, dy=0;
            if (_FirstId == id)
            {
                dx = pos.X - _FirstPos.X;
                dy = pos.Y - _FirstPos.Y;
                _FirstPos = pos;
            }
            else if (_SecondId == id)
            {
                dx = pos.X - _SecondPos.X;
                dy = pos.Y - _SecondPos.Y;
                _SecondPos = pos;
            }
            double scale = ViewportController.Viewport.Scale * 1.1;
            ViewportController.Pan(dx / scale, -dy / scale);
            _MoveCallCount++;

            // zoom and roll
            var newFirstToSecond = Point.Subtract(_FirstPos, _SecondPos);

            var diffDistance = newFirstToSecond.Length - _FirstToSecond.Length;
            ViewportController.Zoom(diffDistance / 100.0);

            var angle = Vector.AngleBetween(_FirstToSecond, newFirstToSecond);
            ViewportController.Rotate(0, 0, angle);

            _FirstToSecond = newFirstToSecond;
        }
        else
        {
            // Single touch, rotate
            if (_FirstId == id )
            {
                var dx = (_FirstPos.X - pos.X) * 0.25;
                var dy = (_FirstPos.Y - pos.Y) * 0.25;
                ViewportController.Rotate(dx, dy, 0.0);
                _FirstPos = pos;
                _MoveCallCount++;
            }
        }

        if (_MoveCallCount > 3)
        {
            // Touch events are propagated to mouse events. If we do not cancel selection,
            // the MouseUp event will select the body moved under the pointer.
            ViewportController.WorkspaceController.CancelSelection();
        }
    }

    //--------------------------------------------------------------------------------------------------

}