using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("MultiConverter")]
[ValueConversion(typeof(bool), typeof(bool))]
public class BooleanOrMultiConverter : MultiConverterMarkupExtension<BooleanOrMultiConverter>
{
    public override object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
    {
        foreach (object value in values)
        {
            if (value is bool)
            {
                if ((bool)value == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
}