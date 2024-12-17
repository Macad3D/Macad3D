using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed class RevolveEditor : Editor<Revolve>
{
    HintLine _OriginHint;
    HintLine _AxisHint;
    TranslateAxisLiveAction _OffsetXAction;
    TranslateAxisLiveAction _OffsetYAction;
    TranslateAxisLiveAction _OffsetZAction;
    LabelHudElement _HudElement;
    Pnt _OffsetActionPivot;
    Vec _StartOffset;
    bool _IsMoving;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<RevolvePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        base.OnStop();
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
        Shape.ShapeChanged -= _Shape_ShapeChanged;
        Remove(_OriginHint);
        _OriginHint = null;
        Remove(_AxisHint);
        _AxisHint = null;
        _OffsetXAction = null;
        _OffsetYAction = null;
        _OffsetZAction = null;
        _HudElement = null;
        base.OnToolsStop();
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

    #region Hints

    void _UpdateHints()
    {
        var computeAxis = Entity.ComputeAxis();
        if (computeAxis == null)
        {
            Remove(_AxisHint);
            _AxisHint = null;
            Remove(_OriginHint);
            _OriginHint = null;
            return;
        }

        if (_AxisHint == null)
        {
            _AxisHint = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
            Add(_AxisHint);
            _OriginHint = new HintLine(WorkspaceController, HintStyle.Dashed);
            Add(_OriginHint);
        }

        var bbox = Entity.GetBRep()?.BoundingBox();
        if (bbox != null)
        {
            var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Coord.Multiplied(computeAxis.Value.Direction.Coord).ToVec().Magnitude();
            var axis = computeAxis.Value.Translated(bbox.Center().ToVec())
                                  .Translated(Entity.Offset.Reversed())
                                  .Transformed(Entity.GetTransformation());
            Pnt p1 = axis.Location.Translated(axis.Direction.ToVec(size));
            Pnt p2 = axis.Location.Translated(axis.Direction.ToVec(-size));
            _AxisHint.Set(p1, p2);
            p1.Translate(Entity.Offset.Reversed());
            p2.Translate(Entity.Offset.Reversed());
            _OriginHint.Set(p1, p2);
        }
        else
        {
            var axis = computeAxis.Value.Transformed(Entity.GetTransformation());
            _AxisHint.Set(axis);
            axis.Translate(Entity.Offset.Reversed());
            _OriginHint.Set(axis);
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Actions

    void _ShowActions()
    {
        var computeAxis = Entity.ComputeAxis();
        if (computeAxis == null)
        {
            StopAllActions();
            return;
        }

        // Offset X
        if (_OffsetXAction == null)
        {
            _OffsetXAction = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                NoResize = true,
                Length = 1.0
            };
            _OffsetXAction.Preview += _OffsetXAction_Preview;
            _OffsetXAction.Finished += _Actions_Finished;
            StartAction(_OffsetXAction);
        }
        
        // Offset Y
        if (_OffsetYAction == null)
        {
            _OffsetYAction = new(Entity.Body)
            {
                Color = Colors.ActionGreen,
                NoResize = true,
                Length = 1.0
            };
            _OffsetYAction.Preview += _OffsetYAction_Preview;
            _OffsetYAction.Finished += _Actions_Finished;
            StartAction(_OffsetYAction);
        }

        // Offset Z
        if (_OffsetZAction == null)
        {
            _OffsetZAction = new(Entity.Body)
            {
                Color = Colors.ActionBlue,
                NoResize = true,
                Length = 1.0
            };
            _OffsetZAction.Preview += _OffsetZAction_Preview;
            _OffsetZAction.Finished += _Actions_Finished;
            StartAction(_OffsetZAction);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        var computeAxis = Entity.ComputeAxis();
        if (computeAxis == null)
        {
            StopAllActions();
            return;
        }

        var axis = computeAxis.Value.Transformed(Entity.GetTransformation());
        var bbox = Entity.GetBRep()?.BoundingBox();
        if (bbox != null)
        {
            var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Coord.Multiplied(computeAxis.Value.Direction.Coord).ToVec().Magnitude();
            axis.Location = axis.Location.Translated(axis.Direction.ToVec(size));
        }
        _OffsetActionPivot = axis.Location;
        var localCS = Entity.GetCoordinateSystem();

        if (_OffsetXAction != null)
        {
            _OffsetXAction.Axis = new Ax1(_OffsetActionPivot, localCS.XDirection);
        }

        if (_OffsetYAction != null)
        {
            _OffsetYAction.Axis = new Ax1(_OffsetActionPivot, localCS.YDirection);
        }

        if (_OffsetZAction != null)
        {
            _OffsetZAction.Axis = new Ax1(_OffsetActionPivot, localCS.Direction);
        }

        if (!_IsMoving)
        {
            _StartOffset = Entity.Offset;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetXAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            StopAction(_OffsetYAction);
            _OffsetYAction = null;
            StopAction(_OffsetZAction);
            _OffsetZAction = null;
            SetHintMessage( "__Adjust offset__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        }

        var newOffset = _StartOffset.X + args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
        }

        if (Entity.Offset.X != newOffset)
        {
            Entity.Offset = new Vec(newOffset, _StartOffset.Y, _StartOffset.Z);
        }
        _OffsetXAction.Axis = new Ax1(_OffsetActionPivot.Translated(_OffsetXAction.Axis.Direction.ToVec(newOffset - _StartOffset.X)), _OffsetXAction.Axis.Direction);

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Offset X: {Entity.Offset.X.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetYAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            StopAction(_OffsetXAction);
            _OffsetXAction = null;
            StopAction(_OffsetZAction);
            _OffsetZAction = null;
            SetHintMessage("__Adjust offset__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        }

        var newOffset = _StartOffset.Y + args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
        }

        if (Entity.Offset.Y != newOffset)
        {
            Entity.Offset = new Vec(_StartOffset.X, newOffset, _StartOffset.Z);
        }
        _OffsetYAction.Axis = new Ax1(_OffsetActionPivot.Translated(_OffsetYAction.Axis.Direction.ToVec(newOffset - _StartOffset.Y)), _OffsetYAction.Axis.Direction);

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Offset Y: {Entity.Offset.Y.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetZAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            StopAction(_OffsetXAction);
            _OffsetXAction = null;
            StopAction(_OffsetYAction);
            _OffsetYAction = null;
            SetHintMessage("__Adjust offset__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        }

        var newOffset = _StartOffset.Z + args.Distance;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
        }

        if (Entity.Offset.Z != newOffset)
        {
            Entity.Offset = new Vec(_StartOffset.X, _StartOffset.Y, newOffset);
        }
        _OffsetZAction.Axis = new Ax1(_OffsetActionPivot.Translated(_OffsetZAction.Axis.Direction.ToVec(newOffset - _StartOffset.Z)), _OffsetZAction.Axis.Direction);

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Offset Z: {Entity.Offset.Z.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _Actions_Finished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        CommitChanges();
        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<RevolveEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}