using System.ComponentModel;

namespace Macad.Common;

public enum PhysicalQuantities
{
    Dimensionless,
    Length,
    Angle,
    Time
}

//--------------------------------------------------------------------------------------------------

public enum DimensionlessUnits
{
    Percentage,

    [Description("Dots per inch")]
    DotsPerInch,
    Pixel,
    None
}

//--------------------------------------------------------------------------------------------------

public enum LengthUnits
{
    [Description("Millimeters (mm)")]
    Millimeters,

    [Description("Centimeters (cm)")]
    Centimeters,

    [Description("Meters (m)")]
    Meters,

    [Description("Inches (in)")]
    Inches,

    [Description("Feet (ft/in)")]
    Architectural
}

//--------------------------------------------------------------------------------------------------

public enum AngleUnits
{
    Degrees,
    Radians,
    Gradians
}

//--------------------------------------------------------------------------------------------------

public enum TimeUnits
{
    Days,
    Seconds
}

//--------------------------------------------------------------------------------------------------

public enum DimensionlessPrecision
{
    [Description("0.")]
    [PrecisionValue(0)]
    Decimal_0,

    [Description("0.0")]
    [PrecisionValue(1)]
    Decimal_1,

    [Description("0.00")]
    [PrecisionValue(2)]
    Decimal_2,

    [Description("0.000")]
    [PrecisionValue(3)]
    Decimal_3
}

//--------------------------------------------------------------------------------------------------

public enum MetricLengthPrecision
{
    // Used for Millimeters, Centimeters, and Meters
    [Description("0.")]
    [PrecisionValue(0)]
    Decimal_0,

    [Description("0.0")]
    [PrecisionValue(1)]
    Decimal_1,

    [Description("0.00")]
    [PrecisionValue(2)]
    Decimal_2,

    [Description("0.000")]
    [PrecisionValue(3)]
    Decimal_3,

    [Description("0.000 0")]
    [PrecisionValue(4)]
    Decimal_4,

    [Description("0.000 00")]
    [PrecisionValue(5)]
    Decimal_5,

    [Description("0.000 000")]
    [PrecisionValue(6)]
    Decimal_6,

    [Description("0.000 000 0")]
    [PrecisionValue(7)]
    Decimal_7,

    [Description("0.000 000 00")]
    [PrecisionValue(8)]
    Decimal_8,
}

//--------------------------------------------------------------------------------------------------

public enum ImperialLengthPrecision
{
    // Inches (decimal)
    [Description("0.")]
    [PrecisionValue(0)]
    InchDecimal_0,

    [Description("0.0")]
    [PrecisionValue(1)]
    InchDecimal_1,

    [Description("0.00")]
    [PrecisionValue(2)]
    InchDecimal_2,

    [Description("0.000 thou")]
    [PrecisionValue(3)]
    InchDecimal_3,

    [Description("0.000 0")]
    [PrecisionValue(4)]
    InchDecimal_4,

    [Description("Fractional inches, 1/2in")]
    [PrecisionValue(2)]
    InchFraction_1_2,

    [Description("Fractional inches, 1/4in")]
    [PrecisionValue(4)]
    InchFraction_1_4,

    [Description("Fractional inches, 1/8in")]
    [PrecisionValue(8)]
    InchFraction_1_8,

    [Description("Fractional inches, 1/16in")]
    [PrecisionValue(16)]
    InchFraction_1_16,

    [Description("Fractional inches, 1/32in")]
    [PrecisionValue(32)]
    InchFraction_1_32,

    [Description("Fractional inches, 1/64in")]
    [PrecisionValue(64)]
    InchFraction_1_64,

    [Description("Fractional inches, 1/128in")]
    [PrecisionValue(128)]
    InchFraction_1_128,

    [Description("Fractional inches, 1/256in")]
    [PrecisionValue(256)]
    InchFraction_1_256,

    [Description("Fractional inches, any")]
    [PrecisionValue(0)]
    InchFraction_1_n,

    [Description("Architectural, 1/4in")]
    [PrecisionValue(4)]
    Arch_1_4,

    [Description("Architectural, 1/8in")]
    [PrecisionValue(8)]
    Arch_1_8,

    [Description("Architectural, 1/16in")]
    [PrecisionValue(16)]
    Arch_1_16
}

//--------------------------------------------------------------------------------------------------

public enum AnglePrecision 
{
    [Description("0.")]
    [PrecisionValue(0)]
    Decimal_0,

    [Description("0.0")]
    [PrecisionValue(1)]
    Decimal_1, 

    [Description("0.00")]
    [PrecisionValue(2)]
    Decimal_2,

    [Description("0.000")]
    [PrecisionValue(3)]
    Decimal_3
}

//--------------------------------------------------------------------------------------------------

public enum TimePrecision
{
    [Description("0.")]
    [PrecisionValue(0)]
    Decimal_0,

    [Description("0.0")]
    [PrecisionValue(1)]
    Decimal_1,

    [Description("0.00")]
    [PrecisionValue(2)]
    Decimal_2,

    [Description("0.000")]
    [PrecisionValue(3)]
    Decimal_3
}