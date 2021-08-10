using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Occt.Ext;

namespace Macad.Interaction
{
    public class MoveSketchPointAction : ToolAction
    {
        public List<int> Points { get; private set; }
        public Vec2d MoveDelta { get; private set; }

        public bool IsMoving
        {
            get { return _Moving && (MoveDelta != Vec2d.Zero); }
        }

        //--------------------------------------------------------------------------------------------------

        public override SnapMode SupportedSnapModes => SnapMode.Grid | SnapMode.Vertex;

        //--------------------------------------------------------------------------------------------------

        Sketch _Sketch;
        AIS_TranslationGizmo2D Gizmo;
        Geom_Plane _GizmoPlane;
        Geom_Plane _GeomPlane;
        Pnt2d _Center2D;
        Pnt2d _Center2DOnWorkingPlane;
        Pnt2d _MoveStartPoint;
        Coord2DHudElement _Coord2DHudElement;
        Delta2DHudElement _Delta2DHudElement;

        readonly List<Marker> _MergePreviewMarkers = new List<Marker>();

        bool _MoveConstraintX;
        bool _MoveConstraintY;
        bool _Moving;

        //--------------------------------------------------------------------------------------------------


        public MoveSketchPointAction(object owner)
            : base(owner)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            WorkspaceController.Workspace.AisContext.UnhilightCurrents(false);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void SetSketchElements(Sketch sketch, List<int> points)
        {
            _Sketch = sketch;
            _Sketch.ElementsChanged += _Sketch_ElementsChanged;
            Points = points;

            _UpdateTrihedron();
        }

        //--------------------------------------------------------------------------------------------------

        void _Sketch_ElementsChanged(Sketch sketch, Sketch.ElementType types)
        {
            if (types.HasFlag(Sketch.ElementType.Point))
            {
                // Check for lost points
                var lostPoints = Points.Where(i => !_Sketch.Points.ContainsKey(i)).ToArray();
                foreach (var lostPoint in lostPoints)
                {
                    Points.Remove(lostPoint);
                }

                if (!Points.Any())
                {
                    RaiseFinished();
                }

                _UpdateTrihedron();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateTrihedron()
        {
            if(!Points.Any())
                return;

            // Calc Center
            var center = new XY();
            Points.ForEach(i => center.Add(_Sketch.Points[i].Coord));
            center.Divide(Points.Count);
            _Center2D = center.ToPnt();

            //Debug.WriteLine("MoveSketchPointAction - Center {0} {1}", center.X(), center.Y());

            // Project center point onto sketch plane
            var center3D = ElSLib.Value(center.X, center.Y, _Sketch.Plane);
            //Debug.WriteLine("MoveSketchPointAction - Center3D {0} {1} {2}", center3D.X(), center3D.Y(), center3D.Z());

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
            var plane = _Sketch.Plane;
            plane.Location = center3D;
            _GizmoPlane = new Geom_Plane(plane);
            _GeomPlane = new Geom_Plane(plane);

            // Create Gizmo
            if (Gizmo == null)
            {
                Gizmo = new AIS_TranslationGizmo2D(_GizmoPlane);
                Gizmo.SetLength(100);
                WorkspaceController.Workspace.AisContext.Display(Gizmo, false);
            }
            else
            {
                Gizmo.SetComponent(_GeomPlane);
                WorkspaceController.Workspace.AisContext.Redisplay(Gizmo, false);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            Gizmo?.Remove();

            WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
            WorkspaceController.HudManager?.RemoveElement(_Delta2DHudElement);
            _Coord2DHudElement = null;

            _MergePreviewMarkers.ForEach(m => m.Remove());
            _MergePreviewMarkers.Clear();

            if (_Sketch != null)
            {
                _Sketch.ElementsChanged -= _Sketch_ElementsChanged;
            }

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseDown(MouseEventData data)
        {
            if (data.DetectedEntities.Count == 0)
            {
                double u = 0, v = 0;
                if (Gizmo.IsPartDetected(AIS_TranslationGizmo2D.Part.Part_Plane))
                {
                    _MoveConstraintX = false;
                    _MoveConstraintY = false;
                    _Moving = true;
                }
                else if (Gizmo.IsPartDetected(AIS_TranslationGizmo2D.Part.Part_XAxis))
                {
                    _MoveConstraintX = false;
                    _MoveConstraintY = true;
                    _Moving = true;
                }
                else if (Gizmo.IsPartDetected(AIS_TranslationGizmo2D.Part.Part_YAxis))
                {
                    _MoveConstraintX = true;
                    _MoveConstraintY = false;
                    _Moving = true;
                }
                if (_Moving)
                {
                    ElSLib.Parameters(_Sketch.Plane, data.PointOnPlane, ref u, ref v);
                    _MoveStartPoint = new Pnt2d(u, v);
                    return true;
                }
            }
            return base.OnMouseDown(data);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data, bool shiftSelected)
        {
            if (_Moving)
            {
                _Moving = false;

                if (MoveDelta != Vec2d.Zero)
                {
                    // Commit
                    RaiseFinished();
                    MoveDelta = Vec2d.Zero;

                    // Set new center
                    _UpdateTrihedron();
                }

                WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
                _Coord2DHudElement = null;
                WorkspaceController.HudManager?.RemoveElement(_Delta2DHudElement);
                _Coord2DHudElement = null;

                _MergePreviewMarkers.ForEach(m => m.Remove());
                _MergePreviewMarkers.Clear();

                return true;
            }
            return base.OnMouseUp(data, shiftSelected);
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
                MoveDelta = new Vec2d(newPoint.Coord.Subtracted(_MoveStartPoint.Coord));

                // Apply constraints
                ApplyConstraints();
                Snap();
                ApplyConstraints();

                // Calc new 3D center
                var newPos3D = ElSLib.Value(_Center2D.X + MoveDelta.X, _Center2D.Y + MoveDelta.Y, _Sketch.Plane);
                _GizmoPlane.SetLocation(newPos3D);
                Gizmo.SetComponent(_GizmoPlane);

                // Check for point merge candidates
                _MergePreviewMarkers.ForEach(m => m.Remove());
                _MergePreviewMarkers.Clear();
                foreach (var candidate in CheckMergePoints(MoveDelta))
                {
                    var point = _Sketch.Points[candidate.Value];
                    var geomPoint = new Geom_CartesianPoint(point.X, point.Y, 0);
                    geomPoint.Transform(_Sketch.GetTransformation());
                    var marker = new Marker(WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.RingImage);
                    marker.Set(geomPoint);
                    marker.SetColor(Colors.Highlight);
                    _MergePreviewMarkers.Add(marker);
                }

                data.ForceReDetection = true;

                _Coord2DHudElement ??= WorkspaceController.HudManager?.CreateElement<Coord2DHudElement>(this);
                _Coord2DHudElement?.SetValues( _Center2DOnWorkingPlane.X + MoveDelta.X, _Center2DOnWorkingPlane.Y + MoveDelta.Y);

                _Delta2DHudElement ??= WorkspaceController.HudManager?.CreateElement<Delta2DHudElement>(this);
                _Delta2DHudElement?.SetValues(MoveDelta.X, MoveDelta.Y);
            }

            return base.OnMouseMove(data);
        }

        //--------------------------------------------------------------------------------------------------

        void ApplyConstraints()
        {
            if (_MoveConstraintX)
                MoveDelta = new Vec2d(0, MoveDelta.Y);
            if (_MoveConstraintY)
                MoveDelta = new Vec2d(MoveDelta.X, 0);
        }

        //--------------------------------------------------------------------------------------------------

        void Snap()
        {
            double snapDistance = Double.MaxValue;
            Vec2d snapDelta = MoveDelta;

            foreach (var point in Points)
            {
                var movedPoint = _Sketch.Points[point].Translated(MoveDelta);

                // Calc snapping position and distance to grid
                var snapInfo = SketchToolHelper.Snap(movedPoint, _Sketch);
                if (snapInfo.Distance < snapDistance)
                {
                    // This point snaps closer
                    snapDistance = snapInfo.Distance;
                    snapDelta = new Vec2d(snapInfo.Point.Coord.Subtracted(_Sketch.Points[point].Coord));
                }
            }

            if (snapDistance <  WorkspaceController.ActiveViewport.GizmoScale*0.2)
            {
                MoveDelta = snapDelta;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public Dictionary<int, int> CheckMergePoints(Vec2d moveDelta)
        {
            double mergeDistance = WorkspaceController.ActiveViewport.GizmoScale * 0.2; 
            var mergeCandidates = new Dictionary<int, int>();

            foreach (var point in Points)
            {
                var movedPoint = _Sketch.Points[point];
                if (moveDelta != Vec2d.Zero)
                    movedPoint = movedPoint.Translated(moveDelta);

                // Distance to other points
                foreach (var pointKvp in _Sketch.Points)
                {
                    if (!Points.Contains(pointKvp.Key))
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
}
