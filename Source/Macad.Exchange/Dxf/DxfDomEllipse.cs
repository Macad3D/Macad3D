using System.Collections.Specialized;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomEllipse : DxfDomEntity
{
    public Pnt2d CenterPoint;
    public Pnt2d MajorAxisPointOffset;
    public double Ratio;
    public double StartParameter;
    public double EndParameter;

    //--------------------------------------------------------------------------------------------------

    public bool IsArc
    {
        get { return StartParameter > 0.0 || EndParameter < Maths.DoublePI; }
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomEllipse()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomEllipse(string layer, Pnt2d centerPoint, Pnt2d majorAxisPointOffset, double ratio)
    {
        LayerName = layer;
        CenterPoint = centerPoint;
        MajorAxisPointOffset = majorAxisPointOffset;
        Ratio = ratio;
        StartParameter = 0.0;
        EndParameter = Maths.DoublePI;
    }

    //--------------------------------------------------------------------------------------------------

    public DxfDomEllipse(string layer, Pnt2d centerPoint, Pnt2d majorAxisPointOffset, double ratio, double startParam, double endParam)
    {
        LayerName = layer;
        CenterPoint = centerPoint;
        MajorAxisPointOffset = majorAxisPointOffset;
        Ratio = ratio;

        StartParameter = startParam;
        EndParameter = endParam;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        if (writer.Version < DxfVersion.AC1012)
        {
            return;
        }

        writer.Write(0, "ELLIPSE");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbEllipse");

        writer.Write(10, CenterPoint.X);
        writer.Write(20, CenterPoint.Y);
        writer.Write(30, 0.0);
        writer.Write(11, MajorAxisPointOffset.X);
        writer.Write(21, MajorAxisPointOffset.Y);
        writer.Write(31, 0.0);

        writer.Write(40, Ratio);
        writer.Write(41, StartParameter);
        writer.Write(42, EndParameter);
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
                case 11:
                    MajorAxisPointOffset.X = reader.ReadCoord();
                    readBits[0b100] = true;
                    break;
                case 21:
                    MajorAxisPointOffset.Y = reader.ReadCoord();
                    readBits[0b1000] = true;
                    break;
                case 40:
                    Ratio = reader.ReadDouble();
                    readBits[0b10000] = true;
                    break;
                case 41:
                    StartParameter = reader.ReadDouble();
                    readBits[0b100000] = true;
                    break;
                case 42:
                    EndParameter = reader.ReadDouble();
                    readBits[0b1000000] = true;
                    break;
                default:
                    reader.Skip();
                    break;
            }
        }

        return readBits.Data == 0b11111 || readBits.Data == 0b1111111;
    }

    //--------------------------------------------------------------------------------------------------

}