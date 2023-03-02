using System;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public sealed class OffsetEditor : Editor<Offset>
{
    OffsetPropertyPanel _Panel;
    BoxScaleLiveAction _ScaleAction;
    LabelHudElement _HudElement;

    //--------------------------------------------------------------------------------------------------

    public override void Start()
    {
        _Panel = PropertyPanel.CreatePanel<OffsetPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        
        InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;     

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;                 

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
            
        _ScaleAction?.Stop();
        _ScaleAction = null;

        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        WorkspaceController.HudManager?.SetHintMessage(this, null);
    }
    
    //--------------------------------------------------------------------------------------------------
        
    void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
    {
        if (entity == Entity.Body)
        {
            _UpdateActions();
            WorkspaceController.Invalidate();
        }
    }
    
    //--------------------------------------------------------------------------------------------------
    
    #region Scale Action

    void _UpdateActions()
    {
        if (Entity == null || Entity.Body == null)
        {
            _ScaleAction?.Deactivate();
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

        WorkspaceController.StartLiveAction(_ScaleAction);
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Previewed(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        if (sender != _ScaleAction)
            return;

        WorkspaceController.HudManager?.SetHintMessage(this, "Change distance box using gizmo, press 'CTRL' to round to grid stepping.");

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

        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Distance: {Entity.Distance.ToInvariantString("F2")} mm");

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _ScaleAction_Finished(BoxScaleLiveAction sender, BoxScaleLiveAction.EventArgs args)
    {
        if (sender != _ScaleAction)
            return;

        if (!args.DeltaSum.IsEqual(0.0, double.Epsilon))
        {
            InteractiveContext.Current.UndoHandler.Commit();
        }

        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
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
