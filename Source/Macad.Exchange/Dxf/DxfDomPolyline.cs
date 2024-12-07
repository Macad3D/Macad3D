using System.Collections.Generic;
using System.Collections.Specialized;
using Macad.Core;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomPolyline : DxfDomEntity
{
    public Pnt2d[] Points;

    public bool IsClosed
    {
        get
        {
            return Points.Length > 2 && Points[0].IsEqual(Points[Points.Length - 1], 0.000001);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomPolyline()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomPolyline(string layer, Pnt2d[] points)
    {
        LayerName = layer;
        Points = points;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        writer.Write(0, "POLYLINE");
        writer.WriteHandle();
        writer.Write(8, LayerName);
        writer.Write(66, 1);
        writer.Write(10, 0.0);
        writer.Write(20, 0.0);
        writer.Write(30, 0.0);
        writer.Write(70, IsClosed ? 1 : 0);
        foreach (var point in Points)
        {
            writer.Write(0, "VERTEX");
            writer.WriteHandle();
            writer.Write(8, LayerName);
            writer.Write(10, point.X);
            writer.Write(20, point.Y);
            writer.Write(30, 0.0);
        }
        writer.Write(0, "SEQEND");
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(DxfReader reader)
    {
        var pointList = new List<Pnt2d>();
        Pnt2d point = default;
        bool skipNextVertex = false;
        var readBits = new BitVector32(0);

        // read POLYLINE
        while (reader.GroupCode > 0)
        {
            switch (reader.GroupCode)
            {
                case 70:
                    int flags = reader.ReadInteger();
                    if (flags > 1)
                    {
                        Messages.Warning($"DxfReader: Entity POLYGON has flags set in line {reader.Line} which are not supported for import. The polygon will be imported using straight lines between vertices.");
                    }
                    break;
                default:
                    reader.Skip();
                    break;
            }
        }

        // read VERTEX
        var type = reader.ReadString().ToUpper();
        while (type.Equals("VERTEX"))
        {
            while (reader.GroupCode > 0)
            {
                switch (reader.GroupCode)
                {
                    case 70:
                        int flags = reader.ReadInteger();
                        if (flags != 0)
                        {
                            skipNextVertex = true;
                        }
                        break;
                    case 10:
                        point.X = reader.ReadCoord();
                        readBits[0b01] = true;
                        break;
                    case 20:
                        point.Y = reader.ReadCoord();
                        readBits[0b10] = true;
                        break;
                    default:
                        reader.Skip();
                        break;
                }

                if (readBits.Data == 0b11)
                {
                    if (!skipNextVertex)
                    {
                        pointList.Add(point);
                    }

                    readBits = new BitVector32();
                    skipNextVertex = false;
                }
            }

            type = reader.ReadString().ToUpper();
        }

        if (type.Equals("SEQEND"))
        {
            Points = pointList.ToArray();
        }
        else
        {
            Messages.Error($"DxfReader: Entity POLYLINE contains subelement of type {type}, allowed is only VERTEX or SEQEND, on line {reader.Line}.");
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

}