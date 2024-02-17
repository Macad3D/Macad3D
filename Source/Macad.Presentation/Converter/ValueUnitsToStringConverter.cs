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
        if (!(value is ValueUnits))
            return null;

        switch ((ValueUnits)value)
        {
            case ValueUnits.Length:
                return "mm";

            case ValueUnits.Degree:
                return "°";

            case ValueUnits.Percent:
                return "%";

            case ValueUnits.DotsPerInch:
                return "dpi";
        }
        return "";
    }
}