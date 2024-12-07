using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using Macad.Core;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomLwPolyline : DxfDomEntity
{
    public Pnt2d[] Points;
    public double[] Bulge;

    //--------------------------------------------------------------------------------------------------

    public bool IsClosed
    {
        get
        {
            return Points.Length > 2 && Points[0].IsEqual(Points[^1], 0.000001);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomLwPolyline()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomLwPolyline(string layer, Pnt2d[] points)
    {
        LayerName = layer;
        Points = points;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        // LWPOLYLINE supported by AC1012 or later
        if (writer.Version >= DxfVersion.AC1012)
        {
            writer.Write(0, "LWPOLYLINE");
            writer.WriteHandle();
            writer.WriteSubclass("AcDbEntity");
            writer.Write(8, LayerName);
            writer.WriteSubclass("AcDbPolyline");

            writer.Write(90, Points.Length);
            writer.Write(70, IsClosed ? 1 : 0);

            foreach (var point in IsClosed ? Points.SkipLast(1) : Points)
            {
                writer.Write(10, point.X);
                writer.Write(20, point.Y);
                writer.Write(30, 0.0);
            }
        }
        else
        {
            // Version only for AC1009
            writer.Write(0, "POLYLINE");
            writer.WriteHandle();
            writer.Write(8, LayerName);
            writer.Write(66, 1);
            writer.Write(10, 0.0);
            writer.Write(20, 0.0);
            writer.Write(30, 0.0);
            writer.Write(70, IsClosed ? 1 : 0);
            foreach (var point in IsClosed ? Points.SkipLast(1) : Points)
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
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(DxfReader reader)
    {
        var pointList = new List<Pnt2d>();
        var bulgeList = new List<double>();
        Pnt2d point = default;
        var pointCount = 0;
        var readBits = new BitVector32(0);
        var typeFlag = 0;

        while (reader.GroupCode > 0)
        {
            switch (reader.GroupCode)
            {
                case 90:
                    pointCount = reader.ReadInteger();
                    break;
                case 70:
                    typeFlag = reader.ReadInteger();
                    break;
                case 10:
                    point.X = reader.ReadCoord();
                    readBits[0b01] = true;
                    break;
                case 20:
                    point.Y = reader.ReadCoord();
                    readBits[0b10] = true;
                    break;
                case 42:
                    if (bulgeList.Count == 0)
                    {
                        Messages.Error($"DxfReader: Entity LWPOLYLINE has a bulge parameter which is expected after vertex coordinates in line {reader.Line}.");
                        return false;
                    }
                    bulgeList[^1] = reader.ReadDouble();
                    break;
                default:
                    reader.Skip();
                    break;
            }

            if (readBits.Data == 0b11)
            {
                pointList.Add(point);
                bulgeList.Add(0.0);
                readBits = new BitVector32();
            }
        }

        if (pointCount != pointList.Count)
        {
            Messages.Error($"DxfReader: Entity LWPOLYLINE count of point data does not match point list length in groupcode 90 in line {reader.Line}.");
            return false;
        }

        //A closed polyline
        if (typeFlag == 1 && pointList.Count > 0)
        {
            pointList.Add(pointList[0]);
            bulgeList.Add(bulgeList[0]);
        }

        Points = pointList.ToArray();
        Bulge = bulgeList.ToArray();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}