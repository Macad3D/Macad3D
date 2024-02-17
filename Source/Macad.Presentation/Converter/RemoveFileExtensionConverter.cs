using System;
using System.Globalization;
using System.IO;
using System.Windows.Markup;
using Macad.Common;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class RemoveFileExtensionConverter : ConverterMarkupExtension<RemoveFileExtensionConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var s = value as string;
        if (s.IsNullOrEmpty())
            return "";

        return Path.GetFileNameWithoutExtension(s);
    }
}