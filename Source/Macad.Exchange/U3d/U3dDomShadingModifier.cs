namespace Macad.Exchange.U3d;

internal sealed class U3dDomShadingModifier : U3dDomModifierBlock
{
    readonly U3dDomLitTextureShader _Shader;

    //--------------------------------------------------------------------------------------------------

    public U3dDomShadingModifier(U3dDomModifierChain modChain, U3dDomLitTextureShader shader) 
        : base(modChain, 0xffffff45)
    {
        _Shader = shader;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        writer.Write(ChainIndex);
        writer.Write(1u); // Shading Attributes: 1 = Mesh
        writer.Write(1u); // Shader list count
        writer.Write(1u); // Shader count
        writer.Write(_Shader?.Name ?? "");
    }
}