using System;
using System.ComponentModel;

namespace Macad.Common;

public enum ApplicationUnits
{
    [Description("mm")] Millimeters,
    [Description("in")] Inches,
    [Description("in")] Inches16ths,
    [Description("in")] Inches32nds,
    [Description("ft")] Architectural
}

public class EnumUtils
{
    public static int MaxOrdinal<T>() where T: Enum
    {
        int max = 0;
        foreach (var value in Enum.GetValues(typeof(T)))
        {
            max = Math.Max(max, (int) value);
        }

        return max;
    }

    //--------------------------------------------------------------------------------------------------
}