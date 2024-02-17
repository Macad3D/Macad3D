
using System;
using System.Globalization;
using System.IO;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class ExtractFileNameConverter : ConverterMarkupExtension<ExtractFileNameConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var s = value as string;
        if (string.IsNullOrEmpty(s))
        {
            return "unnamed";
        }
        return Path.GetFileName(s);
    }
}

//--------------------------------------------------------------------------------------------------

[ContentProperty("Converter")]
public sealed class ExtractFileNameNoExtensionConverter : ConverterMarkupExtension<ExtractFileNameNoExtensionConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var s = value as string;
        if (string.IsNullOrEmpty(s))
        {
            return "unnamed";
        }
        return Path.GetFileNameWithoutExtension(s);
    }
}

//--------------------------------------------------------------------------------------------------

[ContentProperty("Converter")]
public sealed class ExtractFileDirectoryConverter : ConverterMarkupExtension<ExtractFileDirectoryConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var s = value as string;
        if (string.IsNullOrEmpty(s))
        {
            return "unnamed";
        }
        return Path.GetDirectoryName(s);
    }
}

//--------------------------------------------------------------------------------------------------