using System;
using System.Globalization;

namespace Macad.Common;

public class DimensionlessPrecisionModel : IPrecisionModel
{
    readonly DimensionlessPrecision _precision;
    public DimensionlessPrecision PrecisionEnum { get; }

    //--------------------------------------------------------------------------------------------------

    public DimensionlessPrecisionModel(DimensionlessPrecision precision)
    {
        _precision = precision;
        PrecisionEnum = precision;
    }

    //--------------------------------------------------------------------------------------------------

    public double Round(double percent)
    {
        int decimals = GetDecimalPlaces();
        return Math.Round(percent, decimals);
    }

    //--------------------------------------------------------------------------------------------------

    public string Format(double percent)
    {
        int decimals = GetDecimalPlaces();
        double rounded = Math.Round(percent, decimals);

        return rounded.ToString($"F{decimals}", CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    public double Parse(string text)
    {
        // Percent parsing is simple: just parse the number
        return double.Parse(text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    int GetDecimalPlaces()
    {
        return _precision.GetPrecisionValue();
    }
}
