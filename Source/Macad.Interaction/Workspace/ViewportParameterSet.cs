using Macad.Common;

namespace Macad.Interaction;

public sealed class ViewportParameterSet : OverridableParameterSet
{
    public int    SketchSelectionSensitivity  { get => GetValue<int>();    set => SetValue(value); }
    public int    SelectionPixelTolerance     { get => GetValue<int>();    set => SetValue(value); }

    public bool   ShowViewCube                { get => GetValue<bool>();   set => SetValue(value); }
    public uint   ViewCubeSize                { get => GetValue<uint>();   set => SetValue(value); }
    public double ViewCubeAnimationDuration   { get => GetValue<double>(); set => SetValue(value); }

    public bool   ShowTrihedron               { get => GetValue<bool>();   set => SetValue(value); }
    public uint   VisualGridStepMinPixel      { get => GetValue<uint>();   set => SetValue(value); }
    public uint   VisualGridMinStepsOnScreen  { get => GetValue<uint>();   set => SetValue(value); }

    public bool   EnableAntialiasing          { get => GetValue<bool>();   set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public ViewportParameterSet()
    {
        SetDefaultValue(nameof(SketchSelectionSensitivity),  1);
        SetDefaultValue(nameof(SelectionPixelTolerance),     5);

        SetDefaultValue(nameof(ShowViewCube),                true);
        SetDefaultValue(nameof(ViewCubeSize),                (uint)50);
        SetDefaultValue(nameof(ViewCubeAnimationDuration),   0.3);

        SetDefaultValue(nameof(ShowTrihedron),               true);
        SetDefaultValue(nameof(VisualGridStepMinPixel),      10u);
        SetDefaultValue(nameof(VisualGridMinStepsOnScreen),  10u);

        SetDefaultValue(nameof(EnableAntialiasing),          true);
    }
}