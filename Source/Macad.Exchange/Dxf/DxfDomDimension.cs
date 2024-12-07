using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomDimension : DxfDomEntity
{
    public enum Type
    {
        Linear = 0,
        Aligned = 1,
        Angular = 2,
        Diameter = 3,
        Radius = 4,
        Angular3Point = 5,
        Ordinate = 6
    }
    //--------------------------------------------------------------------------------------------------

    public string BlockName;
    public Pnt2d RefPoint0;
    public Pnt2d RefPoint1E;
    public Pnt2d RefPoint2E;
    public Pnt2d RefPoint3;
    public Pnt2d RefPoint4;
    public Pnt2d RefPoint5;
    public Pnt2d RefPoint6;
    public double Rotation;
    public Type DimensionType;
    public string Text;

    //--------------------------------------------------------------------------------------------------

    public DxfDomDimension()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomDimension(string layer, string blockName, Pnt2d textPointECS, double rotation)
    {
        LayerName = layer;
        BlockName = blockName;
        RefPoint1E = textPointECS;
        Rotation = rotation;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetLinearDimension(Pnt2d dimLinePoint, Pnt2d firstExtLineStart, Pnt2d secondExtLineStart)
    {
        DimensionType = Type.Linear;
        RefPoint0 = dimLinePoint;
        RefPoint3 = firstExtLineStart;
        RefPoint4 = secondExtLineStart;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SetAlignedDimension(Pnt2d dimLinePoint, Pnt2d firstPoint, Pnt2d secondPoint)
    {
        DimensionType = Type.Aligned;
        RefPoint0 = dimLinePoint;
        RefPoint3 = firstPoint;
        RefPoint4 = secondPoint;
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SetAngularDimension(Pnt2d dimLinePoint, Pnt2d firstPoint, Pnt2d secondPoint, Pnt2d centerPoint)
    {
        DimensionType = Type.Angular3Point;
        RefPoint0 = dimLinePoint;
        RefPoint3 = firstPoint;
        RefPoint4 = secondPoint;
        RefPoint5 = centerPoint;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        writer.Write(0, "DIMENSION");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbDimension");

        writer.Write(2, BlockName);

        writer.Write(10, RefPoint0.X);
        writer.Write(20, RefPoint0.Y);
        writer.Write(30, 0.0);

        writer.Write(11, RefPoint1E.X);
        writer.Write(21, RefPoint1E.Y);
        writer.Write(31, 0.0);

        writer.Write(70, (int)DimensionType + 32);
        writer.Write(53, Rotation);
            
        if(!Text.IsNullOrEmpty())
            writer.Write(1, Text);

        writer.Write(3, "Standard");

        if (writer.Version >= DxfVersion.AC1012)
        {
            writer.Write(71, 5); // Attachment point: Middle center
        }

        if (DimensionType is Type.Linear or Type.Aligned)
        {
            writer.WriteSubclass("AcDbAlignedDimension");
                
            writer.Write(13, RefPoint3.X);
            writer.Write(23, RefPoint3.Y);
            writer.Write(33, 0.0);

            writer.Write(14, RefPoint4.X);
            writer.Write(24, RefPoint4.Y);
            writer.Write(34, 0.0);
        }

        if (DimensionType is Type.Angular3Point)
        {
            writer.WriteSubclass("AcDb3PointAngularDimension");

            writer.Write(13, RefPoint3.X);
            writer.Write(23, RefPoint3.Y);
            writer.Write(33, 0.0);

            writer.Write(14, RefPoint4.X);
            writer.Write(24, RefPoint4.Y);
            writer.Write(34, 0.0);

            writer.Write(15, RefPoint5.X);
            writer.Write(25, RefPoint5.Y);
            writer.Write(35, 0.0);

            writer.Write(16, RefPoint6.X);
            writer.Write(26, RefPoint6.Y);
            writer.Write(36, 0.0);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Read(DxfReader reader)
    {
        return false; // Not supported
    }

    //--------------------------------------------------------------------------------------------------
        
}