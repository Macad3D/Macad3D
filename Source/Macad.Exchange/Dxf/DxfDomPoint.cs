using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomPoint : DxfDomEntity
{
    public Pnt2d Point;

    //--------------------------------------------------------------------------------------------------

    public DxfDomPoint()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomPoint(string layer, Pnt2d point)
    {
        LayerName = layer;
        Point = point;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        writer.Write(0, "POINT");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbPoint");

        writer.Write(10, Point.X);
        writer.Write(20, Point.Y);
        writer.Write(30, 0.0);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(DxfReader reader)
    {
        return false; // Not supported
    }

    //--------------------------------------------------------------------------------------------------

}