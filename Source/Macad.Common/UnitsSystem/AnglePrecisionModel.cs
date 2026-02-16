using System;
using System.Globalization;

namespace Macad.Common;

public class AnglePrecisionModel : IPrecisionModel
{
    readonly AnglePrecision _precision;

    public AnglePrecision PrecisionEnum { get; }

    //--------------------------------------------------------------------------------------------------

    public AnglePrecisionModel(AnglePrecision precision)
    {
        _precision = precision;
        PrecisionEnum = precision;
    }

    //--------------------------------------------------------------------------------------------------

    public double Round(double degrees)
    {
        int decimals = GetDecimalPlaces();
        return Math.Round(degrees, decimals);
    }

    //--------------------------------------------------------------------------------------------------

    public string Format(double degrees)
    {
        int decimals = GetDecimalPlaces();
        double rounded = Math.Round(degrees, decimals);

        return rounded.ToString($"F{decimals}", CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    public double Parse(string text)
    {
        // Angle parsing is simple: just parse the number
        return double.Parse(text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    int GetDecimalPlaces()
    {
        return _precision.GetPrecisionValue();
    }
}
