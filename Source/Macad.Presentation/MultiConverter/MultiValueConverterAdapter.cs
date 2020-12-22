
using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation
{
    [ContentProperty("MultiConverter")]
    public class MultiValueConverterAdapter : MultiConverterMarkupExtension<MultiValueConverterAdapter>
    {
        public IValueConverter Converter { get; set; }

        private object lastParameter;

        public override object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
        {
            if (Converter == null) return values[0]; // Required for VS design-time
            if (values.Length > 1) lastParameter = values[1];
            return Converter.Convert(values[0], targetType, lastParameter, culture);
        }

        public override object[] ConvertBack(object value, Type[] targetTypes, object parameter, CultureInfo culture)
        {
            if (Converter == null) return new object[] { value }; // Required for VS design-time

            return new object[] { Converter.ConvertBack(value, targetTypes[0], lastParameter, culture) };
        }
    }
}