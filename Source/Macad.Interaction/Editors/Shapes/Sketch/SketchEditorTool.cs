using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchEditorTool : Tool
    {
        #region Constants

        const string UnselectedStatusText = "";
        const string MixedSelectedStatusText = "Multiple items selected.";
        const string SegmentSelectedStatusText = "Segment {0} selected.";
        const string MultiSegmentSelectedStatusText = "Multiple Segments ({0}) selected.";
        const string PointSelectedStatusText = "Point {0} selected.";
        const string MultiPointSelectedStatusText = "Multiple Points ({0}) selected.";
        const string ConstraintSelectedStatusText = "Constraint {0} selected.";
        const string MultiConstraintSelectedStatusText = "Multiple Constraints ({0}) selected.";

        #endregion

        #region Public Properties

        public ISketchTool CurrentTool
        {
            get { return _CurrentTool; }
            set
            {
                _CurrentTool = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool ContinuesSegmentCreation { get { return _ContinuesSegmentCreation; } }

        public Sketch Sketch { get; private set; }
        public Trsf Transform { get; private set; } = Trsf.Identity;

        public SketchEditElements Elements { get; }

        //--------------------------------------------------------------------------------------------------

        public List<int> SelectedSegmentIndices { get; private set; }
        public List<SketchSegment> SelectedSegments
        {
            get { return _SelectedSegments; }
            private set
            {
                _SelectedSegments = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public List<SketchConstraint> SelectedConstraints
        {
            get { return _SelectedConstraints; }
            private set
            {
                _SelectedConstraints = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public List<int> SelectedPoints
        {
            get { return _SelectedPoints; }
            private set
            {
                _SelectedPoints = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool ClipPlaneEnabled
        {
            get { return _ClipPlane != null; }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member

        SelectionContext _SelectionContext;
        Dictionary<int, Pnt2d> _TempPoints;
        double _LastGizmoScale;
        double _LastPixelSize;
        double[] _SavedViewParameters;
        double _ViewRotation;
        ClipPlane _ClipPlane;

        SelectSketchElementAction _SelectAction;
        MoveSketchPointAction _MoveAction;
        ISketchTool _CurrentTool;
        bool _ContinuesSegmentCreation;
        List<int> _SelectedPoints;
        List<SketchSegment> _SelectedSegments;
        List<SketchConstraint> _SelectedConstraints;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Tool Implementation

        public SketchEditorTool(Sketch sketch)
        {
            Sketch = sketch;
            Debug.Assert(Sketch != null);
            Elements = new SketchEditElements(this);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _SelectionContext = WorkspaceController.Selection.OpenContext(SelectionContext.Options.NewSelectedList);
            var workspace = WorkspaceController.Workspace;

            var editorSettings = SketchEditorSettingsCache.GetOrCreate(Sketch);

            if(editorSettings.WorkingContext == null)
            {
                editorSettings.WorkingContext = workspace.WorkingContext.Clone();
            } 
            
            workspace.WorkingContext = editorSettings.WorkingContext;
            WorkspaceController.LockWorkingPlane = true;
            workspace.WorkingPlane = Sketch.Plane;

            var vc = WorkspaceController.ActiveViewControlller;
            _SavedViewParameters = vc.Viewport.GetViewParameters();
            vc.LockedToPlane = true;
            
            if (editorSettings.ViewParameters != null)
            {
                vc.Viewport.RestoreViewParameters(editorSettings.ViewParameters);
                // Update direction
                vc.SetPredefinedView(ViewportController.PredefinedViews.WorkingPlane);
                RotateView(editorSettings.ViewRotation);
            } else {
                _CenterView();
            }
            vc.Viewport.PropertyChanged += _Viewport_PropertyChanged;

            EnableClipPlane(editorSettings.ClipPlaneEnabled);

            if (Sketch.IsVisible)
            {
                var visualSketchShape = WorkspaceController.VisualObjects.Get(Sketch.Body, true) as VisualShape;
                if (visualSketchShape != null)
                    visualSketchShape.IsHidden = true;
            }

            _LastGizmoScale = WorkspaceController.ActiveViewport.GizmoScale;

            _TempPoints = new Dictionary<int, Pnt2d>(Sketch.Points);
            Transform = Sketch.GetTransformation();

            Elements.InitElements(_TempPoints);
            _UpdateSelections();

            Sketch.ElementsChanged += _Sketch_ElementsChanged;

            _SelectAction = new SelectSketchElementAction(this);
            if (!WorkspaceController.StartToolAction(_SelectAction))
                return false;
            _SelectAction.Finished += _OnSelectionChanged;

            StatusText = UnselectedStatusText;

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            if (CurrentTool != null)
            {
                StopTool();
            }

            if (Sketch != null)
            {
                if (Sketch.IsVisible)
                {
                    var visualSketchShape = WorkspaceController.VisualObjects.Get(Sketch.Body) as VisualShape;
                    if (visualSketchShape != null)
                        visualSketchShape.IsHidden = false;
                }

                Sketch.ElementsChanged -= _Sketch_ElementsChanged;
            }

            WorkspaceController.Selection.CloseContext(_SelectionContext);
            _SelectionContext = null;

            Elements.RemoveAll();

            WorkspaceController.Workspace.WorkingContext = null;
            WorkspaceController.LockWorkingPlane = false;

            var vc = WorkspaceController.ActiveViewControlller;
            if (Sketch != null)
            {
                var editorSettings = SketchEditorSettingsCache.GetOrCreate(Sketch);
                editorSettings.ViewParameters = vc.Viewport.GetViewParameters();
                editorSettings.ViewRotation = _ViewRotation;
                editorSettings.ClipPlaneEnabled = ClipPlaneEnabled;
            }

            vc.Viewport.PropertyChanged -= _Viewport_PropertyChanged;
            vc.LockedToPlane = false;
            if (_SavedViewParameters != null)
            {
                vc.Viewport.RestoreViewParameters(_SavedViewParameters);
            }

            EnableClipPlane(false);

            WorkspaceController.Invalidate();

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Cancel(bool force)
        {
            if (CurrentTool != null)
            {
                StopTool();
                if(!force)
                    return false;
            }

            return base.Cancel(force);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool PrepareUndo()
        {
            // override base behaviour of closing our tool
            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Viewport_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(Viewport.PixelSize))
            {
                Elements.OnGizmoScaleChanged(_TempPoints, Sketch.Segments);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            // Check if we need to scale the trihedron
            if (!_LastGizmoScale.IsEqual(WorkspaceController.ActiveViewport.GizmoScale, 0.001)
                || !_LastPixelSize.IsEqual(WorkspaceController.ActiveViewport.PixelSize, 0.001))
            {
                _LastGizmoScale = WorkspaceController.ActiveViewport.GizmoScale;
                _LastPixelSize = WorkspaceController.ActiveViewport.PixelSize;
                //Debug.WriteLine("Gizmo scaled, last is " + _LastGizmoScale);
                Elements.OnGizmoScaleChanged(_TempPoints, Sketch.Segments);
                data.ForceReDetection = true;
            }

            return base.OnMouseMove(data);
        }

        //--------------------------------------------------------------------------------------------------

        public void RotateView(double degree)
        {
            _ViewRotation = Maths.NormalizeAngleDegree(_ViewRotation + degree);
            double twist = Maths.NormalizeAngleDegree(WorkspaceController.ActiveViewport.Twist + degree);
            WorkspaceController.ActiveViewport.Twist = twist;
            Elements.OnViewRotated(_TempPoints, Sketch.Segments);
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _CenterView()
        {
            // Set look at point
            var centerPnt = Sketch.GetTransformation().TranslationPart();
            WorkspaceController.ActiveViewport.TargetPoint = centerPnt.ToPnt();

            // Update direction
            WorkspaceController.ActiveViewControlller.SetPredefinedView(ViewportController.PredefinedViews.WorkingPlane);
        }

        //--------------------------------------------------------------------------------------------------
        
        public void EnableClipPlane(bool enable)
        {
            if (enable)
            {
                if (_ClipPlane != null)
                    return;
                
                var sketchPlane = Sketch.Plane;
                var reversedPlane = new Pln(new Ax3(sketchPlane.Location, sketchPlane.Axis.Direction.Reversed()));
                
                // Try to find a clip plane distance which does not screw up the grid
                var dir = sketchPlane.Axis.Direction;
                double offset = -0.00011;
                double isPp = Math.Max(dir.X.Abs(), Math.Max(dir.Y.Abs(), dir.Z.Abs()));
                if (isPp < 1.0)
                {
                    offset -= 0.0001 / isPp;
                }
                reversedPlane.Translate(reversedPlane.Axis.Direction.ToVec(offset));

                _ClipPlane = new ClipPlane(reversedPlane);
                _ClipPlane.AddViewport(WorkspaceController.ActiveViewport);
                WorkspaceController.Invalidate();
                RaisePropertyChanged(nameof(ClipPlaneEnabled));
            }
            else
            {
                if (_ClipPlane == null)
                    return;
                
                _ClipPlane.Remove();
                _ClipPlane = null;
                WorkspaceController.Invalidate();
                RaisePropertyChanged(nameof(ClipPlaneEnabled));
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(ContextMenuItems itemList)
        {
            void __AddIfExecutable(IActionCommand command, object param)
            {
                if (command.CanExecute(param))
                {
                    itemList.AddCommand(command, param);
                }
            }

            //--------------------------------------------------------------------------------------------------

            itemList.AddCommand(SketchCommands.CloseSketchEditor, null);

            itemList.AddGroup("Create Segment");
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Line);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.PolyLine);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Bezier2);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Bezier3);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Circle);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.ArcCenter);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.ArcRim);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.EllipseCenter);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.EllipticalArcCenter);
            itemList.AddCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Rectangle);
            itemList.CloseGroup();

            itemList.AddGroup("Create Constraint");
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Fixed);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.LineLength);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Angle);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.CircleRadius);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Equal);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Perpendicular);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Parallel);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Concentric);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Horizontal);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Vertical);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.HorizontalDistance);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.VerticalDistance);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.Tangent);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.PointOnSegment);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.PointOnMidpoint);
            __AddIfExecutable(SketchCommands.CreateConstraint, SketchCommands.Constraints.SmoothCorner);
            itemList.CloseGroup();

            itemList.AddCommand(SketchCommands.SplitElement);
            itemList.AddCommand(SketchCommands.WeldElements);

            itemList.AddGroup("Convert Segment");
            __AddIfExecutable(SketchCommands.ConvertSegment, SketchCommands.Segments.Line);
            __AddIfExecutable(SketchCommands.ConvertSegment, SketchCommands.Segments.Bezier);
            __AddIfExecutable(SketchCommands.ConvertSegment, SketchCommands.Segments.Arc);
            __AddIfExecutable(SketchCommands.ConvertSegment, SketchCommands.Segments.EllipticalArc);
            itemList.CloseGroup();

            itemList.AddCommand(SketchCommands.RecenterGrid);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Selection

        void _OnSelectionChanged(ToolAction toolAction)
        {
            if (CurrentTool != null)
                return;

            if (_MoveAction != null)
            {
                _MoveAction.Stop();
                _MoveAction = null;
            }

            _UpdateSelections();

            if (SelectedSegments.Any() || SelectedPoints.Any())
            {
                _MoveAction = new MoveSketchPointAction(this);
                if (!WorkspaceController.StartToolAction(_MoveAction, false))
                    return;
                _MoveAction.Previewed += _OnMoveActionPreview;
                _MoveAction.Finished += _OnMoveActionFinished;

                var segPoints = SelectedSegments.SelectMany(seg => seg.Points);
                _MoveAction.SetSketchElements(Sketch, SelectedPoints.Union(segPoints).ToList());
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateSelections()
        {
            SelectedPoints = Elements.GetSelectedPointIndices().ToList();
            SelectedSegments = Elements.GetSelectedSegments().ToList();
            SelectedSegmentIndices = Elements.GetSelectedSegmentIndices().ToList();
            SelectedConstraints = Elements.GetSelectedConstraints().ToList();
            _UpdateStatusText();
        }

        //--------------------------------------------------------------------------------------------------

        public void Select(IEnumerable<int> pointIndices, IEnumerable<int> segmentIndices)
        {
            Elements.Select(pointIndices, segmentIndices);
            _OnSelectionChanged(null);
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateStatusText()
        {

            if (SelectedSegments.Any() && !SelectedPoints.Any() && !SelectedConstraints.Any())
            {
                StatusText = SelectedSegments.Count == 1 ? string.Format(SegmentSelectedStatusText, SelectedSegments[0].GetType().Name) : string.Format(MultiSegmentSelectedStatusText, SelectedSegments.Count);
            }
            else if (!SelectedSegments.Any() && SelectedPoints.Any() && !SelectedConstraints.Any())
            {
                StatusText = SelectedPoints.Count == 1 ? string.Format(PointSelectedStatusText, SelectedPoints[0]) : string.Format(MultiPointSelectedStatusText, SelectedPoints.Count);
            }
            else if (!SelectedSegments.Any() && !SelectedPoints.Any() && SelectedConstraints.Any())
            {
                StatusText = SelectedConstraints.Count == 1 ? string.Format(ConstraintSelectedStatusText, SelectedConstraints[0].GetType().Name) : string.Format(MultiConstraintSelectedStatusText, SelectedConstraints.Count);
            }
            else
                if (SelectedSegments.Any() || SelectedPoints.Any() || SelectedConstraints.Any())
                {
                    StatusText = MixedSelectedStatusText;
                }
                else
                {
                    StatusText = UnselectedStatusText;
                }
        }

        //--------------------------------------------------------------------------------------------------

        void _Sketch_ElementsChanged(Sketch sketch, Sketch.ElementType types)
        {
            if (sketch != Sketch)
                return;

            // Check for new ones
            if (types.HasFlag(Sketch.ElementType.Point))
            {
                // Take over new points
                _TempPoints = new Dictionary<int, Pnt2d>(Sketch.Points);
            }

            Elements.OnSketchChanged(Sketch, types);
            _UpdateSelections();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Movement

        Dictionary<int, Pnt2d> _ApplyMoveDelta(IEnumerable<int> points, Vec2d moveDelta)
        {
            foreach (var pointIndex in points)
            {
                _TempPoints[pointIndex] = Sketch.Points[pointIndex].Translated(moveDelta);
            }

            SketchConstraintSolver.Solve(Sketch, _TempPoints, false);
            Elements.OnPointsChanged(_TempPoints, Sketch.Segments);
            WorkspaceController.Invalidate();

            //Debug.WriteLine("ApplyMoveDelta");

            return _TempPoints;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnMoveActionPreview(ToolAction toolAction)
        {
            if (CurrentTool != null)
                return;

            if (_MoveAction.MoveDelta.Magnitude() > Double.Epsilon)
            {
                _ApplyMoveDelta(_MoveAction.Points, _MoveAction.MoveDelta);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnMoveActionFinished(ToolAction toolAction)
        {
            if (CurrentTool != null)
                return;

            if (!_MoveAction.Points.Any())
            {
                // MoveAction has lost all it's point, stop it now
                _MoveAction.Stop();
                _MoveAction = null;
                WorkspaceController.Invalidate();
                return;
            }

            if (_MoveAction.MoveDelta.Magnitude() > 0)
            {
                Sketch.Points = new Dictionary<int, Pnt2d>(_ApplyMoveDelta(_MoveAction.Points, _MoveAction.MoveDelta));

                // Check if points can be merged, and merge them
                var mergeCandidates = _MoveAction.CheckMergePoints(Vec2d.Zero);

                if (mergeCandidates.Any())
                {
                    var pointString = mergeCandidates.Select(mc => String.Format("({0},{1})", mc.Value, mc.Key)).ToList().Join(", ");
                    if (MessageBox.Show(Application.Current.MainWindow, "Merge this points?\n " + pointString, "Merge points", MessageBoxButton.YesNo, MessageBoxImage.Question, MessageBoxResult.Yes) == MessageBoxResult.Yes)
                    {
                        // Do merge
                        foreach (var mc in mergeCandidates)
                        {
                            Sketch.MergePoints(mc.Value, mc.Key);
                        }
                    }
                }

                // Run solver 
                Sketch.SolveConstraints(true);

                // Commit changes
                InteractiveContext.Current.UndoHandler.Commit();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Segment Creation

        public bool StartSegmentCreation<T>(bool continuesCreation = false) where T : ISketchSegmentCreator, new()
        {
            Select(null, null);
            StopTool();

            T newCreator = new T();

            if (!newCreator.Start(this))
                return false;

            _ContinuesSegmentCreation = continuesCreation;
            CurrentTool = newCreator;
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void FinishSegmentCreation(Dictionary<int, Pnt2d> points, int[] mergePointIndices, IEnumerable<SketchSegment> segments, IEnumerable<SketchConstraint> constraints, int continueWithPoint = -1)
        {
            var (pointMap, segmentMap, _) = Sketch.AddElements(points, mergePointIndices, segments.ToIndexedDictionary(), constraints);
            InteractiveContext.Current.UndoHandler.Commit();
            WorkspaceController.UpdateSelection();

            if (_ContinuesSegmentCreation && continueWithPoint >= 0 && pointMap.ContainsKey(continueWithPoint))
            {
                (CurrentTool as ISketchSegmentCreator)?.Continue(pointMap[continueWithPoint]);
            }
            else
            {
                StopTool();
                Elements.DeselectAll();
                Elements.Select(null, segmentMap.Values);
                _OnSelectionChanged(null);
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Constraint Creation

        public bool CanCreateConstraint<T>() where T : SketchConstraint
        {
            // Don't allow constraint creation if any constraint is selected
            if (SelectedConstraints != null && SelectedConstraints.Any())
                return false;

            return SketchConstraintCreator.CanCreate<T>(Sketch, SelectedPoints, SelectedSegmentIndices);
        }

        //--------------------------------------------------------------------------------------------------

        public List<SketchConstraint> CreateConstraint<T>() where T : SketchConstraint
        {
            if (!CanCreateConstraint<T>())
                return null;

            var constraints = SketchConstraintCreator.Create<T>(Sketch, SelectedPoints, SelectedSegmentIndices);
            if (constraints != null)
            {
                Sketch.AddElements(null, null, null, constraints);
                Sketch.SolveConstraints(false);
                Sketch.SolveConstraints(true);
                InteractiveContext.Current.UndoHandler.Commit();

                _MoveAction?.Stop();
                Elements.DeselectAll();
                Elements.Select(constraints);
                _UpdateSelections();
            }

            return constraints;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Delete, Duplicate, Clipboard

        const string ClipboardContentFormat = "Macad.SketchContent.1";

        [SerializeType]
        class SketchCloneContent
        {
            [SerializeMember]
            internal Dictionary<int, Pnt2d> Points { get; set; }
            [SerializeMember]
            internal Dictionary<int, SketchSegment> Segments { get; set; }
            [SerializeMember]
            internal SketchConstraint[] Constraints { get; set; }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool CanDelete()
        {
            return SelectedPoints?.Count > 0 || SelectedSegments?.Count > 0 || SelectedConstraints?.Count > 0;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Delete()
        {
            SelectedConstraints.ForEach(c => Sketch.DeleteConstraint(c));
            SelectedSegments.ForEach(s => Sketch.DeleteSegment(s));
            SelectedPoints.ForEach(p => SketchUtils.DeletePointTrySubstituteSegments(Sketch, p));

            Sketch.SolveConstraints(true);
            InteractiveContext.Current.UndoHandler.Commit();

            Select(null, null);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool CanDuplicate()
        {
            return SelectedSegments?.Count > 0;
        }

        //--------------------------------------------------------------------------------------------------

        SketchCloneContent _CreateCloneContentFromSelection()
        {
            var segmentDict = SelectedSegmentIndices.ToDictionary(index => index, index => Sketch.Segments[index]);
            var pointIndices = SelectedSegments.SelectMany(seg => seg.Points).Distinct().ToArray();
            var pointDict = pointIndices.ToDictionary(index => index, index => Sketch.Points[index]);
            var constraints = Sketch.Constraints.Where(constraint =>
                                                           (constraint.Points == null || pointIndices.ContainsAll(constraint.Points))
                                                           && (constraint.Segments == null || SelectedSegmentIndices.ContainsAll(constraint.Segments))).ToArray();

            return new SketchCloneContent
            {
                Points = pointDict,
                Segments = segmentDict,
                Constraints = constraints
            };
        }

        //--------------------------------------------------------------------------------------------------

        void _ApplyCloneContent(in SketchCloneContent content)
        {
            var (pointMap, segmentMap, _) = Sketch.AddElements(content.Points, null, content.Segments, content.Constraints);
            Sketch.SolveConstraints(true);
            InteractiveContext.Current.UndoHandler.Commit();

            Select(pointMap.Values.Distinct(), segmentMap.Values.Distinct());
        }

        //--------------------------------------------------------------------------------------------------

        public override void Duplicate()
        {
            if (!CanDuplicate())
                return;

            var content = _CreateCloneContentFromSelection();
            var serialized = Serializer.Serialize(content, new SerializationContext(SerializationScope.CopyPaste));
            if (serialized.IsNullOrEmpty())
                return;

            var copiedContent = Serializer.Deserialize<SketchCloneContent>(serialized, new SerializationContext(SerializationScope.CopyPaste));
            _ApplyCloneContent(copiedContent);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool CanCopyToClipboard()
        {
            return CanDuplicate();
        }

        //--------------------------------------------------------------------------------------------------

        public override void CopyToClipboard()
        {
            if (!CanCopyToClipboard())
                return;

            var content = _CreateCloneContentFromSelection();
            var serialized = Serializer.Serialize(content, new SerializationContext(SerializationScope.CopyPaste));
            if (serialized.IsNullOrEmpty())
                return;

            Core.Clipboard.Current?.SetData(ClipboardContentFormat, serialized);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool CanPasteFromClipboard()
        {
            return Core.Clipboard.Current?.ContainsData(ClipboardContentFormat) ?? false;
        }

        //--------------------------------------------------------------------------------------------------

        public override IEnumerable<InteractiveEntity> PasteFromClipboard()
        {
            var serialized = Core.Clipboard.Current?.GetDataAsString(ClipboardContentFormat);
            if (serialized == null)
                return null;

            var copiedContent = Serializer.Deserialize<SketchCloneContent>(serialized, new SerializationContext(SerializationScope.CopyPaste));
            _ApplyCloneContent(copiedContent);
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Tools

        public void StartTool(ISketchTool tool)
        {
            StopTool();

            if (tool.Start(this))
            {
                _MoveAction?.Stop();
                _MoveAction = null;
                CurrentTool = tool;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void StopTool()
        {
            CurrentTool?.Stop();
            CurrentTool = null;
            _ContinuesSegmentCreation = false;

            // Update activation, since we have switched the local context
            Elements.Activate(true, true, true);
            _OnSelectionChanged(null);
            _UpdateStatusText();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
