using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed class ExtrudeEditor : Editor<Extrude>
{
    TranslateAxisLiveAction[] _TranslateActions;
    LabelHudElement _HudElement;
    bool _IsMoving;
    double _StartDepth;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<ExtrudePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
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
        _TranslateActions = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            _UpdateActions();
            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _ShowActions()
    {
        //--------------------------------------------------------------------------------------------------

        if (Entity?.Body == null)
        {
            StopAllActions();
            _TranslateActions = null;
            return;
        }

        _TranslateActions ??= new[]
        {
            _CreateAction(),
            Entity.Symmetric ? _CreateAction() : null
        };

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    TranslateAxisLiveAction _CreateAction()
    {
        TranslateAxisLiveAction action = new(Entity.Body)
        {
            Color = Colors.ActionBlue,
            Cursor = Cursors.SetHeight,
            NoResize = true,
            Length = 1.0,
        };
        action.Preview += _TranslateAction_Preview;
        action.Finished += _TranslateActionFinished;
        StartAction(action);
        return action;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_TranslateActions == null
            || !Entity.GetFinalExtrusionAxis(out Ax1 axis))
        {
            StopAllActions();
            _TranslateActions = null;
            return;
        }
        axis.Transform(Entity.Body.GetTransformation());
        
        if (!_IsMoving)
        {
            _StartDepth = Entity.Depth;
        } 
        else
        {
            if (Entity.IsSketchBased && Math.Sign(_StartDepth) != Math.Sign(Entity.Depth))
                axis.Reverse();
        }
        _TranslateActions[0].Axis = axis;
        if (Entity.Symmetric)
        {
            _TranslateActions[1] ??= _CreateAction();
            _TranslateActions[1].Axis = axis.Reversed().Translated(axis.Direction.Reversed().ToVec(Entity.Depth));
        }
        else
        {
            if (_TranslateActions[1] != null)
            {
                StopAction(_TranslateActions[1]);
                _TranslateActions[1] = null;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = true;

        double newDepth;
        if (Entity.IsSketchBased)
        {
            SetHintMessage("__Scale extrusion depth__ using gizmo, press `k:Ctrl` to round to grid stepping.");

            newDepth = _StartDepth + args.Distance * (Entity.Symmetric ? 2.0 : 1.0) * (_StartDepth < 0 ? -1.0 : 1.0);
        }
        else
        {
            SetHintMessage("__Scale extrusion depth__ using gizmo, press `k:Ctrl` to round to grid stepping.");
            newDepth = _StartDepth + args.Distance;
        }

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDepth = Maths.RoundToNearest(newDepth, WorkspaceController.Workspace.GridStep);
        }

        Entity.Depth = newDepth;

        _UpdateActions();
        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Depth: {Entity.Depth.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        CommitChanges();
        _UpdateActions();
    }
    
    //--------------------------------------------------------------------------------------------------
    
    #endregion
    
    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ExtrudeEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}