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

    readonly Parameter<bool> _ShowWelcomeScreen = new()
    {
        Name = "ShowWelcomeScreen",
        DefaultValue = true,
        Description = "If enabled, the welcome screen is shown at application start."
    };
}