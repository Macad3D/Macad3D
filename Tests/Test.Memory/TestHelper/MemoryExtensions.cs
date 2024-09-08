using System;

namespace Macad.Test.Memory;

public static class MemoryExtensions
{
    public static int ObjectsCount<T>(this JetBrains.dotMemoryUnit.Memory memory)
    {
        return memory.GetObjects(where => where.Type.Is<T>()).ObjectsCount;
    }

    //--------------------------------------------------------------------------------------------------

    public static int ObjectsCount<T1,T2>(this JetBrains.dotMemoryUnit.Memory memory)
    {
        return memory.GetObjects(where => where.Type.Is(typeof(T1), typeof(T2))).ObjectsCount;
    }

    //--------------------------------------------------------------------------------------------------

    public static int ObjectsCount<T1,T2,T3>(this JetBrains.dotMemoryUnit.Memory memory)
    {
        return memory.GetObjects(where => where.Type.Is(typeof(T1), typeof(T2), typeof(T3))).ObjectsCount;
    }

    //--------------------------------------------------------------------------------------------------

    public static int ObjectsCount<T1,T2,T3,T4>(this JetBrains.dotMemoryUnit.Memory memory)
    {
        return memory.GetObjects(where => where.Type.Is(typeof(T1), typeof(T2), typeof(T3), typeof(T4))).ObjectsCount;
    }

    //--------------------------------------------------------------------------------------------------

    public static int ObjectsCount(this JetBrains.dotMemoryUnit.Memory memory, params Type[] typeList)
    {
        return memory.GetObjects(where => where.Type.Is(typeList)).ObjectsCount;
    }

    //--------------------------------------------------------------------------------------------------

}