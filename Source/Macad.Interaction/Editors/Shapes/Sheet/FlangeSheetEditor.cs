using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using Macad.Interaction.Visual;

namespace Macad.Interaction.Editors.Shapes;

public sealed class FlangeSheetEditor : Editor<FlangeSheet>
{
    RotateLiveAction _AngleAction;
    TranslateAxisLiveAction _LengthAction;
    TranslateAxisLiveAction _RadiusAction;
    TranslateAxisLiveAction _StartGapAction;
    TranslateAxisLiveAction _EndGapAction;
    bool _IsMoving;
    double _StartAngle;
    double _StartLength;
    double _StartRadius;
    double _StartStartGap;
    double _StartEndGap;
    FlangeSheet.ToolSupportData _LastSupportData;
    bool _WasReverse;
    LabelHudElement _HudElement;
    HintLine _BendAxisHint;

    //--------------------------------------------------------------------------------------------------
        
    protected override void OnStart()
    {
        CreatePanel<FlangeSheetPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
    }
        
    //--------------------------------------------------------------------------------------------------
    
    protected override void OnToolsStart()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;
        _UpdateHints();
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnToolsStop()
    {
        _HudElement = null;
        _AngleAction = null;
        _LengthAction = null;
        _RadiusAction = null;
        _StartGapAction = null;
        _EndGapAction = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;
        Remove(_BendAxisHint);
        _BendAxisHint = null;
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateHints();
            _UpdateActions();
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdateHints()
    {
        if (Entity.ToolSupport == null)
        {
            Remove(_BendAxisHint);
            return;
        }

        // Bend axis hint
        Ax2 bendAxis = Entity.ToolSupport.BendCenterAxis.Transformed(Entity.GetTransformation());
        _BendAxisHint ??= new HintLine(WorkspaceController, HintStyle.Dashed);
        _BendAxisHint.Set(bendAxis.Location.Translated(bendAxis.Direction.ToVec(Entity.ToolSupport.BendEdgeWidth * 0.6)),
                          bendAxis.Location.Translated(bendAxis.Direction.Reversed().ToVec(Entity.ToolSupport.BendEdgeWidth * 0.6)));
        Add(_BendAxisHint);
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _ShowActions()
    {
        if (Entity.ToolSupport == null)
        {
            return;
        }

        // Angle
        if (_AngleAction == null)
        {
            _AngleAction = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                SectorAutoUpdate = RotateLiveAction.SectorAutoMode.Forward
            };
            _AngleAction.Preview += _AngleAction_Preview;
            _AngleAction.Finished += _RotateActions_Finished;
            StartAction(_AngleAction);
        }

        // Length
        if (_LengthAction == null)
        {
            _LengthAction = new(Entity.Body)
            {
                Color = Colors.ActionBlue,
                NoResize = true,
                Length = 1.0,
            };
            _LengthAction.Preview += _LengthAction_Preview;
            _LengthAction.Finished += _TranslateAxisActions_Finished;
            StartAction(_LengthAction);
        }

        // Radius
        if (_RadiusAction == null)
        {
            _RadiusAction = new()
            {
                Color = Colors.ActionGreen,
                Cursor = Cursors.SetRadius,
                NoResize = true,
                Length = 1.0,
            };
            _RadiusAction.Preview += _RadiusAction_Preview;
            _RadiusAction.Finished += _TranslateAxisActions_Finished;
            StartAction(_RadiusAction);
        }
        
        // Start Gap
        if (_StartGapAction == null)
        {
            _StartGapAction = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                NoResize = true,
                Length = 1.0
            };
            _StartGapAction.Preview += _StartGapAction_Preview;
            _StartGapAction.Finished += _TranslateAxisActions_Finished;
            StartAction(_StartGapAction);
        }

        // End Gap
        if (_EndGapAction == null)
        {
            _EndGapAction = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                NoResize = true,
                Length = 1.0
            };
            _EndGapAction.Preview += _EndGapAction_Preview;
            _EndGapAction.Finished += _TranslateAxisActions_Finished;
            StartAction(_EndGapAction);
        }

        _UpdateActions();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        _LastSupportData = Entity.ToolSupport ?? _LastSupportData;
        if (_LastSupportData == null)
        {
            return;
        }
        Ax2 bendAxis = _LastSupportData.BendCenterAxis.Transformed(Entity.GetTransformation());

        // Angle
        if (_AngleAction != null)
        {
            _AngleAction.Radius = _LastSupportData.Thickness + Entity.Radius * 1.5;
            if (!_IsMoving)
            {
                _AngleAction.Position = bendAxis;
                _AngleAction.SnapAngleOffset = Entity.Angle.ToRad() + (Entity.Reverse ? -Maths.HalfPI : Maths.HalfPI);
                _AngleAction.SnapCenterOffset = new Vec(_LastSupportData.FlangeExtrudeAxis.Location.Transformed(Entity.GetTransformation()), bendAxis.Location);
            }
        }

        // Length
        if (_LengthAction != null)
        {
            Ax1 extrudeAxis = _LastSupportData.FlangeExtrudeAxis
                                              .Translated(_LastSupportData.FlangeExtrudeAxis
                                                                          .Direction
                                                                          .ToVec(Entity.Length))
                                              .Transformed(Entity.GetTransformation());
            _LengthAction.Axis = extrudeAxis;
        }
        
        // Radius
        if (_RadiusAction != null)
        {
            var radiusAxis = new Ax1(bendAxis.Location, bendAxis.XDirection).Rotated(bendAxis.Axis, Entity.Angle.ToRad() * 0.5);
            if (Entity.Reverse)
                radiusAxis.Reverse();
            radiusAxis.Translate(radiusAxis.Direction.ToVec(Entity.Radius + _LastSupportData.Thickness));
            _RadiusAction.Axis = radiusAxis;
        }

        // Start Gap
        if (_StartGapAction != null)
        {
            Ax1 startGapAxis = new Ax1(_LastSupportData.FlangeExtrudeAxis.Location
                                                       .Translated(_LastSupportData.FlangeExtrudeAxis.Direction
                                                                                   .ToVec(Entity.Length / 2))
                                                       .Translated(_LastSupportData.BendCenterAxis.Direction.Reversed()
                                                                                   .ToVec((_LastSupportData.BendEdgeWidth - Entity.StartGap - Entity.EndGap) / 2)),
                                       _LastSupportData.BendCenterAxis.Direction.Reversed())
                .Transformed(Entity.GetTransformation());
            _StartGapAction.Axis = startGapAxis;
        }

        // End Gap
        if (_EndGapAction != null)
        {
            Ax1 endGapAxis = new Ax1(_LastSupportData.FlangeExtrudeAxis.Location
                                                     .Translated(_LastSupportData.FlangeExtrudeAxis.Direction
                                                                                 .ToVec(Entity.Length / 2))
                                                     .Translated(_LastSupportData.BendCenterAxis.Direction
                                                                                 .ToVec((_LastSupportData.BendEdgeWidth - Entity.EndGap - Entity.StartGap) / 2)),
                                     _LastSupportData.BendCenterAxis.Direction)
                .Transformed(Entity.GetTransformation());
            _EndGapAction.Axis = endGapAxis;
        }

        if (!_IsMoving)
        {
            _StartAngle = Entity.Angle.ToRad();
            _WasReverse = Entity.Reverse;
            _StartLength = Entity.Length;
            _StartRadius = Entity.Radius;
            _StartStartGap = Entity.StartGap;
            _StartEndGap = Entity.EndGap;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Preview(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            WorkspaceController.HudManager?.SetHintMessage(this, "__Adjust angle__ using gizmo, press `k:Ctrl` to round to 5°.");
            StopAction(_LengthAction);
            _LengthAction = null;
            StopAction(_RadiusAction);
            _RadiusAction = null;
            StopAction(_StartGapAction);
            _StartGapAction = null;
            StopAction(_EndGapAction);
            _EndGapAction = null;
        }

        double newAngle = _StartAngle + args.DeltaSum;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newAngle = Maths.RoundToNearest(newAngle, 5.0.ToRad());
        }

        args.DeltaSumOverride = newAngle - _StartAngle;

        if(newAngle < 0 == (_WasReverse == Entity.Reverse) )
        {
            Entity.Reverse = !Entity.Reverse;
        }
        Entity.Angle = newAngle.Clamp(-Maths.PI, Maths.PI).Abs().ToDeg();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Angle: {Entity.Angle.ToInvariantString("F2")} °");
    }
    
    //--------------------------------------------------------------------------------------------------

    void _LengthAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage("__Adjust length__ using gizmo, press `k:Ctrl` to round to grid stepping.");
            StopAction(_AngleAction);
            _AngleAction = null;
            StopAction(_RadiusAction);
            _RadiusAction = null;
            StopAction(_StartGapAction);
            _StartGapAction = null;
            StopAction(_EndGapAction);
            _EndGapAction = null;
        }

        var newLength = _StartLength + args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newLength = Maths.RoundToNearest(newLength, WorkspaceController.Workspace.GridStep);
        }
        if (newLength < 0.0)
        {
            newLength = 0.0;
        }

        if (Entity.Length != newLength)
        {
            Entity.Length = newLength;
        }

        _UpdateActions();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Length: {Entity.Length.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RadiusAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage("__Adjust radius__ using gizmo, press `k:Ctrl` to round to grid stepping.");
            StopAction(_AngleAction);
            _AngleAction = null;
            StopAction(_LengthAction);
            _LengthAction = null;
            StopAction(_StartGapAction);
            _StartGapAction = null;
            StopAction(_EndGapAction);
            _EndGapAction = null;
        }

        var newRadius = _StartRadius + args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newRadius = Maths.RoundToNearest(newRadius, WorkspaceController.Workspace.GridStep);
        }
        if (newRadius < 0.001)
        {
            newRadius = 0.001;
        }

        if (Entity.Radius != newRadius)
        {
            Entity.Radius = newRadius;
        }

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Radius: {Entity.Radius.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _StartGapAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage("__Adjust gap width__ using gizmo, press `k:Ctrl` to round to grid stepping.");
            StopAction(_AngleAction);
            _AngleAction = null;
            StopAction(_LengthAction);
            _LengthAction = null;
            StopAction(_RadiusAction);
            _RadiusAction = null;
            StopAction(_EndGapAction);
            _EndGapAction = null;
        }

        var newGap = _StartStartGap - args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newGap = Maths.RoundToNearest(newGap, WorkspaceController.Workspace.GridStep);
        }
        if (newGap < 0)
        {
            newGap = 0;
        }
        if (newGap >= _LastSupportData.BendEdgeWidth - Entity.EndGap)
        {
            newGap = _LastSupportData.BendEdgeWidth - Entity.EndGap - 0.001;
        }

        if (Entity.StartGap != newGap)
        {
            Entity.StartGap = newGap;
        }

        _UpdateActions();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Start Gap: {Entity.StartGap.ToInvariantString("F2")} mm");
    }
    
    //--------------------------------------------------------------------------------------------------

    void _EndGapAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage( "__Adjust gap width__ using gizmo, press `k:Ctrl` to round to grid stepping.");
            StopAction(_AngleAction);
            _AngleAction = null;
            StopAction(_LengthAction);
            _LengthAction = null;
            StopAction(_RadiusAction);
            _RadiusAction = null;
            StopAction(_StartGapAction);
            _StartGapAction = null;
        }

        var newGap = _StartEndGap - args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newGap = Maths.RoundToNearest(newGap, WorkspaceController.Workspace.GridStep);
        }
        if (newGap < 0)
        {
            newGap = 0;
        }
        if (newGap >= _LastSupportData.BendEdgeWidth - Entity.StartGap)
        {
            newGap = _LastSupportData.BendEdgeWidth - Entity.StartGap - 0.001;
        }

        if (Entity.EndGap != newGap)
        {
            Entity.EndGap = newGap;
        }

        _UpdateActions();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"End Gap: {Entity.EndGap.ToInvariantString("F2")} mm");
    }
    
    //--------------------------------------------------------------------------------------------------
    
    void _Actions_Finished()
    {
        _IsMoving = false;
        CommitChanges();
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateActions_Finished(RotateLiveAction sender, RotateLiveAction.EventArgs args)
    {
        _Actions_Finished();
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAxisActions_Finished(TranslateAxisLiveAction translateAxisLiveAction, TranslateAxisLiveAction.EventArgs eventArgs)
    {
        _Actions_Finished();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<FlangeSheetEditor>();
    }

}