using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public class ViewportTouchControlDefault : IViewportTouchControl
{
    int _FirstId = -1;
    int _SecondId = -1;
    bool _IsTouched => _FirstId != -1 || _SecondId != -1;
    bool _IsMultiTouch => _FirstId != -1 && _SecondId != -1;
    Point _FirstPos;
    Point _SecondPos;
    Vector _FirstToSecond;
    int _MoveCallCount;
    ViewportController _CurrentViewport;

    //--------------------------------------------------------------------------------------------------

    public void TouchDown(int id, ViewportController viewport, Point pos, ModifierKeys modifierKeys)
    {
        if (viewport == null)
            return;

        if (_IsTouched && _CurrentViewport != viewport)
        {
            _CurrentViewport = null;
            return;
        }

        _CurrentViewport = viewport;

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

    public void TouchUp(int id, ViewportController viewport, Point pos, ModifierKeys modifierKeys)
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

    public void TouchMove(int id, ViewportController viewport, Point pos, ModifierKeys modifierKeys)
    {
        if(_CurrentViewport == null)
            return;

        if (viewport != _CurrentViewport)
        {
            // Transform position to current viewport if we are in a move mode, so that the movement is consistent when moving across viewports
            pos = viewport?.WorkspaceController.ViewportLayoutManager.TransformFromViewport(pos, viewport) ?? pos;
            pos = _CurrentViewport.WorkspaceController.ViewportLayoutManager.TransformToViewport(pos, _CurrentViewport);
        }

        if (_IsMultiTouch)
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
            double scale = _CurrentViewport.Viewport.Scale * 1.1;
            _CurrentViewport.Pan(dx / scale, -dy / scale);
            _MoveCallCount++;

            // zoom and roll
            var newFirstToSecond = Point.Subtract(_FirstPos, _SecondPos);

            var diffDistance = newFirstToSecond.Length - _FirstToSecond.Length;
            _CurrentViewport.Zoom(diffDistance / 100.0);

            var angle = Vector.AngleBetween(_FirstToSecond, newFirstToSecond);
            _CurrentViewport.Rotate(0, 0, angle);

            _FirstToSecond = newFirstToSecond;
        }
        else
        {
            // Single touch, rotate
            if (_FirstId == id )
            {
                var dx = (_FirstPos.X - pos.X) * 0.25;
                var dy = (_FirstPos.Y - pos.Y) * 0.25;
                _CurrentViewport.Rotate(dx, dy, 0.0);
                _FirstPos = pos;
                _MoveCallCount++;
            }
        }

        if (_MoveCallCount > 3)
        {
            // Touch events are propagated to mouse events. If we do not cancel selection,
            // the MouseUp event will select the body moved under the pointer.
            _CurrentViewport.WorkspaceController.CancelSelection();
        }
    }

    //--------------------------------------------------------------------------------------------------

}