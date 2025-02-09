using System;
using System.Collections.Generic;
using System.Globalization;
using System.Windows;
using System.Windows.Data;
using System.Windows.Markup;
using System.Windows.Media;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(object), typeof(ImageSource))]
public class TypeToImageSourceConverter : ConverterMarkupExtension<TypeToImageSourceConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value == null || PresentationHelper.IsInDesignMode)
            return null;

        Type type = value as Type ?? value.GetType();
        Drawing drawing = null;
        if (!_Cache.TryGetValue(type, out drawing))
        {
            var typeName = Common.Serialization.Serializer.ApplyNamespaceAlias(type.FullName);
            var key = $"TypeIcon_{typeName.Replace('.', '-')}";

            // Treat as XAML resource
            try
            {
                drawing = Application.Current.Resources[key] as Drawing;
            }
            catch (Exception)
            {
                // It seems that this image is not available, so don't try again in future requests
                _Cache.Add(type, null);
                return null;
            }

            _Cache.Add(type, drawing);
        }

        if (drawing == null)
            return null;

        var drawingImage = new DrawingImage(drawing);
        drawingImage.Freeze();
        return drawingImage;
    }

    //--------------------------------------------------------------------------------------------------

    readonly Dictionary<Type, Drawing> _Cache = new Dictionary<Type, Drawing>();

    //--------------------------------------------------------------------------------------------------

}

//--------------------------------------------------------------------------------------------------

[ContentProperty("Converter")]
[ValueConversion(typeof(object), typeof(string))]
public class TypeToStringConverter : ConverterMarkupExtension<TypeToStringConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value == null)
            return "null";

        return Common.Serialization.Serializer.ApplyNamespaceAlias(value.GetType().FullName);
    }

    //--------------------------------------------------------------------------------------------------

}