using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class ExtrudeEditor : Editor<Extrude>
{
    ExtrudePropertyPanel _Panel;
    TranslateAxisLiveAction _TranslateAction;
    LabelHudElement _HudElement;
    bool _IsMoving;
    double _StartDepth;

    //--------------------------------------------------------------------------------------------------

    public override void Start()
    {
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _Panel = PropertyPanel.CreatePanel<ExtrudePropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
       
        _UpdateActions();
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);

        _TranslateAction?.Stop();
        _TranslateAction = null;
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
            if (!_IsMoving)
            {
                _TranslateAction?.Deactivate();
                _UpdateActions();
            }
            else if (_TranslateAction != null && Entity.GetFinalExtrusionAxis(out Ax1 axis))
            {
                if (Entity.IsSketchBased && Math.Sign(_StartDepth) != Math.Sign(Entity.Depth))
                    axis.Reverse();
                _TranslateAction.Axis = axis.Transformed(Entity.Body.GetTransformation());
            }

            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ExtrudeEditor>();
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _UpdateActions()
    {
        if (!Entity.GetFinalExtrusionAxis(out Ax1 axis))
            return;
        axis.Transform(Entity.Body.GetTransformation());

        if (_TranslateAction == null)
        {
            _TranslateAction = new(this)
            {
                Color = Colors.ActionBlue,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _TranslateAction.Previewed += _TranslateActionPreviewed;
            _TranslateAction.Finished += _TranslateActionFinished;
        }
        _TranslateAction.Axis = axis;
        _StartDepth = Entity.Depth;
        WorkspaceController.StartLiveAction(_TranslateAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionPreviewed(LiveAction liveAction)
    {
        _IsMoving = true;

        double newDepth = Entity.Depth;
        if (Entity.IsSketchBased)
        {
            WorkspaceController.HudManager?.SetHintMessage(this, "Scale extrusion depth using gizmo, press 'CTRL' to round to grid stepping, press 'SHIFT' to extrude symmetric to both sides.");

            bool shallSymmetric = _TranslateAction.LastMouseEventData.ModifierKeys.Has(ModifierKeys.Shift);
            if (shallSymmetric != Entity.Symmetric)
            {
                Entity.Symmetric = shallSymmetric;
                _StartDepth = shallSymmetric
                                  ? _StartDepth * 2
                                  : _StartDepth * 0.5;
            }
            newDepth = _StartDepth + _TranslateAction.Distance * (_StartDepth < 0 ? -1.0 : 1.0);
        }
        else
        {
            WorkspaceController.HudManager?.SetHintMessage(this, "Scale extrusion depth using gizmo, press 'CTRL' to round to grid stepping.");
            newDepth = _StartDepth + _TranslateAction.Distance;
        }

        if (_TranslateAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDepth = Maths.RoundToNearest(newDepth, WorkspaceController.Workspace.GridStep);
        }

        Entity.Depth = newDepth;
        if (Entity.GetFinalExtrusionAxis(out Ax1 axis))
        {
            if (Entity.IsSketchBased && Math.Sign(_StartDepth) != Math.Sign(newDepth))
                axis.Reverse();
            _TranslateAction.Axis = axis.Transformed(Entity.Body.GetTransformation());
        }

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Depth: {Entity.Depth.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(LiveAction liveAction)
    {
        _IsMoving = false;
        _TranslateAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _UpdateActions();
    }
    
    //--------------------------------------------------------------------------------------------------


    #endregion
}