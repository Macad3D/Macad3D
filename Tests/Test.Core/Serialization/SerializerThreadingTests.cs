using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Core.Serialization;

[TestFixture]
public class SerializerThreadingTests
{
    static readonly Type[] _ProbeTypes =
    {
        typeof(ThreadingProbeA), typeof(ThreadingProbeB), typeof(ThreadingProbeC), typeof(ThreadingProbeD),
        typeof(List<ThreadingProbeA>), typeof(List<ThreadingProbeB>), typeof(List<ThreadingProbeC>), typeof(List<ThreadingProbeD>),
        typeof(ThreadingProbeA[]), typeof(ThreadingProbeB[]), typeof(ThreadingProbeC[]), typeof(ThreadingProbeD[]),
        typeof(Dictionary<string, ThreadingProbeA>), typeof(Dictionary<string, ThreadingProbeB>),
        typeof(Dictionary<string, ThreadingProbeC>), typeof(Dictionary<string, ThreadingProbeD>),
    };

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConcurrentSerializerCreation()
    {
        const int threadCount = 8;
        var barrier = new Barrier(threadCount);
        var exceptions = new List<Exception>();
        var results = new ISerializer[threadCount][];

        var threads = Enumerable.Range(0, threadCount).Select(threadIndex => new Thread(() =>
        {
            try
            {
                results[threadIndex] = new ISerializer[_ProbeTypes.Length];
                barrier.SignalAndWait();

                // Each thread walks the types in a different order to maximize overlapping creation
                for (int i = 0; i < _ProbeTypes.Length; i++)
                {
                    int typeIndex = (i + threadIndex) % _ProbeTypes.Length;
                    results[threadIndex][typeIndex] = Serializer.GetSerializer(_ProbeTypes[typeIndex]);
                }
            }
            catch (Exception e)
            {
                lock (exceptions)
                {
                    exceptions.Add(e);
                }
            }
        })).ToList();

        threads.ForEach(thread => thread.Start());
        threads.ForEach(thread => Assert.That(thread.Join(TimeSpan.FromSeconds(30)), "Thread did not finish."));

        Assert.IsEmpty(exceptions, string.Join(Environment.NewLine, exceptions));

        // All threads must have got the same, registered serializer
        for (int typeIndex = 0; typeIndex < _ProbeTypes.Length; typeIndex++)
        {
            var expected = Serializer.GetSerializer(_ProbeTypes[typeIndex]);
            Assert.IsNotNull(expected);
            for (int threadIndex = 0; threadIndex < threadCount; threadIndex++)
            {
                Assert.AreSame(expected, results[threadIndex][typeIndex], $"Different serializer for {_ProbeTypes[typeIndex]}");
            }
        }

        // And they work
        var probe = new ThreadingProbeA { Value = 1, B = new ThreadingProbeB { Text = "b", C = new ThreadingProbeC { D = new ThreadingProbeD { Value = 4 } } } };
        var data = Serializer.Serialize(probe);
        var read = Serializer.Deserialize<ThreadingProbeA>(data);
        Assert.AreEqual(4, read.B.C.D.Value);
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[SerializeType]
public class ThreadingProbeA
{
    [SerializeMember] public int Value { get; set; }
    [SerializeMember] public ThreadingProbeB B { get; set; }
}

[SerializeType]
public class ThreadingProbeB
{
    [SerializeMember] public string Text { get; set; }
    [SerializeMember] public ThreadingProbeC C { get; set; }
}

[SerializeType]
public class ThreadingProbeC
{
    [SerializeMember] public List<ThreadingProbeD> List { get; set; }
    [SerializeMember] public ThreadingProbeD D { get; set; }
}

[SerializeType]
public class ThreadingProbeD
{
    [SerializeMember] public int Value { get; set; }
}
