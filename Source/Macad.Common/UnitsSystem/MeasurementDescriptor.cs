using System;

namespace Macad.Common;

public sealed class MeasurementDescriptor
{
    public PhysicalQuantities PhysicalQuantity { get; init; }
    public Enum UnitSystem { get; init; }
    public Enum Precision { get; init; }

    //--------------------------------------------------------------------------------------------------

    public IPrecisionModel GetPrecisionModel() 
    { 
        return PrecisionModelFactory.Create(PhysicalQuantity, Precision); 
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor(PhysicalQuantities physicalQuantity, Enum unitSystem, Enum precision)
    {
        PhysicalQuantity = physicalQuantity;
        UnitSystem = unitSystem;
        Precision = precision;
    }
}
