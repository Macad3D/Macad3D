using System.Windows;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Interaction.Panels;

public class ViewportMouseControlDefault : IViewportMouseControl
{
    public ViewportController ViewportController { get; set; } 

    //--------------------------------------------------------------------------------------------------

    ViewportController.MouseMoveMode _CurrentMouseMoveMode;
    Point _MouseDownPos;

    //--------------------------------------------------------------------------------------------------

    public void MouseMove(Point pos, MouseDevice mouseDevice, ModifierKeys modifierKeys)
    {
        if (ViewportController == null)
            return;

        if(_CurrentMouseMoveMode != ViewportController.MouseMoveMode.None)
        {
            ViewportController.MouseMove(pos, Keyboard.Modifiers, _CurrentMouseMoveMode);
        }
        else
        {
            if (mouseDevice?.LeftButton == MouseButtonState.Pressed
                && (pos.X - _MouseDownPos.X).Abs() + (pos.Y - _MouseDownPos.Y).Abs() > 10
                && !ViewportController.IsInRubberbandSelection
                && ViewportController.WorkspaceController.IsSelecting)
            {
                ViewportController.StartRubberbandSelection(
                    InteractiveContext.Current.EditorState.RubberbandSelectionMode,
                    InteractiveContext.Current.EditorState.RubberbandIncludeTouched,
                    _MouseDownPos);
            }

            ViewportController.MouseMove(pos, modifierKeys);
        }
        _UpdateMouseMoveMode(mouseDevice, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseWheel(Point pos, MouseWheel wheel, int delta, InputDevice device, ModifierKeys modifierKeys)
    {
        if (ViewportController == null || delta == 0)
            return;

        double scaledDelta = delta;
        if (modifierKeys.HasFlag(ModifierKeys.Control))
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
                ViewportController.Rotate(scaledDelta / -50.0, 0, 0);
                break;
        }
        ViewportController.MouseMove(pos, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseDown(Point pos, MouseButton changedButton, int clickCount, MouseDevice mouseDevice, ModifierKeys modifierKeys)
    {
        if (ViewportController == null)
            return;

        if (changedButton == MouseButton.Left)
        {
            if (clickCount == 2)
            {
                if(WorkspaceCommands.StartEditing.CanExecute())
                    WorkspaceCommands.StartEditing.Execute();
            }
            else
            {
                ViewportController.MouseDown(modifierKeys);
            }
        }

        _MouseDownPos = pos;
        _UpdateMouseMoveMode(mouseDevice, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseUp(Point pos, MouseButton changedButton, MouseDevice mouseDevice, ModifierKeys modifierKeys)
    {
        if (ViewportController == null)
            return;

        if (changedButton == MouseButton.Left)
        {
            ViewportController.MouseUp(modifierKeys);
        }
        _UpdateMouseMoveMode(mouseDevice, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void Cancel()
    {
        ViewportController?.MouseMove(new Point(-1,-1));
        _CurrentMouseMoveMode = ViewportController.MouseMoveMode.None;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateMouseMoveMode(MouseDevice mouseDevice, ModifierKeys modifierKeys)
    {
        if (mouseDevice?.MiddleButton == MouseButtonState.Pressed)
        {
            if (modifierKeys.HasFlag(ModifierKeys.Control))
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
            if (modifierKeys.HasFlag(ModifierKeys.Control))
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