using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(string), typeof(string))]
public sealed class ShortcutToTitleConverter : ConverterMarkupExtension<ShortcutToTitleConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is string strValue)
        {
            if (parameter is String strParam)
            {
                return $"{strParam} ({strValue})";
            }
            return strValue;
        }
        else
        {
            return parameter;
        }
    }
}