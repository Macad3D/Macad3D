using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using NUnit.Framework;

namespace Macad.Test.Utils;

public static class MemoryAssert
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

    //--------------------------------------------------------------------------------------------------

    public static void IsCollected(Func<object> func)
    {
        WeakReference __callFunc()
        {
            WeakReference reference = new (func());
            Assume.That(reference.IsAlive, Is.True, $"Reference is null before GC");
            return reference;
        }

        WeakReference reference = __callFunc();

        GC.Collect();
        GC.WaitForPendingFinalizers();
        GC.Collect();

        Assert.That(reference.IsAlive, Is.False, "Reference is still alive");
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsCollected(Func<IEnumerable<object>> func)
    {
        bool failed = false;
        StringBuilder sb = new();

        WeakReference[] __callFunc()
        {
            WeakReference[] references = func().Select(obj => new WeakReference(obj)).ToArray();
            foreach (var reference in references)
            {
                if (!reference.IsAlive)
                {
                    sb.AppendLine($"{reference.Target.GetType().Name} is null before GC");
                    failed = true;
                }
            }

            if (failed)
            {
                Assert.Fail(sb.ToString());
            }

            return references;
        }

        WeakReference[] references = __callFunc();

        GC.Collect();
        GC.WaitForPendingFinalizers();
        GC.Collect();

        for (var index = 0; index < references.Length; index++)
        {
            var reference = references[index];
            if (reference.IsAlive)
            {
                sb.AppendLine($"Object {index} of type {reference.Target.GetType().Name} is still alive");
                failed = true;
            }
        }

        if (failed)
        {
            Assert.Fail(sb.ToString());
        }
    }

    //--------------------------------------------------------------------------------------------------
    /*
    public static void IsCollected(Func<(IEnumerable<object>, IEnumerable<object>)> func)
    {
        bool failed = false;
        StringBuilder sb = new();

        WeakReference[] __callFunc()
        {
            var (toTrack, toKeep) = func();
            WeakReference[] refToTrack = toTrack.Select(obj => new WeakReference(obj)).ToArray();
            WeakReference[] refToKeep = toKeep.Select(obj => new WeakReference(obj)).ToArray();
            foreach (var reference in refToTrack..Append(refToKeep))
            {
                if (!reference.IsAlive)
                {
                    sb.AppendLine($"{reference.Target.GetType().Name} is null before GC");
                    failed = true;
                }
            }

            if (failed)
            {
                Assert.Fail(sb.ToString());
            }

            return references;
        }

        WeakReference[] references = __callFunc();

        GC.Collect();
        GC.WaitForPendingFinalizers();
        GC.Collect();

        for (var index = 0; index < references.Length; index++)
        {
            var reference = references[index];
            if (reference.IsAlive)
            {
                sb.AppendLine($"Object {index} of type {reference.Target.GetType().Name} is still alive");
                failed = true;
            }
        }

        if (failed)
        {
            Assert.Fail(sb.ToString());
        }
    }*/
}