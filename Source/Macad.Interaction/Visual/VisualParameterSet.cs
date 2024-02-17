using Macad.Common;

namespace Macad.Interaction.Visual;

public sealed class VisualParameterSet : OverridableParameterSet
{
    public double DeviationAngle        { get => GetValue<double>(); set => SetValue(value); }
    public double DeviationCoefficient  { get => GetValue<double>(); set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public VisualParameterSet()
    {
        SetDefaultValue(nameof(DeviationAngle),       12.0);
        SetDefaultValue(nameof(DeviationCoefficient), 0.001);
    }
}