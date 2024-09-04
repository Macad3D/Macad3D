using System;
using System.Windows;
using Macad.Occt;

namespace Macad.Interaction;

//--------------------------------------------------------------------------------------------------

public sealed class SnapInfo3D(SnapModes mode, Pnt point) 
    : SnapInfo(mode)
{
    public Pnt Point { get; } = point;

    public new static readonly SnapInfo3D Empty = new(SnapModes.None, Pnt.Origin);
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class Snap3D : SnapBase
{
    public Snap3D()
    {
        SupportedModes = SnapModes.Grid | SnapModes.Edge | SnapModes.Vertex;
    }

    //--------------------------------------------------------------------------------------------------

    public SnapInfo3D Snap(MouseEventData mouseEvent)
    {
        if (!InteractiveContext.Current.EditorState.SnappingEnabled)
        {
            return SnapInfo3D.Empty;
        }

        SnapInfo3D snapInfo = SnapInfo3D.Empty;
        
        var (mode, point) = Snap(mouseEvent.ScreenPoint, 
                                 mouseEvent.DetectedBrepShape, 
                                 mouseEvent.DetectedAisObject);
        if (mode != SnapModes.None)
        {
            snapInfo = new SnapInfo3D(mode, point)
            {
                TargetName = mouseEvent.DetectedEntity?.Name
            };
        }
        else
        {
            snapInfo = _SnapGrid(mouseEvent.ScreenPoint);
        }

        CurrentInfo = snapInfo;
        return snapInfo;
    }

    //--------------------------------------------------------------------------------------------------

    SnapInfo3D _SnapGrid(Point screenPoint)
    {
        if (SupportedModes.HasFlag(SnapModes.Grid)
            && InteractiveContext.Current.EditorState.SnapToGridSelected
            && WorkspaceController.Workspace.GridEnabled)
        {
            if (WorkspaceController.Workspace.ProjectToGrid(WorkspaceController.ActiveViewport,
                                                            Convert.ToInt32(screenPoint.X),
                                                            Convert.ToInt32(screenPoint.Y),
                                                            out Pnt gridPnt))
            {
                // On Grid
                return new SnapInfo3D(SnapModes.Grid, gridPnt);
            }
        }
        return SnapInfo3D.Empty;
    }

    //--------------------------------------------------------------------------------------------------

}