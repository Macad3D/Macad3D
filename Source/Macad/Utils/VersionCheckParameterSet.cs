using Macad.Common;

namespace Macad.Window;

[ParameterSet]
public sealed partial class VersionCheckParameterSet
{
    readonly Parameter<bool> _CheckForUpdate = new()
    {
        Name = "CheckForUpdate",
        DisplayName = "Check for Updates",
        DefaultValue = true,
        Description = "Enables or disables automatic checking for new software versions.",
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<uint> _CheckIntervalDays = new()
    {
        Name = "CheckIntervalDays",
        DisplayName = "Check Interval",
        DefaultValue = 7u,
        Description = "Specifies the interval in days between automatic version checks.",
        EditorHints = new() { { "MinValue", 1u }, { "MaxValue", 365u } }
    };

    //--------------------------------------------------------------------------------------------------
}