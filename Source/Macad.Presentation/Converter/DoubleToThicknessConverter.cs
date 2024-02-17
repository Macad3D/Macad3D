using System.Windows;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class DoubleToThicknessLeftConverter :  ConverterMarkupExtension<DoubleToThicknessLeftConverter>
{
    public override object Convert(object value, System.Type targetType, object parameter, System.Globalization.CultureInfo culture)
    {
        return new Thickness(System.Convert.ToDouble(value), 0, 0, 0);
    }
}