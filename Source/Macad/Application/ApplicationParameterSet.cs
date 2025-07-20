using Macad.Common;

namespace Macad.Window;
    
public enum ApplicationTheme
{
    Auto,
    Light,
    Dark
}

//--------------------------------------------------------------------------------------------------

public class ApplicationParameterSet : OverridableParameterSet
{
    public ApplicationTheme Theme { get => GetValue<ApplicationTheme>(); set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public ApplicationParameterSet()
    {
        SetDefaultValue(nameof(Theme), ApplicationTheme.Auto);
    }
}