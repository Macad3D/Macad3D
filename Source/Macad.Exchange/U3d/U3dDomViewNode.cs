using Macad.Occt;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomViewNode : U3dDomModifierBlock
{
    public string ResourceName { get; }
    public Ax3 Transform { get; set; } = Ax3.XOY;
    public float NearClip { get; set; } = 1.0f;
    public float FarClip { get; set; } = 1000.0f;
    public float OrthographicHeight { get; set; } = 100.0f;

    //--------------------------------------------------------------------------------------------------

    public U3dDomViewNode(U3dDomModifierChain modChain, string resourceName) 
        : base(modChain, 0xffffff24)
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

        writer.Write((uint)3);  // ViewNode Attributes: 2 = orthographic projection, 1 = screen position units: expressed as percentage of screen dimension
        writer.Write(NearClip);
        writer.Write(FarClip);
        writer.Write(OrthographicHeight);
            
        writer.Write(1.0f);     // View Port Width
        writer.Write(1.0f);     // View Port Height
        writer.Write(0.0f);     // View Port Horizontal Position
        writer.Write(0.0f);     // View Port Vertical Position

        writer.Write(0u);       // Backdrop Count

        writer.Write(0u);       // Overlay Count
    }
}