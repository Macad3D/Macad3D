using System;
using System.Collections.Generic;

namespace Macad.Common;

public static class ListExtensions
{
    public static void Swap<T>(this IList<T> list, int index1, int index2)
    {
        T tmp = list[index1];
        list[index1] = list[index2];
        list[index2] = tmp;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static int IndexOfFirst<T>(this IList<T> list, Func<T, bool> predicate)
    {
        if (list == null)
            throw new ArgumentNullException(nameof (list));
        if (predicate == null)
            throw new ArgumentNullException(nameof (predicate));

        for (int index=0; index < list.Count; ++index)
        {
            if (predicate(list[index]))
                return index;
        }

        return -1;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void Populate<T>(this IList<T> list, T value ) 
    {
        for (int i = 0; i < list.Count; ++i)
        {
            list[i] = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

}