using System.ComponentModel;

namespace Macad.Common;

public enum PhysicalQuantity
{
    Dimensionless,
    Length,
    Angle,
    Time
}

//--------------------------------------------------------------------------------------------------

public enum UnitId
{
    [Quantity(PhysicalQuantity.Length)]
    Millimeter,

    [Quantity(PhysicalQuantity.Length)]
    Centimeter,

    [Quantity(PhysicalQuantity.Length)]
    Meter,

    [Quantity(PhysicalQuantity.Length)]
    InchDecimal,

    [Quantity(PhysicalQuantity.Length)]
    InchFractional,

    [Quantity(PhysicalQuantity.Length)]
    Architectural,

    [Quantity(PhysicalQuantity.Angle)]
    Degree,

    [Quantity(PhysicalQuantity.Angle)]
    Radian,

    [Quantity(PhysicalQuantity.Angle)]
    Gradian,

    [Quantity(PhysicalQuantity.Time)]
    Second,

    [Quantity(PhysicalQuantity.Time)]
    Day,

    [Quantity(PhysicalQuantity.Dimensionless)]
    Percentage,

    [Quantity(PhysicalQuantity.Dimensionless)]
    Pixel,

    [Quantity(PhysicalQuantity.Dimensionless)]
    DotsPerInch,

    [Quantity(PhysicalQuantity.Dimensionless)]
    Number
}


//--------------------------------------------------------------------------------------------------

public record UnitDefinition(
    UnitId Id,
    PhysicalQuantity Quantity,
    string Name,
    string Symbol,
    double ScaleToSI,
    PrecisionModel DefaultPrecision
);

