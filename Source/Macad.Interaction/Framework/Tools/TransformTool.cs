using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction
{
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

        public override void Stop()
        {
            _TranslateAction?.Stop();
            _RotateAction?.Stop();

            foreach (var targetEntity in _TargetEntities)
            {
                targetEntity.PropertyChanged -= _TargetEntity_PropertyChanged;
            }

            base.Stop();
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

        public override bool Start()
        {
            _Mode = Mode.Translate;
            _RestartAction();
            return true;
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

            if (_TranslateAction is {IsFinished: false})
            {
                _TranslateAction.Stop();
            }
            if (_RotateAction is {IsFinished: false})
            {
                _RotateAction.Stop();
            }

            switch (_Mode)
            {
                case Mode.Translate:
                    _TranslateAction = new TranslateAction(this, _CoordinateSystem);
                    if (!WorkspaceController.StartToolAction(_TranslateAction, false))
                        return;
                    StatusText = "Move entity using gizmo, press 'CTRL' to round to grid stepping. Press 'T' for rotation.";
                    _TranslateAction.Previewed += _OnActionPreview;
                    _TranslateAction.Finished += _OnActionFinished;
                    break;

                case Mode.Rotate:
                    _RotateAction = new RotateAction(this, _CoordinateSystem);
                    if (!WorkspaceController.StartToolAction(_RotateAction, false))
                        return;
                    StatusText = "Rotate entity using gizmo, press 'CTRL' to round to 5°. Press 'T' for translation.";
                    _RotateAction.Previewed += _OnActionPreview;
                    _RotateAction.Finished += _OnActionFinished;
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

        void _OnActionFinished(ToolAction toolAction)
        {
            _UpdatingEntityProperties = true;
            var targetEntities = _Options.Has(Options.LinkForeignOperands) ? _TargetAndLinkedEntities : _TargetEntities;

            if (toolAction == _TranslateAction)
            {
                foreach (var targetEntity in targetEntities)
                {
                    TransformUtils.Translate(targetEntity, _TranslateAction.Delta);
                }
            }
            else if (toolAction == _RotateAction)
            {
                foreach (var targetEntity in targetEntities)
                {
                    TransformUtils.Rotate(targetEntity, _RotateAction.RotationAxis, _RotateAction.Delta);
                }
            }

            InteractiveContext.Current.UndoHandler.Commit();

            _UpdateTransformations(null);

            // Restart
            _RestartAction();

            _UpdatingEntityProperties = false;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction == _TranslateAction)
            {
                var transformation = new Trsf(_TranslateAction.Delta);
                _UpdateTransformations(transformation);
            }
            else if (toolAction == _RotateAction)
            {
                var transformation = new Trsf(_RotateAction.RotationAxis, _RotateAction.Delta);
                _UpdateTransformations(transformation);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseDown(MouseEventData data)
        {
            if(data.DetectedAisInteractives.Count==0 || 
               data.DetectedEntities.Count > 0 && !_TargetEntities.ContainsAny(data.DetectedEntities.Cast<ITransformable>()))
            {
                // Selection of another shape clicking into "nothing" closes the tool
                if ((_TranslateAction==null || !_TranslateAction.IsMoving)
                    &&(_RotateAction==null || !_RotateAction.IsRotating))
                {
                    Stop();
                    return true;
                }
            }
            return base.OnMouseDown(data);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnEntitySelectionChanging(IEnumerable<Entity> entitiesToSelect, IEnumerable<Entity> entitiesToUnSelect)
        {
            Stop();
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public void ToggleTransformMode()
        {
            if (_Mode == Mode.Translate)
            {
                if ((_TranslateAction == null) || !_TranslateAction.IsMoving)
                {
                    _Mode = Mode.Rotate;
                    _RestartAction();
                }
            }
            else if (_Mode == Mode.Rotate)
            {
                if ((_RotateAction == null) || !_RotateAction.IsRotating)
                {
                    _Mode = Mode.Translate;
                    _RestartAction();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnKeyPressed(Key key)
        {
            if (key == Key.T)
            {
                ToggleTransformMode();
                return true;
            }
            return base.OnKeyPressed(key);
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
}