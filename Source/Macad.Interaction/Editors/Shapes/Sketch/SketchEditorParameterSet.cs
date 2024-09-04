using Macad.Common;

namespace Macad.Interaction.Editors.Shapes;

public sealed class SketchEditorParameterSet : OverridableParameterSet
{
    public double DeviationAngle               { get => GetValue<double>(); set => SetValue(value); }
    public double SegmentSelectionSensitivity  { get => GetValue<double>(); set => SetValue(value); }
    public int    MaximumPointCountSnapping    { get => GetValue<int>(); set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public SketchEditorParameterSet()
    {
        SetDefaultValue(nameof(DeviationAngle),  2.0);
        SetDefaultValue(nameof(SegmentSelectionSensitivity), 1.0);
        SetDefaultValue(nameof(MaximumPointCountSnapping), 10);
    }
}