using System;
using System.Globalization;

namespace Macad.Common;

public class PrecisionModelMetric : PrecisionModel
{
    public PrecisionModelMetric(int decimals) : base(decimals) { }

    int ClampedPrecision
        => Math.Clamp(Precision, 0, 15);

    public override double Round(double value)
        => Math.Round(value, ClampedPrecision, MidpointRounding.AwayFromZero);

    public override string Format(double value)
    {
        var rounded = Math.Round(value, ClampedPrecision, MidpointRounding.AwayFromZero);
        return rounded.ToString($"F{ClampedPrecision}", CultureInfo.InvariantCulture);
    }

    public override double Parse(string text)
        => double.Parse(text, CultureInfo.InvariantCulture);
}
