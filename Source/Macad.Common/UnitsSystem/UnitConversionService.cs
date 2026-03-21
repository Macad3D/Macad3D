using System;

namespace Macad.Common;

public static class UnitConversionService
{
    const double MmPerInch = 25.4;
    const double DegPerRad = 180.0 / Math.PI;
    const double DegPerGrad = 0.9; // 1 grad = 0.9 degrees

    //--------------------------------------------------------------------------------------------------

    public static double ConvertToDisplayUnits(double kernelValue, UnitId unitId, PhysicalQuantity quantity)
    {
        return quantity switch
        {
            PhysicalQuantity.Length => UnitConversionService.ConvertLength(kernelValue, UnitId.Millimeter, unitId),
            PhysicalQuantity.Angle => UnitConversionService.ConvertAngle(kernelValue, UnitId.Degree, unitId),
            PhysicalQuantity.Dimensionless when unitId == UnitId.Percentage => kernelValue * 100.0,
            _ => kernelValue
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static double ConvertLength(double value, UnitId from, UnitId to)
    {
        if (from == to)
            return value;

        // Convert to millimeters first
        double mm = from switch
        {
            UnitId.Millimeter => value,
            UnitId.Centimeter => value * 10.0,
            UnitId.Meter => value * 1000.0,
            UnitId.InchDecimal => value * MmPerInch,
            UnitId.InchFractional => value * MmPerInch,
            UnitId.Architectural => value * MmPerInch,
            _ => throw new NotSupportedException($"Unsupported length unit: {from}")
        };

        // Convert from mm to target
        return to switch
        {
            UnitId.Millimeter => mm,
            UnitId.Centimeter => mm / 10.0,
            UnitId.Meter => mm / 1000.0,
            UnitId.InchDecimal => mm / MmPerInch,
            UnitId.InchFractional => mm / MmPerInch,
            UnitId.Architectural => mm / MmPerInch,
            _ => throw new NotSupportedException($"Unsupported length unit: {to}")
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static double ConvertAngle(double value, UnitId from, UnitId to)
    {
        if (from == to)
            return value;

        // Convert to degrees first
        double degrees = from switch
        {
            UnitId.Degree => value,
            UnitId.Radian => value * DegPerRad,
            UnitId.Gradian => value * DegPerGrad,
            _ => throw new NotSupportedException($"Unsupported angle unit: {from}")
        };

        // Convert from degrees to target
        return to switch
        {
            UnitId.Degree => degrees,
            UnitId.Radian => degrees / DegPerRad,
            UnitId.Gradian => degrees / DegPerGrad,
            _ => throw new NotSupportedException($"Unsupported angle unit: {to}")
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static double ConvertToKernelUnits(double displayValue, UnitId unitId, PhysicalQuantity quantity)
    {
        return quantity switch
        {
            PhysicalQuantity.Length => ConvertLength(displayValue, unitId, UnitId.Millimeter),
            PhysicalQuantity.Angle => ConvertAngle(displayValue, unitId, UnitId.Degree),
            _ => displayValue
        };
    }
}
