using Macad.Common;

namespace Macad.Interaction;

[ParameterSet]
public sealed partial class SpaceNavigatorParameterSet
{
    Parameter<double> _MoveSensitivity = new()
    {
        Name = "MoveSensitivity",
        DefaultValue = 1.0,
        Description = "Adjusts the sensitivity of the translation movement.",
        EditorHints = new() { { "Precision", 2 }, { "MinValue", 0.1 }, { "MaxValue", 5.0 } }
    };

    //--------------------------------------------------------------------------------------------------

    Parameter<double> _RotationSensitivity = new()
    {
        Name = "RotationSensitivity",
        DefaultValue = 1.0,
        Description = "Adjusts the sensitivity of the rotation movement.",
        EditorHints = new() { { "Precision", 2 }, { "MinValue", 0.1 }, { "MaxValue", 5.0 } }
    };

    //--------------------------------------------------------------------------------------------------

    Parameter<double> _ZoomSensitivity = new()
    {
        Name = "ZoomSensitivity",
        DefaultValue = 1.0,
        Description = "Adjusts the sensitivity of the zoom movement.",
        EditorHints = new() { { "Precision", 2 }, { "MinValue", 0.1 }, { "MaxValue", 5.0 } }
    };

    //--------------------------------------------------------------------------------------------------

    Parameter<double> _RollDeadZone = new()
    {
        Name = "RollDeadZone",
        DefaultValue = 1.25,
        Description = "Defines a dead zone for the roll movement to avoid unintentional rolling.",
        EditorHints = new() { { "Precision", 2 }, { "MinValue", 0.0 }, { "MaxValue", 10.0 } }
    };

    //--------------------------------------------------------------------------------------------------
}
