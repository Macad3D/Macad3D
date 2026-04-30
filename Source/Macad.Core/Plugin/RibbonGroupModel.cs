namespace Macad.Core.Plugin;

/// <summary>
/// Carries the data for a single plugin-contributed Ribbon group.
/// The <see cref="Control"/> property should be set to a <c>Fluent.RibbonGroupBox</c> instance.
/// The application shell casts it to the appropriate WPF control type when merging into the Ribbon.
/// </summary>
public sealed class RibbonGroupModel
{
    /// <summary>The WPF Fluent.RibbonGroupBox instance (stored as object to avoid a WPF dependency in Core).</summary>
    public object Control { get; }

    //--------------------------------------------------------------------------------------------------

    public RibbonGroupModel(object control)
    {
        Control = control;
    }

    //--------------------------------------------------------------------------------------------------
}
