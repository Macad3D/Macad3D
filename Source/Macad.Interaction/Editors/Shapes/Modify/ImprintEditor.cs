using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using System.Windows.Input;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed class ImprintEditor : Editor<Imprint>
{
    TranslateAxisLiveAction _TranslateAction;
    LabelHudElement _HudElement;
    bool _IsMoving;
    double _StartDepth;

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        var panel = CreatePanel<ImprintPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);

        if (Entity.Sketch != null)
        {
            CreatePanel<SketchPropertyPanel>(Entity.Sketch, panel);
        }
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
        _TranslateAction = null;
        Shape.ShapeChanged -= _Shape_ShapeChanged;              
    }

    //--------------------------------------------------------------------------------------------------

    void _Shape_ShapeChanged(Shape shape)
    {
        if (shape == Entity)
        {
            if (ToolsActive)
            {
                _ShowActions();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override (IActionCommand, object) GetStartEditingCommand()
    {
        if (Entity.Sketch != null)
        {
            return (SketchCommands.StartSketchEditor, Entity.Sketch);
        }
        return base.GetStartEditingCommand();
    }

    //--------------------------------------------------------------------------------------------------

    #region Live Actions

    void _ShowActions()
    {
        if (Entity?.Body == null
            || Entity.Mode == Imprint.ImprintMode.Cutout)
        {
            StopAllActions();
            _TranslateAction = null;
            return;
        }

        if (_TranslateAction == null)
        {
            _TranslateAction = new(Entity.Body)
            {
                Color = Colors.ActionBlue,
                Cursor = Cursors.SetHeight,
                NoResize = true,
                Length = 1.0,
            };
            _TranslateAction.Preview += _TranslateAction_Preview;
            _TranslateAction.Finished += _TranslateActionFinished;
            StartAction(_TranslateAction);
        }

        _UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateActions()
    {
        if (_TranslateAction == null
            || Entity.Mode == Imprint.ImprintMode.Cutout
            || !Entity.GetFinalExtrusionAxis(out Ax1 axis))
        {
            StopAllActions();
            _TranslateAction = null;
            return;
        }
        axis.Transform(Entity.Body.GetTransformation());
        _TranslateAction.Axis = axis;
        if (!_IsMoving)
        {
            _StartDepth = Entity.Depth;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAction_Preview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = true;
        SetHintMessage("__Scale imprint depth__ using gizmo, press `k:Ctrl` to round to grid stepping.");

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
        RegisterEditor<ImprintEditor>();
    }

    //--------------------------------------------------------------------------------------------------
}