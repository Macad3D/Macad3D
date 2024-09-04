using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction;

public class TransformTool : Tool
{
    public enum PivotPoint
    {
        EntityPivot,
        BoundingCenter,
        MassCenter
    }

    //--------------------------------------------------------------------------------------------------

    [Flags]
    public enum Options
    {
        None = 0,
        MultipleUseFirst = 1,
        WorldSpaceOrientation = 2,
        LinkForeignOperands = 4,
    }

    //--------------------------------------------------------------------------------------------------

    public enum Mode
    {
        Translate,
        Rotate
    }

    //--------------------------------------------------------------------------------------------------

    readonly List<ITransformable> _TargetEntities = new ();
    readonly List<ITransformable> _TargetAndLinkedEntities = new ();
    Ax3 _CoordinateSystem;
    TranslateAction _TranslateAction;
    RotateAction _RotateAction;
    PivotPoint _PivotPoint;
    Options _Options;
    Mode _Mode;
    bool _UpdatingEntityProperties;

    //--------------------------------------------------------------------------------------------------

    public TransformTool(IEnumerable<ITransformable> targetList, PivotPoint pivotPoint, Options options)
    {
        Debug.Assert(targetList != null);

        _PivotPoint = pivotPoint;
        _Options = options;
        _TargetAndLinkedEntities.Clear();
        foreach (var target in targetList)
        {
            if (target == null || _TargetEntities.Contains(target))
                continue;

            target.PropertyChanged += _TargetEntity_PropertyChanged;

            _TargetEntities.Add(target);
            _TargetAndLinkedEntities.Add(target);
            _TargetAndLinkedEntities.AddRange(target.GetLinkedTransformables());
        }
        _TargetAndLinkedEntities = _TargetAndLinkedEntities.Distinct().ToList();

        Debug.Assert(_TargetEntities.Any());
        Debug.Assert(_TargetAndLinkedEntities.Any());
    }
        
    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _Mode = Mode.Translate;
        _RestartAction();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        StopAction(_TranslateAction);
        StopAction(_RotateAction);

        foreach (var targetEntity in _TargetEntities)
        {
            targetEntity.PropertyChanged -= _TargetEntity_PropertyChanged;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void ChangePivot(PivotPoint newPivot)
    {
        _PivotPoint = newPivot;
        _RestartAction();
    }

    //--------------------------------------------------------------------------------------------------

    public void ChangeOptions(Options newOptions)
    {
        _Options = newOptions;
        _RestartAction();
    }

    //--------------------------------------------------------------------------------------------------

    void _TargetEntity_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (_UpdatingEntityProperties)
            return;

        if (e.PropertyName == nameof(ITransformable.Position) || e.PropertyName == nameof(ITransformable.Rotation))
        {
            _RestartAction();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ComputeCoordinateSystem()
    {
        TopoDS_Shape ocShape;

        if (_TargetEntities.Count == 1 || _Options.HasFlag(Options.MultipleUseFirst))
        {
            // Single body, or Multishape using pivot of first shape
            var targetEntity = _TargetEntities[0];
            ocShape = targetEntity.Shape?.GetTransformedBRep();

            switch (_PivotPoint)
            {
                case PivotPoint.EntityPivot:
                    _CoordinateSystem = targetEntity.GetCoordinateSystem();
                    break;

                case PivotPoint.BoundingCenter:
                    _CoordinateSystem = targetEntity.GetCoordinateSystem();
                    if (ocShape != null)
                    {
                        _CoordinateSystem.Location = ocShape.BoundingBox().Center();
                    }
                    break;

                case PivotPoint.MassCenter:
                    _CoordinateSystem = targetEntity.GetCoordinateSystem();
                    if (ocShape != null)
                    {
                        _CoordinateSystem.Location = ocShape.CenterOfMass();
                    }
                    break;
            }

            if (_Options.HasFlag(Options.WorldSpaceOrientation))
            {
                _CoordinateSystem = new Ax3(_CoordinateSystem.Location, Dir.DZ);
            }
        }
        else
        {
            // Multiple shapes, use BBox center for all as pivot, and world space axis
            Bnd_Box bndBox = new Bnd_Box();

            foreach (var targetEntity in _TargetEntities)
            {
                ocShape = targetEntity.Shape?.GetTransformedBRep();
                if (ocShape != null)
                {
                    bndBox.Add(ocShape.BoundingBox());
                }
            }

            _CoordinateSystem = Ax3.XOY;
            _CoordinateSystem.Location = bndBox.Center();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RestartAction()
    {
        _ComputeCoordinateSystem();

        StopAction(_TranslateAction);
        StopAction(_RotateAction);

        switch (_Mode)
        {
            case Mode.Translate:
                _TranslateAction = new TranslateAction(_CoordinateSystem);
                if (!StartAction(_TranslateAction, false))
                    return;
                SetHintMessage("__Move entity__ using gizmo, press `k:Ctrl` to round to grid stepping. Press `k:T` for rotation.");
                _TranslateAction.Preview += _TranslateAction_Preview;
                _TranslateAction.Finished += _TranslateAction_Finished;
                break;

            case Mode.Rotate:
                _RotateAction = new RotateAction(_CoordinateSystem);
                if (!StartAction(_RotateAction, false))
                    return;
                SetHintMessage("__Rotate entity__ using gizmo, press `k:Ctrl` to round to 5°. Press `k:T` for translation.");
                _RotateAction.Preview += _RotateAction_Preview;
                _RotateAction.Finished += _RotateAction_Finished;
                break;
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateTransformations(Trsf? transformation)
    {
        var entityList = (_Options.Has(Options.LinkForeignOperands) ? _TargetAndLinkedEntities : _TargetEntities).Cast<InteractiveEntity>();
        foreach (var entity in entityList)
        {
            var visualObject = WorkspaceController.VisualObjects.Get(entity);
            if (visualObject != null)
            {
                visualObject.SetLocalTransformation(transformation);
                WorkspaceController.Invalidate();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _TranslateAction_Finished(TranslateAction sender, TranslateAction.EventArgs args)
    {
        _UpdatingEntityProperties = true;
        var targetEntities = _Options.Has(Options.LinkForeignOperands) ? _TargetAndLinkedEntities : _TargetEntities;

        foreach (var targetEntity in targetEntities)
        {
            TransformUtils.Translate(targetEntity, args.Delta);
        }

        CommitChanges();
        WorkspaceController.Invalidate();
        _UpdateTransformations(null);

        // Restart
        _RestartAction();
        _UpdatingEntityProperties = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _TranslateAction_Preview(TranslateAction sender, TranslateAction.EventArgs args)
    {
        var transformation = new Trsf(args.Delta);
        _UpdateTransformations(transformation);
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateAction_Finished(RotateAction sender, RotateAction.EventArgs args)
    {
        _UpdatingEntityProperties = true;
        var targetEntities = _Options.Has(Options.LinkForeignOperands) ? _TargetAndLinkedEntities : _TargetEntities;

        foreach (var targetEntity in targetEntities)
        {
            TransformUtils.Rotate(targetEntity, args.Axis, args.Delta);
        }

        CommitChanges();
        WorkspaceController.Invalidate();
        _UpdateTransformations(null);

        // Restart
        _RestartAction();
        _UpdatingEntityProperties = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _RotateAction_Preview(RotateAction sender, RotateAction.EventArgs args)
    {
        var transformation = new Trsf(args.Axis, args.Delta);
        _UpdateTransformations(transformation);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        if (data.DetectedAisObject == null ||
            data.DetectedEntity != null && !_TargetEntities.Contains(data.DetectedEntity as ITransformable))
        {
            // Selection of another shape clicking into "nothing" closes the tool
            if (_TranslateAction is not { IsMoving: true }
                && _RotateAction is not { IsRotating: true })
            {
                Stop();
                return true;
            }
        }

        return base.OnMouseDown(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        Stop();
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public void ToggleTransformMode()
    {
        if (_Mode == Mode.Translate)
        {
            if (_TranslateAction is not { IsMoving: true })
            {
                _Mode = Mode.Rotate;
                _RestartAction();
            }
        }
        else if (_Mode == Mode.Rotate)
        {
            if (_RotateAction is not { IsRotating: true })
            {
                _Mode = Mode.Translate;
                _RestartAction();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnKeyPressed(Key key, ModifierKeys modifierKeys)
    {
        if (key == Key.T && modifierKeys == ModifierKeys.None)
        {
            ToggleTransformMode();
            return true;
        }
        return base.OnKeyPressed(key, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public override void EnrichContextMenu(ContextMenuItems itemList)
    {
        itemList.AddSeparator("Pivot Point");

        itemList.AddCommand(WorkspaceCommands.SetTransformPivot, PivotPoint.EntityPivot);
        itemList.AddCommand(WorkspaceCommands.SetTransformPivot, PivotPoint.BoundingCenter);
        itemList.AddCommand(WorkspaceCommands.SetTransformPivot, PivotPoint.MassCenter);

        itemList.AddSeparator("Options");

        itemList.AddCommand(WorkspaceCommands.ToggleTransformOption, Options.MultipleUseFirst);
        itemList.AddCommand(WorkspaceCommands.ToggleTransformOption, Options.WorldSpaceOrientation);
        itemList.AddCommand(WorkspaceCommands.ToggleTransformOption, Options.LinkForeignOperands);
    }
}