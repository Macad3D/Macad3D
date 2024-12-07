namespace Macad.Exchange.U3d;

internal sealed class U3dDomClodModifier : U3dDomModifierBlock
{
    public U3dDomClodModifier(U3dDomModifierChain modChain, string name) 
        : base(modChain, 0xffffff46)
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);  // CLOD Modifier Name == Modifier Chain Name
        writer.Write(ChainIndex); 
        writer.Write(0u); // CLOD Modifier Attributes: Default attributes (automatic LOD control is disabled) 
        writer.Write(1.0f); // CLOD Automatic Level of Detail Bias 
        writer.Write(1.0f); // CLOD Modifier Level
    }
}