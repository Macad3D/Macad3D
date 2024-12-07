using Macad.Common;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomLightResource : U3dDomDeclarationBlock
{
    public enum LightType : byte
    {
        Ambient = 0,
        Directional = 1,
        Point = 2,
        Spot = 3
    }

    //--------------------------------------------------------------------------------------------------

    public string Name { get; }
    public LightType Type { get; set; } = LightType.Directional;
    public Color Color { get; set; } = Color.White;
    public float AttenuationConstant { get; set; } = 1.0f;
    public float AttenuationLinear { get; set; } = 0.0f;
    public float AttenuationQuadratic { get; set; } = 0.0f;
    public float SpotAngle { get; set; } = 180.0f;
    public float Intensity { get; set; } = 1.0f;

    //--------------------------------------------------------------------------------------------------

    public U3dDomLightResource(string name) 
        : base(0xFFFFFF51)
    {
        Name = name;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);
        uint attributes = 1u;  //  1 =  Light Enabled
        writer.Write(attributes);
        writer.Write((byte)Type);
        writer.Write(Color.Red);
        writer.Write(Color.Green);
        writer.Write(Color.Blue);
        writer.Write(1.0f);   // Reserved, must be 1.0
        writer.Write(AttenuationConstant);
        writer.Write(AttenuationLinear);
        writer.Write(AttenuationQuadratic);
        writer.Write(SpotAngle);
        writer.Write(Intensity);
    }
}