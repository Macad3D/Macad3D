using System;
using System.Globalization;

namespace Macad.Common;

public static class DoubleExtensions
{
    public static double ToDeg(this double rad)
    {
        return rad*Maths.DegRadMultiplier;
    }

    public static double ToRad(this double deg)
    {
        return deg/Maths.DegRadMultiplier;
    }

    public static bool IsNull(this double value)
    {
        return Math.Abs(value) <= Double.Epsilon;
    }

    public static double Clamp(this double value, double min, double max)
    {
        return Math.Min(max, Math.Max(min, value));
    }

    public static double Round(this double value)
    {
        return Math.Round(value, Maths.Precision);
    }

    public static int ToRoundedInt(this double value)
    {
        return (int)Math.Round(value, MidpointRounding.AwayFromZero);
    }

    public static double Abs(this double value)
    {
        return Math.Abs(value);
    }

    public static double Sqr(this double value)
    {
        return value * value;
    }

    public static double Sqrt(this double value)
    {
        return Math.Sqrt(value);
    }

    public static string ToInvariantString(this double value, string format="G")
    {
        return value.ToString(format, CultureInfo.InvariantCulture);
    }

    public static string ToRoundedString(this double value)
    {
        return value.ToString(Maths.PrecisionFormatString, CultureInfo.InvariantCulture);
    }

    public static bool IsEqual(this double value, double other, double tolerance)
    {
        double val = value - other;
        if (val < 0) val = -val;
        return (val <= tolerance);
    }

    public static double Distance(this double value, double other)
    {
        double val = value - other;
        if (val < 0) val = -val;
        return val;
    }

    public static double Lerp(this double value, double other, double amount)
    {
        return value * (1.0 - amount) + other * amount;
    }

    public static void Swap(this ref double value, ref double other)
    {
        double temp = value;
        value = other;
        other = temp;
    }
}