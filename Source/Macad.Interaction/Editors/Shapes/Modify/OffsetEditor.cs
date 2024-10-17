using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public sealed class OffsetEditor : Editor<Offset>
{
    BoxScaleLiveAction _ScaleAction;
    LabelHudElement _HudElement;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<OffsetPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
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
        _ScaleAction = null;
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
    
    #region Scale Action

    void _ShowActions()
    {
        if (Entity?.Body == null)
        {
            StopAllActions();
            _ScaleAction = null;
            return;
        }

        if (_ScaleAction == null)
        {
            _ScaleAction = new BoxScaleLiveAction(Entity.ShapeType==ShapeType.Sketch, Entity.Body);
            _ScaleAction.Preview += _ScaleAction_Preview;
            _ScaleAction.Finished += _ScaleAction_Finished;
            StartAction(_ScaleAction);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_ScaleAction == null)
            return;

        var brep = Entity.GetBRep();
        if(brep == null)
            return;
        var trsf = Entity.Body.GetTransformation();

        if (Entity.ShapeType == ShapeType.Sketch
            && Topo2dUtils.GetPlaneOfEdges(brep, out Geom_Plane plane))
        {
            brep = brep.Located(new TopLoc_Location(new Trsf(Ax3.XOY, plane.Position())));
            trsf.Multiply(new Trsf(plane.Position(), Ax3.XOY));
        }

        _ScaleAction.Box = brep.BoundingBox();
        _ScaleAction.Transformation = trsf;
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Preview(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        SetHintMessage("__Change distance__ using gizmo, press `k:Ctrl` to round to grid stepping.");

        double delta = args.Delta * Math.Max(args.Direction.X.Abs(),
                                             Math.Max(args.Direction.Y.Abs(),
                                             args.Direction.Z.Abs()));
        if (delta == 0)
            return;

        double newDistance = Entity.Distance + delta;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDistance = Maths.RoundToNearest(newDistance, WorkspaceController.Workspace.GridStep);
        }

        delta = newDistance - Entity.Distance;
        if (delta == 0)
            return;

        Entity.Distance = newDistance;

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Distance: {Entity.Distance.ToInvariantString("F2")} mm");

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Finished(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
        {
            CommitChanges();
        }
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<OffsetEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}
