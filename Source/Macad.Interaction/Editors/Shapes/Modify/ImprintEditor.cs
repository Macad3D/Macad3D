using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
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
        Shape.ShapeChanged += _Shape_ShapeChanged;

        _Panel = PropertyPanel.CreatePanel<ImprintPropertyPanel>(Entity);
        InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

        if (Entity.Sketch != null)
        {
            _SketchPanel = PropertyPanel.CreatePanel<SketchPropertyPanel>(Entity.Sketch);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_SketchPanel, _Panel);
        }

        _ShowActions();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Stop()
    {
        _HideActions();

        Shape.ShapeChanged -= _Shape_ShapeChanged;

        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_SketchPanel);
        InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
    }
                
    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            //if (!_IsMoving)
            //{
            //    _TranslateAction?.Deactivate();
            //    _UpdateActions();
            //}
            //else if (_TranslateAction != null && Entity.GetFinalExtrusionAxis(out Ax1 axis))
            //{
            //    _TranslateAction.Axis = axis.Transformed(Entity.Body.GetTransformation());
            //}
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

    void _ShowActions()
    {
        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _HideActions()
    {
        _TranslateAction?.Stop();
        _TranslateAction = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (Entity.Mode == Imprint.ImprintMode.Cutout
            || !Entity.GetFinalExtrusionAxis(out Ax1 axis))
        {
            _HideActions();
            return;
        }
        
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

        axis.Transform(Entity.Body.GetTransformation());
        _TranslateAction.Axis = axis;
        if (!_IsMoving)
        {
            _StartDepth = Entity.Depth;
        }

        WorkspaceController.StartLiveAction(_TranslateAction);
        WorkspaceController.Invalidate();

        return;
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionPreviewed(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = true;
        WorkspaceController.HudManager?.SetHintMessage(this, "Scale imprint depth using gizmo, press 'CTRL' to round to grid stepping.");

        double newDepth = _StartDepth + (Entity.Mode == Imprint.ImprintMode.Raise
                                             ? args.Distance
                                             : -args.Distance);

        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
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

        _UpdateActions();
        _HudElement ??= InteractiveContext.Current.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
        _HudElement?.SetValue($"Depth: {Entity.Depth.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateActionFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        _TranslateAction.Deactivate();
        InteractiveContext.Current.UndoHandler.Commit();
        WorkspaceController.HudManager?.RemoveElement(_HudElement);
        _HudElement = null;
        WorkspaceController.HudManager?.SetHintMessage(this, null);
        _ShowActions();
    }
    
    //--------------------------------------------------------------------------------------------------


    #endregion
}