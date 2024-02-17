
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Reflection;
using System.Windows;
using System.Windows.Data;
using System.Windows.Markup;
using System.Windows.Media;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(Common.Color), typeof(Color))]
public sealed class ColorConverter : ConverterMarkupExtension<ColorConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is Common.Color)
        {
            var color = (Common.Color) value;
            return color.ToWpfColor();
        }
        return new Color();
    }

    public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is Color)
        {
            var color = (Color)value;
            return color.ToMmColor();
        }
        return new Common.Color();
    }
}

[ContentProperty("Converter")]
[ValueConversion(typeof(Color), typeof(SolidColorBrush))]
public sealed class ColorToBrushConverter : ConverterMarkupExtension<ColorToBrushConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var underlyingType = Nullable.GetUnderlyingType(targetType);
        if (value == null)
        {
            if (underlyingType != null)
            {
                return null;
            }

            return DependencyProperty.UnsetValue;
        }

        if (typeof(Brush).IsAssignableFrom(targetType))
        {
            switch (value)
            {
                case Color wpfColor:
                    return new SolidColorBrush(wpfColor);
                case Common.Color mmColor:
                    return new SolidColorBrush(mmColor.ToWpfColor());
            }
        }

        if (targetType == typeof(Color) || underlyingType == typeof(Color))
        {
            if (value is SolidColorBrush)
            {
                return ((SolidColorBrush)value).Color;
            }
        }

        if (targetType == typeof(Common.Color) || underlyingType == typeof(Common.Color))
        {
            if (value is SolidColorBrush)
            {
                return ((SolidColorBrush)value).Color.ToMmColor();
            }
        }

        return DependencyProperty.UnsetValue;
    }

    public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        return Convert(value, targetType, parameter, culture);
    }
}


[ContentProperty("Converter")]
[ValueConversion(typeof(Color), typeof(string))]
public sealed class ColorToStringConverter : ConverterMarkupExtension<ColorToStringConverter>
{
    /// <summary>
    /// The string to color map.
    /// </summary>
    private static Dictionary<string, Color> colors;

    /// <summary>
    /// Gets the string to color map.
    /// </summary>
    /// <value>The color map.</value>
    public static Dictionary<string, Color> ColorMap
    {
        get
        {
            if (colors == null)
            {
                colors = new Dictionary<string, Color>();
                var t = typeof(Colors);
                var fields = t.GetProperties(BindingFlags.Public | BindingFlags.Static);
                foreach (var fi in fields)
                {
                    var c = (Color)fi.GetValue(null, null);
                    colors.Add(fi.Name, c);
                }

                colors.Add("Undefined", ColorHelper.UndefinedColor);
            }

            return colors;
        }
    }

    /// <summary>
    /// Converts a value.
    /// </summary>
    /// <param name="value">The value produced by the binding source.</param>
    /// <param name="targetType">The type of the binding target property.</param>
    /// <param name="parameter">The converter parameter to use.</param>
    /// <param name="culture">The culture to use in the converter.</param>
    /// <returns>
    /// A converted value. If the method returns <c>null</c>, the valid <c>null</c> value is used.
    /// </returns>
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value == null)
        {
            return null;
        }

        Color color;
        switch (value)
        {
            case Color wpfColor:
                color = wpfColor;
                break;

            case Common.Color mmColor:
                color = mmColor.ToWpfColor();
                break;

            default:
                return "";
        }
            
        // if (ShowAsHex)
        // return ColorHelper.ColorToHex(color);
        string nearestColor = null;
        double nearestDist = 30;

        // find the color that is closest
        foreach (var kvp in ColorMap)
        {
            if (color == kvp.Value)
            {
                return kvp.Key;
            }

            double d = ColorHelper.ColorDifference(color, kvp.Value);
            if (d < nearestDist)
            {
                //nearestColor = "~ " + kvp.Key; // 'kind of'
                nearestColor = kvp.Key; // 'kind of'
                nearestDist = d;
            }
        }

        if (nearestColor == null)
        {
            return ColorHelper.ColorToHex(color);
        }

        if (color.A < 255)
        {
            return string.Format("{0}, {1:0} %", nearestColor, color.A / 2.55);
        }

        return nearestColor;
    }

    /// <summary>
    /// Converts a value.
    /// </summary>
    /// <param name="value">The value that is produced by the binding target.</param>
    /// <param name="targetType">The type to convert to.</param>
    /// <param name="parameter">The converter parameter to use.</param>
    /// <param name="culture">The culture to use in the converter.</param>
    /// <returns>
    /// A converted value. If the method returns <c>null</c>, the valid <c>null</c> value is used.
    /// </returns>
    public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var s = value as string;
        if (s == null)
        {
            return DependencyProperty.UnsetValue;
        }

        Color color;

        if (!ColorMap.TryGetValue(s, out color))
        {
            color = ColorHelper.HexToColor(s);
            if (color != ColorHelper.UndefinedColor)
            {
                return DependencyProperty.UnsetValue;
            }
        }

        var underlyingType = Nullable.GetUnderlyingType(targetType);

        if (targetType == typeof(Color) || underlyingType == typeof(Color))
        {
            return color;
        }

        if (targetType == typeof(Common.Color) || underlyingType == typeof(Common.Color))
        {
            return color.ToMmColor();
        }

        return DependencyProperty.UnsetValue;
    }
}