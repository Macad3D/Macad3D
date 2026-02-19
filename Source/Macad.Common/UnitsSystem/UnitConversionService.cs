using System;

namespace Macad.Common;

public static class UnitConversionService
{
    const double MmPerInch = 25.4;
    const double DegPerRad = 180.0 / Math.PI;
    const double DegPerGrad = 0.9; // 1 grad = 0.9 degrees

    //--------------------------------------------------------------------------------------------------

    public static double ConvertToDisplayUnits(double kernelValue, MeasurementDescriptor descriptor)
    {
        return descriptor.PhysicalQuantity switch
        {
            PhysicalQuantities.Length =>
                UnitConversionService.ConvertLength(kernelValue, LengthUnits.Millimeters, descriptor.GetLengthUnit()),

            PhysicalQuantities.Angle =>
                UnitConversionService.ConvertAngle(kernelValue, AngleUnits.Degrees, descriptor.GetAngleUnit()),

            PhysicalQuantities.Dimensionless when (DimensionlessUnits)descriptor.UnitSystem == DimensionlessUnits.Percentage => 
                kernelValue * 100.0,

            _ => kernelValue
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static LengthUnits GetLengthUnit(this MeasurementDescriptor d)
    {
        return (LengthUnits)d.UnitSystem;
    }

    //--------------------------------------------------------------------------------------------------

    public static AngleUnits GetAngleUnit(this MeasurementDescriptor d)
    {
        return (AngleUnits)d.UnitSystem;
    }

    //--------------------------------------------------------------------------------------------------

    public static double ConvertLength(double value, LengthUnits from, LengthUnits to)
    {
        if (from == to)
            return value;

        // Convert to millimeters first
        double mm = from switch
        {
            LengthUnits.Millimeters => value,
            LengthUnits.Centimeters => value * 10.0,
            LengthUnits.Meters => value * 1000.0,
            LengthUnits.Inches => value * MmPerInch,
            LengthUnits.Architectural => value * MmPerInch,
            _ => throw new NotSupportedException($"Unsupported length unit: {from}")
        };

        // Convert from mm to target
        return to switch
        {
            LengthUnits.Millimeters => mm,
            LengthUnits.Centimeters => mm / 10.0,
            LengthUnits.Meters => mm / 1000.0,
            LengthUnits.Inches => mm / MmPerInch,
            LengthUnits.Architectural => mm / MmPerInch,
            _ => throw new NotSupportedException($"Unsupported length unit: {to}")
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static double ConvertAngle(double value, AngleUnits from, AngleUnits to)
    {
        if (from == to)
            return value;

        // Convert to degrees first
        double degrees = from switch
        {
            AngleUnits.Degrees => value,
            AngleUnits.Radians => value * DegPerRad,
            AngleUnits.Gradians => value * DegPerGrad,
            _ => throw new NotSupportedException($"Unsupported angle unit: {from}")
        };

        // Convert from degrees to target
        return to switch
        {
            AngleUnits.Degrees => degrees,
            AngleUnits.Radians => degrees / DegPerRad,
            AngleUnits.Gradians => degrees / DegPerGrad,
            _ => throw new NotSupportedException($"Unsupported angle unit: {to}")
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static double ConvertToKernelUnits(double displayValue, MeasurementDescriptor descriptor) 
    { 
        return descriptor.PhysicalQuantity switch 
        { 
            PhysicalQuantities.Length 
                => ConvertLength(displayValue, descriptor.GetLengthUnit(), LengthUnits.Millimeters), 

            PhysicalQuantities.Angle 
                => ConvertAngle(displayValue, descriptor.GetAngleUnit(), AngleUnits.Degrees), 

            _ => displayValue 
        }; 
    }
}
