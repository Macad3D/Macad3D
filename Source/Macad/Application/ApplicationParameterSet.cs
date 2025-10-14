using Macad.Common;

namespace Macad.Window;
    
public enum ApplicationTheme
{
    Auto,
    Light,
    Dark
}

//--------------------------------------------------------------------------------------------------

[ParameterSet]
public sealed partial class ApplicationParameterSet
{
    readonly Parameter<ApplicationTheme> _Theme = new()
    {
        Name = "Theme",
        DefaultValue = ApplicationTheme.Auto,
        Description = "Selects the application color theme.",
        Flags = Parameter.ParameterFlags.NeedsRestart
    };

    //--------------------------------------------------------------------------------------------------
}