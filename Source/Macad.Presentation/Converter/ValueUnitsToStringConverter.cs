using Macad.Common;
using Macad.Core;
using System;
using System.Configuration;
using System.Diagnostics;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(ValueUnits), typeof(string))]
public class ValueUnitsToStringConverter : ConverterMarkupExtension<ValueUnitsToStringConverter>
{
    public ValueUnitsToStringConverter() { }

    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        if (value is ApplicationUnits appUnits)
        {
            return GetUnitSymbol(appUnits);
        }

        if (value is ValueUnits vu)
        {
            return vu switch
            {
                ValueUnits.Length => GetLengthUnitSymbol(),
                ValueUnits.Degree => "°",
                ValueUnits.Percent => "%",
                ValueUnits.DotsPerInch => "dpi",
                ValueUnits.Days => "d",
                ValueUnits.Seconds => "s",
                ValueUnits.Pixel => "px",
                _ => ""
            };
        }

        return "";
    }

    private static string GetLengthUnitSymbol()
    {
        var appParams = CoreContext.Current.Parameters.Get<ApplicationParameterSet>();
        ApplicationUnits? units = appParams?.ApplicationUnits;
        return units != null ? GetUnitSymbol(units.Value) : "mm";
    }

    private static string GetUnitSymbol(ApplicationUnits units)
    {
        return units switch
        {
            ApplicationUnits.Millimeters => "mm",
            ApplicationUnits.Inches => "in",
            ApplicationUnits.Inches32nds => "in",
            ApplicationUnits.Inches16ths => "in",
            ApplicationUnits.Architectural => "in",
            _ => "mm"
        };
    }
}