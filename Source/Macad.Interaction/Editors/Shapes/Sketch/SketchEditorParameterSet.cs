using Macad.Common;

namespace Macad.Interaction.Editors.Shapes;

[ParameterSet]
public sealed partial class SketchEditorParameterSet
{
    readonly Parameter<double> _DeviationAngle = new()
    {
        Name = "DeviationAngle",
        DefaultValue = 2.0,
        Description = "Sets the maximum angular difference between tesselated parts of segments, influencing curve smoothness and display performance.",
        EditorHints = new() { { "Units", "Degree" }, { "MinValue", 0.5 }, { "MaxValue", 45.0 } },
        Flags = Parameter.ParameterFlags.NeedsRestart,
        PhysicalQuantity = PhysicalQuantities.Angle
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<double> _SegmentSelectionSensitivity = new()
    {
        Name = "SegmentSelectionSensitivity",
        DefaultValue = 1.0,
        Description = "Adjusts the sensitivity of segment selection, with higher values making it easier to select segments.",
        EditorHints = new() { { "Precision", 1 }, { "MinValue", 0.1 }, { "MaxValue", 5.0 } },
        Flags = Parameter.ParameterFlags.NeedsRestart
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<int> _MaximumPointCountSnapping = new()
    {
        Name = "MaximumPointCountSnapping",
        DisplayName = "Max Points Snapping",
        DefaultValue = 10,
        Description = "Defines the maximum number of points in a sketch for which snapping is active at the same time. Higher values may impact performance.",
        EditorHints = new() { { "MinValue", 1 }, { "MaxValue", 100 } }
    };

    //--------------------------------------------------------------------------------------------------
}