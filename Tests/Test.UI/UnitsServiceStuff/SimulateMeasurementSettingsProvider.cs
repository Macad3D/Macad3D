using Macad.Common;

namespace Macad.Test.UI.Framework;

public class SimulateMeasurementSettingsProvider : IUnitsSettingsProvider
{
    readonly UnitsParameterSet _Set;

    //--------------------------------------------------------------------------------------------------

    public SimulateMeasurementSettingsProvider()
    {
        // These values match the defaults used in your UI tests
        _Set = new UnitsParameterSet
        {
            LengthUnit = UnitId.Millimeter,
            LengthPrecision = 2,

            AngleUnit = UnitId.Degree,
            AnglePrecision = 0,

            TimeUnit = UnitId.Second,
            TimePrecision = 2
        };
    }

    //--------------------------------------------------------------------------------------------------
    // Required by IUnitsSettingsProvider
    //--------------------------------------------------------------------------------------------------

    public UnitsParameterSet GetUnitsParameterSet()
    {
        return _Set;
    }

    public UnitId GetUnitId(PhysicalQuantity quantity)
    {
        return quantity switch
        {
            PhysicalQuantity.Length => _Set.LengthUnit,
            PhysicalQuantity.Angle => _Set.AngleUnit,
            PhysicalQuantity.Time => _Set.TimeUnit,
            PhysicalQuantity.Dimensionless => UnitId.Number,
            _ => UnitId.Number
        };
    }

    public int GetPrecision(PhysicalQuantity quantity)
    {
        return quantity switch
        {
            PhysicalQuantity.Length => _Set.LengthPrecision,
            PhysicalQuantity.Angle => _Set.AnglePrecision,
            PhysicalQuantity.Time => _Set.TimePrecision,
            PhysicalQuantity.Dimensionless => 1,
            _ => 2
        };
    }

    //--------------------------------------------------------------------------------------------------
}
