using Macad.Common;

namespace Macad.Interaction.Visual;

[ParameterSet]
public sealed partial class VisualParameterSet
{
    public enum HighlightStyles
    {
        Modern = 0,
        Classic = 1,
    }

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<HighlightStyles> _HighlightStyle = new()
    {
        Name = "HighlightStyle",
        DefaultValue = HighlightStyles.Modern,
        Description = "Defines the style of highlighting. Currently only affects the hover highlighting.",
        EditorHints = new() { { "EnumDisplayNames", "Modern (Outline);Classic (Wireframe)" } }
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<int> _OutlineWidth = new()
    {
        Name = "OutlineWidth",
        DefaultValue = 5,
        Description = "Sets the width of the outline used in modern highlighting style.",
        EditorHints = new() { { "Units", "Pixel" }, { "MinValue", 1 }, { "MaxValue", 20 } },
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<double> _DeviationAngle = new()
    {
        Name = "DeviationAngle",
        DefaultValue = 12.0,
        Description = "Sets the maximum angular difference between adjacent mesh facets, influencing surface smoothness and display performance.",
        EditorHints = new() { { "Units", "Angle" }, { "MinValue", 0.5 }, { "MaxValue", 45.0 } },
        PhysicalQuantity = PhysicalQuantities.Angle,
        Flags = Parameter.ParameterFlags.NeedsRestart
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<double> _DeviationCoefficient = new()
    {
        Name = "DeviationCoefficient",
        DefaultValue = 0.001,
        Description = "Controls the allowed deviation of the display mesh from the exact geometry, affecting visual accuracy and performance.",
        EditorHints = new() { { "Precision", 5 }, { "MinValue", 0.00001 }, { "MaxValue", 0.01 } },
        Flags = Parameter.ParameterFlags.NeedsRestart
    };

    //--------------------------------------------------------------------------------------------------
}