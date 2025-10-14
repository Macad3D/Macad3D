using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
using System.Windows.Data;
using System.Windows.Markup;
using System.Windows.Media;
using Macad.Resources;

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

            // Treat as XAML resource
            try
            {
                drawing = ResourceUtils.GetDictionaryElement<Drawing>(ResourceUtils.Category.TypeIcon, typeName.Replace('.', '-'));
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

//--------------------------------------------------------------------------------------------------

[ContentProperty("Converter")]
[ValueConversion(typeof(object), typeof(string))]
public class TypeToDisplayNameConverter : ConverterMarkupExtension<TypeToDisplayNameConverter>
{
    static readonly Regex _SplitNameRegex = new Regex("([a-z])([A-Z])", RegexOptions.Compiled);

    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value == null)
            return "";

        var type = value.GetType();
        if (type.GetCustomAttributes(typeof(DisplayNameAttribute), false).FirstOrDefault() is DisplayNameAttribute displayAttr)
        {
            return displayAttr.DisplayName;
        }

        // Convert type name to spaced format (e.g. "HelloWorld" -> "Hello World")
        var typeName = type.Name;
        var spacedName = _SplitNameRegex.Replace(typeName, "$1 $2");
        return spacedName;
    }

    //--------------------------------------------------------------------------------------------------

}