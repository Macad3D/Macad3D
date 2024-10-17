using System;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using Macad.Core;

namespace Macad.Interaction.Editors.Shapes;

public sealed class TaperEditor : Editor<Taper>
{
    TranslateAxisLiveAction _OffsetAction;
    RotateLiveAction _AngleAction;
    LabelHudElement _HudElement;
    bool _IsMovingOffset;
    double _StartOffset;
    bool _IsMovingAngle;
    double _StartAngle;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<TaperPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }
    
    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        _HudElement = null;
        _OffsetAction = null;
        _AngleAction = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
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

    #region Live Actions

    void _ShowActions()
    {
        if (Entity?.Body == null)
        {
            StopAllActions();
            _OffsetAction = null;
            return;
        }

        if (_OffsetAction == null)
        {
            _OffsetAction = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _OffsetAction.Preview += _OffsetAction_Preview;
            _OffsetAction.Finished += _OffsetAction_Finished;
            StartAction(_OffsetAction);
        }

        if (_AngleAction == null)
        {
            _AngleAction = new(Entity.Body)
            {
                Color = Colors.ActionGreen,
                NoResize = true,
                ShowKnob = true
            };
            _AngleAction.Preview += _AngleAction_Preview;
            _AngleAction.Finished += _AngleAction_Finished;
            StartAction(_AngleAction);
        }
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (!Entity.GetReferenceAxis(out Ax2 axis))
        {
            RemoveHudElements();
            _HudElement = null;
            _OffsetAction = null;
            _AngleAction = null;
            return;
        }
        axis.Transform(Entity.Body.GetTransformation());

        // Offset
        if (_OffsetAction != null)
        {
            _OffsetAction.Axis = Entity.Angle < 0.0 ? axis.Axis.Reversed() : axis.Axis;
            if (!_IsMovingOffset)
            {
                _StartOffset = Entity.Offset;
            }
        }

        // Angle
        if (_AngleAction != null)
        {
            _AngleAction.Position = new Ax2(axis.Location, axis.YDirection.Reversed(), axis.Direction);
            _AngleAction.Radius = 1.0;
            _AngleAction.VisualLimits = (Entity.Angle.ToRad(), -Maths.PI);
            if (!_IsMovingAngle)
            {
                _AngleAction.VisualSector = (0, 0);
                _StartAngle = Entity.Angle.ToRad();
                _AngleAction.SnapAngleOffset = _StartAngle;
            }
            else
            {
                _AngleAction.VisualSector = (Entity.Angle.ToRad(), _StartAngle);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        if (!_IsMovingAngle)
        {
            _IsMovingAngle = true;
            StopAction(_OffsetAction);
            _OffsetAction = null;
            SetHintMessage("__Adjust angle__ using gizmo, press `k:Ctrl` to round to 5°.");
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

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Angle: {Entity.Angle.ToInvariantString("F2")} °");
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Finished(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _ActionFinished();
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMovingOffset)
        {
            _IsMovingOffset = true;
            StopAction(_AngleAction);
            _AngleAction = null;
            SetHintMessage("__Adjust offset__ using gizmo, press `k:Ctrl` to round to grid stepping.");
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
        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Offset: {Entity.Offset.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Finished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _ActionFinished();
    }

    //--------------------------------------------------------------------------------------------------

    void _ActionFinished()
    {
        CommitChanges();
        _IsMovingOffset = false;
        _IsMovingAngle = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        _ShowActions();
    }
    
    //--------------------------------------------------------------------------------------------------
    
    #endregion
    
    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<TaperEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}