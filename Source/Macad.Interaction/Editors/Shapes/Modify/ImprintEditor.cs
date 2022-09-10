using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using System;
using Macad.Core;

namespace Macad.Interaction.Editors.Shapes;

public class ImprintEditor : Editor<Imprint>
{
    ImprintPropertyPanel _Panel;
    SketchPropertyPanel _SketchPanel;
    TranslateAxisLiveAction _TranslateAction;
    LabelHudElement _HudElement;
    bool _IsMoving;
    double _StartDepth;

    //--------------------------------------------------------------------------------------------------

    public override void Start()
    {
        InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;

        _Panel = PropertyPanel.CreatePanel<ImprintPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

        if (Entity.Sketch != null)
        {
            _SketchPanel = PropertyPanel.CreatePanel<SketchPropertyPanel>(Entity.Sketch);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_SketchPanel, _Panel);
        }

        _UpdateActions();
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_SketchPanel);
        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
            
        _TranslateAction?.Stop();
        _TranslateAction = null;
        WorkspaceController.Invalidate();
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
    }
                
    //--------------------------------------------------------------------------------------------------

    void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
    {
        if (entity == Entity.Body && !_IsMoving)
        {
            _TranslateAction?.Deactivate();
            _UpdateActions();
            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void EnrichContextMenu(ContextMenuItems itemList)
    {
        if (Entity.Sketch != null)
            itemList.AddCommand(SketchCommands.StartSketchEditor, Entity.Sketch);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ImprintEditor>();
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _UpdateActions()
    {
        if (Entity.Mode == Imprint.ImprintMode.Cutout)
        {
            _TranslateAction?.Stop();
            _TranslateAction = null;
            return;
        }

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
        WorkspaceController.HudManager?.SetHintMessage(this, "Scale imprint depth using gizmo, press 'CTRL' to round to grid stepping.");

        double newDepth = _StartDepth + (Entity.Mode == Imprint.ImprintMode.Raise
                                             ? _TranslateAction.Distance
                                             : -_TranslateAction.Distance);

        if (_TranslateAction.LastMouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newDepth = Maths.RoundToNearest(newDepth, WorkspaceController.Workspace.GridStep);
        }

        if (newDepth < 0)
        {
            Entity.Mode = Entity.Mode == Imprint.ImprintMode.Raise ? Imprint.ImprintMode.Lower : Imprint.ImprintMode.Raise;
            _StartDepth = -_StartDepth;
            newDepth = -newDepth;
        }

        Entity.Depth = newDepth.Abs();
        if (Entity.GetFinalExtrusionAxis(out Ax1 axis))
        {
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