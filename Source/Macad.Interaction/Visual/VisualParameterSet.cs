using Macad.Common;

namespace Macad.Interaction.Visual;

[ParameterSet]
public sealed partial class VisualParameterSet
{
    readonly Parameter<double> _DeviationAngle = new()
    {
        Name = "DeviationAngle",
        DefaultValue = 12.0,
        Description = "Sets the maximum angular difference between adjacent mesh facets, influencing surface smoothness and display performance.",
        EditorHints = new() { { "Units", "Degree" }, { "MinValue", 0.5 }, { "MaxValue", 45.0 } },
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