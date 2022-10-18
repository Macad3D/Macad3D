using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using Macad.Interaction.Visual;

namespace Macad.Interaction.Editors.Shapes;

public class FlangeSheetEditor : Editor<FlangeSheet>
{
    FlangeSheetPropertyPanel _Panel;
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
        
    public override void Start()
    {
        _Panel = PropertyPanel.CreatePanel<FlangeSheetPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
                    
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _UpdateActions();
        _UpdateHints();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);

        _AngleAction?.Stop();
        _AngleAction = null;
        _LengthAction?.Stop();
        _LengthAction = null;
        _RadiusAction?.Stop();
        _RadiusAction = null;
        _StartGapAction?.Stop();
        _StartGapAction = null;
        _EndGapAction?.Stop();
        _EndGapAction = null;
        
        _BendAxisHint.Remove();
        _BendAxisHint = null;

        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.Invalidate();
    }
        
    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateHints();
            if(!_IsMoving)
                _UpdateActions();
            WorkspaceController.Invalidate();
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdateHints()
    {
        if (Entity.ToolSupport == null)
        {
            _BendAxisHint?.Remove();
            return;
        }

        // Bend axis hint
        Ax2 bendAxis = Entity.ToolSupport.BendCenterAxis.Transformed(Entity.GetTransformation());
        _BendAxisHint ??= new HintLine(WorkspaceController, HintStyle.Dashed);
        _BendAxisHint.Set(bendAxis.Location.Translated(bendAxis.Direction.ToVec(Entity.ToolSupport.BendEdgeWidth * 0.6)),
                          bendAxis.Location.Translated(bendAxis.Direction.Reversed().ToVec(Entity.ToolSupport.BendEdgeWidth * 0.6)));
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions
        
    void _UpdateActions()
    {
        _LastSupportData = Entity.ToolSupport;
        if (_LastSupportData == null)
        {
            return;
        }

        // Angle
        if (_AngleAction == null)
        {
            _AngleAction = new(this)
            {
                Color = Colors.ActionRed,
                SectorAutoUpdate = true,
            };
            _AngleAction.Previewed += _AngleAction_Previewed;
            _AngleAction.Finished += _Actions_Finished;
        }
        Ax2 bendAxis = _LastSupportData.BendCenterAxis.Transformed(Entity.GetTransformation());
        _AngleAction.Radius = _LastSupportData.Thickness + Entity.Radius * 1.5;
        _AngleAction.Position = bendAxis;
        _StartAngle = Entity.Angle.ToRad();
        _WasReverse = Entity.Reverse;
        WorkspaceController.StartLiveAction(_AngleAction);

        // Length
        if (_LengthAction == null)
        {
            _LengthAction = new(this)
            {
                Color = Colors.ActionBlue,
                NoResize = true,
                Length = 1.0,
            };
            _LengthAction.Previewed += _LengthAction_Previewed;
            _LengthAction.Finished += _Actions_Finished;
        }
        Ax1 extrudeAxis = _LastSupportData.FlangeExtrudeAxis
                                          .Translated(_LastSupportData.FlangeExtrudeAxis
                                                                      .Direction
                                                                      .ToVec(Entity.Length))
                                          .Transformed(Entity.GetTransformation());
        _LengthAction.Axis = extrudeAxis;
        _StartLength = Entity.Length;
        WorkspaceController.StartLiveAction(_LengthAction);
        
        // Radius
        if (_RadiusAction == null)
        {
            _RadiusAction = new(this)
            {
                Color = Colors.ActionGreen,
                NoResize = true,
                Length = 1.0,
            };
            _RadiusAction.Previewed += _RadiusAction_Previewed;
            _RadiusAction.Finished += _Actions_Finished;
        }

        var radiusAxis = new Ax1(bendAxis.Location, bendAxis.XDirection).Rotated(bendAxis.Axis, Entity.Angle.ToRad() * 0.5);
        if(Entity.Reverse)
            radiusAxis.Reverse();
        radiusAxis.Translate(radiusAxis.Direction.ToVec(Entity.Radius + _LastSupportData.Thickness));
        _RadiusAction.Axis = radiusAxis;
        _StartRadius = Entity.Radius;
        WorkspaceController.StartLiveAction(_RadiusAction);

        // Start Gap
        if (_StartGapAction == null)
        {
            _StartGapAction = new(this)
            {
                Color = Colors.ActionRed,
                NoResize = true,
                Length = 1.0
            };
            _StartGapAction.Previewed += _StartGapAction_Previewed;
            _StartGapAction.Finished += _Actions_Finished;
        }

        Ax1 startGapAxis = new Ax1(_LastSupportData.FlangeExtrudeAxis.Location
                                              .Translated(_LastSupportData.FlangeExtrudeAxis.Direction
                                                                          .ToVec(Entity.Length / 2))
                                              .Translated(_LastSupportData.BendCenterAxis.Direction.Reversed()
                                                                          .ToVec((_LastSupportData.BendEdgeWidth - Entity.StartGap - Entity.EndGap) / 2)),
                              _LastSupportData.BendCenterAxis.Direction.Reversed())
                      .Transformed(Entity.GetTransformation());
        _StartGapAction.Axis = startGapAxis;
        _StartStartGap = Entity.StartGap;
        WorkspaceController.StartLiveAction(_StartGapAction);
        
        // End Gap
        if (_EndGapAction == null)
        {
            _EndGapAction = new(this)
            {
                Color = Colors.ActionRed,
                NoResize = true,
                Length = 1.0
            };
            _EndGapAction.Previewed += _EndGapAction_Previewed;
            _EndGapAction.Finished += _Actions_Finished;
        }

        Ax1 endGapAxis = new Ax1(_LastSupportData.FlangeExtrudeAxis.Location
                                              .Translated(_LastSupportData.FlangeExtrudeAxis.Direction
                                                                          .ToVec(Entity.Length / 2))
                                              .Translated(_LastSupportData.BendCenterAxis.Direction
                                                                          .ToVec((_LastSupportData.BendEdgeWidth - Entity.EndGap - Entity.StartGap) / 2)),
                              _LastSupportData.BendCenterAxis.Direction)
            .Transformed(Entity.GetTransformation());
        _EndGapAction.Axis = endGapAxis;
        _StartEndGap = Entity.EndGap;
        WorkspaceController.StartLiveAction(_EndGapAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _AngleAction_Previewed(LiveAction liveAction)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust angle using gizmo, press 'CTRL' to round to 5°.");
            _LengthAction.Deactivate();
            _RadiusAction.Deactivate();
            _StartGapAction.Deactivate();
            _EndGapAction.Deactivate();
        }

        double newAngle = _StartAngle + _AngleAction.Delta;
        if (_AngleAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newAngle = Maths.RoundToNearest(newAngle, 5.0.ToRad());
        }

        _AngleAction.Delta = newAngle - _StartAngle;

        if(newAngle < 0 == (_WasReverse == Entity.Reverse) )
        {
            Entity.Reverse = !Entity.Reverse;
        }
        Entity.Angle = newAngle.Clamp(-Maths.PI, Maths.PI).Abs().ToDeg();

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Angle: {Entity.Angle.ToInvariantString("F2")} °");
    }
    
    //--------------------------------------------------------------------------------------------------

    void _LengthAction_Previewed(LiveAction liveAction)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust length using gizmo, press 'CTRL' to round to grid stepping.");
            _AngleAction.Deactivate();
            _RadiusAction.Deactivate();
            _StartGapAction.Deactivate();
            _EndGapAction.Deactivate();
        }

        var newLength = _StartLength + _LengthAction.Distance;
        if (_LengthAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newLength = Maths.RoundToNearest(newLength, WorkspaceController.Workspace.GridStep);
        }
        if (newLength < 0.001)
        {
            newLength = 0.001;
        }

        if (Entity.Length != newLength)
        {
            Entity.Length = newLength;
        }

        _LengthAction.Axis = _LastSupportData.FlangeExtrudeAxis
                                             .Translated(_LastSupportData.FlangeExtrudeAxis
                                                                         .Direction
                                                                         .ToVec(Entity.Length))
                                             .Transformed(Entity.GetTransformation());

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Length: {Entity.Length.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------
    
    void _RadiusAction_Previewed(LiveAction liveAction)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust radius using gizmo, press 'CTRL' to round to grid stepping.");
            _AngleAction.Deactivate();
            _LengthAction.Deactivate();
            _StartGapAction.Deactivate();
            _EndGapAction.Deactivate();
        }

        var newRadius = _StartRadius + _RadiusAction.Distance;
        if (_RadiusAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
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

        Ax2 bendAxis = _LastSupportData.BendCenterAxis.Transformed(Entity.GetTransformation());
        var radiusAxis = new Ax1(bendAxis.Location, bendAxis.XDirection).Rotated(bendAxis.Axis, Entity.Angle.ToRad() * 0.5);
        if (Entity.Reverse)
            radiusAxis.Reverse();
        radiusAxis.Translate(radiusAxis.Direction.ToVec(Entity.Radius + _LastSupportData.Thickness));
        _RadiusAction.Axis = radiusAxis;

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Radius: {Entity.Radius.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _StartGapAction_Previewed(LiveAction liveAction)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust gap width using gizmo, press 'CTRL' to round to grid stepping.");
            _AngleAction.Deactivate();
            _RadiusAction.Deactivate();
            _LengthAction.Deactivate();
            _EndGapAction.Deactivate();
        }

        var newGap = _StartStartGap - _StartGapAction.Distance;
        if (_StartGapAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
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

        _StartGapAction.Axis = new Ax1(_LastSupportData.FlangeExtrudeAxis.Location
                                                   .Translated(_LastSupportData.FlangeExtrudeAxis.Direction
                                                                               .ToVec(Entity.Length / 2))
                                                   .Translated(_LastSupportData.BendCenterAxis.Direction.Reversed()
                                                                               .ToVec((_LastSupportData.BendEdgeWidth - _StartStartGap - Entity.EndGap) / 2 - newGap + _StartStartGap)),
                                   _LastSupportData.BendCenterAxis.Direction.Reversed())
                           .Transformed(Entity.GetTransformation());

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Start Gap: {Entity.StartGap.ToInvariantString("F2")} mm");
    }
    
    //--------------------------------------------------------------------------------------------------

    void _EndGapAction_Previewed(LiveAction liveAction)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust gap width using gizmo, press 'CTRL' to round to grid stepping.");
            _AngleAction.Deactivate();
            _RadiusAction.Deactivate();
            _LengthAction.Deactivate();
            _StartGapAction.Deactivate();
        }

        var newGap = _StartEndGap - _EndGapAction.Distance;
        if (_EndGapAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
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

        _EndGapAction.Axis = new Ax1(_LastSupportData.FlangeExtrudeAxis.Location
                                                     .Translated(_LastSupportData.FlangeExtrudeAxis.Direction
                                                                                 .ToVec(Entity.Length / 2))
                                                     .Translated(_LastSupportData.BendCenterAxis.Direction
                                                                                 .ToVec((_LastSupportData.BendEdgeWidth - _StartEndGap - Entity.StartGap) / 2 - newGap + _StartEndGap)),
                                     _LastSupportData.BendCenterAxis.Direction)
                             .Transformed(Entity.GetTransformation());

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"End Gap: {Entity.EndGap.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _Actions_Finished(LiveAction liveAction)
    {
        _IsMoving = false;
        _AngleAction.Deactivate();
        _LengthAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<FlangeSheetEditor>();
    }

}