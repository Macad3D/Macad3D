using System;
using System.Globalization;
using System.Windows;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("MultiConverter")]
[ValueConversion(typeof(bool), typeof(bool))]
public class BooleanAndToVisibleCollapsedMultiConverter : MultiConverterMarkupExtension<BooleanAndToVisibleCollapsedMultiConverter>
{
    public override object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
    {
        foreach (object value in values)
        {
            if (value is bool boolValue)
            {
                if (!boolValue)
                {
                    return Visibility.Collapsed;
                }
            }
        }
        return Visibility.Visible;
    }
}