using System.Collections.Generic;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomBlock
{
    public string Name;
    public Pnt2d Position;
    public bool IsGenerated;

    public List<DxfDomEntity> Entities { get; } = new();
        
    //--------------------------------------------------------------------------------------------------

    public DxfDomBlock()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomBlock(string blockName, bool isGenerated, Pnt2d position=default)
    {
        Name = blockName;
        Position = position;
        IsGenerated = isGenerated;
    }

    //--------------------------------------------------------------------------------------------------

    internal void Write(DxfWriter writer)
    {
        writer.Write(0, "BLOCK");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, "0"); // Layer is constant 0
        writer.WriteSubclass("AcDbBlockBegin");

        writer.Write(2, Name);
        writer.Write(70, IsGenerated ? 1 : 0);

        writer.Write(10, Position.X);
        writer.Write(20, Position.Y);
        writer.Write(30, 0.0);

        writer.Write(3, Name);

        // Entities
        Entities.ForEach(entity => entity.Write(writer));

        // Endblock
        writer.Write(0, "ENDBLK");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, "0"); // Layer is constant 0
        writer.WriteSubclass("AcDbBlockEnd");
    }

    //--------------------------------------------------------------------------------------------------

}