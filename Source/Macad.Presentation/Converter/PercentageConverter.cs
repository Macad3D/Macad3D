
using System;
using System.Globalization;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class PercentageConverter : ConverterMarkupExtension<PercentageConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is double)
        {
            return ((double) value)*100;
        }
        if (value is float)
        {
            return ((float)value) * 100;
        }
        return 0;
    }

    public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is double)
        {
            return ((double)value) / 100;
        }
        if (value is float)
        {
            return ((float)value) / 100;
        }
        return 0;
    }
}