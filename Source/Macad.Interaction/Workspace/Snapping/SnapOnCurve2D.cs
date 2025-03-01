using Macad.Core;
using Macad.Occt;
using Macad.Occt.Helper;
using System.Collections.Generic;
using System;

namespace Macad.Interaction;

//--------------------------------------------------------------------------------------------------

public sealed class SnapInfoCurve2D(SnapModes mode, Pnt2d point, double parameter) 
    : SnapInfo(mode)
{
    public Pnt2d Point { get; } = point;
    public double Parameter { get; } = parameter;
    public double TargetParameter { get; init; }
    public TopoDS_Shape TargetBrepShape { get; init; }
    public AIS_InteractiveObject TargetAisObject { get; init; }

    public new static readonly SnapInfoCurve2D Empty = new(SnapModes.None, Pnt2d.Origin, 0);
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class SnapOnCurve2D : SnapBase
{
    public Pln Plane
    {
        get { return _Plane ?? WorkspaceController.Workspace.WorkingPlane; }
        set { _Plane = value; }
    }

    //--------------------------------------------------------------------------------------------------

    Pln? _Plane;

    //--------------------------------------------------------------------------------------------------

    public SnapOnCurve2D()
    {
        SupportedModes = SnapModes.Edge | SnapModes.Grid;
    }

    //--------------------------------------------------------------------------------------------------

    public bool UseSecondDetected { get; set; }

    //--------------------------------------------------------------------------------------------------

    public SnapInfoCurve2D Snap(Geom2d_Curve curve, MouseEventData mouseEvent)
    {
        SnapInfoCurve2D result = SnapInfoCurve2D.Empty;

        if (UseSecondDetected)
        {
            List<AIS_InteractiveObject> detectedAisObjects = [];
            List<TopoDS_Shape> detectedBrepShapes = [];
            if (AisHelper.GetPickedFromContext(WorkspaceController.AisContext, detectedAisObjects, detectedBrepShapes) >= 2)
            {
                result = _Snap(curve, detectedBrepShapes[1], detectedAisObjects[1]);
            }
        }
        else
        {
            result = _Snap(curve, mouseEvent.DetectedBrepShape, mouseEvent.DetectedAisObject);
        }

        if (result.Mode == SnapModes.None)
        {
            result = _SnapGrid(curve, Convert.ToInt32(mouseEvent.ScreenPoint.X), Convert.ToInt32(mouseEvent.ScreenPoint.Y));
        }

        CurrentInfo = result;
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfoCurve2D _Snap(Geom2d_Curve curve, TopoDS_Shape shapeToSnap, AIS_InteractiveObject aisObject)
    {        
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            return SnapInfoCurve2D.Empty;
        }

        if (SupportedModes.HasFlag(SnapModes.Edge)
            && InteractiveContext.Current.EditorState.SnapToEdgeSelected
            && shapeToSnap?.ShapeType() == TopAbs_ShapeEnum.EDGE)
        {
            var edge = shapeToSnap.ToEdge();
            double umin = 0, umax = 0;
            var edgeCurve = BRep_Tool.Curve(edge, ref umin, ref umax);
            if (edgeCurve == null && BRepLib.BuildCurve3d(edge))
            {
                edgeCurve = BRep_Tool.Curve(edge, ref umin, ref umax);
            }

            if (edgeCurve != null)
            {
                var projected2dCurve = GeomAPI.To2d(edgeCurve, Plane);
                Geom2dAPI_InterCurveCurve intersect = new(curve, projected2dCurve);
                if (intersect.NbPoints() > 0)
                {
                    return new SnapInfoCurve2D(SnapModes.Edge, intersect.Point(1), intersect.Params(1).Item1 )
                    {
                        TargetName = WorkspaceController.VisualObjects.GetEntity(aisObject)?.Name,
                        TargetAisObject = aisObject,
                        TargetBrepShape = shapeToSnap,
                        TargetParameter = intersect.Params(1).Item2
                    };
                }
            }
        }
        
        return SnapInfoCurve2D.Empty;
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfoCurve2D _SnapGrid(Geom2d_Curve curve, int screenPointX, int screenPointY)
    {
        SnapInfoCurve2D snapInfo = SnapInfoCurve2D.Empty;
        double currentDistance = GetSnapOnPlaneDistanceThreshold();

        if (SupportedModes.HasFlag(SnapModes.Grid)
            && InteractiveContext.Current.EditorState.SnapToGridSelected
            && WorkspaceController.Workspace.GridEnabled)
        {
            if (ProjectToGrid(WorkspaceController.ActiveViewport,
                                                             screenPointX, screenPointY,
                                                             out Pnt gridPnt3d))
            {
                // On grid, calculcate best intersection based on grid type
                var gridPnt = ProjLib.Project(Plane, gridPnt3d);
                Pnt2d screenPnt2d = Pnt2d.Origin;
                if (WorkspaceController.ActiveViewControlller.ScreenToPoint(screenPointX, screenPointY, out Pnt screenPnt))
                {
                    screenPnt2d = ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, screenPnt);
                }

                if (WorkspaceController.Workspace.GridType == Workspace.GridTypes.Circular)
                {
                    double radius = gridPnt.Distance(Pnt2d.Origin);
                    Geom2dAPI_InterCurveCurve intersectCirc = new(curve, new Geom2d_Circle(Ax22d.Identity, radius));
                    if (intersectCirc.NbPoints() > 0)
                    {
                        var intersectPnt = intersectCirc.Point(1);
                        var distance = screenPnt2d.Distance(intersectPnt);
                        if (distance < currentDistance)
                        {
                            snapInfo = new SnapInfoCurve2D(SnapModes.Grid, intersectPnt, intersectCirc.Params(1).Item1);
                            currentDistance = distance;
                        }
                    }

                    Geom2dAPI_InterCurveCurve intersectSeg = new(curve, new Geom2d_Line(Pnt2d.Origin, gridPnt.ToDir()));
                    if (intersectSeg.NbPoints() > 0)
                    {
                        var intersectPnt = intersectSeg.Point(1);
                        var distance = screenPnt2d.Distance(intersectPnt);
                        if (distance < currentDistance)
                        {
                            snapInfo = new SnapInfoCurve2D(SnapModes.Grid, intersectPnt, intersectSeg.Params(1).Item1);
                            currentDistance = distance;
                        }
                    }
                }
                else // GridTypes.Rectangular
                {
                    Geom2dAPI_InterCurveCurve intersectSeg = new(curve, new Geom2d_Line(gridPnt, Dir2d.DX));
                    if (intersectSeg.NbPoints() > 0)
                    {
                        var intersectPnt = intersectSeg.Point(1);
                        var distance = screenPnt2d.Distance(intersectPnt);
                        if (distance < currentDistance)
                        {
                            snapInfo = new SnapInfoCurve2D(SnapModes.Grid, intersectPnt, intersectSeg.Params(1).Item1);
                            currentDistance = distance;
                        }
                    }

                    intersectSeg = new(curve, new Geom2d_Line(gridPnt, Dir2d.DY));
                    if (intersectSeg.NbPoints() > 0)
                    {
                        var intersectPnt = intersectSeg.Point(1);
                        var distance = screenPnt2d.Distance(intersectPnt);
                        if (distance < currentDistance)
                        {
                            snapInfo = new SnapInfoCurve2D(SnapModes.Grid, intersectPnt, intersectSeg.Params(1).Item1);
                            currentDistance = distance;
                        }
                    }
                }
            }
        }
        return snapInfo;
    }

    //--------------------------------------------------------------------------------------------------

}