using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
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
        _UpdateActions();
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

    void _UpdateActions()
    {
        if (Entity?.Body == null)
        {
            StopAllActions();
            _ScaleAction = null;
            return;
        }

        Bnd_Box box = Entity.GetBRep()?.BoundingBox();
        if (box == null)
            return;

        if (_ScaleAction == null)
        {
            _ScaleAction = new BoxScaleLiveAction(Entity.ShapeType==ShapeType.Sketch);
            _ScaleAction.Preview += _ScaleAction_Preview;
            _ScaleAction.Finished += _ScaleAction_Finished;
            StartAction(_ScaleAction);
        }

        _ScaleAction.Box = box;
        _ScaleAction.Transformation = Entity.Body.GetTransformation();
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Preview(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        SetHintMessage("Change distance box using gizmo, press 'CTRL' to round to grid stepping.");

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

        StartTools();
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
