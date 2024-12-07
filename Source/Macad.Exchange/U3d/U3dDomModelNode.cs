using Macad.Occt;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomModelNode : U3dDomModifierBlock
{
    public enum ModelVisibility
    {
        Invisible = 0,
        Front = 1,
        Back = 2,
        FrontAndBack = 3
    }

    //--------------------------------------------------------------------------------------------------

    public string ResourceName { get; }
    public U3dDomGroupNode Parent { get; set; }
    public Ax3 Transform { get; set; } = Ax3.XOY;
    public ModelVisibility Visibility { get; set; } = ModelVisibility.Front;

    //--------------------------------------------------------------------------------------------------

    public U3dDomModelNode(U3dDomModifierChain modChain, string resourceName) 
        : base(modChain, 0xffffff22)
    {
        ResourceName = resourceName;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        writer.Write(1u);    // Parent node count
        writer.Write(Parent?.Name ?? ""); 
        writer.Write(Transform);
        writer.Write(ResourceName);
        writer.Write((uint)Visibility);
    }

    //--------------------------------------------------------------------------------------------------

}