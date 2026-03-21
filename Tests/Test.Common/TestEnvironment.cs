using Macad.Common;
using Macad.Presentation;

namespace Macad.Test.Unit.Common;

public static class TestEnvironment
{
    public static void EnsureUnits()
    {
        if (AppServices.Units != null)
            return;

        var set = new UnitsParameterSet
        {
            LengthUnit = UnitId.Millimeter,
            LengthPrecision = 2,
            AngleUnit = UnitId.Degree,
            AnglePrecision = 1,
            TimeUnit = UnitId.Second,
            TimePrecision = 2
        };

        AppServices.Units = new UnitsService(new UnitsSettingsProvider(set));
        AppServices.Units.RaiseMeasurementSettingsChanged();
    }
}
