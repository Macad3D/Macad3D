using System;
using System.Globalization;
using System.Linq;
using System.Windows.Data;
using System.Windows.Markup;
using System.Windows.Media;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(double[]), typeof(DoubleCollection))]
public class DoubleCollectionConverter : ConverterMarkupExtension<DoubleCollectionConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is double[] array)
        {
            return new DoubleCollection(array);
        }
        return new DoubleCollection();
    }

    public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is DoubleCollection collection)
        {
            return collection.ToArray();
        }
        return new double[0];
    }
}