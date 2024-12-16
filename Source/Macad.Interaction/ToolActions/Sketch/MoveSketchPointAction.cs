using System.Collections.Generic;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;
using Macad.Interaction.Editors.Shapes;

namespace Macad.Interaction;

public class MoveSketchPointAction : ToolAction
{
    #region Events

    public class EventArgs
    {
        public List<int> Points { get; init; }
        public Vec2d MoveDelta { get; init; }
        public double RotateDelta { get; init; }
        public Pnt2d RotateCenter { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(MoveSketchPointAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    public bool IsMoving
    {
        get { return _Moving && _FirstDelta; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsRotating
    {
        get { return _Rotating && _FirstDelta; }
    }

    //--------------------------------------------------------------------------------------------------

    readonly SketchEditorTool _SketchEditorTool;
    Sketch _Sketch;
    Axis _AxisGizmoX;
    Axis _AxisGizmoY;
    Plane _PlaneGizmo;
    Circle _CircleGizmo;
    Pln _MovePlane;
    Pnt2d _Center2D;
    Pnt2d _Center2DOnWorkingPlane;
    Pnt2d _MoveStartPoint;
    double _RotateStartValue;
    Snap2D _SnapHandler;
    Coord2DHudElement _Coord2DHudElement;
    Delta2DHudElement _Delta2DHudElement;
    ValueHudElement _ValueHudElement;

    List<int> _Points;
    Vec2d _MoveDelta;
    double _RotateDelta;
    Pnt2d _RotateCenter;

    readonly List<Marker> _MergePreviewMarkers = new();

    bool _MoveConstraintX;
    bool _MoveConstraintY;
    bool _Moving;
    bool _Rotating;
    bool _FirstDelta;

    //--------------------------------------------------------------------------------------------------


    public MoveSketchPointAction(SketchEditorTool sketchEditorTool)
        : base()
    {
        _SketchEditorTool = sketchEditorTool;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        WorkspaceController.AisContext.UnhilightCurrents(false);
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        if (_Sketch != null)
        {
            _Sketch.ElementsChanged -= _Sketch_ElementsChanged;
        }

        Preview = null;
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetSketchElements(Sketch sketch, List<int> points)
    {
        _Sketch = sketch;
        _Sketch.ElementsChanged += _Sketch_ElementsChanged;
        _Points = points;

        _UpdateGizmos();
    }

    //--------------------------------------------------------------------------------------------------

    void _Sketch_ElementsChanged(Sketch sketch, Sketch.ElementType types)
    {
        if (types.HasFlag(Sketch.ElementType.Point))
        {
            // Check for lost points
            var lostPoints = _Points.Where(i => !_Sketch.Points.ContainsKey(i)).ToArray();
            foreach (var lostPoint in lostPoints)
            {
                _Points.Remove(lostPoint);
            }

            if (!_Points.Any())
            {
                EventArgs args = new()
                {
                    Points = _Points,
                    MoveDelta = _MoveDelta,
                    RotateDelta = _RotateDelta,
                    RotateCenter = _RotateCenter,
                    MouseEventData = null
                };
                Finished?.Invoke(this, args);
            }

            _UpdateGizmos();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateGizmos()
    {
        if(!_Points.Any())
            return;

        // Calc Center
        var center = new XY();
        _Points.ForEach(i => center.Add(_Sketch.Points[i].Coord));
        center.Divide(_Points.Count);
        _Center2D = center.ToPnt();

        // Project center point onto sketch plane
        var center3D = ElSLib.Value(center.X, center.Y, _Sketch.Plane);

        // Calculate center point on working plane
        if (_Sketch.Plane.Location.IsEqual(WorkspaceController.Workspace.WorkingPlane.Location, 0.00001))
        {
            _Center2DOnWorkingPlane = _Center2D;
        }
        else
        {
            double u = 0, v = 0;
            ElSLib.Parameters(WorkspaceController.Workspace.WorkingPlane, _Sketch.Plane.Location, ref u, ref v);
            _Center2DOnWorkingPlane = _Center2D.Translated(new Vec2d(u, v));
        }
             

        // Use plane from sketch, but translate it to center position
        _MovePlane = _Sketch.Plane;
        _MovePlane.Location = center3D;

        // Create Gizmos
        if (_AxisGizmoX == null)
        {
            _AxisGizmoX = new Axis(WorkspaceController, Axis.Style.KnobHead | Axis.Style.NoResize | Axis.Style.Topmost)
            {
                Color = Colors.ActionRed,
                IsSelectable = true,
                Width = 4.0,
                Length = 2.0,
                Margin = 0.25
            };
            Add(_AxisGizmoX);
        }
        _AxisGizmoX.Set(_MovePlane.XAxis);

        if (_AxisGizmoY == null)
        {
            _AxisGizmoY = new Axis(WorkspaceController, Axis.Style.KnobHead | Axis.Style.NoResize | Axis.Style.Topmost)
            {
                Color = Colors.ActionGreen,
                IsSelectable = true,
                Width = 4.0,
                Length = 2.0,
                Margin = 0.25
            };
            Add(_AxisGizmoY);
        }
        _AxisGizmoY.Set(_MovePlane.YAxis);
            
        if (_PlaneGizmo == null)
        {
            _PlaneGizmo = new Plane(WorkspaceController, Plane.Style.NoResize | Plane.Style.Topmost)
            {
                Color = Colors.ActionBlue,
                IsSelectable = true,
                Boundary = true,
                Size = new XY(1, 1),
                Margin = new Vec2d(0.75, 0.75),
                Transparency = 0.5
            };
            Add(_PlaneGizmo);
        }
        _PlaneGizmo.Set(_MovePlane);

        if (_Points.Count > 1)
        {
            if (_CircleGizmo == null)
            {
                _CircleGizmo = new Circle(WorkspaceController, Circle.Style.NoResize | Circle.Style.Topmost)
                {
                    Color = Colors.ActionBlue,
                    IsSelectable = true,
                    Radius = 1.0,
                };
                Add(_CircleGizmo);
            }
            _CircleGizmo.Limits = (Maths.PI - 0.6, Maths.PI * 1.5 + 0.6);
            _CircleGizmo.KnobPosition = Maths.PI * 1.25;
            _CircleGizmo.Set(_MovePlane.Position.ToAx2());
            _CircleGizmo.Sector = (0, 0);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ActivateGizmos(bool activate)
    {
        _AxisGizmoX.IsSelectable = activate;
        _AxisGizmoY.IsSelectable = activate;
        _PlaneGizmo.IsSelectable = activate;
        if (_CircleGizmo != null)
        {
            _CircleGizmo.IsSelectable = activate;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        if (data.DetectedAisObject != null)
        {
            double u = 0, v = 0;
            if (Equals(data.DetectedAisObject, _PlaneGizmo?.AisObject))
            {
                _MoveConstraintX = false;
                _MoveConstraintY = false;
                _PlaneGizmo.IsSelected = true;
                _Moving = true;
            }
            else if (Equals(data.DetectedAisObject, _AxisGizmoX?.AisObject))
            {
                _MoveConstraintX = false;
                _MoveConstraintY = true;
                _AxisGizmoX.IsSelected = true;
                _Moving = true;
            }
            else if (Equals(data.DetectedAisObject, _AxisGizmoY?.AisObject))
            {
                _MoveConstraintX = true;
                _MoveConstraintY = false;
                _AxisGizmoY.IsSelected = true;
                _Moving = true;
            }
            else if (_CircleGizmo != null && Equals(data.DetectedAisObject, _CircleGizmo.AisObject))
            {
                if (WorkspaceController.ActiveViewControlller.ScreenToPoint(_MovePlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out var resultPnt))
                {
                    var planeDelta = ProjLib.Project(_MovePlane, resultPnt);
                    _RotateStartValue = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord));

                    _CircleGizmo.IsSelected = true;
                    _RotateCenter = _Center2D;
                    _Rotating = true;
                }
            }

            if (!(_Moving || _Rotating))
                return false;

            ElSLib.Parameters(_Sketch.Plane, data.PointOnPlane, ref u, ref v);
            _MoveStartPoint = new Pnt2d(u, v);
            _FirstDelta = false;
            _ActivateGizmos(false);
            SetCursor(Cursors.Move);

            // Deactivate to prevent self-snapping
            _SketchEditorTool.Elements.Activate(true, true, false);
            _SketchEditorTool.Elements.PointElements.Where(element => _Points.Contains(element.PointIndex))
                                                    .ForEach(element => element.Activate(false));
            _SketchEditorTool.Elements.SegmentElements.Where(element => _Points.ContainsAny(element.Segment.Points))
                                                      .ForEach(element => element.Activate(false));
            
            _SnapHandler = SetSnapHandler(new Snap2D());
            _SnapHandler.SupportedModes = SnapModes.Grid | SnapModes.Edge | SnapModes.Vertex;
            _SnapHandler.Plane = _SketchEditorTool.Sketch.Plane;

            return true; // Supress Rubberband Selection
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (_Moving || _Rotating)
        {
            if (IsMoving || IsRotating) // Check if delta is significant
            {
                // Commit
                EventArgs args = new()
                {
                    Points = _Points,
                    MoveDelta = _MoveDelta,
                    RotateDelta = _RotateDelta,
                    RotateCenter = _RotateCenter,
                    MouseEventData = data
                };
                Finished?.Invoke(this, args);

                _MoveDelta = Vec2d.Zero;
                _RotateDelta = 0;

                // Re-Activate
                _SketchEditorTool.Elements.PointElements.Where(element => _Points.Contains(element.PointIndex))
                                                        .ForEach(element => element.Activate(true));
                _SketchEditorTool.Elements.Activate(true, true, true);
            }

            _Moving = false;
            _Rotating = false;

            _UpdateGizmos();
            _ActivateGizmos(true);
            _SnapHandler.SupportedModes = SnapModes.None;
            SetCursor(null);

            Remove(_Coord2DHudElement);
            _Coord2DHudElement = null;
            Remove(_Delta2DHudElement);
            _Delta2DHudElement = null;
            Remove(_ValueHudElement);
            _ValueHudElement = null;

            _MergePreviewMarkers.ForEach(m => Remove(m));
            _MergePreviewMarkers.Clear();

            RemoveSnapHandler();
            _SnapHandler = null;

            return true;
        }
        return base.OnMouseUp(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (_Moving)
        {
            // Get new point from parameters
            double u = 0, v = 0;
            ElSLib.Parameters(_Sketch.Plane, data.PointOnPlane, ref u, ref v);
            var newPoint = new Pnt2d(u, v);

            // Calc delta
            _MoveDelta = new Vec2d(newPoint.Coord.Subtracted(_MoveStartPoint.Coord));

            // Apply constraints
            _ApplyConstraints();
            if (data.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                var tempCoord = _Center2DOnWorkingPlane.Translated(_MoveDelta);
                tempCoord = new Pnt2d(Maths.RoundToNearest(tempCoord.X, WorkspaceController.Workspace.GridStep),
                                      Maths.RoundToNearest(tempCoord.Y, WorkspaceController.Workspace.GridStep));
                _MoveDelta = tempCoord.Translated(_Center2DOnWorkingPlane.ToVec().Reversed()).ToVec();
            }
            else
            {
                _Snap();
            }
            _ApplyConstraints();
                
            if (!_FirstDelta && _MoveDelta.Magnitude() > double.Epsilon)
            {
                _FirstDelta = true;
            }

            // Calc new 3D center
            var newPos3D = ElSLib.Value(_Center2D.X + _MoveDelta.X, _Center2D.Y + _MoveDelta.Y, _Sketch.Plane);
            _MovePlane.Location = newPos3D;
            _AxisGizmoX.Set(_MovePlane.XAxis);
            _AxisGizmoY.Set(_MovePlane.YAxis);
            _PlaneGizmo.Set(_MovePlane);
            _CircleGizmo?.Set(_MovePlane.Position.ToAx2());

            if (_Coord2DHudElement == null)
            {
                _Coord2DHudElement = new Coord2DHudElement();
                Add(_Coord2DHudElement);
            }
            _Coord2DHudElement.SetValues( _Center2DOnWorkingPlane.X + _MoveDelta.X, _Center2DOnWorkingPlane.Y + _MoveDelta.Y);

            if (_Delta2DHudElement == null)
            {
                _Delta2DHudElement = new Delta2DHudElement();
                Add(_Delta2DHudElement);
            }
            _Delta2DHudElement.SetValues(_MoveDelta.X, _MoveDelta.Y);
        }
        else if (_Rotating)
        {
            Pnt resultPnt;
            if (!WorkspaceController.ActiveViewControlller.ScreenToPoint(_MovePlane, (int)data.ScreenPoint.X, (int)data.ScreenPoint.Y, out resultPnt))
                return false;

            var planeDelta = ProjLib.Project(_MovePlane, resultPnt);
            _RotateDelta = Dir2d.DX.Angle(new Dir2d(planeDelta.Coord)) - _RotateStartValue;
            if (_RotateDelta > Maths.PI)
                _RotateDelta -= Maths.DoublePI;
            if (_RotateDelta < -Maths.PI)
                _RotateDelta += Maths.DoublePI;

            if (data.ModifierKeys.HasFlag(ModifierKeys.Control))
            {
                _RotateDelta = Maths.RoundToNearest(_RotateDelta, 5.0.ToRad());
            }

            if (!_FirstDelta && _RotateDelta.Abs() > double.Epsilon)
            {
                _FirstDelta = true;
            }

            if (_CircleGizmo != null)
            {
                _CircleGizmo.Sector = (_RotateStartValue, _RotateStartValue + _RotateDelta);
                _CircleGizmo.Limits = (0, 0);
                _CircleGizmo.KnobPosition = Maths.PI * 1.25 + _RotateDelta;
            }
                
            if (_ValueHudElement == null)
            {
                _ValueHudElement = new ValueHudElement()
                {
                    Units = ValueUnits.Degree
                };
                Add(_ValueHudElement);
            }

            _ValueHudElement.SetValue(_RotateDelta.ToDeg());
        }

        if (_Moving || _Rotating)
        {
            // Check for point merge candidates
            _MergePreviewMarkers.ForEach(m => Remove(m));
            _MergePreviewMarkers.Clear();
            var mergeCandidates = CheckMergePoints(true);
            if (mergeCandidates != null)
            {
                foreach (var candidate in mergeCandidates)
                {
                    var point = _Sketch.Points[candidate.Value];
                    var geomPoint = new Geom_CartesianPoint(point.X, point.Y, 0);
                    geomPoint.Transform(_Sketch.GetTransformation());
                    var marker = new Marker(WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.RingImage)
                    {
                        Color = Colors.Highlight
                    };
                    marker.Set(geomPoint);
                    Add(marker);
                    _MergePreviewMarkers.Add(marker);
                }
            }

            data.Return.ForceReDetection = true;
            data.Return.RemoveHighlighting = true;

            EventArgs args = new()
            {
                Points = _Points,
                MoveDelta = _MoveDelta,
                RotateDelta = _RotateDelta,
                RotateCenter = _RotateCenter,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);
        }

        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    void _ApplyConstraints()
    {
        if (_MoveConstraintX)
            _MoveDelta = new Vec2d(0, _MoveDelta.Y);
        if (_MoveConstraintY)
            _MoveDelta = new Vec2d(_MoveDelta.X, 0);
    }

    //--------------------------------------------------------------------------------------------------

    void _Snap()
    {
        var snapCount = InteractiveContext.Current.Parameters.Get<SketchEditorParameterSet>().MaximumPointCountSnapping;
        var points = _Points.Take(snapCount).Select(index => _Sketch.Points[index].Translated(_MoveDelta)).ToList();
        var snapInfo = _SnapHandler.Snap(points, out var snappedPointListIndex);
        if (snapInfo.Mode != SnapModes.None)
        {
            int pointIndex = _Points[snappedPointListIndex];
            snapInfo.TargetName = $"Pnt #{pointIndex}" + (snapInfo.TargetName != null ? $" on {snapInfo.TargetName}" : "");

            Vec2d snapDelta = new(points[snappedPointListIndex], snapInfo.Point);
            _MoveDelta += snapDelta;
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal Dictionary<int, int> CheckMergePoints(bool applyDelta)
    {
        var snapCount = InteractiveContext.Current.Parameters.Get<SketchEditorParameterSet>().MaximumPointCountSnapping;
        if (_Points.Count > snapCount)
            return null;

        Dictionary<int, int> mergeCandidates = new();
        double mergeDistance = WorkspaceController.ActiveViewControlller.GizmoScale * 0.2; 
        HashSet<int> pointSet = [.._Points];

        foreach (var point in _Points)
        {
            var movedPoint = _Sketch.Points[point];
            if (applyDelta)
            {
                if (IsMoving)
                    movedPoint = movedPoint.Translated(_MoveDelta);
                if (IsRotating)
                    movedPoint = movedPoint.Rotated(_RotateCenter, _RotateDelta);
            }
                
            // Distance to other points
            foreach (var pointKvp in _Sketch.Points)
            {
                if (!pointSet.Contains(pointKvp.Key))
                {
                    var distance = pointKvp.Value.Distance(movedPoint);
                    if (distance < mergeDistance)
                    {
                        if (!mergeCandidates.ContainsKey(point))
                        {
                            mergeCandidates.Add(point, pointKvp.Key);
                        }
                    }
                }
            }
        }

        return mergeCandidates;
    }

    //--------------------------------------------------------------------------------------------------

}