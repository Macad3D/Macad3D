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
            RemoveLiveActions();
            _ScaleAction = null;
            return;
        }

        Bnd_Box box = Entity.GetBRep()?.BoundingBox();
        if (box == null)
            return;

        if (_ScaleAction == null)
        {
            _ScaleAction = new BoxScaleLiveAction(this, Entity.ShapeType==ShapeType.Sketch);
            _ScaleAction.Previewed += _ScaleAction_Previewed;
            _ScaleAction.Finished += _ScaleAction_Finished;
        }

        _ScaleAction.Box = box;
        _ScaleAction.Transformation = Entity.Body.GetTransformation();

        AddLiveAction(_ScaleAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Previewed(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
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

        _HudElement ??= CreateHudElement<LabelHudElement>();
        _HudElement?.SetValue($"Distance: {Entity.Distance.ToInvariantString("F2")} mm");

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Finished(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
        {
            InteractiveContext.Current.UndoHandler.Commit();
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
