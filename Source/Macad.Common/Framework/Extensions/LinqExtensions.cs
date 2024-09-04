using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Common;

public static class LinqExtensions
{
    public static bool ContainsAll<TSource>(this IEnumerable<TSource> source, IEnumerable<TSource> other)
    {
        if (source == null) throw new ArgumentNullException(nameof(source));
        if (other == null) throw new ArgumentNullException(nameof(other));

        var sources = source.ToList();

        using (var otherIterator = other.GetEnumerator())
        {
            while (otherIterator.MoveNext())
            {
                var candidate = otherIterator.Current;
                if (!sources.Contains(candidate))
                {
                    return false;
                }
            }
            return true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool ContainsAny<TSource>(this IEnumerable<TSource> source, IEnumerable<TSource> other)
    {
        if (source == null) throw new ArgumentNullException(nameof(source));
        if (other == null) throw new ArgumentNullException(nameof(other));

        var sources = source.ToList();

        using (var otherIterator = other.GetEnumerator())
        {
            while (otherIterator.MoveNext())
            {
                var candidate = otherIterator.Current;
                if (sources.Contains(candidate))
                {
                    return true;
                }
            }
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static Dictionary<int, TSource> ToIndexedDictionary<TSource>(this IEnumerable<TSource> source) 
    {
        if (source == null) throw new ArgumentNullException(nameof(source));

        var dict = new Dictionary<int, TSource>();
        int index = 0;
        foreach (TSource element in source)
        {
            dict.Add(index, element);
            index++;
        }
        return dict;
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<TSource> SymmetricExcept<TSource>(this IEnumerable<TSource> source, IEnumerable<TSource> other)
    {
        HashSet<TSource> hashSet = new HashSet<TSource>(source);
        hashSet.SymmetricExceptWith(other);
        return hashSet.Select(x => x);
    }

    //--------------------------------------------------------------------------------------------------

    public static void ForEach<TSource>(this IEnumerable<TSource> source, Action<TSource> action) 
    {
        if (source == null) throw new ArgumentNullException(nameof(source));
        if (action == null) throw new ArgumentNullException(nameof(action));

        foreach (var item in source)
        {
            action(item);
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<TSource> WhereNotNull<TSource>(this IEnumerable<TSource> source)
    {    
        foreach (var item in source)
        {
            if( item == null )
                continue;

            yield return item;
        }
    }

    //--------------------------------------------------------------------------------------------------

}