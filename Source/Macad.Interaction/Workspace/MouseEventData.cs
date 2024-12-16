using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction;

public interface IMouseEventHandler
{
    bool OnMouseMove(MouseEventData data);
    bool OnMouseDown(MouseEventData data);
    bool OnMouseUp(MouseEventData data);
}

//--------------------------------------------------------------------------------------------------

public class MouseEventData
{
    public readonly struct Element
    {
        public AIS_InteractiveObject AisObject { get; }
        public InteractiveEntity Entity { get; }
        public TopoDS_Shape BrepShape { get; }

        //--------------------------------------------------------------------------------------------------

        public Element(AIS_InteractiveObject aisObject, InteractiveEntity entity, TopoDS_Shape brepShape)
        {
            AisObject = aisObject;
            Entity = entity;
            BrepShape = brepShape;
        }
        
        //--------------------------------------------------------------------------------------------------

        public Element(AIS_InteractiveObject aisObject, TopoDS_Shape brepShape=null)
        {
            AisObject = aisObject;
            BrepShape = brepShape;
        }
        
        //--------------------------------------------------------------------------------------------------

        public Element(InteractiveEntity entity)
        {
            Entity = entity;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public class ReturnOptions
    {
        public List<Element> AdditionalHighlights { get; } = [];

        public bool ForceReDetection { get; set; }

        public bool RemoveHighlighting { get; set; }
        
        //--------------------------------------------------------------------------------------------------

        public void Clear()
        {
            AdditionalHighlights.Clear();
            ForceReDetection = false;
            RemoveHighlighting = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Viewport Viewport => ViewportController.Viewport;

    public ViewportController ViewportController { get; private set; }

    public Point ScreenPoint { get; private set; }

    public Pnt PointOnPlane { get; private set; }

    public ModifierKeys ModifierKeys { get; set; }

    public List<Element> DetectedElements { get; } = [];

    public ReturnOptions Return { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public Ax1 PickAxis
    {
        get
        {
            return ViewportController.ScreenToViewAxis((int)ScreenPoint.X, (int)ScreenPoint.Y);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public InteractiveEntity DetectedEntity
    {
        get { return DetectedElements.Count > 0 ? DetectedElements[0].Entity : null; }
    }
    public TopoDS_Shape DetectedBrepShape
    {
        get { return DetectedElements.Count > 0 ? DetectedElements[0].BrepShape : null; }
    }
    public AIS_InteractiveObject DetectedAisObject
    {
        get { return DetectedElements.Count > 0 ? DetectedElements[0].AisObject : null; }
    }

    //--------------------------------------------------------------------------------------------------

    public void Clear()
    {
        ViewportController = default;
        ScreenPoint = default;
        PointOnPlane = default;
        DetectedElements.Clear();
        Return.Clear();
    }
    
    //--------------------------------------------------------------------------------------------------

    public void Set(in ViewportController viewportCtrl, in Point screenPoint, in Pnt pointOnPlane, in ModifierKeys modifierKeys)
    {
        Clear();

        ViewportController = viewportCtrl;
        ScreenPoint = screenPoint;
        PointOnPlane = pointOnPlane;
        ModifierKeys = modifierKeys;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetDetectedElements(IEnumerable<AIS_InteractiveObject> aisObjects, IEnumerable<InteractiveEntity> entities, IEnumerable<TopoDS_Shape> brepShapes)
    {
        DetectedElements.Clear();

        using var e1 = aisObjects.GetEnumerator();
        using var e2 = entities.GetEnumerator();
        using var e3 = brepShapes.GetEnumerator();

        while (true)
        {
            var c1 = e1.MoveNext() ? e1.Current : null;
            var c2 = e2.MoveNext() ? e2.Current : null;
            var c3 = e3.MoveNext() ? e3.Current : null;
            if (c1 == null && c2 == null && c3 == null)
                return;

            DetectedElements.Add(new Element(c1, c2, c3));
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    public void SetDetectedElement(AIS_InteractiveObject aisObject, InteractiveEntity entity, TopoDS_Shape brepShape)
    {
        DetectedElements.Clear();
        DetectedElements.Add(new Element(aisObject, entity, brepShape));
    }

    //--------------------------------------------------------------------------------------------------

}