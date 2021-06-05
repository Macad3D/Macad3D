using System;
using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels
{
    public class ViewportMouseControlDefault : IViewportMouseControl
    {
        public ViewportController ViewportController { get; set; } 

        //--------------------------------------------------------------------------------------------------

        ViewportController.MouseMoveMode _CurrentMouseMoveMode;

        //--------------------------------------------------------------------------------------------------

        public void MouseMove(Point pos, MouseDevice mouseDevice)
        {
            if (ViewportController == null)
                return;

            if(_CurrentMouseMoveMode != ViewportController.MouseMoveMode.None)
            {
                ViewportController.MouseMove(pos, _CurrentMouseMoveMode);
            }
            else
            {
                if (mouseDevice?.LeftButton == MouseButtonState.Pressed)
                {
                    ViewportController.MouseMove(pos);
                    if (Keyboard.IsKeyDown(Key.LeftCtrl) && !ViewportController.IsInRubberbandSelection && ViewportController.WorkspaceController.IsSelecting)
                    {
                        ViewportController.StartRubberbandSelection(
                            InteractiveContext.Current.EditorState.RubberbandSelectionMode,
                            InteractiveContext.Current.EditorState.RubberbandIncludeTouched);
                    }
                } 
                else 
                {
                    ViewportController.MouseMove(pos);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseWheel(Point pos, MouseWheel wheel, int delta, InputDevice device)
        {
            if (ViewportController == null || delta == 0)
                return;

            double scaledDelta = delta;
            if (Keyboard.IsKeyDown(Key.LeftCtrl))
            {
                // Increase precision
                scaledDelta /= 10.0;
            }

            switch (wheel)
            {
                case Panels.MouseWheel.Vertical:
                    ViewportController.Zoom(pos, scaledDelta / 200.0);
                    break;
                case Panels.MouseWheel.Horizontal:
                    ViewportController.Rotate(0, scaledDelta / 50.0, 0);
                    break;
            }
            ViewportController.MouseMove(pos);
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseDown(Point pos, MouseButton changedButton, MouseDevice mouseDevice)
        {
            if (ViewportController == null)
                return;

            if (changedButton == MouseButton.Left)
            {
                ViewportController.MouseDown();
            }
            _UpdateMouseMoveMode(mouseDevice);
        }

        //--------------------------------------------------------------------------------------------------

        public void MouseUp(Point pos, MouseButton changedButton, int clickCount, MouseDevice mouseDevice)
        {
            if (ViewportController == null)
                return;

            if (changedButton == MouseButton.Left)
            {
                bool shiftKey = Keyboard.IsKeyDown(Key.LeftShift) || Keyboard.IsKeyDown(Key.RightShift);
                ViewportController.MouseUp(shiftKey);
            }
            _UpdateMouseMoveMode(mouseDevice);
        }

        //--------------------------------------------------------------------------------------------------

        public void Cancel()
        {
            ViewportController?.MouseMove(new Point(-1,-1), ViewportController.MouseMoveMode.None);
            _CurrentMouseMoveMode = ViewportController.MouseMoveMode.None;
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateMouseMoveMode(MouseDevice mouseDevice)
        {
            if (mouseDevice?.MiddleButton == MouseButtonState.Pressed)
            {
                if (Keyboard.IsKeyDown(Key.LeftCtrl))
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Twisting;
                }
                else if (ViewportController.LockedToPlane)
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Panning;
                }
                else
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Rotating;
                }
            }
            else if (mouseDevice?.RightButton == MouseButtonState.Pressed)
            {
                if (Keyboard.IsKeyDown(Key.LeftCtrl))
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Zooming;
                }
                else
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Panning;
                }
            }
            else 
            {
                _CurrentMouseMoveMode = ViewportController.MouseMoveMode.None;
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}