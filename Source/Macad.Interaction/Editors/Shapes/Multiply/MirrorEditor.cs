using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public sealed class MirrorEditor : Editor<Mirror>
{
    HintLine _AxisHint;
    Plane _PlaneHint;
    TranslateAxisLiveAction _OffsetAction1;
    TranslateAxisLiveAction _OffsetAction2;
    LabelHudElement _HudElement;
    double _StartOffset;
    bool _IsMoving;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<MirrorPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
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
        Shape.ShapeChanged -= _Shape_ShapeChanged;
        Remove(_AxisHint);
        _AxisHint = null;
        Remove(_PlaneHint);
        _PlaneHint = null;
        _OffsetAction1 = null;
        _OffsetAction2 = null;
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
        if (Entity.ShapeType == ShapeType.Sketch)
        {
            _UpdateHintSketch();
        }
        else
        {
            if (_AxisHint != null)
            {
                Remove(_AxisHint);
                _AxisHint = null;
            }
        }

        if (Entity.ShapeType == ShapeType.Solid)
        {
            _UpdateHintSolid();
        }
        else
        {
            if (_PlaneHint != null)
            {
                Remove(_PlaneHint);
                _PlaneHint = null;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateHintSketch()
    {
        if (!Entity.GetMirrorAxis(out Ax2 mirrorAxis))
        {
            Remove(_AxisHint);
            _AxisHint = null;
            return;
        }

        if (_AxisHint == null)
        {
            _AxisHint = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
            Add(_AxisHint);
        }

        var brep = Entity.Predecessor?.GetBRep(Entity.GetCoordinateSystem());
        if (brep != null)
        {
            var bbox = brep.BoundingBox();
            var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Magnitude()*0.65;
            var axis = mirrorAxis;
            axis.Transform(Entity.GetTransformation());
            Pnt p1 = axis.Location.Translated(axis.Direction.ToVec(size));
            Pnt p2 = axis.Location.Translated(axis.Direction.ToVec(-size));
            _AxisHint.Set(p1, p2);
        }
        else
        {
            var axis = mirrorAxis.Transformed(Entity.GetTransformation());
            var lineAxis = new Ax1(axis.Location, axis.Direction);
            _AxisHint.Set(lineAxis);
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateHintSolid()
    {
        if (!Entity.GetMirrorAxis(out Ax2 mirrorAxis))
        {
            Remove(_PlaneHint);
            _PlaneHint = null;
            return;
        }

        if (_PlaneHint == null)
        {
            _PlaneHint = new Plane(WorkspaceController, Plane.Style.None)
            {
                Transparency = 0.7,
                Boundary = false,
                Color = Colors.ActionBlue
            };
            Add(_PlaneHint);
        }

        var axis = mirrorAxis.Transformed(Entity.GetTransformation());
        _PlaneHint.Set(new Pln(new Ax3(axis)));

        var bbox = Entity.Predecessor?.GetBRep(Entity.GetCoordinateSystem())?.BoundingBox();
        if (bbox != null)
        {
            var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Magnitude() * 1.3;
            _PlaneHint.Size = new XY(size, size);
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Actions

    void _ShowActions()
    {            
        if (Entity?.Body == null
            || Entity.Mode == Mirror.MirrorMode.Axis)
        {
            StopAllActions();
            _OffsetAction1 = null;
            return;
        }
            
        if (_OffsetAction1 == null)
        {
            _OffsetAction1 = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _OffsetAction1.Preview += _OffsetAction_Preview;
            _OffsetAction1.Finished += _OffsetAction_Finished;
            StartAction(_OffsetAction1);
        }
            
        if (_OffsetAction2 == null)
        {
            _OffsetAction2 = new(Entity.Body)
            {
                Color = Colors.ActionRed,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _OffsetAction2.Preview += _OffsetAction_Preview;
            _OffsetAction2.Finished += _OffsetAction_Finished;
            StartAction(_OffsetAction2);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (Entity?.Body == null
            || _OffsetAction1 == null
            || _OffsetAction2 == null
            || !Entity.GetMirrorAxis(out Ax2 mirrorAxis))
        {
            StopAllActions();
            _OffsetAction1 = null;
            _OffsetAction2 = null;
            return;
        }

        var axis = mirrorAxis.Transformed(Entity.GetTransformation());
        var axis1 = mirrorAxis;
        var axis2 = mirrorAxis;
        var bbox = Entity.Predecessor?.GetBRep(Entity.GetCoordinateSystem())?.BoundingBox();
        if (Entity.ShapeType == ShapeType.Solid)
        {
            // Solid
            if (bbox != null)
            {
                var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Magnitude()*0.6;
                Pnt p1 = axis.Location.Translated(axis.XDirection.ToVec(size));
                Pnt p2 = axis.Location.Translated(axis.XDirection.ToVec(-size));
                axis1 = axis.Translated(axis.Location, p1);
                axis2 = axis.Translated(axis.Location, p2);
            }
            _OffsetAction1.Axis = new Ax1(axis1.Location, axis1.Direction);
            _OffsetAction2.Axis = new Ax1(axis2.Location, axis2.Direction);
        }
        else
        {
            // Sketch
            if (bbox != null)
            {
                var size = new Vec(bbox.CornerMin(), bbox.CornerMax()).Magnitude()*0.6;
                Pnt p1 = axis.Location.Translated(axis.Direction.ToVec(size));
                Pnt p2 = axis.Location.Translated(axis.Direction.ToVec(-size));
                axis1 = axis.Translated(axis.Location, p1);
                axis2 = axis.Translated(axis.Location, p2);
            }
            _OffsetAction1.Axis = new Ax1(axis1.Location, axis1.YDirection);
            _OffsetAction2.Axis = new Ax1(axis2.Location, axis2.YDirection);
        }

        if (!_IsMoving)
        {
            _StartOffset = Entity.Offset;
        } 
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        if (!_IsMoving)
        {
            _IsMoving = true;
            SetHintMessage("__Adjust mirror offset__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        }

        var newOffset = _StartOffset + args.Distance;

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newOffset = Maths.RoundToNearest(newOffset, WorkspaceController.Workspace.GridStep);
        }

        Entity.Offset = newOffset;

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
        RegisterEditor<MirrorEditor>();
    }

}