using System;
using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class SketchEditorConstraintElement : SketchEditorElement
    {
        public readonly SketchConstraint Constraint;
        ConstraintMarker _Marker;
        bool _IsActivated;

        //--------------------------------------------------------------------------------------------------

        public SketchEditorConstraintElement(SketchEditorTool sketchEditorTool, SketchConstraint constraint, Trsf transform, Pln plane)
            : base(sketchEditorTool, transform, plane)
        {
            Constraint = constraint;
        }

        //--------------------------------------------------------------------------------------------------

        public override void UpdateVisual()
        {
            _Marker.SetColor(IsSelected ? Colors.AttributeMarkerSelection : Colors.AttributeMarkerBackground);
        }

        //--------------------------------------------------------------------------------------------------

        public override void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts = default)
        {
            if (_Marker == null)
            {
                _Marker = _CreateMarker();
                foreach (var visualobj in _Marker.VisualObjects)
                {
                    visualobj.IsActive = _IsActivated;
                }
                _Marker?.UpdateVisual(points, segments, Plane, SketchEditorTool.WorkspaceController.ActiveViewport.PixelSize, markerCounts);
                UpdateVisual();
            }
            else
            {
                _Marker?.UpdateVisual(points, segments, Plane, SketchEditorTool.WorkspaceController.ActiveViewport.PixelSize, markerCounts);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void OnGizmoScaleChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts)
        {
            _Marker?.UpdateVisual(points, segments, Plane, SketchEditorTool.WorkspaceController.ActiveViewport.PixelSize, markerCounts);
        }

        //--------------------------------------------------------------------------------------------------
        
        public void OnViewRotated(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts)
        {
            Remove();
            OnPointsChanged(points, segments, markerCounts);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Activate(bool active)
        {
            _IsActivated = active;

            if (_Marker == null)
                return;

            foreach (var visualObj in _Marker.VisualObjects)
            {
                visualObj.IsActive = active;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Remove()
        {
            if (_Marker == null)
                return;

            foreach (var visualObj in _Marker.VisualObjects)
            {
                visualObj.Remove();
            }

            _Marker = null;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool IsOwnerOf(AIS_InteractiveObject aisObject)
        {
            if (_Marker == null)
                return false;

            foreach (var visualObj in _Marker.VisualObjects)
            {
                if (visualObj.AisObject == null)
                    continue;
                if(aisObject.Equals(visualObj.AisObject))
                    return true;
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------
        //--------------------------------------------------------------------------------------------------

        internal class ConstraintMarker
        {
            const int TagIsSegment = 1 << 31;

            //--------------------------------------------------------------------------------------------------

            readonly SketchConstraint _Constraint;
            readonly List<Marker> _Marker = new List<Marker>();

            //--------------------------------------------------------------------------------------------------

            public IEnumerable<VisualObject> VisualObjects
            {
                get { return _Marker; }
            }

            //--------------------------------------------------------------------------------------------------

            public ConstraintMarker(SketchEditorTool sketchEditorTool, SketchConstraint constraint, string image)
            {
                _Constraint = constraint;

                if (_Constraint.Points != null)
                {
                    for (var index = 0; index < _Constraint.Points.Length; index++)
                    {
                        var marker = new Marker(sketchEditorTool.WorkspaceController,
                                                Marker.Styles.Image | Marker.Styles.Background | Marker.Styles.Topmost | Marker.Styles.Selectable, image);
                        marker.Tag = index;
                        marker.SetBackgroundColor(Colors.AttributeMarkerBackground);
                        _Marker.Add(marker);
                    }
                }
                else if (_Constraint.Segments != null)
                {
                    for (var index = 0; index < _Constraint.Segments.Length; index++)
                    {
                        var marker = new Marker(sketchEditorTool.WorkspaceController,
                                                Marker.Styles.Image | Marker.Styles.Background | Marker.Styles.Topmost | Marker.Styles.Selectable, image);
                        marker.Tag = index | TagIsSegment;
                        marker.SetBackgroundColor(Colors.AttributeMarkerBackground);
                        _Marker.Add(marker);
                    }
                }

            }

            //--------------------------------------------------------------------------------------------------

            public void UpdateVisual(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Pln plane,
                                     double pixelSize, Dictionary<int, int> markerCounts)
            {
                foreach (var marker in _Marker)
                {
                    var index = (int) marker.Tag;
                    if ((index & TagIsSegment) != 0)
                    {
                        // Is Segment
                        int segIndex = _Constraint.Segments[index & ~TagIsSegment];
                        var curve = segments[segIndex].CachedCurve;
                        if (curve == null)
                        {
                            try
                            {
                                curve = segments[segIndex].MakeCurve(points);
                            }
                            catch (Exception)
                            {
                                continue;
                            }

                            if (curve == null)
                            {
                                continue;
                            }
                        }

                        var u = curve.LastParameter().Lerp(curve.FirstParameter(), 0.5);
                        Pnt2d point = default;
                        Vec2d tangent = default;
                        curve.D1(u, ref point, ref tangent);
                        Vec2d vec = new Vec2d(tangent.Y, -tangent.X).Normalized();
                        point.Translate(vec.Multiplied(pixelSize * 22));
                        _FindFreeMarkerPlace(ref point, vec, segIndex | TagIsSegment, markerCounts, pixelSize);
                        marker.Set(point, plane);
                    }
                    else
                    {
                        // Is Point
                        int pntIndex = _Constraint.Points[index];
                        Pnt2d point = points[pntIndex];
                        Vec2d vec = new Vec2d(-0.707107, -0.707107);
                        point.Translate(vec.Multiplied(pixelSize * 22));
                        _FindFreeMarkerPlace(ref point, vec, pntIndex, markerCounts, pixelSize);
                        marker.Set(point, plane);
                    }
                }
            }

            //--------------------------------------------------------------------------------------------------

            public void SetColor(Quantity_Color color)
            {
                _Marker.ForEach(marker => marker.SetBackgroundColor(color));
            }

            //--------------------------------------------------------------------------------------------------

            static void _FindFreeMarkerPlace(ref Pnt2d point, Vec2d vec, int tag, Dictionary<int, int> markerCounts, double pixelSize)
            {
                if (markerCounts == null)
                    return;

                if (!markerCounts.TryGetValue(tag, out int count))
                {
                    markerCounts[tag] = 1;
                    return;
                }

                int dirHor = (vec.X.IsEqual(0, 0.001) || vec.X > 0) ? 1 : -1;
                int dirVer = (vec.Y.IsEqual(0, 0.001) || vec.X > 0) ? 1 : -1;

                // This looks only nice for up to 6 markers, but that's ok for the moment
                int hor = count % 2 * dirHor;
                int ver = count / 2 * dirVer;

                point.Translate(new Vec2d(hor, ver).Multiplied(pixelSize * 25));

                markerCounts[tag] = count + 1;
            }

            //--------------------------------------------------------------------------------------------------
        }

        ConstraintMarker _CreateMarker()
        {
            ConstraintMarker marker = null;

            bool swapOrientation = false;
            if(InteractiveContext.Current?.WorkspaceController?.LockWorkingPlane ?? false)
            {
                swapOrientation = ((int) ((InteractiveContext.Current?.WorkspaceController?.ActiveViewport?.Twist ?? 0.0 + 45.0) / 90.0) & 0x01) == 1;
            }

            switch (Constraint)
            {
                case SketchConstraintRadius _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintCircleRadius");
                    break;
                case SketchConstraintConcentric _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintConcentric");
                    break;
                case SketchConstraintAngle _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintAngle");
                    break;
                case SketchConstraintEqual _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintEqual");
                    break;
                case SketchConstraintFixed _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintFixed");
                    break;
                case SketchConstraintHorizontal _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "Marker_SketchConstraintVertical" : "Marker_SketchConstraintHorizontal");
                    break;
                case SketchConstraintHorizontalDistance _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ?  "Marker_SketchConstraintVerticalDistance" : "Marker_SketchConstraintHorizontalDistance");
                    break;
                case SketchConstraintLength _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintLineLength");
                    break;
                case SketchConstraintParallel _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintParallel");
                    break;
                case SketchConstraintPerpendicular _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintPerpendicular");
                    break;
                case SketchConstraintPointOnSegment _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintPointOnSegment");
                    break;
                case SketchConstraintPointOnMidpoint _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintPointOnMidpoint");
                    break;
                case SketchConstraintVertical _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "Marker_SketchConstraintHorizontal" : "Marker_SketchConstraintVertical");
                    break;
                case SketchConstraintVerticalDistance _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "Marker_SketchConstraintHorizontalDistance" : "Marker_SketchConstraintVerticalDistance");
                    break;
                case SketchConstraintTangent _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintTangent");
                    break;
                case SketchConstraintSmoothCorner _:
                    marker = new ConstraintMarker(SketchEditorTool, Constraint, "Marker_SketchConstraintSmoothCorner");
                    break;
            }

            return marker;
        }
    }
}