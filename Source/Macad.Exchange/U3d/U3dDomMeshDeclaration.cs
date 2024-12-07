namespace Macad.Exchange.U3d;

internal sealed class U3dDomMeshDeclaration : U3dDomModifierBlock
{
    public uint FaceCount { get; set; }
    public uint PositionCount { get; set; }
    public uint NormalCount { get; set; }
    public uint DiffuseColorCount { get; set; }
    public uint SpecularColorCount { get; set; }
    public uint TextureCoordCount { get; set; }

    //--------------------------------------------------------------------------------------------------

    public U3dDomMeshDeclaration(U3dDomModifierChain modChain) 
        : base(modChain, 0xffffff31)
    {
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);  // CLOD Modifier Name == Modifier Chain Name
        writer.Write(ChainIndex); // Chain Index 

        // Max Mesh Description
        writer.Write(NormalCount > 0 ? 0u : 1u); //  Mesh Attributes: 1 = Exclude Normals  
        writer.Write(FaceCount);
        writer.Write(PositionCount);
        writer.Write(NormalCount);
        writer.Write(DiffuseColorCount);
        writer.Write(SpecularColorCount);
        writer.Write(TextureCoordCount);
        writer.Write(1u);  // Shading Count, currently only default supported
        uint attributes = 0;        // 0 = The shader list uses neither diffuse colors nor specular colors.
        if (DiffuseColorCount > 0)
            attributes |= 1;        // 1 = The shader list uses per vertex diffuse colors.
        writer.Write(attributes);   // Shading Attributes
        writer.Write(0u);  // Texture Layer Count
        writer.Write(0u);  // Original Shading ID 

        // CLOD Description 
        writer.Write(PositionCount);  // Minimum Resolution 
        writer.Write(PositionCount);  // Final Maximum Resolution

        // Resource Description
        writer.Write(0u);    // Position Quality Factor
        writer.Write(0u);    // Normal Quality Factor
        writer.Write(0u);    // Texture Coord Quality Factor
        writer.Write(1.0f); // Position Inverse Quant 
        writer.Write(1.0f); // Normal Inverse Quant 
        writer.Write(1.0f); // Texture Coord Inverse Quant 
        writer.Write(1.0f); // Diffuse Color Inverse Quant 
        writer.Write(1.0f); // Specular Color Inverse Quant 
        writer.Write(0.0f); // Normal Crease Parameter
        writer.Write(0.0f); // Normal Update Parameter
        writer.Write(0.0f); // Normal Tolerance Parameter

        // Skeleton Description
        writer.Write(0u);    // Bone Count
    }

    //--------------------------------------------------------------------------------------------------

}