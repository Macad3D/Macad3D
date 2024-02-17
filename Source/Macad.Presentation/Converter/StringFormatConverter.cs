
using System;
using System.Globalization;
using System.Threading;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
public sealed class StringFormatConverter : ConverterMarkupExtension<StringFormatConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (parameter == null)
        {
            return "ConverterParameter must not be null.";
        }
        return string.Format((string)parameter, value);
    }
}

[ContentProperty("Converter")]
public sealed class StringFormatIfNotEmptyConverter : ConverterMarkupExtension<StringFormatIfNotEmptyConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value != null)
        {
            if (value.ToString().Length > 0)
            {
                return string.Format((string)parameter, value);
            }
        }
        return "";
    }
}

[ContentProperty("Converter")]
public sealed class StringFormatCultureConverter : ConverterMarkupExtension<StringFormatCultureConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        return string.Format(Thread.CurrentThread.CurrentUICulture, (string)parameter, value);
    }
}

public class StringFormatToUriConverter : ConverterMarkupExtension<StringFormatToUriConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        return new Uri(string.Format(parameter.ToString(), value));
    }

    public override object ConvertBack(object value, Type targetTypes, object parameter, CultureInfo culture)
    {
        return null;
    }
}