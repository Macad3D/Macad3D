using System;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Media;
using Macad.Common;

namespace Macad.Presentation;

public class IconResourceExtension : MarkupExtension
{
    [ConstructorArgument("iconName")] 
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
            return null;

        // Treat as XAML resource
        var drawing = Application.Current?.FindResource("Icon_" + IconName) as Drawing;
        if (drawing == null)
            return null;

        var drawingImage = new DrawingImage(drawing);
        drawingImage.Freeze();
        return drawingImage;
    }

    //--------------------------------------------------------------------------------------------------

}