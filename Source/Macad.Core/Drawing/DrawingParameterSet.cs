using Macad.Common;

namespace Macad.Core.Drawing;

public class DrawingParameterSet : OverridableParameterSet
{
    public double DimensionArrowLength  { get => GetValue<double>(); set => SetValue(value); }
    public double DimensionArrowWidth   { get => GetValue<double>(); set => SetValue(value); }
    public string DefaultFontFamily     { get => GetValue<string>(); set => SetValue(value); }
    public float  DefaultFontSize       { get => GetValue<float>();  set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public DrawingParameterSet()
    {
        SetDefaultValue(nameof(DimensionArrowLength), 3.0);
        SetDefaultValue(nameof(DimensionArrowWidth),  1.0);
        SetDefaultValue(nameof(DefaultFontFamily),    "Arial");
        SetDefaultValue(nameof(DefaultFontSize),      3.0f);
    }
}