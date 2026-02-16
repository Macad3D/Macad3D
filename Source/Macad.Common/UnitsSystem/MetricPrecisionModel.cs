using Macad.Common;
using System;
using System.Globalization;

public class MetricPrecisionModel : IPrecisionModel
{
    readonly MetricLengthPrecision _precision;

    public MetricLengthPrecision PrecisionEnum { get; }

    //--------------------------------------------------------------------------------------------------

    public MetricPrecisionModel(MetricLengthPrecision precision)
    {
        _precision = precision;
        PrecisionEnum = precision;
    }

    //--------------------------------------------------------------------------------------------------

    public double Round(double mm)
    {
        int decimals = GetDecimalPlaces();
        return RoundWithPrecision(mm, decimals);
    }

    //--------------------------------------------------------------------------------------------------

    public string Format(double mm)
    {
        int decimals = GetDecimalPlaces();
        double rounded = RoundWithPrecision(mm, decimals);
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

    //--------------------------------------------------------------------------------------------------

    static double RoundWithPrecision(double value, int decimals)
    {
        double scale = Math.Pow(10, decimals);
        double scaled = value * scale;
        double roundedScaled = Math.Round(scaled, 0, MidpointRounding.AwayFromZero);

        return roundedScaled / scale;
    }
}
