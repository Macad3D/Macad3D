using System;
using System.Collections.Generic;
using System.Text;

using Macad.Common.Serialization;

namespace Macad.Common;

[ParameterSet]
public sealed partial class UnitsParameterSet : ParameterSet
{
    // Length -------------------------------------------------------------

    readonly Parameter<UnitId> _LengthUnit = new()
    {
        Name = "LengthUnit",
        DefaultValue = UnitId.Millimeter,
        Description = "Preferred unit for length."
    };

    readonly Parameter<int> _LengthPrecision = new()
    {
        Name = "LengthPrecision",
        DefaultValue = 2,
        Description = "Precision denominator for length values."
    };

    // Angle --------------------------------------------------------------

    readonly Parameter<UnitId> _AngleUnit = new()
    {
        Name = "AngleUnit",
        DefaultValue = UnitId.Degree,
        Description = "Preferred unit for angles."
    };

    readonly Parameter<int> _AnglePrecision = new()
    {
        Name = "AnglePrecision",
        DefaultValue = 1,
        Description = "Precision denominator for angle values."
    };

    // Time ---------------------------------------------------------------

    readonly Parameter<UnitId> _TimeUnit = new()
    {
        Name = "TimeUnit",
        DefaultValue = UnitId.Second,
        Description = "Preferred unit for time."
    };

    readonly Parameter<int> _TimePrecision = new()
    {
        Name = "TimePrecision",
        DefaultValue = 3,
        Description = "Precision denominator for time values."
    };

    public UnitId LengthUnit { get => _LengthUnit.Value; set => _LengthUnit.Value = value; }
    public int LengthPrecision { get => _LengthPrecision.Value; set => _LengthPrecision.Value = value; }
    public UnitId AngleUnit { get => _AngleUnit.Value; set => _AngleUnit.Value = value; }
    public int AnglePrecision { get => _AnglePrecision.Value; set => _AnglePrecision.Value = value; }
    public UnitId TimeUnit { get => _TimeUnit.Value; set => _TimeUnit.Value = value; }
    public int TimePrecision { get => _TimePrecision.Value; set => _TimePrecision.Value = value; }
}

