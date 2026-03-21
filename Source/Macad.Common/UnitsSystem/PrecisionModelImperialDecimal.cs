using System;

namespace Macad.Common;

public class PrecisionModelImperialDecimal : PrecisionModel
{
    public PrecisionModelImperialDecimal(int decimals) : base(decimals) { }

    int ClampedPrecision
        => Math.Clamp(Precision, 0, 15);

    public override double Round(double value) => Math.Round(value, ClampedPrecision);

    public override string Format(double value) => ImperialLengthFormatter.FormatDecimalInches(value, ClampedPrecision);

    public override double Parse(string text) => ImperialLengthFormatter.ParseDecimalInches(text);
}
