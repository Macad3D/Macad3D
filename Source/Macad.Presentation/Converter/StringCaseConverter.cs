
using System;
using System.Globalization;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class StringUppercaseConverter : ConverterMarkupExtension<StringUppercaseConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var s = value as string;
        if (s == null)
        {
            return "";
        }
        return s.ToUpper();
    }
}