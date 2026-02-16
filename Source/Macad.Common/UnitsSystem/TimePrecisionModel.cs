using System;
using System.Globalization;

namespace Macad.Common;

public class TimePrecisionModel : IPrecisionModel
{
    readonly TimePrecision _precision;

    public TimePrecision PrecisionEnum { get; }

    public TimePrecisionModel(TimePrecision precision)
    {
        _precision = precision;
        PrecisionEnum = precision;
    }

    //--------------------------------------------------------------------------------------------------

    public double Round(double value)
    {
        int decimals = GetDecimalPlaces();
        return Math.Round(value, decimals, MidpointRounding.AwayFromZero);
    }

    //--------------------------------------------------------------------------------------------------

    public string Format(double value)
    {
        int decimals = GetDecimalPlaces();
        double rounded = Math.Round(value, decimals, MidpointRounding.AwayFromZero);
        return rounded.ToString($"F{decimals}", CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    public double Parse(string text)
    {
        return double.Parse(text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    int GetDecimalPlaces()
    {
        return _precision.GetPrecisionValue();
    }
}
