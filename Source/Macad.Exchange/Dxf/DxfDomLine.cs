using System.Collections.Specialized;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomLine : DxfDomEntity
{
    public Pnt2d StartPoint;
    public Pnt2d EndPoint;

    //--------------------------------------------------------------------------------------------------

    public DxfDomLine()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomLine(string layer, Pnt2d startPoint, Pnt2d endPoint)
    {
        LayerName = layer;
        StartPoint = startPoint;
        EndPoint = endPoint;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        writer.Write(0, "LINE");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbLine");

        writer.Write(10, StartPoint.X);
        writer.Write(20, StartPoint.Y);
        writer.Write(30, 0.0);

        writer.Write(11, EndPoint.X);
        writer.Write(21, EndPoint.Y);
        writer.Write(31, 0.0);
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
                    StartPoint.X = reader.ReadCoord();
                    readBits[0b1] = true;
                    break;
                case 20:
                    StartPoint.Y = reader.ReadCoord();
                    readBits[0b10] = true;
                    break;
                case 11:
                    EndPoint.X = reader.ReadCoord();
                    readBits[0b100] = true;
                    break;
                case 21:
                    EndPoint.Y = reader.ReadCoord();
                    readBits[0b1000] = true;
                    break;
                default:
                    reader.Skip();
                    break;
            }
        }

        return readBits.Data == 0b1111;
    }

    //--------------------------------------------------------------------------------------------------

}