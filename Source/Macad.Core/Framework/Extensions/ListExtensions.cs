using System.Collections.Generic;
using Macad.Occt;

namespace Macad.Core;

public static class ListExtensions
{
    public static bool ContainsSame<T>(this IEnumerable<T> list, TopoDS_Shape shape) where T : TopoDS_Shape
    {
        if (shape == null)
        {
            foreach (var item in list)
            {
                if (item == null)
                    return true;
            }
            return false;
        }
        else
        {
            foreach (var item in list)
            {
                if (shape.IsSame(item))
                    return true;
            }
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool ContainsPartner<T>(this IEnumerable<T> list, TopoDS_Shape shape) where T : TopoDS_Shape
    {
        if (shape == null)
        {
            foreach (var item in list)
            {
                if (item == null)
                    return true;
            }
            return false;
        }
        else
        {
            foreach (var item in list)
            {
                if (shape.IsPartner(item))
                    return true;
            }
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static int IndexOfSame<T>(this IList<T> list, TopoDS_Shape item) where T : TopoDS_Shape
    {
        int size = list.Count;
        if (item == null)
        {
            for (int i = 0; i < size; i++)
                if (list[i] == null)
                    return i;
            return -1;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                if (item.IsSame(list[i]))
                    return i;
            }
            return -1;
        }
    }

    //--------------------------------------------------------------------------------------------------

}