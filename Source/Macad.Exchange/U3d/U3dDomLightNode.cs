using Macad.Occt;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomLightNode : U3dDomModifierBlock
{
    public string ResourceName { get; }
    public Ax3 Transform { get; set; } = Ax3.XOY;


    //--------------------------------------------------------------------------------------------------

    public U3dDomLightNode(U3dDomModifierChain modChain, string resourceName) 
        : base(modChain, 0xffffff23)
    {
        ResourceName = resourceName;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        writer.Write(1u);    // Parent node count
        writer.Write("");    // Parent node name, currently only root supported
        writer.Write(Transform);
        writer.Write(ResourceName);
    }
}