namespace Macad.Exchange.U3d;

internal abstract class U3dDomBlock
{
    readonly uint _BlockType;

    //--------------------------------------------------------------------------------------------------

    protected U3dDomBlock(uint blockType)
    {
        _BlockType = blockType;
    }

    //--------------------------------------------------------------------------------------------------

    public void WriteBlock(U3dWriter writer)
    {
        writer.Write(_BlockType);
        var posDataSize = writer.Position;
        writer.Write(0); // Data Size, will be overwritten later
        writer.Write(0); // Meta Data Size, currently unsupported

        var posStartData = writer.Position;
        WriteBlockData(writer);

        // Update Data Size
        uint dataSize = writer.Position - posStartData;
        writer.WriteAt(posDataSize, dataSize);

        writer.WritePadding();
    }

    //--------------------------------------------------------------------------------------------------

    protected abstract void WriteBlockData(U3dWriter writer);

    //--------------------------------------------------------------------------------------------------
}

//--------------------------------------------------------------------------------------------------

internal abstract class U3dDomDeclarationBlock : U3dDomBlock
{
    protected U3dDomDeclarationBlock(uint blockType) : base(blockType)
    {
    }
}
    
//--------------------------------------------------------------------------------------------------

internal abstract class U3dDomContinuationBlock : U3dDomBlock
{
    protected U3dDomContinuationBlock(uint blockType) : base(blockType)
    {
    }
}
        
//--------------------------------------------------------------------------------------------------

internal abstract class U3dDomModifierBlock : U3dDomBlock
{
    public string Name => _ModifierChain?.Name ?? "";
    public uint ChainIndex => (uint) (_ModifierChain?.Modifiers.IndexOf(this) ?? 0);

    readonly U3dDomModifierChain _ModifierChain;

    //--------------------------------------------------------------------------------------------------

    protected U3dDomModifierBlock(U3dDomModifierChain modChain, uint blockType) : base(blockType)
    {
        _ModifierChain = modChain;
        _ModifierChain.Modifiers.Add(this);
    }
}