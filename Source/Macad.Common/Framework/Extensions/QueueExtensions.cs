using System.Collections.Generic;

namespace Macad.Common;

public static class QueueExtensions
{
    public static void EnqueueMany<T>(this Queue<T> queue, IEnumerable<T> items)
    {
        foreach (var item in items)
        {
            queue.Enqueue(item);
        }
    }
}

//--------------------------------------------------------------------------------------------------