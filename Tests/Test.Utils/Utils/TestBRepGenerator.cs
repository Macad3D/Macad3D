using Macad.Occt;

namespace Macad.Test.Utils;

public class TestBRepGenerator
{
    public static TopoDS_Wire MakeClosedRectWire(double x1, double y1, double x2, double y2)
    {
        var p1 = new Pnt(x1, y1, 0);
        var p2 = new Pnt(x2, y1, 0);
        var p3 = new Pnt(x2, y2, 0);
        var p4 = new Pnt(x1, y2, 0);
        var e1 = new BRepBuilderAPI_MakeEdge(p1, p2).Edge();
        var e2 = new BRepBuilderAPI_MakeEdge(p2, p3).Edge();
        var e3 = new BRepBuilderAPI_MakeEdge(p3, p4).Edge();
        var e4 = new BRepBuilderAPI_MakeEdge(p4, p1).Edge();
        return new BRepBuilderAPI_MakeWire(e1, e2, e3, e4).Wire();
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Wire MakeOpenWire()
    {
        var p1 = new Pnt(10, 10, 0);
        var p2 = new Pnt(20, 10, 0);
        var p3 = new Pnt(20, 20, 0);
        var e1 = new BRepBuilderAPI_MakeEdge(p1, p2).Edge();
        var e2 = new BRepBuilderAPI_MakeEdge(p2, p3).Edge();
        return new BRepBuilderAPI_MakeWire(e1, e2).Wire();
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape ShapeFromWires(params TopoDS_Wire[] wires)
    {
        var builder = new BRep_Builder();
        var compound = new TopoDS_Compound();
        builder.MakeCompound(compound);
        foreach (var wire in wires)
        {
            builder.Add(compound, wire);
        }

        return compound;
    }

    //--------------------------------------------------------------------------------------------------

}