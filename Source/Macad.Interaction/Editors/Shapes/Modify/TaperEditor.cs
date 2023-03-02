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

        _ShowActions();
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
                    
        _HideActions();
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateActions();
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

    void _ShowActions()
    {
        if (!Entity.GetReferenceAxis(out Ax2 axis))
        {
            _HideActions();
            return;
        }
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

        _UpdateActions();

        WorkspaceController.StartLiveAction(_OffsetAction);
        WorkspaceController.StartLiveAction(_AngleAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _HideActions()
    {
        _OffsetAction?.Deactivate();
        _OffsetAction = null;
        _AngleAction?.Deactivate();
        _AngleAction = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (!Entity.GetReferenceAxis(out Ax2 axis))
        {
            _HideActions();
            return;
        }
        axis.Transform(Entity.Body.GetTransformation());

        if (_OffsetAction != null)
        {
            _OffsetAction.Axis = Entity.Angle < 0.0 ? axis.Axis.Reversed() : axis.Axis;
            if (!_IsMovingOffset)
            {
                _StartOffset = Entity.Offset;
            }
        }

        if (_AngleAction != null)
        {
            _AngleAction.Position = new Ax2(axis.Location, axis.YDirection.Reversed(), axis.Direction);
            _AngleAction.Radius = 1.0;
            _AngleAction.VisualLimits = (Entity.Angle.ToRad(), -Maths.PI);
            if (!_IsMovingAngle)
            {
                _AngleAction.VisualSector = (0, 0);
                _StartAngle = Entity.Angle.ToRad();
            }
            else
            {
                _AngleAction.VisualSector = (Entity.Angle.ToRad(), _StartAngle);
            }
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Previewed(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        if (!_IsMovingAngle)
        {
            _IsMovingAngle = true;
            _OffsetAction.Deactivate();
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust angle using gizmo, press 'CTRL' to round to 5°.");
        }

        double newAngle = _StartAngle + args.DeltaSum;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newAngle = Maths.RoundToNearest(newAngle, 5.0.ToRad());
        }

        if (Entity.Angle == newAngle.ToDeg())
        {
            args.DeltaSumOverride = newAngle - _StartAngle;
        }
        else
        {
            Entity.Angle = newAngle.ToDeg();
        }

        _UpdateActions();

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Angle: {Entity.Angle.ToInvariantString("F2")} °");
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Finished(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _IsMovingAngle = false;
        _AngleAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Previewed(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMovingOffset)
        {
            _IsMovingOffset = true;
            _AngleAction.Deactivate();
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust offset using gizmo, press 'CTRL' to round to grid stepping.");
        }

        double newOffset = _StartOffset + args.Distance * Math.Sign(Entity.Angle);

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
        }

        if (newOffset < 0)
        {
            newOffset = 0;
        }
        Entity.Offset = newOffset;
        
        _UpdateActions();
        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Offset: {Entity.Offset.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Finished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMovingOffset = false;
        _OffsetAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _ShowActions();
    }
    
    //--------------------------------------------------------------------------------------------------


    #endregion
}