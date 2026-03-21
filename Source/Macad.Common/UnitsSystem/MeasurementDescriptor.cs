using System;

namespace Macad.Common;

public sealed class MeasurementDescriptor
{
    public UnitId UnitId { get; }
    public PhysicalQuantity PhysicalQuantity { get; }
    public int Precision { get; }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor(UnitId unitId, int precision)
    {
        UnitId = unitId;
        PhysicalQuantity = unitId.GetQuantity();
        Precision = precision;
    }

    //--------------------------------------------------------------------------------------------------

    public IPrecisionModel GetPrecisionModel()
    {
        return PhysicalQuantity switch
        {
            PhysicalQuantity.Length => CreateLengthModel(UnitId, Precision),
            PhysicalQuantity.Angle => new PrecisionModelAngle(Precision),
            PhysicalQuantity.Time => new PrecisionModelTime(Precision),
            PhysicalQuantity.Dimensionless => new PrecisionModelDimensionless(Precision),
            _ => throw new NotSupportedException($"No precision model for quantity {PhysicalQuantity}")
        };
    }

    //--------------------------------------------------------------------------------------------------

    static IPrecisionModel CreateLengthModel(UnitId unitId, int p)
    {
        return unitId switch
        {
            UnitId.Millimeter or UnitId.Centimeter or UnitId.Meter => new PrecisionModelMetric(p),
            UnitId.InchDecimal => new PrecisionModelImperialDecimal(p),
            UnitId.InchFractional => new PrecisionModelImperialFractional(p),
            UnitId.Architectural => new PrecisionModelImperialArchitectural(p),
            _ => throw new NotSupportedException($"Unsupported length unit {unitId}")
        };
    }

    //--------------------------------------------------------------------------------------------------
}
