using System;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using Macad.Core;

namespace Macad.Interaction.Editors.Shapes;

public class TaperEditor : Editor<Taper>
{
    TaperPropertyPanel _Panel;
    TranslateAxisLiveAction _OffsetAction;
    RotateLiveAction _AngleAction;
    LabelHudElement _HudElement;
    bool _IsMovingOffset;
    double _StartOffset;
    bool _IsMovingAngle;
    double _StartAngle;

    //--------------------------------------------------------------------------------------------------

    public override void Start()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _Panel = PropertyPanel.CreatePanel<TaperPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

        _UpdateActions();
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
                    
        _OffsetAction?.Stop();
        _OffsetAction = null;
        _AngleAction?.Stop();
        _AngleAction = null;
        WorkspaceController.Invalidate();
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            if (!_IsMovingOffset && !_IsMovingAngle)
            {
                _OffsetAction?.Deactivate();
                _AngleAction?.Deactivate();
                _UpdateActions();
            }
            else if (Entity.GetReferenceAxis(out Ax2 axis))
            {
                axis.Transform(Entity.Body.GetTransformation());
                if (_IsMovingOffset)
                {
                    _OffsetAction.Axis = Entity.Angle < 0.0 ? axis.Axis.Reversed() : axis.Axis;
                }
            }

            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<TaperEditor>();
    }

    //--------------------------------------------------------------------------------------------------
    
    #region Live Actions

    void _UpdateActions()
    {
        if (!Entity.GetReferenceAxis(out Ax2 axis))
            return;
        axis.Transform(Entity.Body.GetTransformation());

        if (_OffsetAction == null)
        {
            _OffsetAction = new(this)
            {
                Color = Colors.ActionRed,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _OffsetAction.Previewed += _OffsetAction_Previewed;
            _OffsetAction.Finished += _OffsetAction_Finished;
        }

        _OffsetAction.Axis = Entity.Angle < 0.0 ? axis.Axis.Reversed() : axis.Axis;
        _StartOffset = Entity.Offset;
        WorkspaceController.StartLiveAction(_OffsetAction);

        if (_AngleAction == null)
        {
            _AngleAction = new(this)
            {
                Color = Colors.ActionGreen,
                NoResize = true,
                ShowKnob = true
            };
            _AngleAction.Previewed += _AngleAction_Previewed;
            _AngleAction.Finished += _AngleAction_Finished;
        }

        _AngleAction.Radius = 1.0;
        _AngleAction.Position = new Ax2(axis.Location, axis.YDirection.Reversed(), axis.Direction);
        _AngleAction.VisualLimits = (Entity.Angle.ToRad(), -Maths.PI);
        _AngleAction.VisualSector = (0, 0);
        _StartAngle = Entity.Angle.ToRad();
        WorkspaceController.StartLiveAction(_AngleAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Previewed(LiveAction liveaction)
    {
        if (!_IsMovingAngle)
        {
            _IsMovingAngle = true;
            _OffsetAction.Deactivate();
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust angle using gizmo, press 'CTRL' to round to 5°.");
        }

        double newAngle = _StartAngle + _AngleAction.Delta;
        if (liveaction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newAngle = Maths.RoundToNearest(newAngle, 5.0.ToRad());
        }

        if (Entity.Angle == newAngle.ToDeg())
        {
            _AngleAction.Delta = newAngle - _StartAngle;
        }
        else
        {
            Entity.Angle = newAngle.ToDeg();
        }

        if (Entity.GetReferenceAxis(out Ax2 axis))
        {
            axis.Transform(Entity.Body.GetTransformation());
            _AngleAction.Position = new Ax2(axis.Location, axis.YDirection.Reversed(), axis.Direction);
            _AngleAction.VisualLimits = (Entity.Angle.ToRad(), -Maths.PI);
            _AngleAction.VisualSector = (Entity.Angle.ToRad(), _StartAngle);
        }

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Angle: {Entity.Angle.ToInvariantString("F2")} °");
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Finished(LiveAction liveaction)
    {
        _IsMovingAngle = false;
        _AngleAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Previewed(LiveAction liveAction)
    {
        if (!_IsMovingOffset)
        {
            _IsMovingOffset = true;
            _AngleAction.Deactivate();
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust offset using gizmo, press 'CTRL' to round to grid stepping.");
        }

        double newOffset = _StartOffset + _OffsetAction.Distance * Math.Sign(Entity.Angle);

        if (_OffsetAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
        }

        if (newOffset < 0)
        {
            newOffset = 0;
        }

        if (Entity.Offset == newOffset)
        {
            if (Entity.GetReferenceAxis(out Ax2 axis))
            {
                _OffsetAction.Axis = axis.Axis.Transformed(Entity.Body.GetTransformation());
            }
        }
        else
        {
            Entity.Offset = newOffset;
        }

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Offset: {Entity.Offset.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Finished(LiveAction liveAction)
    {
        _IsMovingOffset = false;
        _OffsetAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }
    
    //--------------------------------------------------------------------------------------------------


    #endregion
}