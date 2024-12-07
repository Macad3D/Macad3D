namespace Macad.Exchange.U3d;

internal sealed class U3dDomViewResource : U3dDomDeclarationBlock
{
    public string Name { get; }

    //--------------------------------------------------------------------------------------------------

    public U3dDomViewResource(string name) 
        : base(0xffffff52)
    {
        Name = name;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        writer.Write(1u);       // Pass count
            
        writer.Write("");       // Root Node Name
        writer.Write(0u);       // Render attributes: 0 = No fog
        writer.Write(1u);       // Fog Mode: 1 = Exponential
        writer.Write(0.5f);     // Fog Color Red
        writer.Write(0.5f);     // Fog Color Green
        writer.Write(0.5f);     // Fog Color Blue
        writer.Write(0.5f);     // Fog Color Alpha
        writer.Write(0.0f);     // Fog Near Value
        writer.Write(1000.0f);  // Fog Far Value
    }
}