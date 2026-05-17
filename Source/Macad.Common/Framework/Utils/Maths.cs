using System;
using System.Diagnostics;
using System.Numerics;

namespace Macad.Common;

public static class Maths
{
    public static int Precision
    {
        get { return _Precision; }
        set
        {
            _Precision = value;
            _PrecisionFormatString = "F" + _Precision.ToString();
        }
    }

    public static string PrecisionFormatString
    {
        get { return _PrecisionFormatString; }
    }

    static int _Precision = 3;
    static string _PrecisionFormatString = "F3";

    //--------------------------------------------------------------------------------------------------

    public const double DoublePI = Math.PI * 2;
    public const double HalfPI = Math.PI / 2;
    public const double PI = Math.PI;
    public const double DegRadMultiplier = 180.0/Math.PI;

    //--------------------------------------------------------------------------------------------------

    public static double NormalizeAngleDegree(double value)
    {
        if (value >= 360.0)
        {
            return value % 360.0;
        }
        if (value < 0.0)
        {
            value = (value % 360.0);
            if (value < 0.0)
                value += 360.0;
            return value;
        }
        return value;
    }
                
    //--------------------------------------------------------------------------------------------------
        
    public static double NormalizeAngleDegree(double value, double min, double max)
    {
        Debug.Assert(max-min >= 360.0);

        while (value >= max)
        {
            value -= 360.0;
        }
        while (value < min)
        {
            value += 360.0;
        }
        return value;
    }

    //--------------------------------------------------------------------------------------------------
        
    public static double NormalizeAngleRad(double value)
    {
        if (value >= DoublePI)
        {
            return value % DoublePI;
        }
        if (value < 0.0)
        {
            value = (value % DoublePI);
            if (value < 0.0)
                value += DoublePI;
            return value;
        }
        return value;
    }
        
    //--------------------------------------------------------------------------------------------------
        
    public static double NormalizeAngleRad(double value, double min, double max)
    {
        Debug.Assert(max-min >= DoublePI);

        while (value >= max)
        {
            value -= DoublePI;
        }
        while (value < min)
        {
            value += DoublePI;
        }
        return value;
    }

    //--------------------------------------------------------------------------------------------------

    public static double RoundToNearest(double value, double divider)
    {
        return Math.Round(value / divider) * divider;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the maximum value from a set of numeric values.
    /// </summary>
    /// <remarks>This method uses the greater-than operator to compare values. The generic constraint ensures
    /// that only numeric types supporting standard comparison operations can be used.</remarks>
    /// <param name="values">An array of values to evaluate. At least one value must be provided; the array cannot be null or empty.</param>
    /// <returns>The maximum value found in the provided array.</returns>
    public static T Max<T>(params T[] values) where T : INumber<T>
    {
        if (values == null || values.Length == 0)
            throw new ArgumentException("At least one value must be provided.", nameof(values));

        T max = values[0];
        for (int i = 1; i < values.Length; i++)
        {
            if (values[i] > max)
                max = values[i];
        }
        return max;
    }
}