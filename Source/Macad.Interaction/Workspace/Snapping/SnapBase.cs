using System;
using System.Diagnostics;
using System.Windows;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction;

public abstract class SnapBase : BaseObject, ISnapHandler, IDisposable
{
    #region Properties

    public SnapModes SupportedModes
    {
        get { return _SupportedModes; }
        set
        {
            _SupportedModes = value; 
            RaisePropertyChanged();
            WorkspaceController?.Selection?.Invalidate();
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public SnapInfo CurrentInfo
    {
        get { return _CurrentInfo; }
        set
        {
            if (Equals(value, _CurrentInfo)) return;
            _CurrentInfo = value;
            RaisePropertyChanged();
            ISnapHandler.RaiseSnapInfoChanged(this);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        set
        {
            Debug.Assert(_WorkspaceController == null || _WorkspaceController == value, "WorkspaceController cannot be changed");
            _WorkspaceController = value;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member / n'tor

    SnapModes _SupportedModes;
    SnapInfo _CurrentInfo;
    WorkspaceController _WorkspaceController;

    //--------------------------------------------------------------------------------------------------

    protected SnapBase()
    {
    }

    //--------------------------------------------------------------------------------------------------
    
    protected virtual void Dispose(bool disposing)
    {
        if (disposing)
        {
            CurrentInfo = null;
        }
    }

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Common Snap Functions

    protected (SnapModes mode, Pnt point, Geom_Curve curve) Snap(Point screenPoint, TopoDS_Shape shapeToSnap)
    {
        if (shapeToSnap == null) 
            return (SnapModes.None, Pnt.Origin, null);

        if (SupportedModes.HasFlag(SnapModes.Vertex)
            && InteractiveContext.Current.EditorState.SnapToVertexSelected
            && shapeToSnap.ShapeType() == TopAbs_ShapeEnum.VERTEX)
        {
            // On Vertex
            var vertex = shapeToSnap.ToVertex();
            return (SnapModes.Vertex, BRep_Tool.Pnt(vertex), null);
        }

        if (SupportedModes.HasFlag(SnapModes.Edge)
            && InteractiveContext.Current.EditorState.SnapToEdgeSelected
            && shapeToSnap.ShapeType() == TopAbs_ShapeEnum.EDGE)
        {
            // On Edge
            var edge = shapeToSnap.ToEdge();
            double umin = 0, umax = 0;
            var curve = BRep_Tool.Curve(edge, ref umin, ref umax);
            if (curve == null && BRepLib.BuildCurve3d(edge))
            {
                curve = BRep_Tool.Curve(edge, ref umin, ref umax);
            }

            if (curve != null)
            {
                var ray = new Geom_Line(WorkspaceController.ActiveViewControlller.ScreenToViewAxis(Convert.ToInt32(screenPoint.X), Convert.ToInt32(screenPoint.Y)));
                var extrema = new GeomAPI_ExtremaCurveCurve(curve, ray);
                if (extrema.NbExtrema() >= 1)
                {
                    Pnt p1 = new Pnt();
                    Pnt p2 = new Pnt();
                    if (extrema.TotalNearestPoints(ref p1, ref p2))
                    {
                        return (SnapModes.Edge, p1, curve);
                    }
                }
            }
        }

        return (SnapModes.None, Pnt.Origin, null);
    }

    //--------------------------------------------------------------------------------------------------
    
    protected (SnapModes mode, Pnt point) Snap(Point screenPoint, AIS_InteractiveObject aisObjectToSnap)
    {
        if (aisObjectToSnap == null) 
            return (SnapModes.None, Pnt.Origin);

        if (SupportedModes.HasFlag(SnapModes.Vertex) 
            && InteractiveContext.Current.EditorState.SnapToVertexSelected 
            && aisObjectToSnap is AIS_Point aisPoint)
        {
            // On Vertex
            return (SnapModes.Vertex, aisPoint.Component().Pnt());
        }

        return (SnapModes.None, Pnt.Origin);
    }

    //--------------------------------------------------------------------------------------------------
    
    protected (SnapModes mode, Pnt point, Geom_Curve curve) Snap(Point screenPoint, TopoDS_Shape shapeToSnap, AIS_InteractiveObject aisObjectToSnap)
    {
        SnapModes mode = SnapModes.None;
        Pnt point = Pnt.Origin;
        Geom_Curve curve = null;

        // Try BRepShape first
        if (shapeToSnap != null)
        {
            (mode, point, curve) = Snap(screenPoint, shapeToSnap);
        }

        // If none found, try AIS object next
        if (mode == SnapModes.None && aisObjectToSnap != null)
        {
            (mode, point) = Snap(screenPoint, aisObjectToSnap);
        }

        return (mode, point, curve);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Support Functions

    public double GetSnapOnPlaneDistanceThreshold()
    {
        var parameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        var viewportController = WorkspaceController.ActiveViewControlller;
        return parameterSet.SelectionPixelTolerance * viewportController.PixelSize * viewportController.DpiScale * 1.5;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool NeedActiveSubshapes(SubshapeType subshapeType)
    {
        return subshapeType switch
        {
            SubshapeType.Vertex => InteractiveContext.Current.EditorState.SnappingEnabled 
                                   && InteractiveContext.Current.EditorState.SnapToVertexSelected 
                                   && SupportedModes.HasFlag(SnapModes.Vertex),

            SubshapeType.Edge => InteractiveContext.Current.EditorState.SnappingEnabled 
                                 && InteractiveContext.Current.EditorState.SnapToEdgeSelected 
                                 && SupportedModes.HasFlag(SnapModes.Edge),

            _ => false
        };
    }

    //--------------------------------------------------------------------------------------------------
    
    public void Reset()
    {
        CurrentInfo = SnapInfo.Empty;
    }

    //--------------------------------------------------------------------------------------------------

    protected bool ProjectToGrid(Viewport viewport, int screenX, int screenY, out Pnt pnt)
    {
        Pln plane = WorkspaceController.Workspace.WorkingPlane;
        if (!WorkspaceController.ActiveViewControlller.ScreenToPoint(plane, screenX, screenY, out pnt))
            return false;

        Pnt2d uv = plane.Parameters(pnt);
        Pnt2d gridUv = WorkspaceController.ComputeGridPoint(uv);
        pnt = plane.Value(gridUv);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}

//--------------------------------------------------------------------------------------------------
