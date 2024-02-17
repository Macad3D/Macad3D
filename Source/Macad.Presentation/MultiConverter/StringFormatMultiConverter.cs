using System;
using System.Globalization;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("MultiConverter")]
public class StringFormatMultiConverter : MultiConverterMarkupExtension<StringFormatMultiConverter>
{
    public override object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
    {
        if (parameter == null)
        {
            return "ConverterParameter must not be null.";
        }
        return String.Format(parameter as String, values);
    }
}