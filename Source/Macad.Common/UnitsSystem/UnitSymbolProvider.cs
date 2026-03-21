using System;

namespace Macad.Common;

public static class UnitSymbolProvider
{
    public static string GetSymbol(UnitId unitId)
    {
        return unitId switch
        {
            UnitId.Percentage => "%",
            UnitId.Pixel => "px",
            UnitId.DotsPerInch => "dpi",
            UnitId.Millimeter => "mm",
            UnitId.Centimeter => "cm",
            UnitId.Meter => "m",
            UnitId.InchFractional => "\"",
            UnitId.InchDecimal => "\"",
            UnitId.Architectural => "\"",
            UnitId.Degree => "°",
            UnitId.Radian => "rad",
            UnitId.Gradian => "gon",
            UnitId.Day => "d",
            UnitId.Second => "s",
            _ => ""
        };
    }
}
