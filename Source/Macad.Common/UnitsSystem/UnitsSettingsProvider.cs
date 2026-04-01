using Macad.Common;
using System;

public class UnitsSettingsProvider : IUnitsSettingsProvider
{
    readonly UnitsParameterSet _set;

    public UnitsSettingsProvider(UnitsParameterSet set)
    {
        _set = set;
    }

    public UnitId GetUnitId(PhysicalQuantity quantity)
    {
        return quantity switch
        {
            PhysicalQuantity.Length => _set.LengthUnit,
            PhysicalQuantity.Angle => _set.AngleUnit,
            PhysicalQuantity.Time => _set.TimeUnit,
            PhysicalQuantity.Dimensionless => UnitId.Percentage,
            _ => throw new ArgumentOutOfRangeException(nameof(quantity))
        };
    }

    public int GetPrecision(PhysicalQuantity quantity)
    {
        return quantity switch
        {
            PhysicalQuantity.Length => _set.LengthPrecision,
            PhysicalQuantity.Angle => _set.AnglePrecision,
            PhysicalQuantity.Time => _set.TimePrecision,
            PhysicalQuantity.Dimensionless => 1,
            _ => throw new ArgumentOutOfRangeException(nameof(quantity))
        };
    }

    public UnitsParameterSet GetUnitsParameterSet()
    {
        return _set;
    }
}
