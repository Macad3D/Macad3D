
using System;
using System.Collections;
using System.Globalization;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class DictionaryLookupConverter : ConverterMarkupExtension<DictionaryLookupConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        IDictionary dict = parameter as IDictionary;
        if ((value != null) && (dict != null))
        {
            return dict[value];
        }
        else
        {
            return null;
        }
    }
}