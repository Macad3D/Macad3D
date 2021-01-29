using System.Windows;

namespace Macad.Interaction.Panels
{
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
        int _MoveCallCount;

        //--------------------------------------------------------------------------------------------------

        public void TouchDown(int id, Point pos)
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
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void TouchUp(int id, Point pos)
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

        public void TouchMove(int id, Point pos)
        {
            if (ViewportController == null)
                return;

            if (_MultiTouch)
            {
                // Double touch, pan mode
                if (_FirstId == id)
                {
                    var dx = (pos.X - _FirstPos.X) / 2.0;
                    var dy = (pos.Y - _FirstPos.Y) / 2.0;
                    ViewportController.Pan(dx, -dy);
                    _FirstPos = pos;
                    _MoveCallCount++;
                }
                else if (_SecondId == id)
                {
                    var dx = (pos.X - _SecondPos.X) / 2.0;
                    var dy = (pos.Y - _SecondPos.Y) / 2.0;
                    ViewportController.Pan(dx, -dy);
                    _SecondPos = pos;
                    _MoveCallCount++;
                }
            }
            else
            {
                // Single touch, rotate mode
                if (_FirstId == id )
                {
                    var dx = (pos.X - _FirstPos.X) * 0.05;
                    var dy = (pos.Y - _FirstPos.Y) * 0.05;
                    ViewportController.Rotate(dy, -dx, 0.0);
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
}