using System.Collections.Generic;
using System.Windows;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction;

public interface IMouseEventHandler
{
    bool OnMouseMove(MouseEventData data);
    bool OnMouseDown(MouseEventData data);
    bool OnMouseUp(MouseEventData data, bool additive);
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public class MouseEventData
{
    public Viewport Viewport { get; private set; }

    public Point ScreenPoint { get; private set; }

    public Pnt RawPoint { get; private set; }

    public Pnt PointOnPlane { get; private set; }

    public List<AIS_InteractiveObject> DetectedAisInteractives { get; } = new();

    public List<InteractiveEntity> DetectedEntities { get; } = new();

    public List<TopoDS_Shape> DetectedShapes { get; } = new();

    public bool ForceReDetection { get; set; }

    //--------------------------------------------------------------------------------------------------

    public Ax1 PickAxis
    {
        get
        {
            return Viewport.ViewAxis((int)ScreenPoint.X, (int)ScreenPoint.Y);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MouseEventData()
    {
        ScreenPoint = default;
        RawPoint = default;
        PointOnPlane = default;
        ForceReDetection = false;
    }

    //--------------------------------------------------------------------------------------------------

    public void Clear()
    {
        Viewport = default;
        ScreenPoint = default;
        RawPoint = default;
        PointOnPlane = default;
        ForceReDetection = false;
        DetectedAisInteractives.Clear();
        DetectedEntities.Clear();
        DetectedShapes.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(in Viewport viewport, in Point screenPoint, in Pnt rawPoint, in Pnt pointOnPlane, in InteractiveEntity detectedEntity, 
                    in AIS_InteractiveObject detectedInteractive, in TopoDS_Shape detectedShape)
    {
        Viewport = viewport;
        ScreenPoint = screenPoint;
        RawPoint = rawPoint;
        PointOnPlane = pointOnPlane;

        DetectedAisInteractives.Clear();
        if(detectedInteractive != null)
            DetectedAisInteractives.Add(detectedInteractive);

        DetectedEntities.Clear();
        if(detectedEntity != null)
            DetectedEntities.Add(detectedEntity);

        DetectedShapes.Clear();
        if(detectedShape != null)
            DetectedShapes.Add(detectedShape);
    }

    //--------------------------------------------------------------------------------------------------

}