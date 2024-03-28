using System;
using Macad.Core.Shapes;
using System.Collections.Generic;
using System.Linq;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Common;
using Macad.Occt;
using System.Windows.Input;

namespace Macad.Interaction.Editors.Shapes;

public class FilletEditorTool : EdgeModifierTool
{
    class ActionInfo
    {
        internal TranslateAxisLiveAction Action;
        internal bool Reverse;
    }

    //--------------------------------------------------------------------------------------------------

    readonly Fillet _FilletShape;
    double _StartRadius;
    bool _IsMoving;
    LabelHudElement _HudElement;
    readonly List<ActionInfo> _AxisActions = new();

    //--------------------------------------------------------------------------------------------------

    public FilletEditorTool(Fillet modifierShape) 
        : base(modifierShape)
    {
        _FilletShape = modifierShape;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        _StopActions();
        base.OnStop();
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool UpdateActions()
    {
        if (!base.UpdateActions())
            return false;

        if (!_IsMoving)
            _StartActions();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _StopActions(TranslateAxisLiveAction except = null)
    {
        foreach (var action in _AxisActions.Select(info => info.Action))
        {
            if (action == except)
                continue;

            action.Preview -= _AxisAction_OnPreview;
            action.Finished -= _AxisAction_OnFinished;
            action.Stop();
        }

        if (except != null)
        {
            _AxisActions.RemoveAll(info => info.Action != except);
        }
        else
        {
            _AxisActions.Clear();
            _IsMoving = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _StartActions()
    {
        if (!_IsMoving)
        {
            _StopActions();

            SetHintMessage("__Select edges__ to apply modifier on. __Select faces__ to toggle all it's edges.");
            SetCursor(Cursors.SelectEdge);

            if (ContourEdges == null || ValidEdges == null)
                return;

            var trsf = ModifierShape.GetTransformation();
            var brep = ModifierShape.GetBRep();
            _StartRadius = _FilletShape.Radius;

            foreach (var edge in ContourEdges)
            {
                var face = ModifierShape.GetCreatedFaces(edge)?.FirstOrDefault();
                if (face == null)
                    continue;

                face = brep.Faces().FirstOrDefault(ofc => ofc.IsSame(face));
                if (face == null)
                    continue;

                var axis = FaceAlgo.GetFaceCenterNormal(face)
                                   .Transformed(trsf);
                var pnt = ElCLib.LineParameter(axis, EdgeAlgo.GetCenter(edge.Located(new TopLoc_Location(trsf)).ToEdge()));
                bool reverse = pnt < 0;

                var action = new TranslateAxisLiveAction()
                {
                    WorkspaceController = WorkspaceController,
                    Color = Colors.ActionWhite,
                    NoResize = true,
                    Axis = axis
                };
                action.Preview += _AxisAction_OnPreview;
                action.Finished += _AxisAction_OnFinished;
                action.Start();

                ActionInfo info = new()
                {
                    Action = action,
                    Reverse = reverse
                };
                _AxisActions.Add(info);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    void _AxisAction_OnPreview(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = true;
        _StopActions(sender);

        SetHintMessage("__Scale fillet radius__ using gizmo, press `k:Ctrl` to round to grid stepping.");
        SetCursor(Cursors.SetRadius);

        double reversed = _AxisActions.First(info => info.Action == sender).Reverse ? 1.0 : -1.0;
        double newRadius = _StartRadius + args.Distance * reversed;
        newRadius += Math.Sqrt(args.Distance * args.Distance * 2.0) * Math.Sign(args.Distance) * reversed;
        
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newRadius = Maths.RoundToNearest(newRadius, WorkspaceController.Workspace.GridStep);
        }

        if (newRadius <= 0)
            newRadius = 0.01;

        _FilletShape.Radius = newRadius;

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement?.SetValue($"Radius: {_FilletShape.Radius.ToInvariantString("F2")} mm");
    }

    //--------------------------------------------------------------------------------------------------
        
    void _AxisAction_OnFinished(TranslateAxisLiveAction sender, TranslateAxisLiveAction.EventArgs args)
    {
        _IsMoving = false;
        Remove(_HudElement);
        _HudElement = null;
        RemoveHintMessage();
        CommitChanges();
        UpdateActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected override IEnumerable<WorkspaceControl> GetChildren()
    {
        return _AxisActions.Select(info => info.Action)
                           .Concat(base.GetChildren());
    }

    //--------------------------------------------------------------------------------------------------

}