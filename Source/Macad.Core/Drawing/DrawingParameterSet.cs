using Macad.Common;

namespace Macad.Core.Drawing;

[ParameterSet]
public sealed partial class DrawingParameterSet
{
    readonly Parameter<double> _DimensionArrowLength = new () {
        Name = "DimensionArrowLength",
        DefaultValue = 3.0,
        Description = "Length of the dimension arrow in mm.",
        EditorHints = new() { { "Units", "Length" }, { "MinValue", 0.01 } }
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<double> _DimensionArrowWidth = new()
    {
        Name = "DimensionArrowWidth",
        DefaultValue = 1.0,
        Description = "Width of the dimension arrow in mm.",
        EditorHints = new() { { "Units", "Length" }, { "MinValue", 0.01 } }
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<string> _DefaultFontFamily = new()
    {
        Name = "DefaultFontFamily",
        DefaultValue = "Arial",
        Description = "Font family used for dimensions and text annotations.",
        EditorHints = new() { { "Selector", "FontFamily" } }
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<float> _DefaultFontSize = new()
    {
        Name = "DefaultFontSize",
        DefaultValue = 3.0f,
        Description = "Default font size in mm.",
        EditorHints = new() { { "Units", "Length" }, { "MinValue", 0.01 } }
    };

    //--------------------------------------------------------------------------------------------------
}