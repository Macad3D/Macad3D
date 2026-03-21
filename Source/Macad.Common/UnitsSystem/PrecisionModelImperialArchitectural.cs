using System;

namespace Macad.Common;

public class PrecisionModelImperialArchitectural : PrecisionModel
{
    public PrecisionModelImperialArchitectural(int denominator) : base(denominator) { }

    int ClampedDenominator
    {
        get
        {
            int p = Precision;
            if (p < 1) return 1;
            if (p > 256) return 256;

            // Snap to nearest power of two
            int pow = 1;
            while (pow < p) pow <<= 1;
            return pow;
        }
    }

    public override double Round(double value)
    {
        int denom = ClampedDenominator;
        double scaled = value * denom;
        return Math.Round(scaled) / denom;
    }

    public override string Format(double value) => ImperialLengthFormatter.FormatArchitectural(value, ClampedDenominator);

    public override double Parse(string text) => ImperialLengthFormatter.ParseArchitectural(text);
}

