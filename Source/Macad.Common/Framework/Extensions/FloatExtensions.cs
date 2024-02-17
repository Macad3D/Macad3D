using System;
using System.Globalization;

namespace Macad.Common;

public static class FloatExtensions
{
    public static bool IsNull(this float value)
    {
        return Math.Abs(value) <= float.Epsilon;
    }

    public static float Clamp(this float value, float min, float max)
    {
        return Math.Min(max, Math.Max(min, value));
    }

    public static float Abs(this float value)
    {
        return Math.Abs(value);
    }

    public static string ToInvariantString(this float value, string format="G")
    {
        return value.ToString(format, CultureInfo.InvariantCulture);
    }

    public static string ToRoundedString(this float value)
    {
        return value.ToString(Maths.PrecisionFormatString, CultureInfo.InvariantCulture);
    }

    public static bool IsEqual(this float value, float other, float tolerance)
    {
        float val = value - other;
        if (val < 0) val = -val;
        return (val <= tolerance);
    }

    public static float Distance(this float value, float other)
    {
        if (other > value)
            return value - other;
        return other - value;
    }
        
    public static float Lerp(this float value, float other, float amount)
    {
        return value * (1.0f - amount) + other * amount;
    }
}