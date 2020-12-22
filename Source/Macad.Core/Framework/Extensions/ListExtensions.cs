using System;
using System.Collections.Generic;
using Macad.Occt;

namespace Macad.Core
{
    public static class ListExtensions
    {
        public static bool ContainsSame<T>(this IList<T> list, TopoDS_Shape item) where T : TopoDS_Shape
        {
            int size = list.Count;
            if (item == null)
            {
                for (int i = 0; i < size; i++)
                    if (list[i] == null)
                        return true;
                return false;
            }
            else
            {
                for (int i = 0; i < size; i++)
                {
                    if (item.IsSame(list[i]))
                        return true;
                }
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public static bool ContainsPartner<T>(this IList<T> list, TopoDS_Shape item) where T : TopoDS_Shape
        {
            int size = list.Count;
            if (item == null)
            {
                for (int i = 0; i < size; i++)
                    if (list[i] == null)
                        return true;
                return false;
            }
            else
            {
                for (int i = 0; i < size; i++)
                {
                    if (item.IsPartner(list[i]))
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

        public static void Shuffle<T>(this IList<T> list)
        {
            Random rng = new Random();
            int n = list.Count;
            while (n > 1)
            {
                n--;
                int k = rng.Next(n + 1);
                T value = list[k];
                list[k] = list[n];
                list[n] = value;
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}