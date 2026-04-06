using System;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Media;
using Macad.Common;
using Macad.Resources;

namespace Macad.Presentation;

[MarkupExtensionReturnType(typeof(DrawingImage))]
[Localizability(LocalizationCategory.NeverLocalize)]
public class IconResourceExtension : MarkupExtension
{
    [ConstructorArgument(nameof(IconName))] 
    public string IconName { get; set; }

    //--------------------------------------------------------------------------------------------------

    public IconResourceExtension() { }
 
    public IconResourceExtension(string iconName)
    {
        IconName = iconName;
    }

    //--------------------------------------------------------------------------------------------------

    public override object ProvideValue(IServiceProvider serviceProvider)
    {
        if (IconName.IsNullOrEmpty())
        {
            return null;
        }

        // Treat as XAML resource
        var drawing = ResourceUtils.GetDictionaryElement<Drawing>(ResourceUtils.Category.Icon, IconName);
        if (drawing == null)
        {
            return null;
        }

        var drawingImage = new DrawingImage(drawing);
        drawingImage.Freeze();
        return drawingImage;
    }

    //--------------------------------------------------------------------------------------------------

}