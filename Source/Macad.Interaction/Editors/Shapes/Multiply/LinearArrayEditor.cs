using System;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using Macad.Core.Geom;

namespace Macad.Interaction.Editors.Shapes;

public sealed class LinearArrayEditor : Editor<LinearArray>
{
    TranslateAxisLiveAction _Distance1Action;
    TranslateAxisLiveAction _Distance2Action;
    LabelHudElement _HudElement;
    double _StartDistance;
    bool _IsMoving;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<LinearArrayPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
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
        Shape.ShapeChanged -= _Shape_ShapeChanged;
        _Distance1Action = null;
        _Distance2Action = null;
        _HudElement = null;
        base.OnToolsStop();
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
        
    #region Actions

    void _ShowActions()
    {            
        if (Entity?.Body == null)
        {
            StopAllActions();
            _Distance1Action = null;
            _Distance2Action = null;
            return;
        }
            
        if (_Distance1Action == null)
        {
            _Distance1Action = new(Entity.Body)
            {
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _Distance1Action.Preview += _DistanceAction_Preview;
            _Distance1Action.Finished += _DistanceAction_Finished;
            StartAction(_Distance1Action);
        }
        if (_Distance2Action == null)
        {
            _Distance2Action = new(Entity.Body)
            {
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _Distance2Action.Preview += _DistanceAction_Preview;
            _Distance2Action.Finished += _DistanceAction_Finished;
            StartAction(_Distance2Action);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        var brep = Entity?.GetBRep();

        if (Entity?.Body == null
            || _Distance1Action == null
            || _Distance2Action == null
            || brep == null)
        {
            StopAllActions();
            _Distance1Action = null;
            _Distance2Action = null;
            return;
        }

        var trsf = Entity.GetTransformation();

        if (Entity.ShapeType == ShapeType.Sketch
            && Topo2dUtils.GetPlaneOfEdges(brep, out Geom_Plane plane))
        {
            brep = brep.Located(new TopLoc_Location(new Trsf(Ax3.XOY, plane.Position())));
            trsf.Multiply(new Trsf(plane.Position(), Ax3.XOY));
        }
        var bbox = brep.BoundingBox();
        var extents = bbox.Extents();

        __UpdateAction(_Distance1Action, false);
        __UpdateAction(_Distance2Action, true);

        //--------------------------------------------------------------------------------------------------
            
        void __UpdateAction(TranslateAxisLiveAction action, bool secondAxis)
        {
            if (action == null) 
                return;

            Dir dir = _GetAxisDirection(secondAxis);
            Pnt position = bbox.Center().Translated(new Vec(extents.X * dir.X, extents.Y * dir.Y, extents.Z * dir.Z).Scaled(0.5));
            Ax1 axis = new Ax1(position, dir).Transformed(trsf);
            action.Axis = axis;
            action.Color = _GetAxisColor(secondAxis);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _DistanceAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        bool secondAxis = sender == _Distance2Action;
        if (!_IsMoving)
        {
            _IsMoving = true;
            _StartDistance = secondAxis ? Entity.Distance2 : Entity.Distance1;
            SetHintMessage("__Adjust distances__ using gizmo, press `k:Ctrl` to round to grid stepping, press `k:Shift` to scale both directions uniformly.");
        }

        var newDistance = _StartDistance + args.Distance * _GetAxisScale(secondAxis);

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDistance = Maths.RoundToNearest(newDistance, WorkspaceController.Workspace.GridStep);
        }

        bool uniform = args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift);

        if (secondAxis || uniform)
        {
            Entity.Distance2 = newDistance;
        }
        if (!secondAxis || uniform)
        {
            Entity.Distance1 = newDistance;
        }

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Distance: {newDistance.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _DistanceAction_Finished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        CommitChanges();
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    double _GetAxisScale(bool secondAxis)
    {
        var distanceMode = secondAxis ? Entity.DistanceMode2 : Entity.DistanceMode1;
        var quantity = secondAxis ? Entity.Quantity2 : Entity.Quantity1;
        double scale = distanceMode switch
        {
            LinearArray.DistanceMode.Spacing => 1.0 / (quantity - 1),
            LinearArray.DistanceMode.Interval => 1.0 / (quantity - 1),
            LinearArray.DistanceMode.Extent => 1.0,
            LinearArray.DistanceMode.OverallExtent => 1.0,
            _ => 1.0
        };

        var alignmentMode = secondAxis ? Entity.Alignment2 : Entity.Alignment1;
        if (alignmentMode == LinearArray.AlignmentMode.Center)
        {
            scale *= 2.0;
        }
        return scale;
    }

    //--------------------------------------------------------------------------------------------------

    Dir _GetAxisDirection(bool secondAxis)
    {
        Dir dir;
        Dir rotDir;
        switch (Entity.Plane)
        {
            case LinearArray.PlaneType.XY:
                dir = secondAxis ? Dir.DY : Dir.DX;
                rotDir = Dir.DZ;
                break;
            case LinearArray.PlaneType.ZX:
                dir = secondAxis ? Dir.DX : Dir.DZ;
                rotDir = Dir.DY;
                break;
            case LinearArray.PlaneType.YZ:
                dir = secondAxis ? Dir.DZ : Dir.DY;
                rotDir = Dir.DX;
                break;
            default:
                throw new ArgumentOutOfRangeException();
        }

        if (Entity.Rotation != 0.0)
        {
            dir.Rotate(new Ax1(Pnt.Origin, rotDir), Entity.Rotation.ToRad());
        }

        var alignmentMode = secondAxis ? Entity.Alignment2 : Entity.Alignment1;
        if (alignmentMode == LinearArray.AlignmentMode.Last)
        {
            dir.Reverse();
        }

        return dir;
    }

    //--------------------------------------------------------------------------------------------------

    Color _GetAxisColor(bool secondAxis)
    {
        switch (Entity.Plane)
        {
            case LinearArray.PlaneType.XY:
                return secondAxis ? Colors.ActionGreen : Colors.ActionRed;
            case LinearArray.PlaneType.ZX:
                return secondAxis ? Colors.ActionRed : Colors.ActionBlue;
            case LinearArray.PlaneType.YZ:
                return secondAxis ? Colors.ActionBlue : Colors.ActionGreen;
            default:
                throw new ArgumentOutOfRangeException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<LinearArrayEditor>();
    }

}