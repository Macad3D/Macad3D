using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Net;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Body = Macad.Core.Topology.Body;

namespace Macad.Interaction
{
    public class TransformBodyTool : Tool
    {
        public enum PivotPoint
        {
            BodyPivot,
            BoundingCenter,
            MassCenter
        }

        //--------------------------------------------------------------------------------------------------

        [Flags]
        public enum Options
        {
            None = 0,
            MultiBodyUseFirst = 1,
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

        readonly List<Body> _TargetBodies = new List<Body>();
        readonly List<Body> _TargetAndLinkedBodies = new List<Body>();
        Ax3 _CoordinateSystem;
        TranslateAction _TranslateAction;
        RotateAction _RotateAction;
        PivotPoint _PivotPoint;
        Options _Options;
        Mode _Mode;
        bool _UpdatingBodyProperties;

        //--------------------------------------------------------------------------------------------------

        public TransformBodyTool(IEnumerable<Entity> targetList, PivotPoint pivotPoint, Options options)
        {
            Debug.Assert(targetList != null);
            foreach (var target in targetList)
            {
                Body body = null;
                if (target is Body)
                    body = (Body) target;
                else if (target is Shape)
                    body = ((Shape) target).Body;

                if(body != null && !_TargetBodies.Contains(body))
                    _TargetBodies.Add(body);
            }
            Debug.Assert(_TargetBodies.Any());

            _PivotPoint = pivotPoint;
            _Options = options;

            _TargetAndLinkedBodies.Clear();
            _TargetAndLinkedBodies.AddRange(_TargetBodies);
            foreach (var targetBody in _TargetBodies)
            {
                targetBody.PropertyChanged += _TargetBody_PropertyChanged;

                _TargetAndLinkedBodies.AddRange(targetBody.GetReferencedBodies());
            }
            _TargetAndLinkedBodies = _TargetAndLinkedBodies.Distinct().ToList();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            _TranslateAction?.Stop();
            _RotateAction?.Stop();

            foreach (var targetBody in _TargetBodies)
            {
                targetBody.PropertyChanged -= _TargetBody_PropertyChanged;
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

        void _TargetBody_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (_UpdatingBodyProperties)
                return;

            if ((e.PropertyName == "Position") || (e.PropertyName == "Rotation"))
            {
                _RestartAction();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ComputeCoordinateSystem()
        {
            TopoDS_Shape ocShape;

            if ((_TargetBodies.Count == 1) || _Options.HasFlag(Options.MultiBodyUseFirst))
            {
                // Single body, or Multishape using pivot of first shape
                Body targetBody = _TargetBodies[0];
                ocShape = targetBody.Shape?.GetTransformedBRep();

                switch (_PivotPoint)
                {
                    case PivotPoint.BodyPivot:
                        _CoordinateSystem = targetBody.GetCoordinateSystem();
                        break;

                    case PivotPoint.BoundingCenter:
                        _CoordinateSystem = targetBody.GetCoordinateSystem();
                        if (ocShape != null)
                        {
                            _CoordinateSystem.Location = ocShape.BoundingBox().Center();
                        }
                        break;

                    case PivotPoint.MassCenter:
                        _CoordinateSystem = targetBody.GetCoordinateSystem();
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

                foreach (var targetBody in _TargetBodies)
                {
                    ocShape = targetBody.Shape?.GetTransformedBRep();
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

            if ((_TranslateAction != null) && !_TranslateAction.IsFinished)
            {
                _TranslateAction.Stop();
            }
            if ((_RotateAction != null) && !_RotateAction.IsFinished)
            {
                _RotateAction.Stop();
            }

            if (_Mode == Mode.Translate)
            {
                _TranslateAction = new TranslateAction(this, _CoordinateSystem);
                if (!WorkspaceController.StartToolAction(_TranslateAction, false))
                    return;
                StatusText = "Move body using gizmo, press 'CTRL' to round to grid stepping. Press 'T' for rotation.";
                _TranslateAction.Previewed += _OnActionPreview;
                _TranslateAction.Finished += _OnActionFinished;
            }
            else if (_Mode == Mode.Rotate)
            {
                _RotateAction = new RotateAction(this, _CoordinateSystem);
                if (!WorkspaceController.StartToolAction(_RotateAction, false))
                    return;
                StatusText = "Rotate body using gizmo, press 'CTRL' to round to 5°. Press 'T' for translation.";
                _RotateAction.Previewed += _OnActionPreview;
                _RotateAction.Finished += _OnActionFinished;
            }
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateTransformations(Trsf? transformation)
        {
            var bodyList = _Options.Has(Options.LinkForeignOperands) ? _TargetAndLinkedBodies : _TargetBodies;
            foreach (var targetBody in bodyList)
            {
                var visualShape = WorkspaceController.VisualShapes.GetVisualShape(targetBody);
                if (visualShape != null)
                {
                    visualShape.SetLocalTransformation(transformation);
                    WorkspaceController.Invalidate();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            _UpdatingBodyProperties = true;
            var bodyList = _Options.Has(Options.LinkForeignOperands) ? _TargetAndLinkedBodies : _TargetBodies;

            if (toolAction == _TranslateAction)
            {
                foreach (var targetBody in bodyList)
                {
                    targetBody.Translate(_TranslateAction.Delta);
                }
            }
            else if (toolAction == _RotateAction)
            {
                foreach (var targetBody in bodyList)
                {
                    targetBody.Rotate(_RotateAction.RotationAxis, _RotateAction.Delta);
                }
            }

            InteractiveContext.Current.UndoHandler.Commit();

            _UpdateTransformations(null);

            // Restart
            _RestartAction();

            _UpdatingBodyProperties = false;
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
               data.DetectedEntities.Count > 0 && !_TargetBodies.ContainsAny(data.DetectedEntities))
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

        public override void EnrichContextMenu(CustomMenuItems itemList)
        {
            itemList.AddSeparator("Pivot Point");

            itemList.AddCommand(WorkspaceCommands.SetTransformPivot, PivotPoint.BodyPivot);
            itemList.AddCommand(WorkspaceCommands.SetTransformPivot, PivotPoint.BoundingCenter);
            itemList.AddCommand(WorkspaceCommands.SetTransformPivot, PivotPoint.MassCenter);

            itemList.AddSeparator("Options");

            itemList.AddCommand(WorkspaceCommands.ToggleTransformOption, Options.MultiBodyUseFirst);
            itemList.AddCommand(WorkspaceCommands.ToggleTransformOption, Options.WorldSpaceOrientation);
            itemList.AddCommand(WorkspaceCommands.ToggleTransformOption, Options.LinkForeignOperands);
        }
    }
}