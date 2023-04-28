using System;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction
{
    [Flags]
    public enum SnapMode
    {
        None = 0,
        Grid = 1 << 0,
        Vertex = 1 << 1,
        Edge = 1 << 2,
        Face = 1 << 3
    }

    //--------------------------------------------------------------------------------------------------

    public class SnapInfo
    {
        public SnapMode SnapMode;
        public Pnt Point;
    }

    //--------------------------------------------------------------------------------------------------

    public class SnapInfo2D
    {
        public SnapMode SnapMode;
        public Pnt2d Point;
        public double Distance;
    }

    //--------------------------------------------------------------------------------------------------

    public sealed class SnapHandler : BaseObject, IDisposable
    {
        public SnapMode SupportedSnapModes
        {
            get { return _SupportedSnapModes; }
            private set
            {
                _SupportedSnapModes = value; 
                InteractiveContext.Current?.WorkspaceController?.Selection?.Invalidate();
            }
        }

        //--------------------------------------------------------------------------------------------------

        SnapMode _SupportedSnapModes = SnapMode.None;
        WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        public SnapHandler(WorkspaceController workspaceController)
        {
            _WorkspaceController = workspaceController;
            Tool.ToolActionChanged += _Tool_ToolActionChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            Tool.ToolActionChanged -= _Tool_ToolActionChanged;
            _WorkspaceController = null;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Tool_ToolActionChanged(Tool sender, ToolAction action)
        {
            SupportedSnapModes = action?.SupportedSnapModes ?? SnapMode.None;
        }

        //--------------------------------------------------------------------------------------------------

        public SnapInfo Snap(MouseEventData mouseEvent)
        {
            if (!InteractiveContext.Current.EditorState.SnappingEnabled)
            {
                return null;
            }

            SnapInfo info = null;

            if (mouseEvent.DetectedShapes.Count == 1)
            {
                var detectedShape = mouseEvent.DetectedShapes[0];
                if (SupportedSnapModes.HasFlag(SnapMode.Vertex) 
                    && InteractiveContext.Current.EditorState.SnapToVertexSelected 
                    && (detectedShape.ShapeType() == TopAbs_ShapeEnum.VERTEX))
                {
                    // On Vertex
                    var vertex = TopoDS.Vertex(detectedShape);
                    info = new SnapInfo()
                    {
                        Point = BRep_Tool.Pnt(vertex),
                        SnapMode = SnapMode.Vertex
                    };
                }
                else if (SupportedSnapModes.HasFlag(SnapMode.Edge)
                    && InteractiveContext.Current.EditorState.SnapToEdgeSelected
                    && (detectedShape.ShapeType() == TopAbs_ShapeEnum.EDGE))
                {
                    // On Edge
                    var edge = TopoDS.Edge(detectedShape);
                    double umin = 0, umax = 0;
                    var curve = BRep_Tool.Curve(edge, ref umin, ref umax);
                    if (curve != null)
                    {
                        var extrema = new GeomAPI_ExtremaCurveCurve(curve,
                                                                    new Geom_Line(_WorkspaceController.ActiveViewport.ViewAxis(Convert.ToInt32(mouseEvent.ScreenPoint.X), Convert.ToInt32(mouseEvent.ScreenPoint.Y))));
                        if (extrema.NbExtrema() >= 1)
                        {
                            Pnt p1 = new Pnt();
                            Pnt p2 = new Pnt();
                            if (extrema.TotalNearestPoints(ref p1, ref p2))
                            {
                                info = new SnapInfo()
                                {
                                    Point = p1,
                                    SnapMode = SnapMode.Edge
                                };
                            }
                        }
                    }
                }
            }
            else if (mouseEvent.DetectedAisInteractives.Count == 1)
            {
                if (SupportedSnapModes.HasFlag(SnapMode.Vertex) 
                    && InteractiveContext.Current.EditorState.SnapToVertexSelected 
                    && (mouseEvent.DetectedAisInteractives[0] is AIS_Point aisPoint))
                {
                    // On Vertex
                    info = new SnapInfo()
                    {
                        Point = aisPoint.Component().Pnt(),
                        SnapMode = SnapMode.Vertex
                    };
                }
            }
            else if (SupportedSnapModes.HasFlag(SnapMode.Grid)
                && InteractiveContext.Current.EditorState.SnapToGridSelected
                && _WorkspaceController.Workspace.GridEnabled)
            {
                if (_WorkspaceController.Workspace.ProjectToGrid(_WorkspaceController.ActiveViewport,
                                                                 Convert.ToInt32(mouseEvent.ScreenPoint.X),
                                                                 Convert.ToInt32(mouseEvent.ScreenPoint.Y),
                                                                 out Pnt gridPnt))
                {
                    // On Grid
                    info = new SnapInfo()
                    {
                        Point = gridPnt,
                        SnapMode = SnapMode.Grid
                    };
                }
            }

            if (info != null)
            {
                _WorkspaceController.CursorPosition = info.Point;
            }
            return info;
        }

        //--------------------------------------------------------------------------------------------------

        public Pnt2d? SnapOnPlane(SnapInfo snapInfo, Pln? localPlane = null)
        {
            if (snapInfo != null)
            {
                var plane = localPlane ?? _WorkspaceController.Workspace.WorkingPlane;
                switch (snapInfo.SnapMode)
                {
                    case SnapMode.Grid:
                    case SnapMode.Vertex:
                    case SnapMode.Edge:
                        return ProjLib.Project(plane, snapInfo.Point);
                }
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public bool NeedActiveSubshapes(SubshapeType subshapeType)
        {
            switch (subshapeType)
            {
                case SubshapeType.Vertex:
                    return InteractiveContext.Current.EditorState.SnappingEnabled
                           && InteractiveContext.Current.EditorState.SnapToVertexSelected
                           && SupportedSnapModes.HasFlag(SnapMode.Vertex);

                case SubshapeType.Edge:
                    return InteractiveContext.Current.EditorState.SnappingEnabled
                           && InteractiveContext.Current.EditorState.SnapToEdgeSelected
                           && SupportedSnapModes.HasFlag(SnapMode.Edge);
            }
            return false;
        }
    }
}