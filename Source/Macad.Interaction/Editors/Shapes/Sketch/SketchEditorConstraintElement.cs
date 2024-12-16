using System;
using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class SketchEditorConstraintElement : SketchEditorElement
{
    public readonly SketchConstraint Constraint;
    ConstraintMarker _Marker;
    bool _IsSelectable;

    //--------------------------------------------------------------------------------------------------

    public SketchEditorConstraintElement(SketchEditorTool sketchEditorTool, SketchConstraint constraint, Trsf transform, Pln plane)
        : base(sketchEditorTool, transform, plane)
    {
        Constraint = constraint;
    }

    //--------------------------------------------------------------------------------------------------

    public override void UpdateVisual()
    {
        _Marker?.SetColor(IsSelected ? Colors.AttributeMarkerSelection : Colors.AttributeMarkerBackground);
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts = default)
    {
        if (_Marker == null)
        {
            if(!IsVisible)
                return;

            _Marker = _CreateMarker();
            foreach (var visualobj in _Marker.VisualObjects)
            {
                visualobj.IsSelectable = _IsSelectable;
            }
            _Marker?.UpdateVisual(points, segments, Plane, 
                                  SketchEditorTool.WorkspaceController.ActiveViewControlller.PixelSize * SketchEditorTool.WorkspaceController.ActiveViewControlller.DpiScale, 
                                  markerCounts);
            UpdateVisual();
        }
        else
        {
            _Marker?.UpdateVisual(points, segments, Plane, 
                                  SketchEditorTool.WorkspaceController.ActiveViewControlller.PixelSize * SketchEditorTool.WorkspaceController.ActiveViewControlller.DpiScale,
                                  markerCounts);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void OnGizmoScaleChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts)
    {
        _Marker?.UpdateVisual(points, segments, Plane, 
                              SketchEditorTool.WorkspaceController.ActiveViewControlller.PixelSize * SketchEditorTool.WorkspaceController.ActiveViewControlller.DpiScale,
                              markerCounts);
    }

    //--------------------------------------------------------------------------------------------------
        
    public void OnViewRotated(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts)
    {
        Remove();
        OnPointsChanged(points, segments, markerCounts);
    }

    //--------------------------------------------------------------------------------------------------

    public override void Activate(bool selectable)
    {
        _IsSelectable = selectable;

        if (_Marker == null)
            return;

        foreach (var visualObj in _Marker.VisualObjects)
        {
            visualObj.IsSelectable = selectable;
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
                                            Marker.Styles.Image | Marker.Styles.Background | Marker.Styles.Topmost | Marker.Styles.NoClipPlane, 
                                            image, 24)
                    {
                        IsSelectable = true,
                        Tag = index,
                        BackgroundColor = Colors.AttributeMarkerBackground
                    };

                    _Marker.Add(marker);
                }
            }
            else if (_Constraint.Segments != null)
            {
                for (var index = 0; index < _Constraint.Segments.Length; index++)
                {
                    var marker = new Marker(sketchEditorTool.WorkspaceController,
                                            Marker.Styles.Image | Marker.Styles.Background | Marker.Styles.Topmost | Marker.Styles.NoClipPlane,
                                            image, 24)
                    {
                        IsSelectable = true,
                        Tag = index | TagIsSegment,
                        BackgroundColor = Colors.AttributeMarkerBackground
                    };

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

        public void SetColor(Color color)
        {
            _Marker.ForEach(marker => marker.BackgroundColor = color);
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
            swapOrientation = ((int) ((SketchEditorTool.ViewRotation + 45.0) / 90.0) & 0x01) == 1;
        }

        marker = Constraint switch
        {
            SketchConstraintRadius _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintCircleRadius"),
            SketchConstraintConcentric _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintConcentric"),
            SketchConstraintAngle _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintAngle"),
            SketchConstraintEqual _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintEqual"),
            SketchConstraintFixed _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintFixed"),
            SketchConstraintHorizontal _ => new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "SketchConstraintVertical" : "SketchConstraintHorizontal"),
            SketchConstraintHorizontalDistance _ => new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "SketchConstraintVerticalDistance" : "SketchConstraintHorizontalDistance"),
            SketchConstraintLength _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintLineLength"),
            SketchConstraintParallel _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintParallel"),
            SketchConstraintPerpendicular _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintPerpendicular"),
            SketchConstraintPointOnSegment _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintPointOnSegment"),
            SketchConstraintPointOnMidpoint _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintPointOnMidpoint"),
            SketchConstraintVertical _ => new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "SketchConstraintHorizontal" : "SketchConstraintVertical"),
            SketchConstraintVerticalDistance _ => new ConstraintMarker(SketchEditorTool, Constraint, swapOrientation ? "SketchConstraintHorizontalDistance" : "SketchConstraintVerticalDistance"),
            SketchConstraintTangent _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintTangent"),
            SketchConstraintSmoothCorner _ => new ConstraintMarker(SketchEditorTool, Constraint, "SketchConstraintSmoothCorner"),
            _ => marker
        };

        return marker;
    }
}