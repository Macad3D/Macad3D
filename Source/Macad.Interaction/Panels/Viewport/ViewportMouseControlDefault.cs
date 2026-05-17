using System.Windows;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Interaction.Panels;

internal class ViewportMouseControlDefault : IViewportMouseControl
{
    ViewportController _CurrentViewport;
    ViewportController.MouseMoveMode _CurrentMouseMoveMode;
    Point _MouseDownPos;
    bool _LeftButtonDown;

    //--------------------------------------------------------------------------------------------------

    public void MouseMove(ViewportController viewport, Point pos, MouseButtons pressedButtons, ModifierKeys modifierKeys)
    {
        if (_CurrentViewport != null && pressedButtons != MouseButtons.None)
        {
            // Transform position to current viewport, so that any tool and viewport movement is consistent when moving across viewports
            var windowPos = viewport?.WorkspaceController.ViewportLayoutManager.TransformFromViewport(pos, viewport) ?? pos;
            var currentVpPos = _CurrentViewport.WorkspaceController.ViewportLayoutManager.TransformToViewport(windowPos, _CurrentViewport);

            if (_CurrentMouseMoveMode == ViewportController.MouseMoveMode.None)
            {
                if (_CurrentViewport?.IsInRubberbandSelection ?? false)
                {
                    // Transform position to current viewport, such that the selection is clamped on viewport border
                    currentVpPos = _CurrentViewport.WorkspaceController.ViewportLayoutManager.ClampToViewport(currentVpPos, _CurrentViewport);
                }
                else
                {
                    if (_LeftButtonDown
                        && _CurrentViewport != null
                        && (pos.X - _MouseDownPos.X).Abs() + (pos.Y - _MouseDownPos.Y).Abs() > 10
                        && _CurrentViewport.WorkspaceController.IsSelecting)
                    {
                        currentVpPos = _CurrentViewport.WorkspaceController.ViewportLayoutManager.ClampToViewport(currentVpPos, _CurrentViewport);
                        _CurrentViewport.StartRubberbandSelection(
                            InteractiveContext.Current.EditorState.RubberbandSelectionMode,
                            InteractiveContext.Current.EditorState.RubberbandIncludeTouched,
                            _MouseDownPos);
                    }
                }
            }

            _UpdateMouseMoveMode(_CurrentViewport, pressedButtons, modifierKeys);
            _CurrentViewport?.MouseMove(currentVpPos, modifierKeys, _CurrentMouseMoveMode);
        }
        else
        {
            viewport?.MouseMove(pos, modifierKeys, _CurrentMouseMoveMode);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseWheel(ViewportController viewport, Point pos, MouseWheel wheel, int delta, MouseButtons pressedButtons, ModifierKeys modifierKeys)
    {
        if (viewport == null || delta == 0)
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
                viewport.Zoom(pos, scaledDelta / 200.0);
                break;
            case Panels.MouseWheel.Horizontal:
                viewport.Rotate(scaledDelta / -50.0, 0, 0);
                break;
        }
        viewport.MouseMove(pos, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseDown(ViewportController viewport, Point pos, MouseButtons changedButtons, int clickCount, MouseButtons pressedButtons, ModifierKeys modifierKeys)
    {
        if (viewport == null)
            return;

        if (changedButtons.HasFlag(MouseButtons.Left)
            && _CurrentMouseMoveMode == ViewportController.MouseMoveMode.None)
        {
            viewport.WorkspaceController.ViewportController = viewport;
            if (clickCount == 2)
            {
                if(WorkspaceCommands.StartEditing.CanExecute())
                    WorkspaceCommands.StartEditing.Execute();
            }
            else
            {
                viewport.MouseDown(modifierKeys);
                _LeftButtonDown = true;
            }
        }

        _MouseDownPos = pos;
        _CurrentViewport = viewport;
        _UpdateMouseMoveMode(viewport, pressedButtons, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseUp(ViewportController viewport, Point pos, MouseButtons changedButtons, MouseButtons pressedButtons, ModifierKeys modifierKeys)
    {
        viewport = _CurrentViewport ?? viewport;
        if (viewport == null)
            return;

        if (changedButtons.HasFlag(MouseButtons.Left))
        {
            viewport.MouseUp(modifierKeys);
            _LeftButtonDown = false;
        }
        _UpdateMouseMoveMode(viewport, pressedButtons, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void Cancel()
    {
        _CurrentViewport?.MouseMove(new Point(-1,-1));
        _CurrentMouseMoveMode = ViewportController.MouseMoveMode.None;
        _CurrentViewport = null;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateMouseMoveMode(ViewportController viewport, MouseButtons pressedButtons, ModifierKeys modifierKeys)
    {
        _CurrentMouseMoveMode = ViewportController.MouseMoveMode.None;

        if (pressedButtons.HasFlag(MouseButtons.Left) && (viewport?.IsInRubberbandSelection ?? false))
        {
            // Keep current viewport for rubberband selection, but do not change the move mode
            _CurrentMouseMoveMode = ViewportController.MouseMoveMode.None;
        }
        else if (_CurrentViewport != null)
        {
            if (pressedButtons.HasFlag(MouseButtons.Middle))
            {
                if (modifierKeys.HasFlag(ModifierKeys.Control))
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Twisting;
                }
                else if (viewport.LockedToPlane)
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Panning;
                }
                else
                {
                    _CurrentMouseMoveMode = ViewportController.MouseMoveMode.Rotating;
                }
            }
            else if (pressedButtons.HasFlag(MouseButtons.Right))
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
        }
    }

    //--------------------------------------------------------------------------------------------------

}