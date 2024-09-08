using System;
using System.Diagnostics;
using NUnit.Framework;

namespace Macad.Test.Memory;

public static class AssertHelper
{
    public static void IsFreeingMemory(Action action, int warmUpCount, int testCount)
    {
        for (int i = 0; i < warmUpCount; i++)
        {
            action();
        }
        GC.Collect();
        GC.WaitForPendingFinalizers();
        GC.Collect();
        var memBefore = Process.GetCurrentProcess().PeakWorkingSet64;

        for (int i = 0; i < testCount; i++)
        {
            action();
        }
        GC.Collect();
        GC.WaitForPendingFinalizers();
        GC.Collect();
        var memAfter = Process.GetCurrentProcess().PeakWorkingSet64;

        TestContext.WriteLine($"MemBefore: {memBefore}");
        TestContext.WriteLine($"MemAfter:  {memAfter}");
        Assert.IsTrue( memAfter <= memBefore );
    }
}