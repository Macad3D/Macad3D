using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;

namespace Macad.Interaction.Editors.Shapes;

public class FlangeSheetEditor : Editor<FlangeSheet>
{
    FlangeSheetPropertyPanel _Panel;
    RotateLiveAction _AngleAction;
    bool _IsMoving;
    double _StartAngle;
    bool _WasReverse;
    LabelHudElement _HudElement;

    //--------------------------------------------------------------------------------------------------
        
    public override void Start()
    {
        _Panel = PropertyPanel.CreatePanel<FlangeSheetPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
                    
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _UpdateActions();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);

        _AngleAction?.Stop();
        _AngleAction = null;

        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.Invalidate();
    }
        
    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity && !_IsMoving)
        {
            _AngleAction?.Deactivate();
            _UpdateActions();
            WorkspaceController.Invalidate();
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    #region Live Actions
        
    void _UpdateActions()
    {
        Ax2? localAxis = Entity.ToolAxis;
        if (localAxis == null)
        {
            return;
        }

        Ax2 axis = localAxis.Value.Transformed(Entity.GetTransformation());

        if (_AngleAction == null)
        {
            _AngleAction = new(this)
            {
                Color = Colors.ActionRed,
                SectorAutoUpdate = true,
            };
            _AngleAction.Previewed += _AngleActionPreviewed;
            _AngleAction.Finished += _AngleActionFinished;
        }
        _AngleAction.Radius = Entity.Thickness + Entity.Radius * 1.5;
        _AngleAction.Position = axis;
        _StartAngle = Entity.Angle.ToRad();
        _WasReverse = Entity.Reverse;

        WorkspaceController.StartLiveAction(_AngleAction);
    }

    //--------------------------------------------------------------------------------------------------
    
    void _AngleActionPreviewed(LiveAction liveAction)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
        //    _IsMovingAngle = true;
        //    _OffsetAction.Deactivate();
            WorkspaceController.HudManager?.SetHintMessage(this, "Adjust angle using gizmo, press 'CTRL' to round to 5°.");
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

    void _AngleActionFinished(LiveAction liveAction)
    {
        _IsMoving = false;
        _AngleAction.Deactivate();
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