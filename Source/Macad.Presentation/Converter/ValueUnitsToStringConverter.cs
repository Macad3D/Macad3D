using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(ValueUnits), typeof(string))]
public class ValueUnitsToStringConverter : ConverterMarkupExtension<ValueUnitsToStringConverter>
{

    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is not ValueUnits units)
            return null;

        return units switch
        {
            ValueUnits.Length => "mm",
            ValueUnits.Degree => "°",
            ValueUnits.Percent => "%",
            ValueUnits.DotsPerInch => "dpi",
            ValueUnits.Days => "d",
            ValueUnits.Seconds => "s",
            ValueUnits.Pixel => "px",
            _ => ""
        };
    }
}