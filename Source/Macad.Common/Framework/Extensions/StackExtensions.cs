using System.Collections.Generic;

namespace Macad.Common;

public static class StackExtensions
{
    public static void PushMany<T>(this Stack<T> stack, IEnumerable<T> items)
    {
        foreach (var item in items)
        {
            stack.Push(item);
        }
    }
}

//--------------------------------------------------------------------------------------------------