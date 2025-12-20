using Macad.Common;
using System.ComponentModel;

namespace Macad.Core;
    
public enum ApplicationTheme
{
    Auto,
    Light,
    Dark
}

//--------------------------------------------------------------------------------------------------

[ParameterSet]
public sealed partial class ApplicationParameterSet : ParameterSet
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

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<ApplicationUnits> _ApplicationUnits = new()
    {
        Name = "ApplicationUnits",
        DefaultValue = ApplicationUnits.Millimeters,
        Description = "Which length units will be used throughout the application."
    };
}