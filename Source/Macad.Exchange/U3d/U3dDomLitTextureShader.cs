namespace Macad.Exchange.U3d;

internal sealed class U3dDomLitTextureShader : U3dDomDeclarationBlock
{
    public string Name { get; }
    public U3dDomMaterial Material { get; set; }

    //--------------------------------------------------------------------------------------------------

    public U3dDomLitTextureShader(string name) 
        : base(0xffffff53)
    {
        Name = name;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);     // Lit Texture Shader Name
        writer.Write(1u);       // Lit Texture Shader Attributes: 1 = Lighting Enabled
        writer.Write(0.0f);     // Alpha Test Reference
        writer.Write(0x617u);   // Alpha Test Function: 0x617 = ALWAYS
        writer.Write(0x606u);   // Color Blend Function: 0x606 = FB_ALPHA_BLEND
        writer.Write(1u);       // Render Pass Flags
        writer.Write(0u);       // Shader Channels
        writer.Write(0u);       // Alpha Texture Channels
        writer.Write(Material?.Name ?? ""); // Material Name
            
        // Texture Information - not supported yet
    }

    //--------------------------------------------------------------------------------------------------

}