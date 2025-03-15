using Macad.Core;
using Macad.Occt;
using Macad.Occt.Helper;
using System.Collections.Generic;
using System.Windows;

namespace Macad.Interaction;

//--------------------------------------------------------------------------------------------------


public sealed class SnapInfo2D(SnapModes mode, Pnt2d point, double distance) 
    : SnapInfo(mode)
{
    public Pnt2d Point { get; } = point;
    public double Distance { get; } = distance;

    public new static readonly SnapInfo2D Empty = new(SnapModes.None, Pnt2d.Origin, double.MaxValue);

    //--------------------------------------------------------------------------------------------------

    public static SnapInfo2D operator ^(SnapInfo2D info1, SnapInfo2D info2)
    {
        if( info1 == null)
            return info2;
        if (info2 == null)
            return info1;
        return info1.Distance <= info2.Distance ? info1 : info2;
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class Snap2D : SnapBase
{
    public Pln Plane
    {
        get { return _Plane ?? WorkspaceController.Workspace.WorkingPlane; }
        set { _Plane = value; }
    }

    //--------------------------------------------------------------------------------------------------

    Pln? _Plane;

    //--------------------------------------------------------------------------------------------------

    public Snap2D()
    {
        SupportedModes = SnapModes.Grid | SnapModes.Edge | SnapModes.Vertex;
    }

    //--------------------------------------------------------------------------------------------------
    
    public SnapInfo2D Snap(Pnt2d point, IEnumerable<Pnt2d> additionalPoints = null)
    {
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            return SnapInfo2D.Empty;
        }

        SnapInfo2D snapInfo = _Snap(point, additionalPoints);
        CurrentInfo = snapInfo;
        return snapInfo;
    }

    //--------------------------------------------------------------------------------------------------

    public SnapInfo2D Snap(IList<Pnt2d> points, out int pointSnapped, IEnumerable<Pnt2d> additionalPoints = null)
    {
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            pointSnapped = -1;
            return SnapInfo2D.Empty;
        }

        SnapInfo2D nearestSnapInfo = SnapInfo2D.Empty;
        double snapDistance = double.MaxValue;
        int nearestSnapPoint = -1;

        for (var index = 0; index < points.Count; index++)
        {
            var point = points[index];
            // Calc snapping position and distance to grid
            var snapInfo = _Snap(point, additionalPoints);
            if (snapInfo.Mode != SnapModes.None && snapInfo.Distance < snapDistance)
            {
                // This point snaps closer
                snapDistance = snapInfo.Distance;
                nearestSnapInfo = snapInfo;
                nearestSnapPoint = index;
            }
        }

        pointSnapped = nearestSnapPoint;
        CurrentInfo = nearestSnapInfo;
        return nearestSnapInfo;
    }

    //--------------------------------------------------------------------------------------------------

    public SnapInfo2D Snap(MouseEventData mouseEvent, IEnumerable<Pnt2d> additionalPoints = null)
    {
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            return SnapInfo2D.Empty;
        }

        SnapInfo2D snapInfo = SnapInfo2D.Empty;

        if (_ProjectViewportPoint(mouseEvent.ScreenPoint, out var point, Plane))
        {
            var snapInfoDetected = _SnapDetected(mouseEvent.ScreenPoint,
                                                 point,
                                                 mouseEvent.DetectedBrepShape,
                                                 mouseEvent.DetectedAisObject,
                                                 mouseEvent.DetectedEntity?.Name);
            var snapInfoAdditional = _SnapAdditionalPoints(point, additionalPoints);
            var snapInfoGrid = _SnapGrid(mouseEvent.ScreenPoint, point);
            snapInfo = snapInfoAdditional ^ snapInfoDetected ^ snapInfoGrid;
            if (snapInfo.Distance > GetSnapOnPlaneDistanceThreshold())
            {
                snapInfo = SnapInfo2D.Empty;
            }
        }

        CurrentInfo = snapInfo;
        return snapInfo;
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfo2D _Snap(Pnt2d point, IEnumerable<Pnt2d> additionalPoints = null)
    {
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            return SnapInfo2D.Empty;
        }

        SnapInfo2D snapInfo = SnapInfo2D.Empty;

        var viewportCtrl = WorkspaceController.ActiveViewControlller;

        // Calc screen point
        Pnt point3d = Plane.Value(point);
        if (viewportCtrl.PointToScreen(point3d, out int screenX, out int screenY))
        {
            Point screenPoint = new(screenX, screenY);

            // Pick viewport with screen coordinates of point to snap
            AisHelper.PickFromContext(WorkspaceController.AisContext, screenX, screenY, viewportCtrl.V3dView, out var pickedAisObject, out var pickedShape);
            string targetName = null;
            if (pickedAisObject != null)
            {
                targetName = WorkspaceController.VisualObjects.GetEntity(pickedAisObject)?.Name;
            }

            SnapInfo2D snapInfoDetected = _SnapDetected(screenPoint, point, pickedShape, pickedAisObject, targetName);

            var snapInfoAdditional = _SnapAdditionalPoints(point, additionalPoints);
            var snapInfoGrid = _SnapGrid(screenPoint, point);
            snapInfo = snapInfoAdditional ^ snapInfoDetected ^ snapInfoGrid;

            if (snapInfo.Distance > GetSnapOnPlaneDistanceThreshold())
            {
                snapInfo = SnapInfo2D.Empty;
            }
        }

        return snapInfo;
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfo2D _SnapDetected(Point screenPoint, Pnt2d pointOnPlane, TopoDS_Shape brepShape, AIS_InteractiveObject aisObject, string targetName)
    {
        var (mode, point, _) = Snap(screenPoint, brepShape, aisObject);
        if (mode == SnapModes.None)
        {
            return SnapInfo2D.Empty;
        }

        var snapPoint = ProjLib.Project(Plane, point);
        var distance = pointOnPlane.Distance(snapPoint);
        return new SnapInfo2D(mode, snapPoint, distance)
        {
            TargetName = targetName
        };
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfo2D _SnapAdditionalPoints(Pnt2d point, IEnumerable<Pnt2d> additionalPoints = null)
    {
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            return SnapInfo2D.Empty;
        }
        
        SnapInfo2D snapInfo2D = SnapInfo2D.Empty;
        double threshold = double.MaxValue;

        // First check given extra points
        if (additionalPoints != null)
        {
            foreach (var otherPnt in additionalPoints)
            {
                var distance = point.Distance(otherPnt);
                if (distance < threshold)
                {
                    snapInfo2D = new(SnapModes.Vertex, otherPnt, distance);
                    threshold = distance;
                }
            }
        }

        return snapInfo2D;
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfo2D _SnapGrid(Point screenPoint, Pnt2d point)
    {
        if (!SupportedModes.HasFlag(SnapModes.Grid)
            || !InteractiveContext.Current.EditorState.SnapToGridSelected
            || !WorkspaceController.Workspace.GridEnabled)
        {
            return SnapInfo2D.Empty;
        }

        if (!_ProjectToGrid(screenPoint, out var snapOnWp))
        {
            return SnapInfo2D.Empty;
        }

        var snapPoint = Plane.Parameters(snapOnWp);
        var distance = snapPoint.Distance(point);
        return new SnapInfo2D(SnapModes.Grid, snapPoint, distance);
    }

    //--------------------------------------------------------------------------------------------------

    bool _ProjectViewportPoint(Point screenPoint, out Pnt2d pointOnPlane, Pln plane)
    {
        pointOnPlane = Pnt2d.Origin;
        if(!WorkspaceController.ActiveViewControlller.ScreenToPoint(plane, (int)screenPoint.X, (int)screenPoint.Y, out var pnt))
            return false;

        pointOnPlane = plane.Parameters(pnt);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _ProjectToGrid(Point screenPoint, out Pnt pnt)
    {
        Pln plane = WorkspaceController.Workspace.WorkingPlane;
        if (!WorkspaceController.ActiveViewControlller.ScreenToPoint(plane, (int)screenPoint.X, (int)screenPoint.Y, out pnt))
            return false;

        Pnt2d uv = plane.Parameters(pnt);
        Pnt2d gridUv = WorkspaceController.ComputeGridPoint(uv);
        pnt = plane.Value(gridUv);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}