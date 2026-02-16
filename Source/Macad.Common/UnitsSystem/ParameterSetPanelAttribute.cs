using System;

namespace Macad.Common;

[AttributeUsage(AttributeTargets.Class)]
public sealed class ParameterSetPanelAttribute : Attribute
{
    public string PanelTypeName { get; }

    //--------------------------------------------------------------------------------------------------

    public ParameterSetPanelAttribute(string panelTypeName)
    {
        PanelTypeName = panelTypeName;
    }
}
