using System;
using System.ComponentModel;
using System.Windows;
using System.Windows.Markup;

namespace Macad.Presentation;

/// <summary>
/// Provides a performant mechanism to retrieve application-level resources by their key.
/// </summary>
/// <remarks>
/// This extension is used to resolve resources defined in the application resource dictionary. If the
/// resource is not found, and the target object is not in design mode, an exception is thrown. If in design mode,
/// it falls back to the behavior of <see cref="DynamicResourceExtension"/> to enable preview of brushes.
/// 
/// Using this resource reference combines the performance of a static resource in accordance with a merged resource
/// dictionary, and the flexibility of a dynamic resource when using unmerged files in debug/design build.
/// </remarks>
[MarkupExtensionReturnType(typeof(object))]
[Localizability(LocalizationCategory.NeverLocalize)]
public class AppResourceExtension : DynamicResourceExtension
{
    public AppResourceExtension()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public AppResourceExtension(object resourceKey)
        : base(resourceKey)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public override object ProvideValue(IServiceProvider serviceProvider)
    {
        if (ResourceKey == null)
        {
            throw new InvalidOperationException("ResourceKey must be set.");
        }

        var value = Application.Current.TryFindResource(ResourceKey);
        if (value != null)
        {
            return value;
        }

        // Check if in design mode
        var target = serviceProvider.GetService(typeof(IProvideValueTarget)) as IProvideValueTarget;
        var dependencyObject = target?.TargetObject as DependencyObject;
        if(dependencyObject != null && DesignerProperties.GetIsInDesignMode(dependencyObject))
        {
            // Fallback to DynamicResource implementation
            return base.ProvideValue(serviceProvider);
        }

        throw new ResourceReferenceKeyNotFoundException($"Resource '{ResourceKey}' was not found.", ResourceKey);
    }

    //--------------------------------------------------------------------------------------------------

}