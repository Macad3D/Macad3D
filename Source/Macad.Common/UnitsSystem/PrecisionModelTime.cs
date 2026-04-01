using System;
using System.Globalization;

namespace Macad.Common;

public class PrecisionModelTime : PrecisionModel
{
    public PrecisionModelTime(int decimals) : base(decimals) { }

    int ClampedPrecision
        => Math.Clamp(Precision, 0, 15);

    public override double Round(double value) => Math.Round(value, ClampedPrecision);

    public override string Format(double value) => Math.Round(value, ClampedPrecision).ToString($"F{ClampedPrecision}", CultureInfo.InvariantCulture);

    public override double Parse(string text) => double.Parse(text, CultureInfo.InvariantCulture);
}
