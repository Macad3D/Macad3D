using System;

namespace Macad.Common;

public static class PrecisionModelFactory
{
    public static IPrecisionModel Create(PhysicalQuantities quantity, Enum precision)
    {
        if (precision is null)
            throw new ArgumentNullException(nameof(precision));

        return quantity switch
        {
            PhysicalQuantities.Dimensionless => precision switch
            {
                DimensionlessPrecision p => new DimensionlessPrecisionModel(p),
                _ => ThrowPrecisionMismatch(quantity, precision)
            },

            PhysicalQuantities.Length => precision switch
            {
                MetricLengthPrecision p => new MetricPrecisionModel(p),
                ImperialLengthPrecision p => new ImperialPrecisionModel(p),
                _ => ThrowPrecisionMismatch(PhysicalQuantities.Length, precision)
            },

            PhysicalQuantities.Angle => precision switch
            {
                AnglePrecision p => new AnglePrecisionModel(p),
                _ => ThrowPrecisionMismatch(quantity, precision)
            },
            
            PhysicalQuantities.Time => precision switch
            {
                TimePrecision p => new TimePrecisionModel(p),
                _ => ThrowPrecisionMismatch(quantity, precision)
            },

            _ => throw new NotSupportedException($"Unsupported physical quantity: {quantity}")
        };
    }

    //--------------------------------------------------------------------------------------------------

    static IPrecisionModel ThrowPrecisionMismatch(PhysicalQuantities quantity, Enum precision)
    {
        throw new ArgumentException(
            $"Precision enum '{precision.GetType().Name}' is not valid for physical quantity '{quantity}'.");
    }
}
