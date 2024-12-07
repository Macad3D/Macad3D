using Macad.Common;

namespace Macad.Exchange.U3d;

internal sealed class U3dDomMaterial : U3dDomDeclarationBlock
{
    public string Name { get; }

    public Color AmbientColor
    {
        get { return _AmbientColor ?? Color.Black; }
        set { _AmbientColor = value; }
    }
        
    public Color DiffuseColor
    {
        get { return _DiffuseColor ?? Color.Black; }
        set { _DiffuseColor = value; }
    }

    public Color SpecularColor
    {
        get { return _SpecularColor ?? Color.Black; }
        set { _SpecularColor = value; }
    }

    public Color EmmisiveColor
    {
        get { return _EmmisiveColor ?? Color.Black; }
        set { _EmmisiveColor = value; }
    }
        
    public float Reflectivity
    {
        get { return _Reflectivity ?? 0.0f; }
        set { _Reflectivity = value; }
    }
        
    public float Opacity
    {
        get { return _Opacity ?? 1.0f; }
        set { _Opacity = value; }
    }

    //--------------------------------------------------------------------------------------------------

    Color? _AmbientColor;
    Color? _DiffuseColor;
    Color? _SpecularColor;
    Color? _EmmisiveColor;
    float? _Reflectivity;
    float? _Opacity;

    //--------------------------------------------------------------------------------------------------

    public U3dDomMaterial(string name) 
        : base(0xffffff54)
    {
        Name = name;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void WriteBlockData(U3dWriter writer)
    {
        writer.Write(Name);

        uint attributes = 0;
        if (_AmbientColor.HasValue)
            attributes |= 1;
        if (_DiffuseColor.HasValue)
            attributes |= 2;
        if (_SpecularColor.HasValue)
            attributes |= 4;
        if (_EmmisiveColor.HasValue)
            attributes |= 8;
        if (_Reflectivity.HasValue)
            attributes |= 16;
        if (_Opacity.HasValue)
            attributes |= 32;
        writer.Write(attributes);

        writer.Write(AmbientColor);
        writer.Write(DiffuseColor);
        writer.Write(SpecularColor);
        writer.Write(EmmisiveColor);
        writer.Write(Reflectivity);
        writer.Write(Opacity);
    }
}