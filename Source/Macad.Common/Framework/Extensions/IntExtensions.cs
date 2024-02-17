using System;

namespace Macad.Common;

public static class IntExtensions
{
    public static int Clamp(this int value, int min, int max)
    {
        return Math.Min(max, Math.Max(min, value));
    }
        
    public static void Swap(this ref int value, ref int other)
    {
        int temp = value;
        value = other;
        other = temp;
    }
        
    public static int Distance(this int value, int other)
    {
        if (other < value)
            return value - other;
        return other - value;
    }
}