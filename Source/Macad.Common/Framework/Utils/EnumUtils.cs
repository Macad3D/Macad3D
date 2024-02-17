using System;

namespace Macad.Common;

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