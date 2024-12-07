using Macad.Occt;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomGroupNode : U3dDomModifierBlock
{
    public Ax3 Transform { get; set; } = Ax3.XOY;

    //--------------------------------------------------------------------------------------------------

    public U3dDomGroupNode(U3dDomModifierChain modChain) 
        : base(modChain, 0xffffff21)
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        writer.Write(1u);    // Parent node count, currently not supported
        writer.Write("");   // Currently only the root is valid
        writer.Write(Transform);
    }
}