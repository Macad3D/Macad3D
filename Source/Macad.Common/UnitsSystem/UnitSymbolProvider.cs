using System;

namespace Macad.Common;

public static class UnitSymbolProvider
{
    public static string GetSymbol(Enum unitSystem)
    {
        return unitSystem switch
        {
            DimensionlessUnits.Percentage => "%",
            DimensionlessUnits.Pixel => "px",
            DimensionlessUnits.DotsPerInch => "dpi",

            LengthUnits.Millimeters => "mm",
            LengthUnits.Centimeters => "cm",
            LengthUnits.Meters => "m",
            LengthUnits.Inches => "\"",
            LengthUnits.Architectural => "\"",

            AngleUnits.Degrees => "°",
            AngleUnits.Radians => "rad",
            AngleUnits.Gradians => "gon",

            TimeUnits.Days => "d",
            TimeUnits.Seconds => "s",

            _ => ""
        };
    }
}
