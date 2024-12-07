using System.Collections.Specialized;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomCircle : DxfDomEntity
{
    public Pnt2d CenterPoint;
    public double Radius;
    public double StartAngle;
    public double EndAngle;

    //--------------------------------------------------------------------------------------------------

    public bool IsArc
    {
        get { return StartAngle != 0.0 || EndAngle != 0.0; }
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomCircle()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomCircle(string layer, Pnt2d centerPoint, double radius)
    {
        LayerName = layer;
        CenterPoint = centerPoint;
        Radius = radius;
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomCircle(string layer, Pnt2d centerPoint, double radius, double startAngle, double endAngle)
    {
        LayerName = layer;
        CenterPoint = centerPoint;
        Radius = radius;

        StartAngle = startAngle;
        EndAngle = endAngle;
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomCircle(string layer, Pnt2d centerPoint, double radius, Pnt2d startPoint, Pnt2d endPoint)
    {
        LayerName = layer;
        CenterPoint = centerPoint;
        Radius = radius;

        // Direction of angle=0° is X+
        StartAngle = new Ax2d(CenterPoint, Dir2d.DX).Angle(new Ax2d(CenterPoint, new Vec2d(CenterPoint, startPoint).ToDir())).ToDeg();
        EndAngle = new Ax2d(CenterPoint, Dir2d.DX).Angle(new Ax2d(CenterPoint, new Vec2d(CenterPoint, endPoint).ToDir())).ToDeg();
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        writer.Write(0, IsArc ? "ARC" : "CIRCLE");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbCircle");

        writer.Write(10, CenterPoint.X);
        writer.Write(20, CenterPoint.Y);
        writer.Write(30, 0.0);

        writer.Write(40, Radius);

        if (IsArc)
        {
            writer.WriteSubclass("AcDbArc");
            writer.Write(50, StartAngle);
            writer.Write(51, EndAngle);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(DxfReader reader)
    {
        var readBits = new BitVector32(0);

        while (reader.GroupCode > 0)
        {
            switch (reader.GroupCode)
            {
                case 10:
                    CenterPoint.X = reader.ReadCoord();
                    readBits[0b1] = true;
                    break;
                case 20:
                    CenterPoint.Y = reader.ReadCoord();
                    readBits[0b10] = true;
                    break;
                case 40:
                    Radius = reader.ReadCoord();
                    readBits[0b100] = true;
                    break;
                case 50:
                    StartAngle = reader.ReadAngle();
                    readBits[0b1000] = true;
                    break;
                case 51:
                    EndAngle = reader.ReadAngle();
                    readBits[0b10000] = true;
                    break;
                default:
                    reader.Skip();
                    break;
            }
        }

        return readBits.Data == 0b111 || readBits.Data == 0b11111;
    }

    //--------------------------------------------------------------------------------------------------

}