using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Common;

public static class PrecisionProvider
{
    public static IEnumerable<Enum> GetPrecisions(PhysicalQuantities quantity, Enum unit)
    {
        return quantity switch
        {
            PhysicalQuantities.Length => unit switch
            {
                LengthUnits.Millimeters
                or LengthUnits.Centimeters
                or LengthUnits.Meters
                    => Enum.GetValues(typeof(MetricLengthPrecision)).Cast<Enum>(),

                LengthUnits.Inches
                or LengthUnits.Architectural
                    => Enum.GetValues(typeof(ImperialLengthPrecision)).Cast<Enum>(),

                _ => Array.Empty<Enum>()
            },

            PhysicalQuantities.Angle
                => Enum.GetValues(typeof(AnglePrecision)).Cast<Enum>(),

            PhysicalQuantities.Time
                => Enum.GetValues(typeof(TimePrecision)).Cast<Enum>(),

            PhysicalQuantities.Dimensionless
                => Enum.GetValues(typeof(DimensionlessPrecision)).Cast<Enum>(),

            _ => Array.Empty<Enum>()
        };
    }
}
