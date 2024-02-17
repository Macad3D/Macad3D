using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
[DebuggerDisplay("{" + nameof(_DebuggerDisplay) + ",nq}")]
public abstract class SketchSegment : BaseObject
{
    [SerializeMember] 
    public int[] Points { get; protected set; }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool IsAuxilliary { get; set; }

    //--------------------------------------------------------------------------------------------------

    public bool IsPeriodic
    {
        get { return StartPoint == -1 && EndPoint == -1; }
    }

    //--------------------------------------------------------------------------------------------------

    public abstract int StartPoint { get; }
    public abstract int EndPoint { get; }

    //--------------------------------------------------------------------------------------------------

    public Geom2d_Curve CachedCurve { get; protected set; }

    //--------------------------------------------------------------------------------------------------

    public TopoDS_Edge MakeEdge(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var curve = MakeCurve(points);
            if (curve != null)
            {
                CachedCurve = curve;
                //return new BRepBuilderAPI_MakeEdge(GeomAPI.To3d(curve, Pln.XOY)).Edge();
                return new BRepBuilderAPI_MakeEdge2d(curve).Edge();
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public abstract Geom2d_Curve MakeCurve(Dictionary<int, Pnt2d> points);

    //--------------------------------------------------------------------------------------------------

    public bool IsConnected(SketchSegment other)
    {
        var s1 = StartPoint;
        var s2 = other.StartPoint;
        var e1 = EndPoint;
        var e2 = other.EndPoint;
        return ((s1 != -1) && ((s1 == e2) || (s1 == s2)))
               || ((e1 != -1) && ((e1 == e2) || (e1 == s2)));
    }

    //--------------------------------------------------------------------------------------------------

    public abstract SketchSegment Clone();

    //--------------------------------------------------------------------------------------------------

    protected SketchSegment Clone(SketchSegment targetSegment)
    {
        targetSegment.IsAuxilliary = IsAuxilliary;
        return targetSegment;
    }

    //--------------------------------------------------------------------------------------------------

    public void Invalidate()
    {
        CachedCurve = null;
    }

    //--------------------------------------------------------------------------------------------------

    string _DebuggerDisplay
    {
        get { return $"{GetType().Name} from {StartPoint} to {EndPoint}"; } 
    }
}