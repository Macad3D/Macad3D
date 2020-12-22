using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public static class SketchToolHelper
    {
        public static bool SnapToGrid(Pnt2d point, Sketch sketch, out Pnt2d snapPoint, out double distance)
        {
            var workspace = InteractiveContext.Current.WorkspaceController.Workspace;

            if (workspace.V3dViewer.Grid().IsActive())
            {
                double u = 0, v = 0;
                ElSLib.Parameters(sketch.Plane, workspace.WorkingPlane.Location, ref u, ref v);
                var wpOffset = new XY(u, v);
                var coordOnWp = point.ToXY() - wpOffset;
                var flipY = new XY(1, -1);
                var snapCoordOnWp = workspace.ComputeGridPoint(coordOnWp * flipY) * flipY;
                snapPoint = (snapCoordOnWp + wpOffset).ToPnt();
                distance = point.Distance(snapPoint);
                return true;
            }

            snapPoint = new Pnt2d();
            distance = 0;
            return false;
        }
        
        //--------------------------------------------------------------------------------------------------
        
        public static (Pnt2d Point, double Distance) Snap(Pnt2d point, Sketch sketch, IEnumerable<Pnt2d> freePoints=null)
        {
            var editorState = InteractiveContext.Current.EditorState;

            double snapDistance = Double.MaxValue;
            Pnt2d snapPoint = point;

            if (editorState.SnappingEnabled)
            {
                // Calc snapping position and distance to grid
                if (editorState.SnapToGridSelected)
                {
                    if (SnapToGrid(point, sketch, out var gridPoint, out var gridDistance))
                    {
                        if (gridDistance < snapDistance)
                        {
                            // Grid snaps closer
                            snapDistance = gridDistance;
                            snapPoint = gridPoint;
                        }
                    }
                }

                // Calc snapping position and distance to other points
                IEnumerable<Pnt2d> otherPoints = sketch.Points.Values;
                if (freePoints != null)
                {
                    otherPoints = otherPoints.Concat(freePoints);
                }

                if (editorState.SnapToVertexSelected)
                {
                    foreach (var otherPnt in otherPoints)
                    {
                        var distance = point.Distance(otherPnt);
                        if (distance < snapDistance)
                        {
                            snapDistance = distance;
                            snapPoint = otherPnt;
                        }
                    }
                }
            }

            return (snapPoint, snapDistance);
        }
    }
}