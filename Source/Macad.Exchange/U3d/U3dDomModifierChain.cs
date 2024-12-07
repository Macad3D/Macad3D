using System.Collections.Generic;
using Macad.Common;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomModifierChain : U3dDomDeclarationBlock
{
    public enum ChainType
    {
        Node = 0,
        ModelResource = 1,
        TextureResource = 2
    }

    //--------------------------------------------------------------------------------------------------

    public string Name { get; }
    public ChainType Type { get; }
    public float[] BoundingSphere { get; set; }
    public float[] AABoundingBox { get; set; }

    public List<U3dDomModifierBlock> Modifiers { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public U3dDomModifierChain(ChainType type, string name) : base(0xffffff14)
    {
        Type = type;
        Name = name;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        writer.Write((uint)Type);

        uint attributes = 0;
        if (BoundingSphere?.Length == 4)
        {
            attributes |= 1;
        }
        if (AABoundingBox?.Length == 6)
        {
            attributes |= 2;
        }
        writer.Write(attributes);

        BoundingSphere?.ForEach(f => writer.Write(f));
        AABoundingBox?.ForEach(f => writer.Write(f));

        writer.WritePadding();
        writer.Write((uint)Modifiers.Count);

        foreach (var modifier in Modifiers)
        {
            modifier.WriteBlock(writer);
        }
    }

    //--------------------------------------------------------------------------------------------------

}